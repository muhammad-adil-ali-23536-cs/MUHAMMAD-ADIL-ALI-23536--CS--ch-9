//Write a program that inputs a number in main function and passes the number to afunction. The function displays the fictorial of that number.
#include<iostream>
using namespace std;
void factorial(int n);
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	factorial(num);
	return 0;
}
void factorial(int n)
{
	int i;
	fact=1;
	for(i=1;i<=n;i++)
	fact*=i;
	cout<<"Factorial of"<<n<<"is"<<fact;
}