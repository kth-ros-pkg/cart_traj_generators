/*
 *  CartTrajGenerator.h
 *
 *
 *  Created on: Feb 5, 2014
 *  Authors:   Francisco Viña
 *            fevb <at> kth.se
 */

/* Copyright (c) 2014, Francisco Viña, CVAP, KTH
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
      * Neither the name of KTH nor the
        names of its contributors may be used to endorse or promote products
        derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL KTH BE LIABLE FOR ANY
   DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
   ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef CART_TRAJ_GENERATOR_H_
#define CART_TRAJ_GENERATOR_H_

#include <kdl/frames.hpp>


// cartesian trajectory generator base class
class CartTrajGenerator
{

public:

	CartTrajGenerator();

	virtual ~CartTrajGenerator();

	void setInitPose(const KDL::Frame &F_init);
	void setDuration(double duration);

	// gets the position and velocity set points at a given time [sec]
	virtual void getSetPoint(double time, KDL::Frame &f, KDL::Twist &v);

    double getDuration();

protected:

	// initial starting pose
	KDL::Frame m_F_init;

	// duration of the trajectory
	double m_duration;


};

#endif
