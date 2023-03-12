#include "IdProvider.h"

struct Praska{
private:
    uint64_t id;
    string firm;
    string model;
    string color;
    int mintemp;
    int maxtemp;
    string couple;
    int power;
public:
    //seters
    void setId(uint64_t id);
    void setFirm(string firm);
    void setColor(string color);
    void setModel(string model);
    void setMintemp(int mintemp);
    void setMaxtemp(int maxtemp);
    void setCouple(string couple);
    void setPower(int power);
    //geters
    uint64_t getId();
    string getFirm();
    string getColor();
    string getModel();
    int getMintemp();
    int getMaxtemp();
    int getPower();
    string getCouple();
    //constructors
    Praska();
    Praska(IdProvider id);
    Praska(IdProvider id, string firm, string color);
    Praska(IdProvider id, string firm, string color, string model);
    Praska(IdProvider id, string firm, string color, string model, int mintemp);
    Praska(IdProvider id, string firm, string color, string model, int mintemp, int maxtemp);
    Praska(IdProvider id, string firm, string color, string model, int mintemp, int maxtemp, int power);
    Praska(IdProvider id, string firm, string color, string model, int mintemp, int maxtemp, int power, string couple);
    //destructor
    ~Praska();

};