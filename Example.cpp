#include <iostream>
#include "golf.h"

int main(void) {

	using std::cout;
	using std::cin;

	golf daniel = { "Example Me", 3 };
	golf ejemplo;

	setgolf(ejemplo ,"Example You", 1);

	showgolf(daniel);
	showgolf(ejemplo);
	

	const int arrSize = 10;
	golf Member[arrSize];
	cout << "Enter up to " << arrSize << " golf members. Exit leaving Member name empty...\n";

	for(int i = 0; i < arrSize; i++){
		if(!setgolf(Member[i])){
			if(i > 0) {
				cout << "Showing " << i << " members...\n";
				while(i-- > 0){
					showgolf(Member[i]);
				}
				break;
			} else {
				cout << "Can't show you members since array is empty. BYE ...\n";
				break;
			}
			
			
		}
	}

	return 0;
}