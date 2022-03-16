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
        if (!p1.getAlive()) 
        {
            cout << "Sorry. Your platypus has died." << endl;
            return;
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

void eatingFood(Platypus myPlatypus)// makes the users Platypus use the eat()
{
    int numMeals = rand() % 4;
    if (numMeals == 0) 
    {
        cout << "Your platypus couldn't find any food today. Perhaps they'll find "
             << "better luck tomorrow!" << endl;
        return;
    }
    else 
    {
        for (int i = 0; i < numMeals; i++)
            myPlatypus.eat();
        cout << "Your platypus found " << numMeals << "meals today!" << endl
             << "Its new weight is: " << myPlatypus.getWeight() << " pounds." << endl;
    }
    return;

}

void grow(Platypus myPlatypus)// this makes the user's platypus grow
{
    
}

void platypusFight(Platypus myPlatypus)// this makes the user's platypus fight a random platypus
{
    Platypus randomPlatypus;
    randomPlatypus.hatch();
    myPlatypus.fight(randomPlatypus); 
    if (myPlatypus.getAlive())
    {
        cout << "Your platypus has won a battle against a wild platypus with " 
             << "the following stats: " << endl
             << "Weight: " << randomPlatypus.getWeight() << endl
             << "Age: " << randomPlatypus.getAge() << endl
             << "Gender: " << randomPlatypus.getGender() << endl;
    } 
    return;
}

void quit(char answer) //  this makes the program stop
{
    if (answer == 'n' || answer == 'N') 
    {
        cout << "You've quit the program." << endl;
        exit(0);
    }
}
