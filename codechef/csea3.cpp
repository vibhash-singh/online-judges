#include <iostream>
#include <string.h>

int main() {
	int numCols;
	char message[200];
	std::cin >> numCols;
	
	while (numCols != 0) {
		std::cin >> message;
		
		int messageLength = strlen(message);
		int numParts = messageLength / numCols;
		int currentPart = 0;
		int charsPerPart = numCols;
		int startIndex = 0;
		
		for (int i = 0; i < messageLength; i++) {
			if(currentPart % 2 == 0) {
				std::cout << message[currentPart * charsPerPart + startIndex];
			} else {
				std::cout << message[currentPart * charsPerPart + charsPerPart - 1 - startIndex];
			}
			
			currentPart++;
			
			if(currentPart == numParts) {
				currentPart = 0;
				startIndex++;
			}
		}
		
		std::cout << "\n";
		std::cin >> numCols;
	}
	
	return 0;
}
