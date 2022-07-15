#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>

using namespace std;

class Words{
private:
    char *words[5];
    int count;
public:
    Words(){ count=0; }
    ~Words() { 
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
};

int main(){

    Words ws;
    string line;
    getline(cin, line);

    ws.setWords((char *)line.c_str());
    ws.displwrd();

    cout<<"Max of all Words: "<<ws.MaxW(ws.MaxWords())<<endl;
    cout<<"\n Enter the word to search: "<<endl;
    string key;
    cin>>key;
    cout<<"\nEnter the word to be Replaced: "<<endl;
    string rep;
    cin>>rep;

    if(ws.SrchReplace((char *)key.c_str(),(char *)rep.c_str())==true)
    {
        cout<<"After Replacing "<<endl;
        ws.displwrd();
    }
    return 0;
}