#include "Commands/Piston_Extend.h"

Piston_Extend::Piston_Extend() {
	Requires(Robot::m_piston);
}

// Called just before this Command runs the first time
void Piston_Extend::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void Piston_Extend::Execute() {
	Robot::m_piston->extend();
}

// Make this return true when this Command no longer needs to run execute()
bool Piston_Extend::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void Piston_Extend::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Piston_Extend::Interrupted() {

}
