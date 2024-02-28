#pragma once
#include <iostream>
#include "Fly.h"
#include "Swim.h"
using namespace std;
class Duck : public Fly, Swim
{
	
public:
	void Show();
	 
};

