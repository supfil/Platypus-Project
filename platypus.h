//
//  File Name:  platypus.h
//  Authors:    William, Filipp
//
//
//

#ifndef PLATYPUS_H
#define PLATYPUS_H

#include <string>
#include <stdlib>//srand (time(NULL));
#include <ctime>
using namespace std;

class Platypus
{
private:
    static const float MAX_WEIGHT = 10.0;
    float weight;
    short age;
    string name;
    char gender;
    bool alive;
    bool mutant;
public:
    Platypus();
    Platypus(string, float, short, char);
    ~Platypus() {}
    
    //  mutators
    void setWeight(float w) { weight = w; }
    void setAge(short a) { age = a; }
    void setName(string n) { name = n; }
    void setGender(char g) { gender = g; }
    void setAlive(bool a) { alive = a; }
    void setMutant(bool m) { mutant = m; }
    
    //  accessors
    void getWeight() { return weight; }
    void getAge() { return age; }
    void getName() { return name; }
    void getGender() { return gender; }
    void getAlive() { return alive; }
    void getMutant() { return mutant; }
    
    // nonmember functions
    void print();// you
    void ageMe();// you
    void fight(Platypus);// you
    void eat();//   me
    void hatch();// me
};

#endif /* platypus_h */
