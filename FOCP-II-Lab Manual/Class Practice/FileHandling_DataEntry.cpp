#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //by default ios::out
    ofstream fout("C:/Users/Chehak/FOCP-1/Github/FOCP-II/FOCP-II-Lab Manual/Class Practice/LearnFileHandling.txt",ios::app);
    //fstream fout("LearnFileHandling", )

    fout<<"\n Heyy... ";
    fout<<"Hello ....";

    fout.close();
    cout<<"Data written successfully";
}