#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    float salary;
     void getdata(){
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the salary :";
        cin>>salary;
    }

    employee operator+(employee e){              //overloaded "+"
        employee em;
        em.salary=salary+e.salary;
        return em;
    }

     friend void display(employee);

    employee operator-(employee e1){           //overloaded "-"
        employee e3;
        e3.salary=salary-e1.salary;
        return e3;
    }

    friend void display2(employee);

    bool operator>(employee e) {                // Overloaded ">"
        return salary > e.salary;
    }

};
void display(employee res){                     //for displaying sum of 2 salaries
    cout<<"Sum of 2 salaries :"<<res.salary<<endl;         
}
void display2(employee res2){
    cout<<"Difference of 2 salaries :"<<res2.salary<<endl;            ////for displaying difference of 2 salaries
}
void display3(employee res3){
    cout<<"Salary of "<<res3.name<<"is greater  :"<<res3.salary;
}


int main(){
    employee emp1,emp2,res,res2,res3;
    emp1.getdata();
    emp2.getdata();
    res.salary=emp1.salary+emp2.salary;
    display(res);
    if(emp1.salary>=emp2.salary){                             // checking salary1 or salary2 is greater for taking difference
        res2.salary=emp1.salary-emp2.salary;
    }
    else{
        res2.salary=emp2.salary-emp1.salary;
    }
    display2(res2);
    if(emp1.salary>emp2.salary){
       cout<<"Salary of "<<emp1.name<<" is greater";
    }
    else{
       cout<<"Salary of "<<emp2.name<<" is greater";
    }
    
    return 0;

}