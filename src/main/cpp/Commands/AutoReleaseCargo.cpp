/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/AutoReleaseCargo.h"
#include "iostream"
using namespace std;

AutoReleaseCargo::AutoReleaseCargo(double setpoint) {
  Requires(Robot::arm);
  target = setpoint;
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void AutoReleaseCargo::Initialize() {
  Robot::arm->reset();
  cout << Robot::arm->getPosition() << endl;
}

// Called repeatedly when this Command is scheduled to run
void AutoReleaseCargo::Execute() {
  currentPosition = Robot::arm->getPosition();
   cout<< currentPosition << endl;
  Robot::arm->MoveArm(0.8);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoReleaseCargo::IsFinished() {
   if (fabs(currentPosition - target) < 1) {
     return true;
   }
   else {
     return false;
   }
  }

// Called once after isFinished returns true
void AutoReleaseCargo::End() {
Robot::arm->MoveArm(0);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoReleaseCargo::Interrupted() {}
