//
// Created by Alejandro on 16/03/2022.
//

#include "Derived1.h"

Derived1::Derived1() {

}
Derived1::~Derived1() {

}
void Derived1::do_something() {
    cout << "Derived1!!!" << endl;
}
string Derived1::toString() {
    stringstream s;
    s<<"Derived1!!!"<<endl;
    return s.str();
}