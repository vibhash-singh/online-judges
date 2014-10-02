#include <iostream>

#define MAXSIZE 10

class Queue {
	public:
	int q[MAXSIZE];
	int first;
	int last;
	int count;
	
	Queue() {
		first = 0;
		last = MAXSIZE - 1;
		count = 0;
	}
	
	void enqueue(int item) {
		if (count == MAXSIZE) {
			std::cout << "Overflow\n";
		} else {
			last = (last + 1) %  MAXSIZE;
			q[last] = item;
			count++;
		}
	}
	
	void dequeue() {
		if (count <= 0) {
			std::cout << "Underflow\n";
		} else {
			std::cout << q[first] << "\n";
			first = (first + 1) % MAXSIZE;
			count--;
		}
	}
	
	bool isEmpty() {
		if (count <= 0) {
			return true;
		}
		
		return false;
	}
};

int main() {
	Queue queue;
	int i = 10;
	
	while(i--)
		queue.enqueue(i);
		
	while (i <= 15) {
		queue.dequeue();
		i++;
	}
		
	return 0;
}
