//File reading
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("C:/Users/Chehak/FOCP-1/Github/FOCP-II/FOCP-II-Lab Manual/Class Practice/LearnFileHandling.txt");
    string line;
     int count=0;
    //while(fin>>line)
   
    while(getline(fin,line))
    {
        cout<<line<<endl;
        count++; //to count total words and lines
    }
    cout<<count;
    fin.close();
}