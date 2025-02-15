#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream writef("sample.txt");
    int a,b;
    if(writef.is_open()){
        cout<<"Enter the numbers :";
        cin>>a;
        cin>>b;
        writef<<a<<endl;
        writef<<b<<endl;
        writef.close();


    }
    else{
        cout<<"Fail";
    }
    ifstream readsum("sample.txt");
   int num ,sum=0;
    if(readsum.is_open()){
        while(readsum>>num){
           sum=a+b;
        }
        cout<<"sum :"<<sum<<endl;
    }
    else{
        cout<<"fail";
    }

return 0;

}