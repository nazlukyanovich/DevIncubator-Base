#include <iostream>
using namespace std;

int main(){
	int mutants, n, days;
	double p, breeding;
	days = 0;
	
	cout << "The city was attacked by mutants" << endl;
	cout << "Enter the number of mutants: ";
	cin >> mutants;
	cout << "The city was attacked by " << mutants << " mutants!!!" << endl;
	cout << "They multiply by few percent" << endl;
	cout << "Enter the percentage by which mutants breed: ";
	cin >> p;
	cout << "If utilities will kill several mutants" << endl;
	cout << "Enter the number of mutants that are killed every day: ";
	cin >> n;
	cout <<"If utilities kill " << n << " mutants every day then ";
	
	for(int i = 0; mutants >= 0; i++){
		breeding = mutants * p / 100;
		mutants = mutants + breeding - n;
		days = i;
		
		if (breeding >= n){
			cout << "YOU DIED" << endl;
			break;
		}
	}
	
	cout << "Humanity will win through: " << days << " days";
		
	return 0;
}
