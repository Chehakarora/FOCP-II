// this operator

#include<iostream>

class A{
    int a1; int a2;
    public:
    A(){
        std::cout<<"\n Default";
        a1=0;a2=0;
    }
    A(int a1, int a2){
        //this->a1=a1; 
       (*this).a1=a1;
        this->a2=a2;
    }
    void display(){
        std::cout<<"\n a1= "<<a1<<"\n a2= "<<a2;
    }
};

int main(){
    A obj1, obj2(45, 56);  //static memory allocation
    A*obj4=new A(123,567); //dynamic memory allocation
    obj1.display();
    obj2.display();
    obj4->display(); //pointer functions dont use dot operators, hence use ->
    return 0;
}