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
void eatingFood(Platypus&);//makes the users Platypus use the eat()
void grow(Platypus&);// this makes the user's platypus grow
void platypusFight(Platypus&);// this makes the user's platypus fight
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
    int bothAliveCounter = 0;
    int p1Wins = 0;
    int p2Wins = 0;
    for (int i = 0; i < 100; i++)
    {
        p1.setAlive(true);
        p2.setAlive(true);
        p1.fight(p2);
        if (p1.getAlive() && p2.getAlive()) 
            bothAliveCounter++;
        else if (p1.getAlive() && !p2.getAlive()) p1Wins++;
        else if (!p1.getAlive() && p2.getAlive()) p2Wins++;
    }
    cout << "Number of times both are alive: " << bothAliveCounter << endl;
    cout << "Number of p1 wins: " << p1Wins << endl;
    cout << "Number of p2 wins: " << p2Wins << endl;
    */
    char decision;
    
    //  create a platypus from user input along with the intro
    Platypus p1;
    p1 = intro();
    
    while(true)
    {
        //  options for the user
        decision = menu();
        
        //  the menu decides what to do
        switch (decision)
        {
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
                quit('n');
                break;
            default:
                cout << "\nSorry that isn't an option, try again\n";
                break;
        }
        
        if (!p1.getAlive()) 
        {
            cout << "Sorry. Your platypus has died." << endl;
            break;
        }
        
    }
    
    return 0;
}

Platypus intro()//this will ask the user for info about thier platypus
{
    Platypus p1;
    p1.hatch;
    
    cout << "\nHello to the platypus simulator!\n\n";
    cout << "to begin, lets make your platypus!\n"
         << "What is the platypus' name?:\t";
    cin >> p1.setName();
    cout << "What gender is it?(has to be 'M' or 'F'):\t";
    cin >> p1.setGender();
    
    cout << "\nOk here is your platypus!\n";
    p1.print();
    
    return p1;
}

char menu() // it will allow the user to pick options for what to do
{
    char choice;
    cout << "\nAlright you have an option of what you can do with "
         << "your platypus." << endl;
    cout << "Enter 'e' to make your platypus eat" << endl
         << "Enter 'g' to make your platypus grow" << endl
         << "Enter 'f' to make your platypus fight a wild platypus"
         << " (be aware it may die!)" << endl
         << "Enter 'q' to quit the program" << endl;
    
    cin >> choice;
    
    return choice;
}

void eatingFood(Platypus& myPlatypus)// makes the users Platypus use the eat()
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

void grow(Platypus& myPlatypus)// this makes the user's platypus grow
{
    
}

void platypusFight(Platypus& myPlatypus)// this makes the user's platypus fight a random platypus
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
