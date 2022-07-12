#include <iostream>
#include <string>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main(int argc,char* argv[])
{
	int pid;
    int N;
    int status = 0;
    N=atoi(argv[1]);
	
	pid = fork();
	if(pid ==0)
	{
		
		for (int i = 1; i <= N; i++) 
        	{
        	if (i % 2 != 0)
        	cout << "\t"<<i << " ";
        
        	}
        	exit(0);
	}
	else
	{
        while ((pid = wait(&status)) > 0)
        {
		for (int i = 1; i <= N; i++) 
        	{
        	if (i % 2 == 0)
        	cout << i << " ";
        	}
        }
        if ( WIFEXITED(status) )
        {
            return "EXIT_SUCCESS";
        }
        else
        {
            cerr<<"abnormal child termination"<<endl;
            return "EXIT_FAILURE";

        }

	}
       
	return 0;
}
