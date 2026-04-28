#include<iostream>
using namespace std;

template<typename T>
T add(T v1, T v2){
    return(v1+v2);
}
int main(){
    cout<<add<int>(10,20)<<endl;
    cout<<add<float>(30.5,67.89)<<endl;
    cout<<add<string>("Hello", "World");
    return 0;
}

