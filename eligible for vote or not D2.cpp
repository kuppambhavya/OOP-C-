#include<iostream>
using namespace std;
int main() {
	int age;
	cout<<"Enter age: ";
	cin>>age;
	if(age>=18) {
		cout<<"Eligible for vote";
	} else {
		cout<<"Not eligible for vote";
		cout<<"\nYears left to be eligible for vote: "<<18-age;
	}
	return 0;
}