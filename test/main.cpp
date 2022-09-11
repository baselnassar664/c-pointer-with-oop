
#include<iostream>
using namespace std;
class Person{
private:
    string name;
    int age;
public:
    Person(string name,int age){
    Person::name=name;
    Person::age=age;
    }
    void setName(string name){
     Person::name=name;

    }
    void setage(int age){
     Person::age=age;

    }
    string getName(){
    return name;
    }
    int getAge(){
    return age;
    }
  virtual void display ()=0;
};

class Employee:public Person{
private:
     float salary ;
public:
    Employee(string name,int age,float salary ):Person(name,age){
   Employee::salary=salary;
    }
     void setsalary(float salary){
     Employee::salary=salary;

    }
    void setage(float salary){
     Employee::salary=salary;

    }
      float getSalary(){
    return salary ;
    }
    void display (){
    cout<<"name:"<<getName()<<endl;
    cout<<"age:"<<getAge()<<endl;
    cout<<"salary :"<<getSalary()<<endl;

   };
};
class  HourlyEmployee:public Employee{
private:
    int numberOfHours;
    float  hourRate ;
public:
    HourlyEmployee(string name,int age,float salary ,int numberOfHours,float  hourRate ):Employee(name,age,salary)
        {
           HourlyEmployee::numberOfHours=numberOfHours;
           HourlyEmployee::hourRate=hourRate;

        }
    void setNumberOfHours(int numberOfHours){
    HourlyEmployee::numberOfHours=numberOfHours;

    }

    void setHourRate(float  hourRate){
    HourlyEmployee:: hourRate= hourRate;

    }
    int getNumberOfHours(){
     return numberOfHours;
    }
    float getHourRate(){
    return hourRate;
    }
      float getSalary(){
    return numberOfHours*hourRate ;
    }

      void display (){
    cout<<"name:"<<getName()<<endl;
    cout<<"age:"<<getAge()<<endl;
    cout<<"salary:"<<getSalary()<<endl;
    cout<<"numberOfHours:"<<getNumberOfHours()<<endl;
    cout<<"hourRate:"<<getHourRate()<<endl;

   };


};
int main() {
Employee* e=new HourlyEmployee("basel",25,700,5,5.5);
e->display();


}


