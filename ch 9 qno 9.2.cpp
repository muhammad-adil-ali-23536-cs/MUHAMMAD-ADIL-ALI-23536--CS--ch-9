//write a program that inputs two numbers in main() function, passes these numbers to a function.The function displays the maximum number.
#include<iostream>
using namespace std;
void max(int a,int b);
int main()
{
	int x,y;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	return 0;
}
void max(int a,int b)
{
	if(a>b)
	cout<<"Maximum number is "<<a;
	else
	cout<<"Maximum number is "<<b;
}