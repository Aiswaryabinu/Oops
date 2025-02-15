#include<iostream>
using namespace std;

class shape{
    public: 
    virtual void area()=0;
    virtual void peri()=0;
};
template<class t>
class circle:public shape {
    public:
    t raduis;
    void getdata1(){
        cout<<"Enter the raduis :";
        cin>>raduis;
    }
    
    void area(){
        cout<<"Area of circle :"<<3.14*raduis*raduis<<endl;
    }
    void peri(){
        cout<<"Perimeter of circle :"<<2*3.14*raduis<<endl;
    }

};
template<class t>
class rectangle:public shape{
    public:
    t length;
    t breadth;
    void getdata2(){
        cout<<"Enter the length and breadth :";
        cin>>length;
        cin>>breadth;
    }
    void area(){
        cout<<"Area of rectangle :"<<length*breadth<<endl;
    }
    void peri(){
        cout<<"Perimeter of rectangle :"<<2*(length+breadth)<<endl;
    }
};
int main(){
    circle <int> c;
    rectangle <float> rect;
    c.getdata1();
    c.area();
    c.peri();
    rect.getdata2();
    rect.area();
    rect.peri();
    return 0;
}
