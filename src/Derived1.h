//
// Created by Alejandro on 16/03/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H
#include "Base.h"
#include <string>
#include <sstream>

using namespace std;

class Derived1 : public Base{
public:
    Derived1();
    virtual ~Derived1();
    virtual void do_something();
    virtual string toString();
};
#endif //LAB01_INHERITANCE_DERIVED1_H
