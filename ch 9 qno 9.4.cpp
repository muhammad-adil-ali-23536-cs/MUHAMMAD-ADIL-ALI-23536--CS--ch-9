//Write a program that inputs a number and diplays its precessor and sucessor number using function.
#include<iostream>
using namespace std;
void value(int);
int main()
{
int x;
cout<<"Enter an integer:";
cin>>x;
return 0;	
}
void value(int x)
{
	int p,n;
	p=x-1;
	n=x+1;
	cout<<"The number before"<<x<<"is"<<p<<endl;
	cout<<"The number after"<<x<<"is"<<n<<endl;
}