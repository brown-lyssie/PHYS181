#include <vector>
#include <iostream>
#include <string>
#include <cmath>
class PointCharge {
private:
	const double ke = 8.9876*std::pow(10, 9);
	const double e = 1.60217662*std::pow(10,-19);
	int chargeMultiplier;
	double chargeTotal;
	double location[2];
	void setChargeTotal();
	//needs to be able to calculate x and y components
public:
	~PointCharge();	
	PointCharge(int multiplier, double loc_x, double loc_y);
	void setLocation(double loc_x, double loc_y);
	void printPCStats();
	//needs to be able to 
};