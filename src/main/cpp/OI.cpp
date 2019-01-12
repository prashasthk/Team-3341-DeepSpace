/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI() : leftJoy(new Joystick(0)), 
rightJoy(new Joystick(1)),
extend(new JoystickButton(rightJoy, 6)),
retract(new JoystickButton(rightJoy, 7)),
off(new JoystickButton(rightJoy, 8)),
{
  // Process operator interface input here.
  extend->WhenPressed(new Piston_Extend());
	extend->WhenReleased(new Piston_Off());
	retract->WhenPressed(new Piston_Retract());
	restract->WhenReleased(new Piston_Retract());
	off->WhenPressed(new Piston_Off());
}

Joystick* OI::getLeft(){
  return leftJoy;
}

Joystick* OI::getRight(){
  return rightJoy;
}
