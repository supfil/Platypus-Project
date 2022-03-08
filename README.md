# Platypus-Project

## Team: Filipp Suprun, William Ho

### Summary:  
    In this project, we attempt to make a platypus simulation, by making a Platypus class.
    
##  Data Dictionary: Variables (with data types)
    static const float MAX_WEIGHT = 10.0; 
    float weight;
    short age;
    string name;
    char gender;
    bool alive;
    bool mutant;
    
## Data Dictionary: Functions (in the platypus.h file)
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
    
## Data Dictionary: Functions (defined in the platypus.cpp file)
    Platypus(); 
    Platypus(string, float, short, char);
    
    void print();
    void ageMe();
    void fight(Platypus);
    void eat();
    void hatch();  
## Data Dictionary: Functions (platypusDriver.cpp)
    Nothing
    
## Responsibilities
### Filipp: 
    In charge of 2 functions. 
    
        -void eat() function.
        -void hatch() function.
### William:  
    In charge of 3 functions. 
    
        -void ageMe() function.
        -void fight(Platypus) function.
        -void print() function.
