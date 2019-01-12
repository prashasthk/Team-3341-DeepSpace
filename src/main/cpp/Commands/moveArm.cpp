
#include "Commands/moveArm.h"
#include "Robot.h"
#include "Subsystems/Arm.h"
moveArm::moveArm() {
	Requires(Robot::arm);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void moveArm::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void moveArm::Execute() {
	double motorPower = Robot::m_oi->getMoveArmLeft()->GetY();
	Robot::arm->MoveArm(motorPower);
}

// Make this return true when this Command no longer needs to run execute()
bool moveArm::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void moveArm::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void moveArm::Interrupted() {

}
