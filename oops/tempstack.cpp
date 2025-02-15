#include<iostream>
#include<vector>
using namespace std;
template <class t>
class stack{
    public:
     t* arr;        // Declare a pointer to an array of type t
    int size;      // The size of the stack
    int top;   
    stack() {
        arr = nullptr;
        top = -1;
    }    // Index of the top element

    vector <t> elem;
     void getdata(){
        cout<<"Enter the size :";
        cin>>size;
        arr= new t[size];
    }
    
    
   
    void push(t a){
      if(!is_full()){
        top++;
        arr[top]=a;
      }
      else{
        cout<<"Full !"<<endl;
      }
    }
    template <typename T>
    T pop(){
        T temp;
        if(!is_empty()){
            T temp=arr[top];
            top--;
            return temp;
        }
        else{
            cout<<"Empty !"<<endl;
            return t();
        }
        return 0;
        
    }
    bool is_empty(){
        if(top==-1)
        return true;
        else
        return false;
    }
    bool is_full(){
         if(top==size-1)
         return true;
         else
         return false;
    }
    
    t peek() {
        if (!is_empty()) {
            return arr[top];
        } else {
            cout << "Stack is Empty!" << endl;
            return t();  // Return a default-constructed object of type t
        }
    }
};
int main(){
    stack <int> s;
    s.getdata();
    bool running=true;
    int choice;
    while(running){
        cout<<"Enter your choice :"<<endl;
        cout<<"1.push "<<endl;
        cout<<"2.pop "<<endl;
        cout<<"3.is empty "<<endl;
        cout<<"4.is full"<<endl;
        cout<<"5.peek"<<endl;
        cout<<"6.exit"<<endl;
        cin>>choice;
        switch (choice)
        {
            case 1: cout<<"Enter the number :";
                    int num;
                    cin>>num;
                    s.push(num);
                    break;

            case 2: s.pop<int>();
                   cout<<"Popped element "<<endl;
                   break;
            case 3:if(s.is_empty()){
                   cout<<"Stack is empty"<<endl;

                    }
                    else{
                    cout<<"Not empty"<<endl;

                    }
                    break;
            case 4: if(s.is_full()){
                    cout<<"Stack is full"<<endl;
                   }
                   else{
                    cout<<"Stack is not full"<<endl;
                   }
                   break;
            case 5:cout<<"peeked element :"<<s.peek()<<endl;
                  break;       
            case 6:
                   cout<<"Exiting .."<<endl;
                   running=false;
                   break;       

                         

        }
    }return 0;
}
    