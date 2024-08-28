// Write a program that inputs  base and height of a triangle in main function and passes them to a function. The function finds the areaq of a triangle and returns it to main function. where it is displayed on the screen . Area =1/2(Base*Height).
#include<iostream>
using namespace std;
float area(int b,int h);
int main()
{
	int base, height;
	float ar;
	cout<<"Enter base:";
	cin>>base;
	cout<<"Enter height:";
	cin>>height;
	ar=area(base,height);
	cout<<"Area of triangle is "<<ar;
	return 0;
}
float area(int b,int h)
{
	float a;
	a=1/2*b*h;
	return a;
}