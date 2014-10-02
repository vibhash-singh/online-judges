#include <iostream>
#include <stdio.h>
#include <string.h>

bool isVowel(char ch);

int main() {
	char str[100];
	char result[100];
	
	gets(str);
	int length = strlen(str); 
	int j = 0;
		
	for (int i = 0; i < length; i++) {
		result[j++] = str[i];
	
		if (isVowel(str[i])) {
			i += 2;
			//result[j++] = str[i];
		}
	}
	
	result[j] = '\0';
	
	std::cout << result;
	 
	return 0;
}

bool isVowel(char ch) {
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		return true;
	}
	
	return false;
}
