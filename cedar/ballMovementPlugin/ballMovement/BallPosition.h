/*
 * BallPosition.h
 *
 *  Created on: Apr 22, 2014
 *      Author: tekuejpp
 */

#ifndef BALLPOSITION_H
#define BALLPOSITION_H

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
class BallPosition : public cedar::dyn::Dynamics
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
	BallPosition();

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
    cedar::aux::ConstMatDataPtr mInput;
    cv::Mat mCurrentPosition;
	private:

	//--------------------------------------------------------------------------------------------------------------------
	// parameters
	//--------------------------------------------------------------------------------------------------------------------
	protected:

	cedar::aux::DoubleParameterPtr _mG;
	
	cedar::aux::DoubleVectorParameterPtr _mInitialPosition;
	
	private:
};

#endif /* BALLPOSITION_H */
