//Program to check whether a password satisfies strong security requirements.
#include<iostream>
#include<string>
int main(){
    std::string s;
    std::cout<<"Enter your password: ";
    getline(std::cin,s);
    int capital=0,small=0,number=0,special_character=0;
    for(int i=0;i<(int)s.length();i++){
        char ch=s[i];
        if(ch>='A'&&ch<='Z')
        capital=1;
        else if(ch>='a'&&ch<='z')
        small=1;
        else if(ch>='0'&&ch<='9')
        number=1;
        else if(ch=='@'||ch=='#'||ch =='$'||ch =='%'||ch =='!'||ch=='&'||ch=='*')
        special_character = 1;
    }

    if (capital && small && number && special_character)
         std::cout<<"Strong Password";
    else
         std::cout<<"Weak Password";

    return 0;
}