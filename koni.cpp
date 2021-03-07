#include <iostream>
#include <cmath>
#define chessBoard 8
using namespace std;

int main(){
	int x1, y1,x2, y2;
	
	cout << "Enter the coordinates of the first knight: " << endl;
	do {
		cin >> x1 >> y1;
		if (x1 <= 0 || y1 <=0 || x1 > chessBoard || y1 > chessBoard){
			cout << "Wrong coordinates!" << endl;
		}
	}
	while (x1 <= 0 || y1 <=0 || x1 > chessBoard || y1 > chessBoard);
	
	cout << "Enter the coordinates of the second knight: " << endl;
	do {
		cin >> x2 >> y2;
		if (x2 <= 0 || y2 <=0 || x2 > chessBoard || y2 > chessBoard || x1 == x2 && y1 == y2 ){
			cout << "Wrong coordinates!" << endl;
		}
	}
	while (x2 <= 0 || y2 <=0 || x2 > chessBoard || y2 > chessBoard || x1 == x2 && y1 == y2);
	
	
	
	if(abs(x2 - x1) == 2 && abs(y2 - y1) == 1 || abs(x2 - x1) == 1 && abs(y2 - y1) == 2){
		cout << "Knight beats another one";
	} else {
		cout << "Knight dont touch another one";
	}
}
