#include <mult1.h>

int main(int argc, char* argv[])
{
	fstream fs;
    int pid;
    string buff=argv[1];
    string fpath = PATH;
    fpath +=buff;
    pid=fork();
    if(pid==0){
        cout<<"Child Process ID "<<getpid()<<endl;
        cout<<"Enter the lines into the file"<<endl;
        vector<string> lines;
        string line;
        for (int i = 0; i < 2; i++) {
            getline(cin, line);
            lines.push_back(line);
        }
        
        fstream fs;
	    fs.open(fpath,ios::in | ios::out | ios::binary);
	    if(!fs)
	    {
		    cout<<"Unable to open the file"<<endl;
		    exit(0);
	    }
        
	    size_t size = lines.size();
        fs.write(reinterpret_cast<const char*>(&lines), size*sizeof(string));
    
	    fs.close();
    }
	else if (WIFEXITED(status)) {
        
        wait(int *);
        cout<<"Parent Process ID "<<getpid()<<endl;
        string myline;
        vector<string> lines;
        string line;
        fstream f;
	    f.open(fpath,ios::in | ios::out | ios::binary);
	    if(!f)
	    {
		    cout<<"Unable to open file"<<endl;
		    exit(0);
	    }
        
	    size_t sizes = lines.size();
        f.read(reinterpret_cast<char*>(&lines), sizes*sizeof(string));
        
        f.close();

    }
    else

	return 0;
}