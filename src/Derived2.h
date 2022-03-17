//
// Created by Alejandro on 16/03/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H
#include "Base.h"

class Derived2 : public Base{
public:
    Derived2();
    virtual ~Derived2();
    virtual void do_something();
    virtual string toString();
};
#endif //LAB01_INHERITANCE_DERIVED2_H
