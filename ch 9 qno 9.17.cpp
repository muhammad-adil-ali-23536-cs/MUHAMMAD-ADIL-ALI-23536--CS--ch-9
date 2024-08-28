// Write a function called circlearea() that finds the area of a circle. It should take an argument of type float and return an argument of same type. Write a main() function that gets a radius value from the user, calls circlearea() and display the result.
#include<iostream>
using namespace std;
float circlearea(float r)
{
float a;
a=3.14*r*r;
return a;
}
int main()
{
	float radius, area;
	cout<<"Enter radius: ";
	cin>>radius;
	radius=circlearea(radius);
	cout<<"The area of a circle = "<<radius;
}