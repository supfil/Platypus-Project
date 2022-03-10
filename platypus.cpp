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

//  this function adds a random ammount of weight to the Platypus
void Platypus::eat()
{
    //  variables
    float percentage,
          weightAdded;
    
    percentage = randomNum(50, 1000);
    weightAdded = weight * percentage;
    
    weight += weightAdded;
}

//  this function restarts a Platypus, random name, random weight,
//  random gender
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
    
    //  name
    name = setRandomName(gender);
    
    //  weight
    weight = randomNum(10, 10);
}

//  this is the random name generator, uses randomNum()
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
    srand(time(NULL));  // set up the seed
    
    return ((rand() % modula) + 1) / divided;
}
