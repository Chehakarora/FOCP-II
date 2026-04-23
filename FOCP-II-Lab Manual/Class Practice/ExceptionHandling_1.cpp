 //Exception Handling
 #include<iostream>
 #include<exception>
 using namespace std;
 int main(){
    int a=10, b=5;
    try{
        if(b==0)
        throw"Division by zero";
        //throw 12;
        cout<<a/b;
    }
    catch(const char*msg){
        cout<<msg;
    }
    catch(...){ //should always be the last in the try block
        cout<<"\n Problem Occured";
    }
    cout<<"\nException handled successfully";
 }