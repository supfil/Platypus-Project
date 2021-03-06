# Platypus-Project

## Team: Filipp Suprun, William Ho

### Summary:  
    In this project, we attempt to make a platypus simulation, by making a Platypus class.
    
##  Data Dictionary: Variables (with data types) 
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
    Platypus intro();  
    char menu(); 
    void eatingFood(Platypus&);
    void grow(Platypus&);
    void platypusFight(Platypus&);
    void quit(char);
    
## Responsibilities
### Filipp: 
    In charge of 4 class functions:
    
        -void eat() function.
        -void hatch() function.
        -string setRandomName(char) private function;
        -float randomNum(int, float) private function;
        
    And 3 driver functions:
    
        -Platypus intro()
        -char menu()
        -void grow(Platypus& myPlatypus)
### William:  
    In charge of 3 class functions. 
    
        -void ageMe() function.
        -void fight(Platypus&) function.
        -void print() function.
        
    And 3 driver functions:
    
        -void eatingFood(Platypus& myPlatypus)
        -void platypusFight(Platypus& myPlatypus)
        -void quit(char answer) 
    
