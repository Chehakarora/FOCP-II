#include<iostream>

class Shape /*final class cannot be inherited*/{
    public:
    virtual void area(){
        std::cout<<"\nNo dimensions, no area";
    }
    virtual void perimeter(){
        std::cout<<"\nNo dimensions, no perimeter";
    }
    void dimension(){
        std::cout<<"No dimensions";
    }
    /*virtual*/ void display()/*final*/ {       // to restrict methode from being inherited
        std::cout<<"\n************We are 2D shapes************";
    }
};
class Square: public Shape{
    int side;
    public:
    Square(int s=0){
        side=s;
    }
    void area(){ //overiding
        std::cout<<"\nArea= "<<side*side;
    }
    void perimeter(){ //overiding
        std::cout<<"\nPerimeter= "<<4*side;
    }
    void dimension() /*const*/{ //overiding //const to make value of dimension constant and not allow to change it
        std::cout<<"\nSide is= "<<side;
    }
    /*void display(){
    std::cout<<"Let's"}*/
};

int main(){
    Square ss(12);
    ss.Shape::area();
    ss.area();ss.perimeter();
    ss.dimension();
    ss.display();
    Shape *s1,s2;
    s1=&ss; //pointing to the child class object, behave like class square
    s1->area();
    s1->perimeter();
    s1->display();
    s1=&s2; // pointing to same class shape object, behave like class shape
    return 0;
}