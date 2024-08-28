//write a program that inputs a number and a character. It passes the input to a function that displays a number of columns and rows of the given character.
#include<iostream>
using namespace std;
void shape(int , char);
int main()
{
	int num;
	char c;
	cout<<"\nEnter a number:";
	cin>>num;
	cout<<"\nEnter a character:";
	cin>>c;
	shape(num,c);
	return 0;
}
void shape(int n,char c)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
	cout<<endl;
	for(j=1;j<=n;j++)
	cout<<c;
    }
}
