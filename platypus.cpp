//
//  File Name:  platypus.cpp
//  Authors:    William, Filipp
//
//
//

#include <iostream>
#include <fstream>
#include <cstdlib>  // exit()

Platypus::Platypus()
{
    age = 0;
    name = "Dead";
    gender = 'M';
    weight = MAX_WEIGHT;
    alive = false;
    mutant = false;
}

Platypus::Platypus(string n, float w, short a, char g)
{
    age =a;
    name = n;
    gender = g;
    weight = w;
    alive = true;
    mutant = false;
}

void PlatyPus::eat()
{
    //  variables
    float percentage,
          weightAdded;
    
    percentage = randomNum(50, 1000);
    weightAdded = weight * percentage;
    
    weight += weightAdded;
}

void Platypus::hatch()
{
    //  set the variables for a newborn platypus
    age = 0;
    alive = true;
    mutant = false;
    
    gender = setRandomGender();
    
    name = setRandomName(gender);
}

string Platypus::setRandomName(char g)
{
    string newName;
    
    ifstream fin;
    
    if(g == 'F')
    {
        fin.open("f_names.txt");
        
        if (!fin)
        {
            cout << "Error opeining input file.\n";
            exit(0);
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
    }
    
    
    return newName;
}

char Platypus::setRandomGender()
{
    char newGender;
    float random = randomNum(2,1);
    
    if (random == 2)
        newGender = 'M';
    else
        newGender = 'F';
    
    return newGender;
}

float Platypus::randomNum(float modula, float divided)
{
    srand(time(NULL));  // set up the seed
    
    return ((rand() % modula) + 1) / divided;
}
