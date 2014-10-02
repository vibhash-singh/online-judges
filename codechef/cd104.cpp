#include <iostream>

int main() {
	int arr[300000];
	int length;
	
	std::cin >> length;

	for (int i = 0; i < length; i++) {
		std::cin >> arr[i];
	}	
	
	//bool inOrder = false;
	int numMoves = 0;
		
	for (int i = length - 1; i > 0; i++) {
		if (a[i] != length) {
			if (a[i] != i + 1 && ) {
				int temp = a[i];
				
				for (int j = 0)
			}
		}
	}
	
	return 0;
}

bool inOrder(a[], int length) {
	for (int i = 0; i < length; i++) {
		if (a[i] != i + 1) {
			return false;
		}
	}
	
	return true;
} 