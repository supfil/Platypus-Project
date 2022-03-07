//
//  File Name:  platypusDriver.cpp
//  Authors:    Filipp, William
//
//
//

#include <iostream>
#include "platypus"
using namespace std;

int main()
{
    
    Platypus p1;
    Platypus p2("Champ", 5.0, 0, 'M');
    p1.print();
    p2.print();
    
    p1.hatch();
    p1.print();
    
    p1.eat();
    p1.print();//weight different weight
    
    p1.ageMe();
    p1.print();//new age = 1
    
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
