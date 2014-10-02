#include <iostream>

using namespace std;

void inversePermutation(int *ptrNumArr, int *inverseArr, int length);
bool isEqualArrays(int *arr1, int *arr2, int length);

int main()
{
	int totalNum;
	int num;
	
	cin >> totalNum;
	
	while( totalNum!= 0)
	{
		int a[totalNum];
		int b[totalNum];
		
		for(int n = 0; n < totalNum; n++) {
			cin >> num;
			a[n] = num;
		}
		
		inversePermutation(a, b,totalNum);
		
		if(isEqualArrays(a, b, totalNum)) {
			cout << "ambiguous" << "\n";
		} else {
			cout << "not ambiguous" << "\n";
		}
		
		cin >> totalNum;
	}
	
	return 0;
}

void inversePermutation(int *ptrNumArr, int *inverseArr, int length) 
{
		for (int index = 0; index < length; index++) {
			inverseArr[ptrNumArr[index] - 1] = index + 1;
		}
}

bool isEqualArrays(int *arr1, int *arr2, int length)
{
	for(int i = 0; i < length; i++) {
		if(arr1[i] != arr2[i]) {
			return false;
		}
	}
	
	return true;
}
