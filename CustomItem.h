#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include <map>
#include <string>
#include "IceCreamItem.h"
class CustomItem:public IceCreamItem{
    std::map<std::string, int> toppings;
public:
    explicit CustomItem(std::string size);
    virtual ~CustomItem() = default;
    std::string composeItem() const override;
    void addTopping(const std::string& topping);
    
};

#endif