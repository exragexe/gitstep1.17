#include "Washing.h"

//seters
void WashMash::setId(uint64_t id) {
    this->id = id;
}
void WashMash::setFirm(string firm){
    (firm.empty())? this->firm ="NULL":this->firm=firm;
}
void WashMash::setColor(string color){
    (color.empty()) ? this->color="NULL": this-> color=color;
}
void WashMash::setWidth(int width) {
    if (width < 45)
    {
        this->width= 0;
        cout << "WARNING: Width washing machine should be more then 45 sm." << endl;
    }
    else
    {
        this->width= width;
    }
}
void WashMash::setLenght(int lenght) {
    if (lenght < 45)
    {
        this->lenght= 0;
        cout << "WARNING: Lenght washing machine should be more then 45 sm." << endl;
    }
    else
    {
        this->lenght= lenght;
    }
}
void WashMash::setHeight(int height) {
    if (height < 75)
    {
        this->height= 0;
        cout << "WARNING: Height washing machine should be more then 75 sm." << endl;
    }
    else
    {
        this->height= height;
    }
}
void WashMash::setPower(int power) {
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
void WashMash::setSpinspeed(int spin_speed) {
    if (spin_speed < 800)
    {
        this->spin_speed= 0;
        cout << "WARNING: Spin speed washing machine should be more then 800 revolutions per minute." << endl;
    }
    else
    {
        this->spin_speed= spin_speed;
    }
}
void WashMash::setHeattemp(int heating_temperature) {
    if (heating_temperature < 20)
    {
        this->heating_temperature= 0;
        cout << "WARNING: Heating temperature washing machine should be more then 40 degrees Celsius." << endl;
    }
    else
    {
        this->heating_temperature= heating_temperature;
    }
}
//geters
uint64_t WashMash::getId() {
    return id;
}
string WashMash::getFirm() {
    return firm;
}
string WashMash::getColor() {
    return color;
}
int WashMash::getWidth(){
    return width;
}
int WashMash::getLenght(){
    return lenght;
}
int WashMash::getHeight(){
    return height;
}
int WashMash::getPower(){
    return power;
}
int WashMash::getSpinspeed(){
    return spin_speed;
}
int WashMash::getHeattemp(){
    return heating_temperature;
}
//constructors
WashMash::WashMash() {
    setId(0);
    setFirm("");
    setColor("");
    setWidth(45);
    setLenght(45);
    setHeight(75);
    setPower(800);
    setSpinspeed(800);
    setHeattemp(20);
}
WashMash::WashMash(IdProvider id):WashMash(){
    setId(id.setIdFromGlobal());
}
WashMash::WashMash(IdProvider id, string firm, string color):WashMash(id) {
    setFirm(firm);
    setColor(color);
}
WashMash::WashMash(IdProvider id, string firm, string color,int width):WashMash(id,firm,color) {
    setWidth(width);
}
WashMash::WashMash(IdProvider id, string firm, string color,int width,int lenght):WashMash(id,firm,color,width) {
    setLenght(lenght);
}
WashMash::WashMash(IdProvider id, string firm, string color,int width,int lenght, int height):WashMash(id,firm,color,width,lenght) {
    setHeight(height);
}
WashMash::WashMash(IdProvider id, string firm, string color,int width,int lenght, int height,int power):WashMash(id,firm,color,width,lenght,height) {
    setPower(power);
}
WashMash::WashMash(IdProvider id, string firm, string color,int width,int lenght, int height,int power,int spin_speed):WashMash(id,firm,color,width,lenght,height,power) {
    setSpinspeed(spin_speed);
}
WashMash::WashMash(IdProvider id, string firm, string color,int width,int lenght, int height,int power,int spin_speed, int heating_temperature):WashMash(id,firm,color,width,lenght,height,power,spin_speed) {
    setHeattemp(heating_temperature);
}

//destructor
WashMash::~WashMash()
{
    cout << "This washing machine cannot work." << endl;
    this->firm.clear();
    this->color.clear();
    this->width =0;
    this->lenght =0;
    this->height =0;
    this->power =0;
    this->spin_speed =0;
    this->heating_temperature =0;
}











