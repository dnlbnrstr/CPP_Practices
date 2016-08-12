#include <iostream>
#include "golf.h"

// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc) {
	extern const int Len;

	for (int i = 0; i < Len; i++) {

		if (name[i]) {
			g.fullname[i] = name[i];
		}
		else {
			g.fullname[i] = '\0';
			break;
		}
		
	}


	g.handicap = hc;
}


int setgolf(golf & g) {
	
	extern const int Len;

	using std::cout;
	using std::cin;
	
	cout << "Enter fullname (up to 39 characters): ";
	cin.getline(g.fullname, Len - 1);
	if(g.fullname[0] == '\0'){
		return 0;
	}
	cout << "Enter handicap: ";
	cin >> g.handicap;
	cin.get();

	return 1;

}

// function resets handicap to new value
void handicap(golf & g, int hc) {
	g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf & g) {
	using std::cout;
	using std::endl;
	cout << "Fullname: " << g.fullname << " \tHandicap: " << g.handicap << endl;
}