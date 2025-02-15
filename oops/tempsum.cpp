#include<iostream>
using namespace std;
template<typename t>
t sum(t a,t b){
    t sum=0;
    sum=a+b;
    return sum;
}
int main(){
    int c,f;
    cout<<"Enter 2 numbers :"<<endl;
    cin>>c;
    cin>>f;
    cout<<"sum :"<<sum<int>(c,f);
    return 0;



}