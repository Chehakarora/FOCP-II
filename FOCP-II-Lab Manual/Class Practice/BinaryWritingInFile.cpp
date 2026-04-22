//Binary Writing in File
#include<iostream>
#include<fstream>
using namespace std;

struct Student{
    int id;
    char name[20];
    float marks;
};
int main(){
    Student s={101,"Aman", 89.5};
    ofstream fout("student.dat", ios::binary);

    if (!fout){
        cout<<"File not created!";
        return 1;
    }
    fout.write((char*)&s, sizeof(s));
    fout.close();
    cout<<"Data written successfully!";
}