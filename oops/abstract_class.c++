#include<iostream>
using namespace std;
class Shape{
    public:
     virtual void area()=0;                                      //pure virtual fn: for abstract classs
     virtual void perimeter()=0;                                 
};


//Rectangle inheriting form shape


class Rectangle:public Shape{
    public: 
    int length;
    int breadth;
    Rectangle(){                                  //constructor
    cout<<"Enter the length and breadth :"<<endl;
    cin>>length>>breadth;}
    void area(){
      cout<<"Area of retangle :"<<length*breadth<<endl;
    }
    void perimeter(){
        cout<<"Perimeter of rectangle :"<<2*(length+breadth)<<endl;
    }
};

//circle inheriting from shape

class circle:public Shape{
    public:
    int raduis;
    circle(){                           //constructor
    cout<<"Enter the raduis :"<<endl;
    cin>>raduis;    
    }
    void area(){
        cout<<"Area of circle :"<<3.14*raduis*raduis<<endl;
    }
    void perimeter(){
        cout<<"Perimeter of circle :"<<2*3.14*raduis<<endl;
    }
};
int main(){
    Rectangle r;
    circle c;
    r.area();
    r.perimeter();
    c.area();
    c.perimeter();
    return 0;
    
    
}