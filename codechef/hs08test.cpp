#include <iostream>

float calcBalance(float, unsigned short);

int main()
{
	float initialAmount = 0.0f;
	unsigned short withdrawlAmount = 0;
	float balance = 0.0f;
	
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout.precision(2);
	std::cin >>  withdrawlAmount >> initialAmount;
	
	if ((initialAmount <= 2000.00) &&
		(0 < withdrawlAmount <= 2000) &&
		(initialAmount >= float(withdrawlAmount) + 0.50) &&
		(withdrawlAmount % 5 == 0)) {
		
		std::cout << calcBalance(initialAmount, withdrawlAmount);
	} else {
		std::cout << initialAmount;
	}
	
	return 0;
}

float calcBalance(float amount, unsigned short withdraw) 
{
	return amount - withdraw - 0.50;
}
