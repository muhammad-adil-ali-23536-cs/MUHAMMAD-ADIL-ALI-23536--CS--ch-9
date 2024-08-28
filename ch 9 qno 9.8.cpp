//Write a C++ program with two function area and perimeter to find the area and perimeter of a square.
#include<iostream>
using namespace std;
void area(float s)
{
	float a;
	a=s*s;
	cout<<"Area = "<<a<<endl;
}
void perimeter(float s)
{
	float p;
	p=s*4;
	cout<<"Perimeter = "<<p<<endl;
}
int main()
{
	float side;
	cout<<"Enter the length of side: ";
	cin>>side;
	area(side);
	perimeter(side);
	return 0;
}