#include <iostream>
using namespace std;

void reverseNumber(int num);

int main(){
	int number;
	
	cout << "Input number: " << endl;
	cin >> number;
	cout << "Ok, let's reverse your number" << endl;
	
	reverseNumber(number);
	
	return 0;
}

void reverseNumber(int num){
	if(num < 0){
		for(int i = num; i < 0; i /= 10){
			cout << -i % 10;
		}
	} else if(num == 0){
		 cout << "0";
	} else {
		for(int i = num; i > 0; i /= 10){
			cout << i % 10;
		}		
	}
	
}
