#include "BoilerProvider.h"
void BoilerProvider::PrintBoiler(Boiler *boiler) {
    cout<<"ID: "<<boiler->getId()<<endl;
    cout << "Name firm: "<< boiler->getFirm()<<endl;
    cout << "Color: "<<boiler->getColor()<<endl;
    cout <<"Temperature: "<<boiler->getTemp()<<endl;
    cout << "Amount: "<<boiler->getAmount()<<endl;
    cout <<"Power: "<<boiler->getPower()<<endl;
}
void BoilerProvider::CreateBoiler(Boiler &boiler) {
    uint64_t id;
    string firm;
    string color;
    int power;
    int temp;
    int amount;
    cout <<"---------------------------"<<endl;
    cout <<"Enter name firm: ";
    getline(cin, firm);
    cout <<"Enter color: ";
    getline(cin, color);
    cout <<"Enter temperature: ";
    cin >> temp;
    cout <<"Enter amount: ";
    cin >> amount;
    cout <<"Enter power: ";
    cin >> power;
    cout <<"---------------------------"<<endl;
    boiler.setFirm(firm);
    boiler.setColor(color);
    boiler.setTemp(temp);
    boiler.setAmount(amount);
    boiler.setPower(power);
}