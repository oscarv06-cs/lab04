#ifndef CUSTOMITEM_H
#define CUSTOMEITEM_H
#include <map>
#include <string>
#include "IceCreamItem.h"
class CustomeItem:public IceCreamItem{
    std::map<std::string, int> toppings;

public:
    CustomItem(std::string size);
    
}

#endif