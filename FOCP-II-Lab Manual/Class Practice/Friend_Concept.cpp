//Friend Concept
#include<iostream>

class Rectangle{
    int length;
    int width;
    public:
    Rectangle(){
        length=0; width=0;
    }
    Rectangle(int l, int w){
        length=l; width=w;
    }
    void display(){
        std::cout<<"\n Length= "<<length;
        std::cout<<"\n Width= "<<width;
    }
    friend void area(Rectangle obj);
    friend int main();
};

void area(Rectangle obj){
    std::cout<<"\n Area of rectangle= "<<(obj.width*obj.length);
}

int main(){
    Rectangle r1,r2(23,45);
    r1.display();
    area(r1);
    r2.display();
    area(r2);
    return 0;
}