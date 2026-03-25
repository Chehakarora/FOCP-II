//Inheritance 1
#include<iostream>

class A{
   int var;
   void display_msg(){
   std::cout<<"\n Base Class";}
    public:
   A(){
    std::cout<<"\n A default constructor"; var=150;
   }
  void display(){
    std::cout<<"\n var= "<<var;
  }

};

class B:public A
{
    public:
    int var2;
    B(){
        std::cout<<"\n B default constructor"; var2=280;
    }
    void display_b(){std::cout<<"\n var2= "<<var2;
    }
};

int main(){
    B obj1;
    obj1.display();
    //obj1.display_msg();
    obj1.display_b();
    return 0;
}