#include <iostream>

int main() {
	int testCases;
	std::cin >> testCases;

	int w1XLL, w1YLL, w1XUR, w1YUR;
	int w2XLL, w2YLL, w2XUR, w2YUR;
	int rXLL, rYLL, rXUR, rYUR;
	
	while (testCases--) {
		std::cin >> w1XLL >> w1YLL >> w1XUR >> w1YUR;
		std::cin >> w2XLL >> w2YLL >> w2XUR >> w2YUR;
		
		if (w2XLL > w1XUR ||
			w2YLL > w1YUR ||
			w2XUR < w1XLL ||
			w2YUR < w1YLL) {
			
			std::cout << "No Overlap\n";
		} else {
			rXLL = w2XLL >= w1XLL ? w2XLL : w1XLL;
			rYLL = w2YLL >= w1YLL ? w2YLL : w1YLL;
			rXUR = w2XUR <= w1XUR ? w2XUR : w1XUR;
			rYUR = w2YUR <= w1YUR ? w2YUR : w1YUR;
			
			std::cout << rXLL << " " << rYLL << " " << rXUR << " " << rYUR << "\n";
		}
	}
	
	return 0;
}
