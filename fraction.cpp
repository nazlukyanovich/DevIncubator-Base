#include<iostream>
using namespace std;

int main()
{   
    double a;
    int result;
	
	do {
    	cout << "Please, enter fractional number: ";
    	cin >> a;
    	if (a - int(a) == 0) {
    		cout << "Your number is not fractional!" << endl;;
    	}
	} 
	while(a - int(a) == 0);

    if (a < 0){
    	result =(a - int(a)) * -10;
    } else {
    	result =(a - int(a)) * 10;
    }
    
    cout << "The first digit of the fractional part of the number is " << result;  

    return 0;
}

