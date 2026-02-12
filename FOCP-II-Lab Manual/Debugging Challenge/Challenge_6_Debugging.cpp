//Default Argument Violation
#include<iostream>
int multiply(int a, int b=2){
    return a*b;
}
int main(){
    std::cout<<multiply(5);
}