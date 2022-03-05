//
//  platypus.cpp
//  
//
//  Created by Filipp on 3/3/22.
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
