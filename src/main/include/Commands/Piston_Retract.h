#ifndef Piston_Retract_H
#define Piston_Retract_H

#include <Commands/Command.h>
#include "WPILib.h"

class Piston_Retract : public CommandBase {
public:
	Piston_Retract();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Piston_Retract_H
