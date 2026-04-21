#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/Chehak/FOCP-1/Github/FOCP-II/FOCP-II-Lab Manual/Class Practice/LearnFileHandling.txt");
    ofstream fout("C:/Users/Chehak/FOCP-1/Github/FOCP-II/FOCP-II-Lab Manual/Class Practice/LearnFileHandlingFInal.txt");

    string line;

    while(getline(fin,line)){
        fout<<line<<endl;
    }

    cout<<"File copied successfully";

    fin.close();
    remove("data.txt");
    fout.close();
}