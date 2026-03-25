#include<iostream>

class A{
    int x;
    int y;
    public:
    A();
    A(int);
    A(int, int);
    ~A();
    void display();
};
A::A(){
    std::cout<<"Default";
    x=y=0;
}
A::A(int n1){
    std::cout<<"\nSingle";
    x=y=n1;
}
A::A(int n1, int n2){
    std::cout<<"\nDouble";
    x=n1, y=n2;
}
A::~A(){
    std::cout<<"\nObject Destroyed";
}
void A::display(){
    std::cout<<"\nX= "<<x<<"\n Y= "<<y;
}

int main()
{
    A a1,a2(56),a3(34,56);
    a1.display();
    a2.display();
    a3.display();
  return 0;  
}
