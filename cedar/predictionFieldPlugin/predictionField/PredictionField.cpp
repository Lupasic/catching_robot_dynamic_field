/*======================================================================================================================

 Copyright 2011, 2012, 2013, 2014 Institut fuer Neuroinformatik, Ruhr-Universitaet Bochum, Germany

 This file is part of cedar.

 cedar is free software: you can redistribute it and/or modify it under
 the terms of the GNU Lesser General Public License as published by the
 Free Software Foundation, either version 3 of the License, or (at your
 option) any later version.

 cedar is distributed in the hope that it will be useful, but WITHOUT ANY
 WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 License for more details.

 You should have received a copy of the GNU Lesser General Public License
 along with cedar. If not, see <http://www.gnu.org/licenses/>.

 ========================================================================================================================

 Institute:   Ruhr-Universitaet Bochum
 Institut fuer Neuroinformatik

 File:        PredictionField.cpp

 Maintainer:  Oliver Lomp,
 Mathis Richter,
 Stephan Zibner
 Email:       oliver.lomp@ini.ruhr-uni-bochum.de,
 mathis.richter@ini.ruhr-uni-bochum.de,
 stephan.zibner@ini.ruhr-uni-bochum.de
 Date:        2011 07 19

 Description:

 Credits:

 ======================================================================================================================*/

// CEDAR INCLUDES
#include "PredictionField.h"
#include "cedar/processing/Arguments.h"
#include "cedar/processing/ElementDeclaration.h"
#include "cedar/processing/DeclarationRegistry.h"
#include "cedar/auxiliaries/math/functions.h"
#include "cedar/auxiliaries/assert.h"
#include "cedar/auxiliaries/math/tools.h"
#include "cedar/auxiliaries/MatData.h"
#include "cedar/auxiliaries/exceptions.h"
#include "cedar/units/Time.h"
#include "cedar/units/prefixes.h"

// SYSTEM INCLUDES
#include <iostream>
#include <vector>
#include <cmath>

//----------------------------------------------------------------------------------------------------------------------
// constructors and destructor
//----------------------------------------------------------------------------------------------------------------------
PredictionField::PredictionField()
    :
      mOutput(new cedar::aux::MatData(cv::Mat::zeros(50, 50, CV_32F))),
      mOutputPos(new cedar::aux::MatData(cv::Mat::zeros(3, 1, CV_32F))),
      // _mInitialState(new cedar::aux::DoubleVectorParameter(this, "state vector", 6, 0))
      _mPlaneZ(new cedar::aux::DoubleParameter(this, "planeZ", 1.0))
{
  //	std::cout<<"Construct"<<std::endl;
  this->declareOutput("prediction", mOutput);
  this->declareOutput("min pos", mOutputPos);
  this->declareInput("state");

  // this->stateVector = cv::Mat::zeros(6, 1, CV_32F);
  // this->stateVector.at<float>(0,0) = _mInitialState->getValue().at(0);
  // this->stateVector.at<float>(1,0) = _mInitialState->getValue().at(1);
  // this->stateVector.at<float>(2,0) = _mInitialState->getValue().at(2);
  // this->stateVector.at<float>(3,0) = _mInitialState->getValue().at(3);
  // this->stateVector.at<float>(4,0) = _mInitialState->getValue().at(4);
  // this->stateVector.at<float>(5,0) = _mInitialState->getValue().at(5);
}
//----------------------------------------------------------------------------------------------------------------------
// methods
//----------------------------------------------------------------------------------------------------------------------

void PredictionField::eulerStep(const cedar::unit::Time& time)
{

  // float deltaTime = time / cedar::unit::Time(1 * cedar::unit::milli * cedar::unit::seconds);

  if(mInput)
  {
    cv::Mat plane = cv::Mat::zeros(50, 50, CV_32FC3);
    cv::Mat res_y = cv::Mat::zeros(50, 50, CV_32F);
    cv::Mat res_z = cv::Mat::zeros(50, 50, CV_32F);
    cv::Mat res = cv::Mat::zeros(50, 50, CV_32F);

    for (int i = 0; i < 50; ++i)
    {
      for (int j = 0; j < 50; ++j)
      {
        plane.at<cv::Vec3f>(i, j)[0] = i * 0.016; 
        plane.at<cv::Vec3f>(i, j)[1] = j * 0.016;
        plane.at<cv::Vec3f>(i, j)[2] = this->_mPlaneZ->getValue();  
      }
    }

  float min = 100000000.0;
  float min_x = 0;
  float min_y = 0;
  float t = 0;
  float g = -9.81;
  for (int i = 0; i < 50; ++i)
  {
    for (int j = 0; j < 50; ++j)
    {
      t = (plane.at<cv::Vec3f>(i, j)[0] - mInput->getData().at<float>(0,0)) / mInput->getData().at<float>(1,0);
      res_y.at<float>(i, j) =  pow(plane.at<cv::Vec3f>(i, j)[1] - mInput->getData().at<float>(2,0) - mInput->getData().at<float>(3,0) * t, 2);
      res_z.at<float>(i, j) = pow(plane.at<cv::Vec3f>(i, j)[2] - mInput->getData().at<float>(4,0) - mInput->getData().at<float>(5,0)*t - 0.5 * g * pow(t, 2), 2);
      res.at<float>(i, j) = res_y.at<float>(i,j) + res_z.at<float>(i, j);
      
      if(res.at<float>(i, j) < min)
      {
        min_x = i;
        min_y = j;
        min = res.at<float>(i, j);
      }
      // std::cout << res_y[i][j] << " ";
    }
    // std::cout << "\n";
  }
  cv::Mat resPos = cv::Mat::zeros(3, 1, CV_32F);
  resPos.at<float>(0, 0) = min_x;
  resPos.at<float>(1, 0) = min_y;
  resPos.at<float>(2, 0) = min;
  this->mOutput->setData(res);
  this->mOutputPos->setData(resPos);
  }
}

void PredictionField::reset()
{
  // this->stateVector = cv::Mat::zeros(6, 1, CV_32F);
  // this->stateVector.at<float>(0,0) = _mInitialState->getValue().at(0);
  // this->stateVector.at<float>(1,0) = _mInitialState->getValue().at(1);
  // this->stateVector.at<float>(2,0) = _mInitialState->getValue().at(2);
  // this->stateVector.at<float>(3,0) = _mInitialState->getValue().at(3);
  // this->stateVector.at<float>(4,0) = _mInitialState->getValue().at(4);
  // this->stateVector.at<float>(5,0) = _mInitialState->getValue().at(5);
}

void PredictionField::inputConnectionChanged(const std::string& inputName)
{
  this->mInput = boost::dynamic_pointer_cast<const cedar::aux::MatData>(this->getInput(inputName));
}

cedar::proc::DataSlot::VALIDITY PredictionField::determineInputValidity(
    cedar::proc::ConstDataSlotPtr slot,
    cedar::aux::ConstDataPtr data) const
{

  cedar::aux::ConstMatDataPtr _input = boost::dynamic_pointer_cast < cedar::aux::ConstMatData > (data);
 
   if (_input->getDimensionality() == 1)
    {
      auto mydata = _input->getData();
      auto rows = mydata.rows;
      auto cols = mydata.cols;
      if (rows==6 && cols == 1)
      {
        return cedar::proc::DataSlot::VALIDITY_VALID;
      }
    }
  
  return cedar::proc::DataSlot::VALIDITY_ERROR;
}


