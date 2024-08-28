//Write a program to check whether a number is prime number, even number or odd number number using function.
#include<iostream>
using namespace std;
void Check_number(int n);
{
	int c=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0&&c==0)
	cout<<n<<"is a even prime number:";
	else if(n%2!==0&&c===0)
	cout<<n<<"is a odd prome number:";
	else if(n%2==0&&c!=0)
	cout<<n<<"is only an even number,not prime";
	else if(n%2!=0)
	cout<<n<<"is only an odd number,not prime";
	else
	cout<<"is not a prime number";
}
int main()
{
	int;
	cout<<"\nEnter a number:";
	cin>>n;
	cout<<"\nNature of number \n";
	cout<<"\n--------------\n";
	Check_number(n);
	return 0;
}
