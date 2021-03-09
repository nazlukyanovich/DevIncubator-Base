#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
	int a, b;
	
	srand(time(0));
	a = rand() % 1000;
	
	cout << "I thought a number from 1 to 1000!! Gues which?" << endl;
	
	do {
		cin >> b;
		if (b > a) {
			cout << "Too much! Try less than it" << endl;
		} else if (b < a) {
			cout << "Too few! Try greater than it" << endl;
		} else cout << "Bingo!" << endl;
	}
	while (b != a);
	
	return 0;
}
