#include<iostream>
using namespace std;
float simple_interest(float p,float n,char ch) {
	float r;
	if(ch=='y')
		r=12;
	else if(ch=='n')
		r=10;
	int i;
	i=(p*n*r)/100;
	return i;
}
int main() {
	float p,n;
	char ch;
	cout<<"Enter the principal amount: ";
	cin>>p;
	cout<<"Enter the no of years: ";
	cin>>n;
	cout<<"Is customer senior citizen? ";
	cin>>ch;
	float interest=simple_interest(p,n,ch);
	cout<<"Interest="<<interest;
	return 0;
}