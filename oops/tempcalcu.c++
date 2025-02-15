#include<iostream>
using namespace std;
template <typename t>
class calculator{
    public :
    t a;
    t b;
    void getdata(){
        cout<<"Enter 2 numbers :";
        cin>>a;
        cin>>b;
    }
   t Sum(){
    t sum=0;
    sum=a+b;
    return sum;
   }
   t Differ(){
    t differ=0;
    if(a>b){
        differ=a-b;
    }
    else{
        differ=b-a;
    }
    return differ;
   }
   void Divide(){
    t divide=0;
    if(b!=0){
     divide=a/b;
     cout<<"Division result :"<<divide<<endl;
    }
    else{
        cout<<"Error"<<endl;
    }
   }
   t Mul(){
    t mul;
    mul=a*b;
    return mul;
   }
};
int main(){
    calculator<int> c;
    c.getdata();
    int x=c.Sum();
     cout<<"sum :"<<x<<endl;
    
    int y=c.Differ();
    cout<<"Differnce :"<<y<<endl;
    c.Divide();
    int z=c.Mul();
    cout<<"Product :"<<z<<endl;
    return 0;

}