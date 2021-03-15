#include <iostream>
using namespace std;

void power(double x,  double n);

int main(){
	double x, n;
	
	cout << "Input x" << endl;
	cin >> x;
	cout << "Input power" << endl;
	cin >> n;
	
	cout << "Degree of the number is ";
	power(x, n);
	
	return 0;
}

void power(double x, double n){
	double xFactor = x;
	
	if (n == 0){
		x = 1;
		cout << x;
	} else if (n < 0){
		for(int i = -1; i > n; i--){
			x = x * xFactor;
		}
		x = 1 / x;
		cout << x;
	} else{
		for(int i = 1; i < n; i++){
			x = x * xFactor;
		}
		cout << x;
	}
}
