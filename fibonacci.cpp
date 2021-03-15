#include <iostream>
using namespace std;

int getFibonacci(int n);

int main(){
	int n = 0;
	
	cout << "Input n" << endl;
	cin >> n;
	
	if(n < 0){
		cout << "Error! n = 0" << endl;
		return 1;
	}
	
	cout << n << " member of Fibonacci sequence is " << getFibonacci(n) << endl;
	cout << "Sequence numbers that come before it: " << endl;
	
	for(int i = 0; i <= n; i++){
		cout << getFibonacci(i) << " ";
	}
}

int getFibonacci(int n){
	if (n == 0){
		return 0;
	} 
	if (n == 1){
		return 1;
	}
	return getFibonacci(n-1) + getFibonacci(n-2);
}
