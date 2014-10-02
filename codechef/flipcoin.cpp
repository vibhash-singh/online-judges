#include <iostream>

int main() {
	bool coinsValue[100000] = {false};
	int n, q;
	int command, a, b;
	
	std::cin >> n >> q; 
	
	while (q--) {
		std::cin >> command >> a >> b;
		int headCount = 0;

		if (command == 0) {
			for (int i = a; i <= b; i++) {
				if (coinsValue[i] == false) {
					coinsValue[i] = true;
				} else {
					coinsValue[i] = false;
				}
				
				//coinsValue[i] = (coinsValue[i] == false) ? true : false;
			}
		} else {
			int count = 0;
		
			for (int i = a; i <= b; i++) {
				if (coinsValue[i] == true) {
					count++;
				}
			}
			
			std::cout << count << "\n";
		}
	}
	
	return 0;
}
