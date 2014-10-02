#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	string extensions[100], mediaTypes[100], fileNames[100];
	int n, q;
	map<string, string> mapExtToMedia; 
		
	cin >> n >> q;
	
	for(int i = 0; i < n; i++) {
		cin >> extensions[i];
		cin >> mediaTypes[i];
		mapExtToMedia[extensions[i]] = mediaTypes[i];
	} 

	for	(int j = 0; j < q; j++) {
		cin >> fileNames[j];
	}
	
	string currentFile = "";
	int posOfDot = -1;
	
	for (int fileIndex = 0; fileIndex < q; fileIndex++) {
		currentFile = fileNames[fileIndex];
		posOfDot = currentFile.find_last_of(".");
		
		if (posOfDot == -1) {
			cout << "unknown\n";
		} else {
			string media = mapExtToMedia[currentFile.substr(posOfDot + 1, currentFile.length() - 1)];
			//cout << currentFile.substr(posOfDot + 1, currentFile.length() - 1) << "\n";
			if (media == "") {
				cout << "unknown\n";
			} else {
				cout << media << "\n";
			}	
		}
	}	
	
	return 0;
}	 
