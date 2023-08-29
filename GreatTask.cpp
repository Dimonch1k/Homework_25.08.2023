#include "GreatTask.h"


GreatTask::GreatTask(string greatTask)
{
	this->greatTask = greatTask;
}

void GreatTask::display()
{
	cout << "!!! " << greatTask << "\n";
}