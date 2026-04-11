//Object array
#include<iostream>

class Box{
    double length;
    double width;
    double height;
    public:
    Box(double l=2.0, double w=2.0, double h=2.0){
        length=l;
        width=w;
        height=h;
    }
    double volume(){
        return length*width*height;
    }
    void display(){
        std::cout<<"\n Length: "<<length<<"\n Width: "<<width<<"\n Height: "<<height;
        std::cout<<"\n Volume: "<<volume();
    }

};

int main(){
    Box b[5];
    //Box b[5]={Box(23,45,67),Box(20,30,40),Box(10,20,30)};
    //Box *obj_arr=new Box[5]{Box(12,13,13),Box(20,30,40),Box(7,8,9)};
    for(int i=0;i<5;i++){
        std::cout<<"\n ********"<<i<<"th object *********\n";
        b[1].display();
    }
    return 0;
}