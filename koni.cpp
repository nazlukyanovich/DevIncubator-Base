#include <iostream>
#include <cmath>
#define N 8
#define M 8
using namespace std;

int main(){
	int x1, y1,x2, y2;
	
	cout << "Enter the coordinates of the first knight: " << endl;
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second knight: " << endl;
	cin >> x2 >> y2;
	
	if(abs(x2 - x1) == 2 && abs(y2 - y1) == 1 || abs(x2 - x1) == 1 && abs(y2 - y1) == 2){
		cout << "Knight beats another one";
	} else {
		cout << "Knight dont touch another one";
	}
}
