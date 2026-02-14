//function to add 2 nos.
#include<iostream>
int sum(int ,int );
float sum(float,float);
double sum(double, double);
int main(){
    /*int a; int b;
    std::cout<<"Enter first number: ";
    std::cin>>a;
    std::cout<<"Enter second number: ";
    std::cin>>b;*/
    //int result=sum(a,b);
    //std::cout<<result;
    
    std::cout<<sum(5,6)<<"\n";
    std::cout<<sum(5.6f,5.7f)<<"\n";
    std::cout<<sum(5.567,5.678);
    return 0;
}
int sum(int a, int b){
    std::cout<<"int ";
    return(a+b);
}
float sum(float c, float d){
    std::cout<<"float ";
    return(c+d);
}
double sum(double e, double f){
    std::cout<<"double ";
    return(e+f);
}
