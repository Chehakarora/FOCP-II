//Reference vs value trap
#include<iostream>
void transform(int &x){
    x=x*x;
}
int main(){
    int num=5;
    transform(num);
    std::cout<<num;
}