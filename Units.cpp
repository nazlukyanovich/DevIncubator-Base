#include <iostream>
using namespace std;

int getBin(int num);

int main(){
	int m;
	
	cout << "Input m" << endl;
	cin >> m;
	
	for(int i = 1; i <= m; i++){
		bool flag;
		int num = i;
		
		while (num){
			if (num % 2){
				num /= 2;
				flag = true;
			} else {
				flag = false;
				break;
			}
		}
		
		if (flag){
			cout << "Number " << i << " in binary is " << getBin(i) << endl;
		}
			
	}
	
	return 0;
}

int getBin(int num){
	int bin, k = 1;
	
	while(num){
	bin += (num % 2) * k;
	k *= 10;
	num /= 2;
	}

	return bin;
}

