#pragma once
#include <iostream>
using namespace std;


#include "Text.h"
class DeadLineTask :
    public Text
{
private:
    string deadLineTask;
    int day;
    int month;
    

public:
    DeadLineTask(string deadLineTask, int month, int day);
    void display() override;
};

