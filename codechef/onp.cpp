#include <iostream>
#include <stack>
#include <string.h>

bool isOperator(char ch);

int main() {
	int testCases;
	std::cin >> testCases;
	
	while (testCases--) {
		char expression[400];
		std::cin >> expression;
		
		int expressionLength = strlen(expression);
		std::stack<char> s;
		
		for (int i = 0; i < expressionLength; i++) {
			char c = expression[i];
		
			if (isOperator(c)) {
				if(s.top() != '(') {
					std::cout << s.top();
					s.pop();
				}
				
				s.push(c);
			} else if (c == ')') {
				while (s.top() != '(') {
					std::cout << s.top();
					s.pop();
				}
				
				s.pop();
			} else {
				s.push(c);
			}
		}
		
		std::cout << "\n";
	}
	
	return 0;
}

bool isOperator(char ch) {
	if (ch == '+' || 
		ch == '-' ||
		ch == '*' ||
		ch == '/' ||
		ch == '^') {
		
		return true;
	}
	
	return false;
}
