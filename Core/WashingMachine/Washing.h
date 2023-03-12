#include "IdProvider.h"

struct WashMash{
private:
    uint64_t id;
    string firm;
    string color;
    int width;
    int lenght;
    int height;
    int power;
    int spin_speed;
    int heating_temperature;
public:
    //seters
    void setId(uint64_t id);
    void setFirm(string firm);
    void setColor(string color);
    void setWidth(int width);
    void setLenght(int lenght);
    void setHeight(int height);
    void setPower(int power);
    void setSpinspeed(int spin_speed);
    void setHeattemp(int heating_temperature);
    //geters
    uint64_t getId();
    string getFirm();
    string getColor();
    int getWidth();
    int getLenght();
    int getHeight();
    int getPower();
    int getSpinspeed();
    int getHeattemp();
    //constructors
    WashMash();
    WashMash(IdProvider id);
    WashMash(IdProvider id, string firm, string color);
    WashMash(IdProvider id, string firm, string color, int width);
    WashMash(IdProvider id, string firm, string color, int width, int lenght);
    WashMash(IdProvider id, string firm, string color, int width, int lenght, int height);
    WashMash(IdProvider id, string firm, string color, int width, int lenght, int height, int power);
    WashMash(IdProvider id, string firm, string color, int width, int lenght, int height, int power, int spin_speed);
    WashMash(IdProvider id, string firm, string color, int width, int lenght, int height, int power, int spin_speed, int heating_temperature);
    //destructor
    ~WashMash();

};