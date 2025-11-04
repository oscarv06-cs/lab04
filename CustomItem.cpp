#include "CustomItem.h"
#include <string>
#include <map>
#include <iomanip>
#include <sstream>
double CustomItem::getPrice(){
    return this->price;
}
static double customPrice(const std::string & size){
    if (size == "small"){
        return 3.00;
    }
    else if (size == "medium"){
        return 5.00;
    }
    else {
        return 6.50;
    }
}

CustomItem::CustomItem(std::string size) : IceCreamItem(size){
    this->price = customPrice(this->size);
}

void CustomItem::addTopping(const std::string& topping){
    toppings[topping] += 1;
    this->price += 0.40;
}

std::string CustomItem::composeItem(){
    std::stringstream ss;
    ss << "Custom Size: " << size << std::endl;
    ss << "Toppings:" << std::endl;
    for (const auto& kv : toppings){
        ss << kv.first << ": " << kv.second << " oz" << std::endl;
    }
    ss << std::fixed << std::setprecision(2) << "Price: $" << getPrice() << std::endl;
    return ss.str();
}
