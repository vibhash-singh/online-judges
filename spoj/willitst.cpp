#include <iostream>
    
typedef long long LL;   
 
inline bool isPowerOf2(LL n)
{
	return (n & (n - 1)) == 0;
}

int main()
{
	LL n;
	std::cin >> n;
	
	n < 1 || isPowerOf2(n) ? std::cout << "TAK\n" : std::cout << "NIE\n";
	
	return 0;
}
