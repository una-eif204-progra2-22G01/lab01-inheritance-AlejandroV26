//
// Created by Alejandro on 16/03/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Base {
public:
    Base();
    virtual ~Base();
    virtual void do_something()=0;
};


#endif //LAB01_INHERITANCE_BASE_H
