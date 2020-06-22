#include <iostream>
#include <string>
#include <ctime>
#include <thread>
#include <chrono>
#include "../include/display_time.hpp"

#if 0
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
#endif
DisplayTime::DisplayTime()
	: current_time(std::time(nullptr))
{}
void DisplayTime::run()
{
	while (true)
	{
		std::system("clear");
		current_time = std::time(nullptr);
		std::cout << std::asctime(std::localtime(&current_time)) << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
std::string DisplayTime::current_time_getter()
{
	current_time = std::time(nullptr);

	return (std::string)(std::asctime(std::localtime(&current_time)));
}
