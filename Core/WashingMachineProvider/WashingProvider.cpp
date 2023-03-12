#include "WashingProvider.h"
void WashingProvider::PrintWashMash(WashMash *washMash) {
    cout<<"ID: "<<washMash->getId()<<endl;
    cout << "Name firm: "<< washMash->getFirm()<<endl;
    cout << "Color: "<<washMash->getColor()<<endl;
    cout <<"Width: "<<washMash->getWidth()<<endl;
    cout << "Length: "<<washMash->getLenght()<<endl;
    cout <<"Height: "<<washMash->getHeight()<<endl;
    cout <<"Power: "<< washMash->getPower()<<endl;
    cout <<"Spin speed: "<<washMash->getSpinspeed()<<endl;
    cout <<"Heating temperature: "<<washMash->getHeattemp()<<endl;

}
void WashingProvider::CreateWashMash(WashMash &washMash) {
    uint64_t id;
    string firm;
    string color;
    int width;
    int lenght;
    int height;
    int power;
    int spin_speed;
    int heating_temperature;
    cout <<"---------------------------"<<endl;
    cout <<"Enter name firm: ";
    getline(cin, firm);
    cout <<"Enter color: ";
    getline(cin, color);
    cout <<"Enter width: ";
    cin >> width;
    cout <<"Enter length: ";
    cin >> lenght;
    cout <<"Enter height: ";
    cin >> height;
    cout <<"Enter power: ";
    cin >> power;
    cout <<"Enter spin speed: ";
    cin >> spin_speed;
    cout <<"Enter heating temperature: ";
    cin >> heating_temperature;
    cout <<"---------------------------"<<endl;
    washMash.setFirm(firm);
    washMash.setColor(color);
    washMash.setWidth(width);
    washMash.setLenght(lenght);
    washMash.setHeight(height);
    washMash.setPower(power);
    washMash.setSpinspeed(spin_speed);
    washMash.setHeattemp(heating_temperature);

}