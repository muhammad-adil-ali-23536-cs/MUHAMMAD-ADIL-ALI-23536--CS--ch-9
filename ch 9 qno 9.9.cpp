//Write a program that inputs two numbers and one arithmetic operator in main function and passes them to a function. The function applies arithmetic operation on two numbers on the basis of the operator entered by user using ststement.
#include<iostream>
using namespace std;
void cal(int a,int b,char op);
int main()
{
	int x,y;
	char c;
	cout<<"Enter first number,operator and second number:";
	cin>>x>>c>>y;
	cal(x,y,c);
	return 0;
}
void cal(int a,int b,char op)
{
	switch(op)
	{
		case'+':
			cout<<a<<"+"<<b<<"="<<a+b;
			break;
		case'-':
		    cout<<a<<"-"<<b<<"="<<a-b;
			break;
		case'*':
		    cout<<a<<"*"<<b<<"="<<a*b;
			break;
		case'/':
		    cout<<a<<"/"<<b<<"="<<a/b;
			break;
		case'%':
		    cout<<a<<"%"<<b<<"="<<a%b;
			break;
		default:
		    cout<<"Invalid operator";					
	}
}