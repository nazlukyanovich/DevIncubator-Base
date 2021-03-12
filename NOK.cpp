#include <iostream>
using namespace std;

int main(){
	int a, b, nok;
	
	cout << "Enter number a: " << endl;
	cin >> a;
	cout << "Enter number b: " << endl;
	cin >> b;
	
	if (a == 0){
		cout << "Error! a = 0" << endl;
		return 1;
	} else if (b == 0){
		cout << "Error! b = 0" << endl;
		return 1;
	} else {
		for(int i = 1; i > 0; i++){
			if(i % a == 0 && i % b == 0){
				nok = i;
				cout << "Least common multiple is " << nok;
				break;
			}
		}	
	}
	
	return 0;
}
