#include "System.h"
#include <iostream>
#include <memory>
#include <vector>
void System::printEF() {
	std::cout << "In System::printEF" << std::endl;
	for (auto& p: pointCharges) {
		p->printPCStats();
	}
}
void System::addPC(int multiplier, double loc_x, double loc_y) {
	std::cout << "In System::addPC" << std::endl;
	//way to push_back a unique_ptr in two lines
	//use std::move so that the pointer is moved; push_back tries to make a copy of a unique_ptr which can't happen, but std::move makes it so that the pointer moves locations rather than being copied, which is allowed
	/*std::unique_ptr<PointCharge> ptr(new PointCharge(2,3,4));
	pointCharges.push_back(std::move(ptr));*/
	//way to push_back a unique_ptr in 1 line
	pointCharges.push_back(std::move(std::unique_ptr<PointCharge> (new PointCharge(multiplier,loc_x,loc_y))));
	//std::cout << "fuck" <<std::endl;
}
System::~System() {
	std::cout << "in system destructor" <<std::endl;
}
System::System() {
	std::cout << "in system constructor" << std::endl;
}