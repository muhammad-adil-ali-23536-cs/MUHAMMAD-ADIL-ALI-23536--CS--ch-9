//Write a program that inputs two integers in main() function and passes the integers to a function by reference.The function swaps the values.The main() function should display the values before and after swapping.
#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	cout<<"Values before swapping: \n";
	cout<<"a = "<<a<<"\nb = "<<b<<endl;
	cout<<"Swapping the values..."<<endl;
	swap(a,b);
	cout<<"Values after swapping: \n";
	cout<<"a = "<<a<<"\nb = "<<b<<endl;
	return 0;
}
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}