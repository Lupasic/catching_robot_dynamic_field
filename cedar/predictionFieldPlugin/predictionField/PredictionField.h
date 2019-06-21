/*
 * PredictionField.h
 *
 *  Created on: Jun 20, 2019
 *      Author: Daniil Burakov
 */

#ifndef PREDICTIONFIELD_H
#define PREDICTIONFIELD_H

// CEDAR INCLUDES
#include "cedar/dynamics/Dynamics.h"
#include "cedar/auxiliaries/DoubleParameter.h"
#include "cedar/auxiliaries/UIntParameter.h"
#include "cedar/auxiliaries/DoubleVectorParameter.h"
#include "cedar/auxiliaries/UIntVectorParameter.h"


// FORWARD DECLARATIONS
#include "cedar/auxiliaries/MatData.fwd.h"

// SYSTEM INCLUDES


/*!@brief Generates a matrix with a Gaussian.
 *
 *        The output matrix will contain values of a Gauss function, sampled based on the indices of the matrix taken as
 *        x,y,... coordinates.
 */
class PredictionField : public cedar::dyn::Dynamics
{
	//--------------------------------------------------------------------------------------------------------------------
	// macros
	//--------------------------------------------------------------------------------------------------------------------
	Q_OBJECT
	//--------------------------------------------------------------------------------------------------------------------
	// constructors and destructor
	//--------------------------------------------------------------------------------------------------------------------
public:
	//!@brief The standard constructor.
	PredictionField();

	//!@brief Destructor

	//--------------------------------------------------------------------------------------------------------------------
	// public methods
	//--------------------------------------------------------------------------------------------------------------------
public:
	
	//--------------------------------------------------------------------------------------------------------------------
	// protected methods
	//--------------------------------------------------------------------------------------------------------------------
	protected:
    cedar::proc::DataSlot::VALIDITY determineInputValidity(cedar::proc::ConstDataSlotPtr /* slot */, cedar::aux::ConstDataPtr data) const;
    void inputConnectionChanged(const std::string& inputName);
	//--------------------------------------------------------------------------------------------------------------------
	// private methods
	//--------------------------------------------------------------------------------------------------------------------
	private:
    void eulerStep(const cedar::unit::Time& time);
	void reset();

//	int* getSizeArray();

	//--------------------------------------------------------------------------------------------------------------------
	// members
	//--------------------------------------------------------------------------------------------------------------------
	protected:
	//!@brief the buffer containing the output
	cedar::aux::MatDataPtr mOutput;
	cedar::aux::MatDataPtr mOutputPos;
    cedar::aux::ConstMatDataPtr mInput;
    cv::Mat stateVector;
    cv::Mat planeZ;
	private:

	//--------------------------------------------------------------------------------------------------------------------
	// parameters
	//--------------------------------------------------------------------------------------------------------------------
	protected:
	cedar::aux::DoubleVectorParameterPtr _mInitialState;
	cedar::aux::DoubleParameterPtr _mPlaneZ;
	
	private:
};

#endif /* PREDICTIONFIELD_H */
