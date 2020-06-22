#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <chrono>

class DisplayTime
{
public:
	DisplayTime();
public:
	void run();
	std::string current_time_getter();
private:
	std::time_t current_time;
};
