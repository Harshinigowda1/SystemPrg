#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class Word{
private:
    char *words[5];
    int count;
public:
    Word(){ count=0; }
    ~Word() { 
        for(int i=0;i<count;i++)
        delete words[i];
    }
    int Count(){
        return count;
    }
    char *MaxW(int pos){
        return words[pos];
    }
    void setWords(char *line){
        char *token=strtok(line," ");
        while(token != NULL){
            if(count == 5)
            break;
            words[count]=new char[strlen(token)+1];
            strcpy(words[count], token);
            token= strtok(NULL, " ");
            count+=1;
        }
    }
    int MaxWords(){
        int max=strlen(words[0]);
        int pos=0;
        for(int i=1;i<count;i++){
        if(max < strlen(words[i])){
            max = strlen(words[i]);
            pos = i;

        }
        }
        return pos;
    }
    void displwrd(){
        for(int i=0;i<count;i++)
        cout<<words[i]<<" ";
        cout<<endl;
    }
    bool SrchReplace(char *key, char*rep){
        for(int i=0;i<count;i++){
            if(strcmp(words[i], key) == 0){
                words[i]=new char[strlen(rep)+1];
                strcpy(words[i], rep);
                return true;
            }
        }
        return false;
    }
    
};

int main(){

    Words wrds;
    string line;
    getline(cin, line);

    wrds.setWords((char *)line.c_str());
    wrds.displwrd();

    cout<<"Max of all Words: "<<wrds.MaxW(wrds.MaxWords())<<endl;
    cout<<"\n Enter the word to search: "<<endl;
    string key;
    cin>>key;
    cout<<"\nEnter the word to be Replaced: "<<endl;
    string rep;
    cin>>rep;

    if(wrds.SrchReplace((char *)key.c_str(),(char *)rep.c_str())==true)
    {
        cout<<"After Replacing "<<endl;
        wrds.displwrd();
    }
    return 0;
}
