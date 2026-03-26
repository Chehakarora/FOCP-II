//Single Level Inheritance
#include<iostream>

class Person{
    std::string name;
    int age;
    public:
    Person(){
        std::cout<<"\n Person Default";
        name="default";
        age=18;
    }
    Person(std::string name, int age){
        std::cout<<"\n Person Parametrized";
        this->name=name;
        (*this).age=age;
    }
    void displayPerson(){
        std::cout<<"\n Name: "<<name<<"\n Age: "<<age;
    }
};

class Student: public Person{
    std::string rollno;
    public:
    Student(){
        std::cout<<"\n Student Default";
        rollno="25CSU000";
    }
    Student(std::string nm, int ag, std::string rno): Person(nm,ag){
        std::cout<<"\n Student Parametrized";
        rollno=rno;
    }
    void displayStudent()
    {
        displayPerson();
        std::cout<<"\n Roll no: "<<rollno;
    }
};

int main(){
    Student s1, s2("Section B", 23, "25CSU110");
    s1.displayStudent();
    s2.displayStudent();
    return 0;
}