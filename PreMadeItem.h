#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include "IceCreamItem.h"
#include <string>
class PreMadeItem:public IceCreamItem{
    std::string name;
public:
    PreMadeItem(std::string name, std::string size);
    std::string composeItem() override;
    virtual ~PreMadeItem() = default;
    double getPrice() override;
};
#endif
