#include "PraskaProvider.h"
void PraskaProvider::PrintPraska(Praska *praska) {
    cout<<"ID: "<<praska->getId()<<endl;
    cout << "Name firm: "<< praska->getFirm()<<endl;
    cout << "Color: "<<praska->getColor()<<endl;
    cout <<"Model: "<<praska->getModel()<<endl;
    cout << "Max temperature: "<<praska->getMaxtemp()<<endl;
    cout <<"Min temperature: "<<praska->getMintemp()<<endl;
    cout <<"Power: "<< praska->getPower()<<endl;
    cout <<"Couple: "<<praska->getCouple()<<endl;
}
void PraskaProvider::CreatePraska(Praska &praska) {
    uint64_t id;
    string firm;
    string model;
    string color;
    int mintemp;
    int maxtemp;
    string couple;
    int power;
    cout <<"---------------------------"<<endl;
    cout <<"Enter name firm: ";
    getline(cin, firm);
    cout <<"Enter color: ";
    getline(cin, color);
    cout <<"Enter model: ";
    getline(cin,model);
    cout <<"Enter minimum temperature: ";
    cin >> mintemp;
    cout <<"Enter maximum temperature: ";
    cin >> maxtemp;
    cout <<"Enter power: ";
    cin >> power;
    cin.ignore();
    cout <<"Enter couple: ";
    getline(cin,couple);
    cout <<"---------------------------"<<endl;
    praska.setFirm(firm);
    praska.setColor(color);
    praska.setModel(model);
    praska.setMintemp(mintemp);
    praska.setMaxtemp(maxtemp);
    praska.setPower(power);
    praska.setCouple(couple);
}