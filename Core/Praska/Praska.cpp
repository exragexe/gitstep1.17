#include "Praska.h"

//seters
void Praska::setId(uint64_t id) {
    this->id = id;
}
void Praska::setFirm(string firm){
    (firm.empty())? this->firm ="NULL":this->firm=firm;
}
void Praska::setColor(string color){
    (color.empty()) ? this->color="NULL": this-> color=color;
}
void Praska::setModel(string model) {
    (model.empty()) ? this->model="NULL": this-> model=model;
}
void Praska::setMintemp(int mintemp) {
    if (mintemp < 65)
    {
        this->mintemp= 0;
        cout << "WARNING: Minimal temperature of iron should be more then 65 degrees Celsius." << endl;
    }
    else
    {
        this->mintemp= mintemp;
    }
}
void Praska::setMaxtemp(int maxtemp) {
    if (maxtemp < 200)
    {
        this->maxtemp= 0;
        cout << "WARNING: Maximum temperature of iron should be more then 200 degrees Celsius." << endl;
    }
    else
    {
        this->maxtemp= maxtemp;
    }
}
void Praska::setCouple(string couple) {
    if (couple == "Yes" ^ couple=="YES" ^ couple =="yes"^couple == "Not" ^ couple=="NOT" ^ couple =="not")
    {
        this->couple= couple;
    }
    else
    {
        this->couple= "NULL";
        cout << "WARNING: You must choose yes or not." << endl;
        this->couple= couple;
    }
}
void Praska::setPower(int power) {
    if (power < 800)
    {
        this->power= 0;
        cout << "WARNING: Power washing machine should be more then 800 Watt." << endl;
    }
    else
    {
        this->power= power;
    }
}
//geters
uint64_t Praska::getId() {
    return id;
}
string Praska::getFirm() {
    return firm;
}
string Praska::getColor() {
    return color;
}
string Praska::getModel(){
    return model;
}
int Praska::getMintemp(){
    return mintemp;
}
int Praska::getMaxtemp() {
    return maxtemp;
}
int Praska::getPower(){
    return power;
}
string Praska::getCouple(){
    return couple;
}
//constructors
Praska::Praska() {
    setId(0);
    setFirm("");
    setColor("");
    setModel("");
    setMintemp(65);
    setMaxtemp(200);
    setPower(800);
    setCouple("");

}
Praska::Praska(IdProvider id):Praska(){
    setId(id.setIdFromGlobal());
}
Praska::Praska(IdProvider id, string firm, string color):Praska(id) {
    setFirm(firm);
    setColor(color);
}
Praska::Praska(IdProvider id, string firm, string color,string model):Praska(id,firm,color) {
    setModel(model);
}
Praska::Praska(IdProvider id, string firm, string color,string model,int mintemp):Praska(id,firm,color,model) {
    setMintemp(mintemp);
}
Praska::Praska(IdProvider id, string firm, string color,string model,int mintemp, int maxtemp):Praska(id,firm,color,model,mintemp) {
    setMaxtemp(maxtemp);
}
Praska::Praska(IdProvider id, string firm, string color,string model,int mintemp, int maxtemp,int power):Praska(id,firm,color,model,mintemp,maxtemp) {
    setPower(power);
}
Praska::Praska(IdProvider id, string firm, string color,string model,int mintemp, int maxtemp,int power,string couple):Praska(id,firm,color,model,mintemp,maxtemp,power) {
    setCouple(couple);
}


//destructor
Praska::~Praska()
{
    cout << "This iron cannot work." << endl;
    this->firm.clear();
    this->color.clear();
    this->model.clear();
    this->mintemp =0;
    this->maxtemp =0;
    this->power =0;
    this->couple.clear();
}











