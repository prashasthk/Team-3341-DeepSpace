/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
//#include "Commands/ArmPositionPID.h"
#include "ctre/Phoenix.h"
#include "WPILib.h"
#include "Commands/AutoReleaseCargo.h"
//#include "Commands/LeftRightDrive.h"


OI::OI() : driveStickLeft(new Joystick(joystickleftPort)),
driveStickRight(new Joystick(joystickrightPort)),
moveArmLeft(new Joystick(armMovePort)),
releaseCargo(new JoystickButton(moveArmLeft,autoArmPort)) {
releaseCargo->WhenPressed(new AutoReleaseCargo(10));
}
Joystick* OI::getDriveStickLeft() {
	return driveStickLeft;
}
Joystick*OI::getDriveStickRight() {
	return driveStickRight;
}
Joystick* OI::getMoveArmLeft() {
	return moveArmLeft;
}

