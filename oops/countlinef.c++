#include<iostream>
#include<fstream>
using namespace std;
int main(){
   
    ifstream readf("sample.txt");
    string lines;
    int count=0;
    if(readf.is_open()){
    while(getline(readf,lines)){
        //cout<<lines<<endl;
        count++;
        
    }cout<<count<<endl;
}
else{
    cout<<"fail"<<endl;
}
return 0;
}
