//
//  File Name:  platypus.cpp
//  Authors:    William, Filipp
//
//
//

#include <iostream>

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
    srand(time(NULL));  // set up the seed

    //  variables
    float percentage,
          weightAdded;
    
    percentage = ((rand() % 50) + 1) / 1000;
    weightAdded = weight * percentage;
    
    weight += weightAdded;
}

void Platypus::hatch()
{
    
}
