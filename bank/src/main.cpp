#include <bank.h>
#include <thread>

int main()
{
	char ch;
	int num;
	std::vector<thread> threads(n);
    for (int i = 0; i < n; i++) {
        threads[i] = thread(deposit, i + 1);
    }
	do
	{
	
		cout<<"choose options\n";
		cout<<"\n1. NEW ACCOUNT";
		cout<<"\n2. DEPOSIT AMOUNT";
		cout<<"\n3. WITHDRAW AMOUNT";
		cout<<"\n4. BALANCE ENQUIRY";

		cout<<"5. EXIT";
		cin>>ch;

		switch(ch)
		{
		case '1':
			write();
			break;
		case '2':
			cout<<"\n\n\t\t\tEnter The account No. : "; cin>>num;
			withdraw(num, 1);
			break;
		case '3':
			cout<<"\n\n\t\t\tEnter The account No. : "; cin>>num;
			withdraw(num, 2);
			break;
		case '4':
			display_all();
			break;
		case '5':
			break;	
		default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
    }while(ch!='5');
	return 0;

void write();
void display_all();
void withdraw(int n, int option);
}
