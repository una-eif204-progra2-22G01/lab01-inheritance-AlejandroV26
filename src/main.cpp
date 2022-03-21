//
// Created by Alejandro on 16/03/2022.
//
#include "Derived1.h"
#include "Derived2.h"

using namespace std;

int main(int argc, const char *argv[]) {
    cout << "Welcome to the UNA!" << endl << endl;

    Derived1 derived1(1);
    derived1.do_something();
    //cout<<derived1.toString(); //Prueba de toString de la clase Derived1

    Derived2 derived2(2);
    derived2.do_something();
    //cout<<derived2.toString(); //Prueba de toString de la clase Derived2
}