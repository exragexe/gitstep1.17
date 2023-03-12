#include "IdProvider.h"

struct Boiler{
private:
    uint64_t id;
    string firm;
    string color;
    int power;
    int temp;
    int amount;
public:
    //seters
    void setId(uint64_t id);
    void setFirm(string firm);
    void setColor(string color);
    void setTemp(int temp);
    void setAmount(int amount);
    void setPower(int power);
    //geters
    uint64_t getId();
    string getFirm();
    string getColor();
    int getTemp();
    int getAmount();
    int getPower();
    //constructors
    Boiler();
    Boiler(IdProvider id);
    Boiler(IdProvider id, string firm, string color);
    Boiler(IdProvider id, string firm, string color, int temp);
    Boiler(IdProvider id, string firm, string color, int temp, int amount);
    Boiler(IdProvider id, string firm, string color, int temp, int amount, int power);
    //destructor
    ~Boiler();

};