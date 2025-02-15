#include<iostream>
using namespace std;
class Distance{
    public:
    int feet;
    int inch;
    void getdata(){
        cout<<"Enter the value of feet :";
        cin>>feet;
        cout<<"Enter the value of inch :";
        cin>>inch;

    }
    Distance operator= (Distance d){           //fn for operator oveloading"="

       feet=d.feet;
       inch=d.inch;
    }
    void display(){
        cout<<"Distance : "<<feet<<":"<<inch<<endl;
    }
};
int main(){
    Distance f1,f2;
    
    f1.getdata();
    f2.getdata();
    f1.feet=f2.feet;                   //overloading "="
    f1.inch=f2.inch;
    f1.display();
    f2.display();
    
    
    return 0;

}