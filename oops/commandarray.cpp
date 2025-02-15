#include<iostream>
#include<fstream>
using namespace std;
int main(int l,char *argv[]){
    string s="";
    ofstream fout;
    for(int i=1;i<l;i++){
        s=s+argv[i];
    }
    fout.open("sample.txt");
    fout<<s;
    fout.close();
    ifstream fin;
    fin.open("sample.txt");
    string g;
    fin>>g;
    fin.close();
    cout<<"String :"<<g<<endl;
    return 0;
    }
