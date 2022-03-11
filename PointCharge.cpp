#include "PointCharge.h"

PointCharge::PointCharge(int multiplier, double loc_x, double loc_y) {
	chargeMultiplier = multiplier;
	setChargeTotal();
	location[0] = loc_x;
	location[1] = loc_y;
}
void PointCharge::printPCStats() {
	std::cout << "PointCharge stats:" <<std::endl;
	std::cout << "Charge: " << chargeTotal << std::endl;
	std::cout << "Location: (" << location[0] << "," << location[1] << ")" << std::endl; 
}
void PointCharge::setChargeTotal() {
	std::cout << "in setChargeTotal" << std::endl;
	chargeTotal = chargeMultiplier * e;
}
PointCharge::~PointCharge() {
	std::cout << "in pointcharge destructor" << std::endl;
}