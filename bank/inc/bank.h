#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;



class Acc
{
	int acno;
	char name[50];
	char type;
public:
	void create_Acc();
	void login() ;
	void deposit(int);
	void draw(int);
};

void Acc::create_Acc()
{
	
	cout<<"\nEnter your name : ";
	cin.getline(name,50);
	cout<<"\nEnter Type of the Acc (C/S) : ";
	cin>>type;
	cout<<"\nEnter The Initial amount : ";
	cin>>deposit;
	cout<<"\nAcc Created";
}

void Acc::login()
{
	cout<<"\nAcc No. : "<<acno;
	cout<<"\nAcc Holder Name : ";
	cout<<name;
	cout<<"\nType of Acc : "<<type;
	cout<<"\nBalance amount : "<<deposit;
	
}
void Acc::deposit(int x)
{
	deposit+=x;
}

void Acc::draw(int x)
{
	deposit-=x;
}
