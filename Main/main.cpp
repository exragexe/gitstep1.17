
#include "BoilerProvider.h"
int main(){
    BoilerProvider* boiler_provider =new BoilerProvider();
    IdProvider id;
    Boiler* boiler = new Boiler(id,"EIW","blue",50,60,1100);
    boiler_provider->PrintBoiler(boiler);
    id.incId();

    return 0;
}