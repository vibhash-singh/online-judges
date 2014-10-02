#include <iostream>
#include <map>
#include <string>

using namespace std; 

int main() {
	int testCases;
	string userid, vote;
	int finalScore = 0;
	int numVotes = 0;
	
	cin >> testCases;
	
	while (testCases--) {
		cin >> numVotes;
		finalScore = 0;
		map<string, string> mapUseridToVote;
		
		while (numVotes--) {
			cin >> userid >> vote;
			mapUseridToVote[userid] = vote;

		}
		
		for(std::map<string, string>::iterator iter = mapUseridToVote.begin(); iter != mapUseridToVote.end(); ++iter) {
			string s  =  iter->second;
			
			(s == "+") ? finalScore++ : finalScore--;
		}
			
		cout << finalScore << "\n";
	}

	return 0;
}
