#include <iostream>
#include <string.h>

void incrementStrAtPosition(char *s, int pos);

int main() {
	int testCases;
	char str[1000000];
		
	std::cin >> testCases;
	
	while (testCases--) {
		std::cin >> str;
		int length = strlen(str); 
		int i = length / 2 - 1;
			
		bool increment = true;
		
		while ( i >= 0) {
			if (str[i] == str[length - i - 1]) {
				i--;
				continue;
			} else {
				increment = str[i] < str[length - i - 1];
				break;
			}
		}
		
		if (increment) {
			length % 2 == 0 ? incrementStrAtPosition(str, length / 2 - 1) : incrementStrAtPosition(str, length / 2);
		}
		
		length = strlen(str);
		
		for (int j = 0; j <= length / 2; j++) {
			str[length - j - 1] = str[j];
		}
		
		std::cout << str << "\n";
	}
}

void incrementStrAtPosition(char *s, int pos) {
	int length = strlen(s);
		
	while (s[pos] == '9' && pos >= 0) {
		s[pos] = '0';
		pos--;
	}
	
	if (pos == -1) {
		pos++;
		s[length / 2] = '0';
		s[length] = '0';
		s[length + 1] = '\0';	
	}

	s[pos]++; 	
}
 