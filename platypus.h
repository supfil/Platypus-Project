/*
//  File Name:  platypus.h
//  Authors:    William, Filipp

 
 
 ////////////////////////////////////////////////////////////
 
 //     Constructors & Deconstructor
 Platypus();
    Precondition:   an instance of a Platypus is declared
    Postcondition:  sets weight to MAX_WEIGHT, age to 0, name to "",
                    gender to 'M', alive and mutant to false.
 Platypus(string, float, short, char);
    Precondition:   an instance of a Platypus is declared with
                    parameter values inserted.
    Postcondition:  sets weight, age, name, gender to parameter
                    values, alive set to true and mutant set to false
 ~Platypus() {}
    Precondition:   block ends
    Postcondition:  Platypus is removed from memory.
 
 //     Mutators
 void setWeight(float w) { weight = w; }
    Precondition:   a Platypus instance exists
    Postcondition:  weight set to parameter value
 void setAge(short a) { age = a; }
    Precondition:   a Platypus instance exists
    Postcondition:  age set to parameter value
 void setName(string n) { name = n; }
    Precondition:   a Platypus instance exists
    Postcondition:  name set to parameter value
 void setGender(char g) { gender = g; }
    Precondition:   a Platypus instance exists
    Postcondition:  gender set to parameter value
 void setAlive(bool a) { alive = a; }
    Precondition:   a Platypus instance exists
    Postcondition:  alive set to parameter value
 void setMutant(bool m) { mutant = m; }
    Precondition:   a Platypus instance exists
    Postcondition:  mutant set to parameter value
 
 //     Accessors
 void getWeight() { return weight; }
    Precondition:   a Platypus instance exists
    Postcondition:  returns weight
 void getAge() { return age; }
    Precondition:   a Platypus instance exists
    Postcondition:  returns age
 void getName() { return name; }
    Precondition:   a Platypus instance exists
    Postcondition:  returns name
 void getGender() { return gender; }
    Precondition:   a Platypus instance exists
    Postcondition:  returns gender
 void getAlive() { return alive; }
    Precondition:   a Platypus instance exists
    Postcondition:  returns alive
 void getMutant() { return mutant; }
    Precondition:   a Platypus instance exists
    Postcondition:  returns mutant
 
 //     Helper Functions
 void print();
    Precondition:   a Platypus instance exists
    Postcondition:  shows all private variables in a nice and
                    easy to read user interface.
 void ageMe();
    Precondition:   a Platypus instance exists
    Postcondition:  incremates the age by 1 and having a 2% chance of
                    setting mutant to true. Along with a chance of
                    setting alive to false, the chance depends on the
                    Platypus objects weight multiplied by 10.
                    example weight 3, chance of death = 30%.
 void fight(Platypus);
    Precondition:   2 Platypus instance exists
    Postcondition:  the calling Platypus attacks the Platypus that is
                    passed in. the victor is decided by a fight ratio
                    which is decided by
                    (calling_platypus_weight/other_platypus_weight)*50
                    and a random number will be generated, from 1 to
                    100, if the random number is higher than the fight
                    ratio, then the calling Platypus dies/loses,
                    however if it is lower than the Platypus wins/
                    survives.
 void eat();
    Precondition:   a Platypus instance exists
    Postcondition:  increases the weight variable by a random amount
                    from  0.1% to 5% of the Platypus objects current
                    weight.
 void hatch();
    Precondition:   a Platypus instance exists
    Postcondition:  it will set age to 0, alive to true and mutant to
                    false.
                    gender randomly selected from 'F' to 'M'(50/50
                    chance), weight will randomly be selected from
                    0.1 to 1 pound, finally names will be determined
                    from its gender, two files containing names for
                    female and male Platypus (name will be randomlly
                    selected from the file that its gender is)
 
 //////////////////////////////////////////////////////////////
 */
 
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
    //  constructors
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
    
    // helper functions
    void print();
    void ageMe();
    void fight(Platypus);
    void eat();
    void hatch();
};

#endif
