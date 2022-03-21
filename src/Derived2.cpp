//
// Created by Alejandro on 16/03/2022.
//

#include "Derived2.h"

Derived2::Derived2(int x) : Base(x) {

}
Derived2::~Derived2() {

}
void Derived2::do_something() {
    cout << "Derived2!!!" << endl;
}
string Derived2::toString() {
    stringstream s;
    s<<"Derived2!!!"<<endl;
    return s.str();
}