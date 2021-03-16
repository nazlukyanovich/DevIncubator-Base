#include <iostream>
using namespace std;

int getFateNumber(int days, int months, int year);
int getSumOfDay(int days);
int getSumOfMonth(int months);
int getSumOfYear(int year);

int main(){
	int day, month, year;
	
	cout << "Let's find out yout fate number" << endl << endl;
	cout << "Please, input your date of birth" << endl;
	cout << "Input day: " << endl;
	cin >> day;
	
	if(day <= 0){
		cout << "Error! day <= 0";
		return 1;
	} else if(day > 31){
		cout << "Error! day > 31";
		return 1;
	}
	
	cout << "Input month: " << endl;
	cin >> month;
	
	if(month <= 0){
		cout << "Error! month <= 0";
		return 1;
	} else if(month > 12){
		cout << "Error! month > 12";
		return 1;
	}
	
	cout << "Input year: " << endl;
	cin >> year;
	cout << "Your date of birth is " << day << "." << month << "." << year << endl;
	
	cout << "Your fate number is: " << getFateNumber(day, month, year);
	
	return 0;
}

int getSumOfDay(int days){
	int daysSum = 0;
	
	for(days; days > 0; days /= 10){
		daysSum += days % 10;
	}
	
	if(daysSum > 9){
		getSumOfDay(daysSum);
	} else return daysSum;
}

int getSumOfMonth(int months){
	int monthsSum = 0;
	
	for(months; months > 0; months /= 10){
		monthsSum += months % 10;
	}
	
	if(monthsSum > 9){
		getSumOfMonth(monthsSum);
	} else return monthsSum;
}

int getSumOfYear(int year){
	int yearSum = 0;
	
	for(year; year > 0; year /= 10){
		yearSum += year % 10;
	}
	
	if(yearSum > 9){
		getSumOfYear(yearSum);
	} else return yearSum;
}

int getFateNumber(int days, int months, int years){
	int fateNumber = 0, fateResult = 0;
	
	fateNumber = getSumOfDay(days) + getSumOfMonth(months) + getSumOfYear(years);
	
	if(fateNumber > 9){
		for(int i = fateNumber; i > 0; i /= 10){
			fateResult += i % 10;
		}	
		return fateResult;
	} else return fateNumber;
	
}
