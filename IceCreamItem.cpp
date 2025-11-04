#include "IceCreamItem.h"
#include <string>

IceCreamItem::IceCreamItem(std::string size): size(size) price(0.0){}

IceCreamItem:~IceCreamItem(){}

double IceCreamItem::getPrice()const {
    return price;
}

//IceCreamItem.cpp DONE (until further notice)