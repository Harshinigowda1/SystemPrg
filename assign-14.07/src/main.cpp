#include<header.h>
int i, pid;

void func1(int id)
{
	cout<<"\n i = "<<i<<endl;
	cout<<"Child Died"<<endl;
	cout<<"ID: "<<id<<endl;
}
int main(int argc,char* argv[])
{
	
    int N;
    int status = 0;
    N=atoi(argv[1]);
	signal(SIGCHLD, func1);
	pid = fork();
	if(pid ==0)
	{
		
		for (int i = 1; i <= N; i++) 
        	{
        	if (i % 2 != 0)
        	cout << "\t"<<i << " ";
        
        	}
        	
	}
	else
	{
        wait(&status);
        
        for (int i = 1; i <= N; i++) 
        {
        	if (i % 2 == 0)
        	cout << i << " ";
        }
        

	}
       
	return 0;
}