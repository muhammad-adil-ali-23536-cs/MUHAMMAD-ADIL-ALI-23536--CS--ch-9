//Write a program that inputs marks in main function and passes these marks to a function.The function finds grade of student on the basis of the following criteria.
// Grade A           80 or above marks
// Grade B           60 to 79 marks
// Grade C           40 to 59 marks
// Grade F           below 40 marks
// The function returns grade back to main function where it displayed on the screen.
#include<iostream>
using namespace std;
char grade(int m);
int main()
{
	int marks;
	char g;
	cout<<"Enter marks:";
	cin>>marks;
	g=grade(marks);
	cout<<"Your grade is :"<<g<<endl;
	return 0;
}
char grade(int m)
{
	if(m>80)
	return 'A';
	else if(m>60)
	return 'B';
	else if(m>40)
	return 'c';
	else
	return 'f';
}