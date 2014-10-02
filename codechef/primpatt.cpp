#include <iostream>

#define 0 WHITE
#define 1 black

using namespace std;

class Square {
	long x;
	long y;
	int color;
	
	Point(int x, int y) {
		this.x = x;
		this.y = y;
		color = WHITE;
	}
	
	void setX(long x) {
		this.x = x;
	}
	
	void setY(long y) {
		this.y = y;
	}
	
	void setColor(int color) {
		this.color = color;
	}
	
	long getX() {
		return x;
	}
	
	long getY() {
		return y;
	}
	
	int getColor() {
		return color;
	}
}

int main() {
	Square originSquare(0, 0);
	
	int totalTestCases;
	cin >> totalTestCases;
	
	for (int testCase = 1; testCase <= totalTestCases; testCases++) {
		
	}
}

unsigned long calcDistance(long x1, long x2, long y1, long y2) {
	return abs(x1 - x2) + abs(y1 - y2);
}

void moveSouth() {

}

void moveNorth() {

}

void moveEast() {

}

void moveWest() {

}