//Program to store and display student details along with total marks.
#include<iostream>

class Student{
   	int rollNo;
	std::string name;
	int marks1;
	int marks2;
	int marks3;
    public:
    void inputDetails(){
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
	int calculateTotal(){
        std::cout<<"\nTotal Marks: "<<marks1+marks2+marks3;
        return 0;
    }
	void displayDetails(){
       std::cout<<"\nRoll No.: "<<rollNo<<"\nName: "<<name;
       calculateTotal();
    }   
};
int main(){
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}