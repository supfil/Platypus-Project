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

void Platypus::eat()
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
    
    //  this uses randomNum() to decide the gender
    float random = randomNum(2,1);
    if (random == 2)
        gender = 'M';
    else
        gender = 'F';
    
    name = setRandomName(gender);
}

string Platypus::setRandomName(char g)
{
    string newName,
           temp;
    int max = 0,
        random;
    
    ifstream fin;
    
    if(g == 'F')
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
        random = static_cast<int>(randomNum(max, 1));
        
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
    
    fin.close();
    
    return newName;
}

float Platypus::randomNum(int modula, float divided)
{
    srand(time(NULL));  // set up the seed
    
    return ((rand() % modula) + 1) / divided;
}
