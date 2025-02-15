#include<iostream>
using namespace std;
class Bank{
    public:
    string name;
    int acct_no ;
    float total=5000;
    float depo;
    void insert(){
        cout<<"Enter your name :";
        cin>>name;
        cout<<"Enter your account number :";
        cin>>acct_no;
    }
    //depositing amount
    void deposit(){
        cout<<"Enter an amount to be deposited :";
        cin>>depo;
        if(depo<=0){
            cout<<" Invalid deposit amount  "<<endl;
        }
        total=total+depo;
        cout<<"Balance :"<<total<<endl;
        
    }
    //withdrwaing amonut
    int withdraw(float withdraw){
        if(withdraw>total){
            cout<<"Insufficient balance to withdraw"<<endl;

        }
        else if(withdraw<=0){
            cout<<" Invalid withdraw amount  "<<endl;   
        }
    
        else{
            total=total-withdraw;
            cout<<"Balance : "<<total<<endl;
        }
        return total;
    }
    void display(){
        cout<<"Name :"<<name<<endl;
        cout<<"Account number :"<<acct_no<<endl;
        cout<<"Balance :"<<total<<endl;
    }
};
int main(){
    bool running=true;
    int choice;
    Bank  b;
    float depo,withd;
    b.insert();
    
    while(running){
    cout<<"Enter your choice :"<<endl;
    cout<<"1.Deposit"<<endl;
    cout<<"2.withdraw"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choice;
        switch (choice)
        {
        case 1: 
                b.deposit();
                break;
        case 2: cout<<"Enter an amout to be withdrawn: ";
                cin>>withd;
                 b.withdraw(withd);
                 break;   
        case 3: b.display();
                break; 

        case 4: cout<<"Exiting !!";
                running=false;
                break;                     
         
        default: cout<<"Invalid";
               break;
        
       
        }
    }return 0;
}

