#include <vector>
#include "PointCharge.h"
#include <memory>
class System {
private:
	std::vector<std::unique_ptr<PointCharge>> pointCharges;
	double location[2] = {5,10}; //default
	double chargeAtLocation;
	double magnitude;
	double angle;
public:
	void printEF();
	void addPC(int multiplier, double loc_x, double loc_y);
	void printPC(int p);
	std::array<double, 2>  getPointChargeEFContribution(std::unique_ptr<PointCharge>);
	//constructor, destructor
	System();
	~System();
	//calculate total thing
};