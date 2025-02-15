#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream  readf("test.txt");        //opening the file
    if(readf.is_open()){
        string line;
        while(getline(readf,line)){    //reading the file line by line 
        cout<<line<<endl;           

        }
        readf.close();

    }
    else{
        cout<<"Failure...."<<endl;
    }
    return 0;

}
