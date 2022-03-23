//
// Created by Alejandro on 16/03/2022.
//

#include "Base.h"

Base::Base(){

}
Base::~Base() {

}
const string &Base::getName() const {
    return name;
}
void Base::setName(const string &name) {
    Base::name = name;
}
void Base::do_something() {
    cout<<"Base!!!"<<endl;
}
ostream &operator<<(ostream &os, const Base &base) {
    os << "name: " << base.name;
    return os;
}