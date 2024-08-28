//write a program that inputs two integer.It passes first integer to a function that calculates and returns its square. If passes second integer to another function that calculates and return its cube.The main() function adds both returend values and displays its result.
#include<iostream>
using namespace std;
int sqr(int n);
int cube(int n);
int main()
{
	int a,b,r;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	r=sqr(a)+cube(b);
	cout<<"Result = "<<r<<endl;
	return 0;
}
int sqr(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}