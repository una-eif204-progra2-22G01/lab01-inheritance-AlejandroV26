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
    void do_something() override;
};
#endif //LAB01_INHERITANCE_DERIVED1_H
