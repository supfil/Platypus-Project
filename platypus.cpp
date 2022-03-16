//
//  File Name:  platypus.cpp
//  Authors:    William, Filipp
//
//
//

#include <iostream>
#include <fstream>
#include <cstdlib>//srand (time(NULL)), exit(0);
#include <ctime>
#include "platypus.h"

Platypus::Platypus()
{
    age = 0;
    name = "";
    gender = '\0';
    weight = 0;
    alive = false;
    mutant = false;
    
    srand(time(NULL));  // set up the seed
}

Platypus::Platypus(string n, float w, short a, char g)
{
    //  use a try to make sure the parameters are good
    try
    {
        if (a < 0)
            throw "\nYou need a valid age!\n";
        else if (n == "")
            throw "\nYou need a name!";
        else if (w <= 0)
            throw "\nThe platypus needs a real weight";
        else if (g != 'M')
            if (g != 'F')
                throw "\nIt needs a gender ('F' or 'M')\n";
        
        name = n;
        age = a;
        gender = g;
        weight = w;
        
        alive = true;
        mutant = false;
        
        srand(time(NULL));  // set up the seed
    }
    catch (const char* message)
    {
        cerr << message << endl;
    }
}

//  this function adds a random ammount of weight to the Platypus
void Platypus::eat()
{
    //  checks to see if the platypus is dead, if yes, stops
    try
    {
        if (alive == false)
            throw "\nYou can not feed a dead platypus!\n";
        
        //  variables
        float percentage,
              weightAdded;
        
        percentage = randomNum(50, 1000);
        weightAdded = weight * percentage;
        
        weight += weightAdded;
    }
    catch (const char* message)
    {
        cerr << message << endl;
    }
}

//  this function restarts a Platypus, random name, random weight,
//  random gender
void Platypus::hatch()
{
    //  use a try to determine if the platypus is dead first
    try
    {
        if (alive == true)
            throw "\nYou need a dead platypus to do a hatch()\n";
        
        //  set the variables for a newborn platypus
        age = 0;
        alive = true;
        mutant = false;
        
        //  this uses randomNum() to decide the gender
        float random = randomNum(2,1);
        if (random == 2)
            gender = 'M';
        else
            gender = 'F';
        
        //  name
        name = setRandomName(gender);
        
        //  weight
        weight = randomNum(10, 10);
    }
    catch (const char* message)
    {
        cerr << message << endl;
    }
}

//  this is the random name generator, uses randomNum()
string Platypus::setRandomName(char g)
{
    string newName,
           temp;
    int max = 0,
        random;
    
    ifstream fin;
    
    if (g == 'F')
    {
        fin.open("f_names.txt");
        
        if (!fin)
        {
            cout << "Error opeining input file.\n";
            exit(0);
        }
        
        while (!fin.eof())
        {
            fin >> temp;
            max++;
        }
        
        fin.clear();
        fin.seekg(0, ios::beg);
        
        random = static_cast<int>(randomNum(max, 1));
        for(int i = 0; i < random; i++)
        {
            fin >> newName;
        }
    }
    else
    {
        fin.open("m_names.txt");
        
        if (!fin)
        {
            cout << "Error opeining input file.\n";
            exit(0);
        }
        
        while (!fin.eof())
        {
            fin >> temp;
            max++;
        }
        
        fin.clear();
        fin.seekg(0, ios::beg);
        
        random = static_cast<int>(randomNum(max, 1));
        for(int i = 0; i < random; i++)
        {
            fin >> newName;
        }
    }
    
    fin.close();
    
    return newName;
}

//  this is a helper function that makes a random number
float Platypus::randomNum(int modula, float divided)
{
    return ((rand() % modula) + 1) / divided;
}

void Platypus::print()
{
    string status,
           mutantMsg;
    alive ? status = "Alive" : status = "Dead";
    mutant ? mutantMsg = "True" : mutantMsg = "False";

    cout << "Name: " << name << endl;
    cout << "Status: " << status << endl;
    cout << "Mutant?: " <<  mutantMsg << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << " pounds" << endl;
    cout << "Gender: " << gender << endl;
    cout << endl;

    return;
}

void Platypus::ageMe()
{
    age++;

    // create chance of mutation
    if ((rand() % 100) < 2) 
        mutant = true;
    
    // create chance of death
    float chanceOfDeath = 10 * weight;
    float randNum = (float) rand() / (float) (RAND_MAX/100); // random float [0, 100]
    if (randNum < chanceOfDeath)
        alive = false;
    return;
}

void Platypus::fight(Platypus p2)
{
    float fightRatio = (weight / p2.weight) * 50;
    if ((rand() % 100 + 1) < fightRatio)
        p2.alive = false; 
    else 
        alive = false;
    return;
}