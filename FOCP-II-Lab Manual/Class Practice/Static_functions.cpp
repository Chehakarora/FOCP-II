//static functions
#include<iostream>

class University{
    std::string rollno;
    std::string name;
    int marks;
    public:
    static std::string univ_name;
    static std::string section;
    static int room_no;
    University(std::string rollno="25CSU000",std::string name="unknown", int marks=0){
        this->rollno=rollno; this->name=name; this->marks=marks;
    }
    void display_info(){
        std::cout<<"\n Name: "<<name<<"\n Roll No: "<<rollno<<"\n Marks: "<<marks;
    }
    static void display_univ(){
        std::cout<<"\n University Name: "<<univ_name<<"\n Section: "<<section<<"\n Room No: "<<room_no;
        //std::cout<<"\n rollno"<<roll no;
    }
};

std::string University::univ_name="NCU";
std::string University::section="Section C";
int University::room_no=33;

int main(){
    
    University s1,s2("25CSU132", "ABC", 43);
    s1.display_info();
    s2.display_univ();
    University::display_univ();
    return 0;
}