#include <iostream>

using namespace std;

int main() 
{
	unsigned int totalTestCases;
	unsigned int capacityOfship = 0;
	unsigned int men = 0;
	unsigned int women = 0;
	unsigned int children = 0;
	unsigned int totalOnRescueShip = 0;
	
	for (int testCase = 1; testCase <= totalTestCases; testCase++)
	{
		cin >> capacityOfShip >> men >> women >> children;	
		calcNoOfPersonsOnShip(capacityOfShip, men, women, children);
	}
}

void calcNoOfPersonsOnShip(unsigned int capacityOfShip, unsigned int men,unsigned int women,unsigned int children)
{
	int totalPersonsOnShip = 0;
	
	while(totalPersonsOnShip <= capacityOfShip)
	{
		if(men )
	}
}