#include <iostream>
using namespace std;

int main(){
	int a, b, nok;
	
	cout << "Enter number a: " << endl;
	cin >> a;
	cout << "Enter number b: " << endl;
	cin >> b;
	
	for(int i = 1; i > 0; i++){
		if(i % a == 0 && i % b == 0){
			nok = i;
			break;
		}
	}
	
	cout << "Least common multiple is " << nok;
	
	return 0;
}
