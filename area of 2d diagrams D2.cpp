#include<iostream>
using namespace std;
int area(int);
double area(double,double );
float area(float);
float area(float,float);
int main() {
	int s;
	double l,b;
	float r,bs,ht;
	cout<<"Enter side of a square:";
	cin>>s;
	cout<<"Enter length and breadth of rectangle:";
	cin>>l>>b;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"Enter base and height of triangle:";
	cin>>bs>>ht;
	cout<<"Area of square is"<<area(s);
	cout<<"\nArea of rectangle is "<<area(l,b);
	cout<<"\nArea of circle is "<<area(r);
	cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int s) {
	return(s*s);
}
double area(double l,double b) {
	return(l*b);
}
float area(float r) {
	return(3.14*r*r);
}
float area(float bs,float ht) {
	return((bs*ht)/2);
}