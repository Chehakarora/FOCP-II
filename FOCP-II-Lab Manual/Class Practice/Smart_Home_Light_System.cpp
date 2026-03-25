//Smart Home Light System
#include<iostream>
using namespace std;
class SmartLight{
    public:
    string brand;
    int brightness;
    bool isOn;
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreaseBrightness();
    void displaystatus();
    SmartLight();
    SmartLight(string,int,string);

    //~SmartLight(){cout<<"\n Object destoryed";}
};
void SmartLight:: turnOn() {
        isOn = true;
        std::cout << "Light Turned ON\n";
    }
void SmartLight:: turnOff() {
        isOn = false;
        std::cout << "Light Turned OFF\n";
    }
void SmartLight::increaseBrightness(){
    if(brightness+10>100)
    {
        brightness=100;}
    else{
        brightness=brightness+10;
    }
}
void SmartLight::decreaseBrightness(){
    if(brightness-10<1){
    brightness=brightness-10;}
    }
void SmartLight::displaystatus(){
    cout<<"\nBrand of the bulb is "<<brand<<"\nbrightness of the bulb is "<<brightness<<"\nStatus of the bulb "<<isOn;
}
SmartLight::SmartLight(){
brand=" ";
brightness=50;
isOn="OFF";
}
SmartLight::SmartLight(string i,int br,string b){
    brand=b;
    brightness=br;
    isOn=false;
}
int main(){
    SmartLight S1,S2("ON",20,"Havells");
    S1.increaseBrightness();
    S2.decreaseBrightness();
    S1.displaystatus();
    S2.displaystatus();
    return 0;
}