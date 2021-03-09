#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout << "Enter the sides of triangle: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	
	if (a + b > c && a + c > b && c + b > a) {
		if (a == b && b == c) {
			cout << "Triangle is Equilateral";
		} else if (a == b || a == c || c == b){
			cout << "Triangle is Isosceles";
		} else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			cout << "Triangle is Right";
		} else {
			cout << "General triangle";
		}
	} else cout << "Triangle with the given sides doesn't exist";
	
	return 0;
}
