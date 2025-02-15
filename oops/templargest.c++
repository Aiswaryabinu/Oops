#include<iostream>
using namespace std;
template<class T>
T large(T n1, T n2){
    return (n1>n2)?n1:n2;
}
int main(){
    int i1,i2;
    float f1,f2;
    cout<<"Enter 2 integers :";
    cin>>i1>>i2;
    cout<<large(i1,i2)<<" is larger"<<endl;
    cout<<"Enter 2 decimals :";
    cin>>f1>>f2;
    cout<<large(f1,f2)<<" is larger"<<endl;
    return 0;
}