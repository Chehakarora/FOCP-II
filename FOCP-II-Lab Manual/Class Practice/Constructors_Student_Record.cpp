//Program to store and display student details along with total marks.
#include<iostream>

class Student{
   	int rollNo;
	std::string name;
	int marks1;
	int marks2;
	int marks3;
    int calculateTotal();
    public://wrappin or binding the data  >>= extraction operator  <<insertion operator
    void inputDetails();
	void displayDetails();
    Student();
};
 void Student::inputDetails(){ //setter
        std::cout<<"Enter Roll No: ";
        std::cin>>rollNo;
        std::cout<<"Enter Name: ";
        std::cin>>name;
        std::cout<<"Enter marks in subject 1: ";
        std::cin>>marks1;
        std::cout<<"Enter marks in subject 2: ";
        std::cin>>marks2;
        std::cout<<"Enter marks in subject 3: ";
        std::cin>>marks3;
    }
int Student::calculateTotal(){ //getter
        std::cout<<"\nTotal Marks: "<<marks1+marks2+marks3;
        return 0;
    }
void Student::displayDetails(){ //getter
       std::cout<<"\nRoll No.: "<<rollNo<<"\nName: "<<name;
       calculateTotal();
    }   
Student::Student(){
    rollNo=0; name=" "; marks1=0; marks2=0; marks3=0;
}

int main(){
    Student s1,s2;
    s1.inputDetails();
    s1.displayDetails();
    s2.displayDetails();
    return 0;
}