//Write a program that uses a function mul(int,int) to determine the second integer is a multiple of the first integer. The function takes two integer arguments and returns 1 if the second integer is the multiple of a first and 0 otherwise.The program should inputs a series of pair of integers.
#include<iostream>
using namespace std;
int mul(int,int);
int main()
{
	int i,x,y,r;
	for(i=1;i<=5;i++)
	{
		cout<<"Enter a pair of integers:";
		cin>>x>>y;
		r=mul(x,y);
		if(r==1)
		cout<<y<<" is multiple of "<<x<<endl;
		else
		cout<<y<<" is not multiple of "<<x<<endl;
	}
	return 0;
}
int mul(int a,int b)
{
	if(b%a==0)
	return 1;
	else 
	return 0;
}