#include<iostream>
using namespace std;
class LeapYear{
	public:
		int year;
	LeapYear(){
		int y;
		cout<<"Enter the year: ";
		cin>>y;
		year=y;
	}
	~LeapYear(){
		if((year%4==0) && (year%100!=0) || (year%400)==0)
		cout << year <<" is a leap year";
		else
		cout << year <<" is not a leap year";		
	}	
};
int main(){
	LeapYear y;
	return 0;	
}
