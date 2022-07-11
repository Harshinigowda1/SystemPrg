#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
int main()
{
    int pid;
    int i = 1;

    for(;;)
    {
        pid = fork();
        if(pid > 0){
            cout<<"Maximum no of concurrent process are"<<i;
            exit(0);

        }
        if(pid == 0)
            i++;
        else{
            wait(0);
        }
    }

    return 0;
}
