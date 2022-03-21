//
// Created by Alejandro on 16/03/2022.
//

#include "Base.h"

Base::~Base() {

}
Base::Base(int x) : X(x) {

}
int Base::getX() const {
    return X;
}
void Base::setX(int x) {
    X = x;
}