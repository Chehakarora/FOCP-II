//Program to welcome guest
#include<iostream>
//backward reference
void welcome(void); //function declaration
int main(){
    welcome();
    return 0;
}
void welcome(){  //function definition
    std::cout<<"Welcome Guest!\n";
}
//forward reference
/*void welcome(){  
    std::cout<<"Welcome Guest!\n";
}
 int main(){
    welcome();
    return 0;
}*/
