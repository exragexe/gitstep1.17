
#include "PraskaProvider.h"
int main(){
    PraskaProvider* praska_provider =new PraskaProvider();
    IdProvider id;
    Praska* praska = new Praska(id,"Samsung","red","RX1070",75,230,1000,"Yes");
    praska_provider->PrintPraska(praska);
    id.incId();

    return 0;
}