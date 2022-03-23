//
// Created by Alejandro on 16/03/2022.
//
#include "Derived1.h"
#include "Derived2.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA!" << endl << endl;

    Derived1 derived1;
    derived1.setName("Alejandro");
    derived1.do_something();


    Derived2 derived2;
    derived2.setName("Adrian");
    derived2.do_something();

    cout<<endl;
    cout<<"To String Derived1: "<<derived1<<endl;
    cout<<"To String Derived2: "<<derived2<<endl;

}