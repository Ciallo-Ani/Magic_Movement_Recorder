#pragma once

void Initialize_Copy_User_Command()
{
	Strafe_Optimizer_Optimize = 0;

	Strafe_Optimizer_Desired_Gain = 0;

	Strafe_Optimizer_Required_Speed = 0;

	Strafe_Optimizer_Greatest_Possible_Strafe_Angle = 0;

	Recorded_User_Commands.clear();

	Recorder_User_Comamand_Number = 0;

	Route_Recorder_Record = 0;

	Recorded_Route.clear();
}
