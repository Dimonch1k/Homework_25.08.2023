#include <iostream>
using namespace std;




// Do list
#include "Text.h"
#include "GreatTask.h"
#include "DeadLineTask.h"
#include "DailyTask.h"


int main()
{
	Text* all[5];

	all[0] = new Text("Simple task");
	all[1] = new GreatTask("Important task");
	all[2] = new DeadLineTask("Urgent task", 12, 8);
	all[3] = new DailyTask("Daily task 1", 10, 30);
	all[4] = new DailyTask("Daily task 2", 12);


	all[0]->display();
	all[1]->display();
	all[2]->display();
	all[3]->display();
	all[4]->display();
	cout << "\n\n\n";
}