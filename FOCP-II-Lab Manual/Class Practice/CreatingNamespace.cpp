#include<iostream>
using namespace std;

namespace MySpace{
    int x=10;
    void show(){
        cout<<"\n Hello";
    }
}

int main(){
    int x=100;
    cout<<"\n My space: "<<MySpace::x;
    cout<<"\n Normal Variable: "<<x;
    MySpace::show();
}