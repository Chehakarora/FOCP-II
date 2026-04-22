//Reading Binary File
#include<iostream>
#include<fstream>
using namespace std;

struct Student {
    int id;
    char name[20];
    float marks;
};

int main(){
    Student s;
    ifstream fin("student.dat", ios::binary);
    if(!fin){
        cout<<"File not found!";
        return 1;
    }
    fin.read((char*)&s, sizeof(s));
    fin.close();
    cout<<"ID: "<<s.id<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}