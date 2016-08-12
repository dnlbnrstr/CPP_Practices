#include <iostream>
#include "golf.h"

int main(void) {

	using std::cout;
	using std::cin;

	golf daniel = { "Daniel Buenrostro", 3 };
	golf ejemplo;

	setgolf(ejemplo ,"Damaris Suhey", 1);

	showgolf(daniel);
	showgolf(ejemplo);
	

	const int arrSize = 10;
	golf Member[arrSize];
	cout << "Enter up to " << arrSize << " golf members. Exit leaving Member name empty...\n";

	for (int i = 0; i < arrSize; i++) {
		cout << "Name for member #" << i + 1 << ":";
		cin.getline(Member[i].fullname, 40 - 1);
		cout << "Now enter his/her handicap: ";
		cin >> Member[i].handicap;
		showgolf(Member[i]);
	}
	return 0;
}