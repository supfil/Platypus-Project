//
//  File Name:  platypusDriver.cpp
//  Authors:    Filipp, William
//
//
//

#include <iostream>
#include "platypus.h"
#include <cstdlib> // exit()
using namespace std;

Platypus intro();   //this will ask the user for info about thier platypus
char menu(); // it will allow the user to pick options for what to do
void eatingFood(Platypus);//makes the users Platypus use the eat()
void grow(Platypus);// this makes the user's platypus grow
void platypusFight(Platypus);// this makes the user's platypus fight
void quit(char); //  this makes the program stop

int main()
{
    /*
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
    */

    
    char repeat,
         decision;
    
    //  create a platypus from user input along with the intro
    Platypus p1;
    p1 = intro();
    
    while(true)
    {
        //  options for the user
        decision = menu();
        
        //  the menu decides what to do
        switch (decision) {
            case 'e':
                eatingFood(p1);
                break;
            case 'g':
                grow(p1);
                break;
            case 'f':
                platypusFight(p1);
                break;
            case 'q':
                quit(repeat);
                break;
            default:
                cout << "\nSorry that isn't an option, try again\n";
                break;
        }
        
        if (repeat == 'y'||repeat == 'Y')
            break;
    }
    
    
    return 0;
}

Platypus intro()//this will ask the user for info about thier platypus
{
    
}

char menu() // it will allow the user to pick options for what to do
{
    char choice;
    cout << "";
    cin >> choice;
    return choice;
}

void eatingFood(Platypus myPlatypus)//makes the users Platypus use the eat()
{
    
}

void grow(Platypus myPlatypus)// this makes the user's platypus grow
{
    
}

void platypusFight(Platypus myPlatypus)// this makes the user's platypus fight
{
    
}

void quit(char answer) //  this makes the program stop
{
    if (answer == 'n' || answer == 'N') exit(0);
}
