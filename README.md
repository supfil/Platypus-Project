# Platypus-Project

## Team: Filipp Suprun, William Ho

### Summary:  
    In this project, we attempt to make a platypus simulation, by making a Platypus class.
    
##  Data Dictionary: Variables (with data types)
    static const int MAX_WEIGHT = 10; 
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
    float getWeight() { return weight; }
    short getAge() { return age; }
    string getName() { return name; }
    char getGender() { return gender; }
    bool getAlive() { return alive; }
    bool getMutant() { return mutant; }
    
    // helper functions
    void print();
    void ageMe();
    void fight(Platypus);
    void eat();
    void hatch();  
    
    //  private functions
    string setRandomName(char);
    float randomNum(int, float);
    
## Data Dictionary: Functions (defined in the platypus.cpp file)
    Platypus(); 
    Platypus(string, float, short, char);
    
    void print();
    void ageMe();
    void fight(Platypus);
    void eat();
    void hatch();  
    
    string setRandomName(char);
    float randomNum(int, float);
## Data Dictionary: Functions (platypusDriver.cpp)
    Nothing
    
## Responsibilities
### Filipp: 
    In charge of 4 functions. 
    
        -void eat() function.
        -void hatch() function.
        -string setRandomName(char) private function;
        -float randomNum(int, float) private function;
### William:  
    In charge of 3 functions. 
    
        -void ageMe() function.
        -void fight(Platypus) function.
        -void print() function.
