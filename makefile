phys181: System.o PointCharge.o main.o
	g++ System.o PointCharge.o main.o -o phys181 -std=c++11
main.o: main.cpp
	g++ main.cpp -c -std=c++11
System.o: System.cpp System.h
	g++ System.cpp -c -std=c++11
PointCharge.o: PointCharge.cpp PointCharge.h
	g++ PointCharge.cpp -c -std=c++11
clean: 
	rm *.o phys181