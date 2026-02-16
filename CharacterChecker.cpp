#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character:";
	cin>>ch;
	if(isalpha(ch))
	{
		cout<<"You Entered a alphabhet ";
		if(isupper(ch))
	{
		char ch2=tolower(ch);
		cout<<"And it is a upper case letter.\n Its lower case letter is:"<<ch2<<endl;
	}
	else if(islower(ch))
	{
		  char ch2=toupper(ch);
		cout<<"And it is a lower case letter.\n And its upper Case letter is:"<<ch2<<endl;
	 } 
	}
	else if(isdigit(ch))
	{
		cout<<"You Entered a digit"<<endl;
	}
	else
	{
		cout<<"You entered a special character"<<endl;
	}
}
