//
#include<iostream>
void change(int *p){
    int temp=200;
    *p=temp;
}
int main(){
    int x=50;
    change(&x);
    std::cout<<x;
}