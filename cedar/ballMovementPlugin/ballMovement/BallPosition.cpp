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

 File:        BallPosition.cpp

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
#include "BallPosition.h"
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

//----------------------------------------------------------------------------------------------------------------------
// constructors and destructor
//----------------------------------------------------------------------------------------------------------------------
BallPosition::BallPosition()
    :
      mOutput(new cedar::aux::MatData(cv::Mat::zeros(3, 1, CV_32F))),
      _mG(new cedar::aux::DoubleParameter(this, "g", 1.0)),
      _mInitialPosition(new cedar::aux::DoubleVectorParameter(this, "init pos", 3, 0))
{
  //	std::cout<<"Construct"<<std::endl;
  this->declareOutput("position", mOutput);
  this->declareInput("change");

  this->mCurrentPosition = cv::Mat::zeros(3, 1, CV_32F);
  this->mCurrentPosition.at<float>(0,0) = _mInitialPosition->getValue().at(0);
  this->mCurrentPosition.at<float>(1,0) = _mInitialPosition->getValue().at(1);
  this->mCurrentPosition.at<float>(2,0) = _mInitialPosition->getValue().at(2);
  
}
//----------------------------------------------------------------------------------------------------------------------
// methods
//----------------------------------------------------------------------------------------------------------------------

void BallPosition::eulerStep(const cedar::unit::Time& time)
{

  float deltaTime = time / cedar::unit::Time(1 * cedar::unit::milli * cedar::unit::seconds);

  if(mInput)
  {
    //******************************************************************************************************//
    //You can do all your calculations here and they will be executed with each step of the cedar simulation!
    float xPos = this->mCurrentPosition.at<float>(0,0);
    float xChange = mInput->getData().at<float>(0,0);
    // new X Value
    this->mCurrentPosition.at<float>(0,0) = xPos + deltaTime*xChange;

    float yPos = this->mCurrentPosition.at<float>(1,0);
    float yChange = mInput->getData().at<float>(1,0);
    // new Y Value
    this->mCurrentPosition.at<float>(1,0) = yPos + deltaTime*yChange;


    float zPos = this->mCurrentPosition.at<float>(2,0);
    float zChange = mInput->getData().at<float>(2,0);
    // new Z Value
    this->mCurrentPosition.at<float>(2,0) = zPos + deltaTime*zChange + 0.5*this->_mG->getValue()*(deltaTime*deltaTime);

    // Set the new Values as new Output
    this->mOutput->setData(mCurrentPosition);
  }
}

void BallPosition::reset()
{
  this->mCurrentPosition = cv::Mat::zeros(3, 1, CV_32F);
  this->mCurrentPosition.at<float>(0,0) = _mInitialPosition->getValue().at(0);
  this->mCurrentPosition.at<float>(1,0) = _mInitialPosition->getValue().at(1);
  this->mCurrentPosition.at<float>(2,0) = _mInitialPosition->getValue().at(2);
}

void BallPosition::inputConnectionChanged(const std::string& inputName)
{
  this->mInput = boost::dynamic_pointer_cast<const cedar::aux::MatData>(this->getInput(inputName));
}

cedar::proc::DataSlot::VALIDITY BallPosition::determineInputValidity(
    cedar::proc::ConstDataSlotPtr slot,
    cedar::aux::ConstDataPtr data) const
{

  cedar::aux::ConstMatDataPtr _input = boost::dynamic_pointer_cast < cedar::aux::ConstMatData > (data);
 
   if (_input->getDimensionality() == 1)
    {
      auto mydata = _input->getData();
      auto rows = mydata.rows;
      auto cols = mydata.cols;
      if (rows==3 && cols == 1)
      {
        return cedar::proc::DataSlot::VALIDITY_VALID;
      }
    }
  
  return cedar::proc::DataSlot::VALIDITY_ERROR;
}


