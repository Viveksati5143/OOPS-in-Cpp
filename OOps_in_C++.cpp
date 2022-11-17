#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskforPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    void setName(string name){ 
        Name = name;
    }
    string getName(){ 
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age>=18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself(){
        cout<< "Name - " << Name << endl;
        cout<< "company - " << Company << endl;
        cout<< "Age - " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name= name;
        Company= company;
        Age= age;
    }

    void AskforPromotion(){
        if (Age<30)
        {
            cout<<Name<<" you got promoted"<<endl;
        }
        else
        {
            cout<<" Sorry no promotion for you"<<endl;
        }
    }

    virtual void Work(){
        cout<<Name<< " is checking email, task backlog, performing tasks..."<<endl;
    }
};

class Developer :public Employee{
public: 
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name,company,age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug(){
        cout<<Name <<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
    void Work(){
        cout<<Name<< " is writing "<<FavProgrammingLanguage<<" code "<<endl;
    }
};
class Teacher: public Employee{
public:   
    string Subject;
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name,company,age)
    {
        Subject = subject;
    }
    void Work(){
        cout<<Name<< " is teaching "<<Subject<<endl;
    }
};

int main()
{
    // Employee employee1;
    // employee1.Name="Vivek";
    // employee1.Company="gehu";
    // employee1.Age=20;
    // employee1.IntroduceYourself();  
    // employee1.Name="Neeraj";
    // employee1.Company="gehu";
    // employee1.Age=19;
    // employee1.IntroduceYourself();  
    // Employee employee1 = Employee("Vivek", "gehu", 20);
    // // employee1.IntroduceYourself();
    // Employee employee2 = Employee("Neeraj", "gehu", 19);
    // // employee2.IntroduceYourself();

    // // employee1.setAge(60);
    // // cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old."<<endl;
    // employee1.AskforPromotion();
    // employee2.AskforPromotion();
    Developer d = Developer("Vivek","gehu",20,"C++");
    // d.FixBug();
    // d.FixBug();
    // d.FixBug();
    // d.AskforPromotion();
    Teacher t= Teacher("Jack","Cool School",35,"History");
    // t.PrepareLesson();
    // t.AskforPromotion();
    // employee1.Work();
    // d.Work();
    // t.Work();
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
}