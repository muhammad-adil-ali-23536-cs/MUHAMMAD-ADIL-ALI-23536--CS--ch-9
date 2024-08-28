//Write a program to read a number from the keyboard and pass it to a function to determine whether it is prime or composite.A numberis prime if it has factor 1 and it self, otherwise it is a composite number.
#include<iostream>
using namespace std;
void prime(int num)
{
	int c, p=1;
	for(c=2;c<=num/2;c++)
	if(num%c==0)
	{
	p=0;
	break;	
	}
	if(p==1)
    cout<<num<<" is a prime number.";
    else
    cout<<num<<" is composite number.";
}
int main()
{
	int n;
	cout<<"Enter a integer:";
	cin>>n;
	prime(n);
	return 0;
}