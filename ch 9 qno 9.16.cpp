// write a program that inputs two integers in main function and passes the values to a function.The function finds and returns the greatest common divisor. The main() function then displayed the returned values.
#include<iostream>
using namespace std;
int gcd(int x, int y);
int main()
{
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	cout<<"Greatest common divisor is "<<gcd(a,b)<<endl;
	return 0;
}
int gcd(int x,int y)
{
	int g,i,n;
	if(x<y)
	n=x;
	else
	n=y;
	for(i=1;i<=n;i++)
	if(x%i==0&&y%i==0)
	g=i;
	return g;
}