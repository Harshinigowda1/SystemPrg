#include <iostream>
#include <fstream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string>
#include <vector>
#include <limits>
#include <Employee.h>
using namespace std;



int main()
{
	fstream f;
	int pid;
    int total;
    vector<Employee> emp(total);
	pid = fork();
	if(pid == 0)
	{
		f.open("sample.txt", ios::out);
	
		if(!f)
		{
			cout<<"\nUnable to open the file"<<endl;
			exit(0);
		}

        cout << "Enter the total number of employees: ";
        cin >> total;

        for (int i=0; i < total; i++) {
    
            Employee temp;
            string tempName;
            string tempRole;
            int tempID;
            long int tempSal;

            cout << "Name of the employee " << i + 1 << ": ";
            getline(cin, tempName);
            

            // Clearing the 'cin' in order to prevent the getline skips
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Role of the employee: ";
            getline(cin, tempRole);

            cout << "Employee ID: ";
            cin >> tempID;

            cout << "salary: ";
            cin >> tempSal;

    
            temp.initEmployee(tempID, tempName, tempRole, tempSal);
    
            emp.push_back(temp);
            
        }
		for(int j=0;j<emp.size();++j){
		    f<<emp[j]<<endl;
	    }
        f.close();
		
	}
	else
	{
		wait((int *)0);

		f.open("sample.txt", ios::in);
	
		if(!f)
		{
			cout<<"\nUnable to open the file"<<endl;
			exit(0);
		}
        
        while (!f.eof()){
            f >> STRING;
            cout << STRING << endl;
        }

		f.close();
	}
	return 0;
}