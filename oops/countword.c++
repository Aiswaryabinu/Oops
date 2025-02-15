#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream writef("sample.txt");
    string line;
    if(writef.is_open()){
        cout<<"Enter the data :";
        getline(cin,line);
        writef<<line<<endl;
        writef.close();
    }
    else{
        cout<<"fail"<<endl;
    }
    int count=0;
    ifstream readf("sample.txt");
    string word;
    if(readf.is_open()){
        while(readf>>word){
            count++;
        }
        cout<<count<<endl;
    }
    else{
        cout<<"Fail";
    }
    return 0;
}
