#include <iostream>

int main() {
	int a[6][6];
	bool found = true;
	
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			std::cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6;j++) {
			if(a[i][j] == 1) {
				found = true;
			
				for (int l = i+1; i < i+4; i++) {
					if(a[l][j] != 1) {
						break;
						found = false;
					}
				}
				
				int countOne = 0;
				
				for(int m = 1;m < 4;m++) {
					if(a[])
				}
			}
		}
	}
	
	return 0;
}
