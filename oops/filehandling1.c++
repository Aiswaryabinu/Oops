
// create a file and write to a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("test.txt");       //created an object file
    if(file.is_open()){
        file<<"Welcome"<<endl;
        file.close();
    }
    else
    cout<<"failure";
    return 0;
}