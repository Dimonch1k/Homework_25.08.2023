#pragma once
#include <iostream>
using namespace std;


#include "Text.h"
class GreatTask :
    public Text
{
private:
    string greatTask;

public:
    GreatTask(string greatTask);
    void display() override;
};

