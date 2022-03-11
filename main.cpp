#include <iostream>
#include <string>
#include <vector>
#include "System.h"

int main() {
	System system;
	std::cout << "in main" << std::endl;
	
	system.addPC(3, 3, 4);
	system.printEF();
	return 0;
}