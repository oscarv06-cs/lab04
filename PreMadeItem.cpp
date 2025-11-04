#include "PreMadeItem.h"
#include <string>
#include <iomanip>
#include <sstream>

static double preMadePrice(const std::string & size){
    if (size == "small"){
        return 4.00;
    }
    else if (size == "medium"){
        return 6.00;
    }
    else {
        return 7.50;
    }
}

PreMadeItem::PreMadeItem(std::string name, std::string size):IceCreamItem(size){
    this->name = name;
    this->price = preMadePrice(this->size);
}

std::string PreMadeItem::composeItem(){
    std::stringstream ss;
    ss << "Pre-made Size: " << size << std::endl;
    ss << "Pre-made Item: " << name << std::endl;
    ss << std::fixed << std::setprecision(2) << "Price: $" << getPrice() << std::endl;
    return ss.str();
}

double PreMadeItem::getPrice(){
    return this->price;
}
