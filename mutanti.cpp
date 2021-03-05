#include <iostream>
using namespace std;

int main(){
	int mutants, p, n, days, breeding;
	days = 0;
	
	cin >> mutants;
	cout << "The city was attacked by " << mutants << " mutants!!!" << endl;
	cin >> p;
	cout << "They multiply by " << p << "% every night" << endl;
	cin >> n;
	cout <<"If utilities kill " << n << " mutants every day then ";
	
	for(int i = 0; mutants >= 0; i++){
		breeding = mutants * p / 100;
		mutants = mutants + breeding - n;
		days = i;
		
		if (breeding > n){
			cout << "YOU DIED" << endl;
			break;
		}
	}
	
	cout << "Humanity will win through: " << days << " days";
		
	return 0;
}
