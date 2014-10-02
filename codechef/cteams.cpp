#include <iostream>
#include <stdlib.h>

typedef struct chef {
	int age;
	int rating;	
} Chef;

int main() {
	Chef youngerChefs[50001];
	Chef olderChefs[50001];
	int youngerChefIndex = -1;
	int olderChefIndex = -1;
	
	int n;
	std::cin >> n;
	
	int a, r;
	std::cin >> a >> r;
	
	youngerChefIndex++;
	(youngerChefs[youngerChefIndex]).age = a;
	(youngerChefs[youngerChefIndex]).rating = r;
	
	
	int diff = 0;
	std::cout << diff << "\n";
	n--;

	while (n--) {
		std::cin >> a >> r;
		
		if (youngerChefIndex > olderChefIndex) {
			int i = 0;
			
			while (i <= youngerChefIndex && a > (youngerChefs[i]).age) {
				i++;
			}
			
			for (int j = youngerChefIndex; j >= i; j--) {
				youngerChefs[j + 1] = youngerChefs[j];
			}
			
			(youngerChefs[i]).age = a;
			(youngerChefs[i]).rating = r;
			youngerChefIndex++;
			diff += r;	
			
			for (int j = olderChefIndex; j >= 0; j--) {
				olderChefs[j + 1] = olderChefs[j];
			}
			
			olderChefs[0] = youngerChefs[youngerChefIndex];
			olderChefIndex++;
			youngerChefIndex--;
			
			diff -= 2 * (olderChefs[0]).rating;
		}  else {
			int i = 0;
			
			while (i <= olderChefIndex && a > (olderChefs[i]).age) {
				i++;
			}
			
			for (int j = olderChefIndex; j >= i; j--) {
				olderChefs[j + 1] = olderChefs[j];
			}
			
			(olderChefs[i]).age = a;
			(olderChefs[i]).rating = r;
			olderChefIndex++;
			diff -= r;
			
			youngerChefs[youngerChefIndex] = olderChefs[0];
			youngerChefIndex++;
			
			for (int j = olderChefIndex; j >= 1; j--) {
				olderChefs[j] = olderChefs[j - 1];
			}
			
			olderChefIndex--;
			
			diff += 2 * (youngerChefs[youngerChefIndex]).rating;
		}	
		
		std::cout << abs(diff) << "\n";
	}	
	
	return 0;
}
