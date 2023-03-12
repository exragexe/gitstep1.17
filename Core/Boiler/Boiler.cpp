#include "Boiler.h"

//seters
void Boiler::setId(uint64_t id) {
    this->id = id;
}
void Boiler::setFirm(string firm){
    (firm.empty())? this->firm ="NULL":this->firm=firm;
}
void Boiler::setColor(string color){
    (color.empty()) ? this->color="NULL": this-> color=color;
}
void Boiler::setTemp(int temp) {
    if (temp < 40)
    {
        this->temp= 0;
        cout << "WARNING: Temperature of boiler should be more then 40 degrees Celsius." << endl;
    }
    else
    {
        this->temp= temp;
    }
}
void Boiler::setAmount(int amount) {
    if (amount < 30)
    {
        this->amount= 0;
        cout << "WARNING: Amount of boiler should be more then 30 liters." << endl;
    }
    else
    {
        this->amount= amount;
    }
}
void Boiler::setPower(int power) {
    if (power < 1000)
    {
        this->power= 0;
        cout << "WARNING: Power boiler should be more then 1000 watt." << endl;
    }
    else
    {
        this->power= power;
    }
}

//geters
uint64_t Boiler::getId() {
    return id;
}
string Boiler::getFirm() {
    return firm;
}
string Boiler::getColor() {
    return color;
}
int Boiler::getTemp(){
    return temp;
}
int Boiler::getAmount(){
    return amount;
}
int Boiler::getPower(){
    return power;
}
//constructors
Boiler::Boiler() {
    setId(0);
    setFirm("");
    setColor("");
    setTemp(40);
    setAmount(30);
    setPower(1000);

}
Boiler::Boiler(IdProvider id):Boiler(){
    setId(id.setIdFromGlobal());
}
Boiler::Boiler(IdProvider id, string firm, string color):Boiler(id) {
    setFirm(firm);
    setColor(color);
}
Boiler::Boiler(IdProvider id, string firm, string color,int temp):Boiler(id,firm,color) {
    setTemp(temp);
}
Boiler::Boiler(IdProvider id, string firm, string color,int temp,int amount):Boiler(id,firm,color,temp) {
    setAmount(amount);
}
Boiler::Boiler(IdProvider id, string firm, string color,int temp,int amount, int power):Boiler(id,firm,color,temp,amount) {
    setPower(power);
}

//destructor
Boiler::~Boiler()
{
    cout << "This boiler cannot work." << endl;
    this->firm.clear();
    this->color.clear();
    this->temp =0;
    this->amount =0;
    this->power =0;
}
