//
//  File Name:  platypusDriver.cpp
//  Authors:    Filipp, William
//
//
//

#include <iostream>
#include "platypus.h"
using namespace std;

int main()
{
    Platypus p1;
    Platypus p2("Champ", 5.0, 0, 'M');

    cout << "************* TESTING CONSTRUCTORS *************" << endl;
    p1.print();
    p2.print();
    
    cout << "************* TESTING HATCH() *************" << endl;
    p1.hatch();
    p1.print();
    
    cout << "************* TESTING EAT() *************" << endl;
    p1.eat();
    p1.print(); // expected: weight changes
    
    cout << "************* TESTING AGEME() *************" << endl;
    p1.ageMe();
    p1.print(); // expected new age: 1
    
    cout << "************* TESTING FIGHT() *************" << endl;
    p1.fight(p2);// one is dead
    p1.print();
    p2.print();

    /*
    char repeat;
    while(true)
    {
        
        if (repeat == 'y')
            break;
    }
     */
    
    return 0;
}
