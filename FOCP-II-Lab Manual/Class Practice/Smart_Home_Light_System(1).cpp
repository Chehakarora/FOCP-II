// Smart Home Light System
#include<iostream>
#include<string>

class SmartLight {
private:
    std::string brand;
    int brightness;
    bool isOn;

public:
    SmartLight() { //default
        brand = "Philips";
        brightness = 0;
        power = false;
    }
    SmartLight(string b, int br, bool p) { //Paramterized
        brand = b;
        brightness = br;
        power = p;
    }

    void turnOn() {
        isOn = true;
        std::cout << "Light Turned ON\n";
    }

    void turnOff() {
        isOn = false;
        std::cout << "Light Turned OFF\n";
    }

    void increaseBrightness() {
        if (power) {
            if (brightness < 100) {
                brightness += 10;
            } else {
                cout << "Maximum Brightness Reached\n";
            }
        } else {
            cout << "Turn ON the light first\n";
        }
    }

    void decreaseBrightness() {
        if (power) {
            if (brightness > 0) {
                brightness -= 10;
            } else {
                cout << "Minimum Brightness Reached\n";
            }
        } else {
            cout << "Turn ON the light first\n";
        }
    }

    void displayStatus() {
        cout << "Brand: " << brand << endl;
        cout << "Power: " << (power ? "ON" : "OFF") << endl;
        cout << "Brightness: " << brightness << endl;
    }
};

int main() {
    SmartLight c1;

    c1.turnOn();
    c1.increaseBrightness();
    c1.increaseBrightness();
    c1.displayStatus();

    return 0;
}