
#include "WashingProvider.h"
int main(){
    WashingProvider* washing_provider =new WashingProvider();
    IdProvider id;
    WashMash* washMash = new WashMash(id,"LG","gray",50,70,100,1000,1000,30);
    washing_provider->PrintWashMash(washMash);
    id.incId();

    return 0;
}