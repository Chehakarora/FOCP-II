//
#include<iostream>
int compute(int a, int b){
    return a+b;
}
double compute(double a, int b){
    return a+b;
}
int main(){

    std::cout<<compute(10,10);
}