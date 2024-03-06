#ifndef __io__
#define __io__
#include <iostream>
#endif

class Tire {
protected:
    std::string name;
    int presure;
public: 
    Tire(std::string n, int presure):name(n), presure(presure){};
    std::string getName() { return name;}
    int getPresure() {return presure;}
};

class SimpleTire:public Tire {
public:
    SimpleTire(): Tire("SimpleTire", 75) {}
};

class LuxuryTire : public Tire {
public:
    LuxuryTire(): Tire("LuxuryTire", 100) {}
};

class Body {
protected:
    std::string name;
    int strength;
public:
    Body(std::string n, int strength): name(n) , strength(strength) {}
    std::string getName() {return name;}
    int getStrenth() {return strength;}
};

class SimpleBody: public Body {
public:
    SimpleBody(): Body("SimpleBody", 75) {}
};


class LuxuryBody: public Body {
public:
    LuxuryBody(): Body("LuxuryBody", 100) {}
};

class Car {
protected:
    std::string name;
    Tire* tire;
    Body* body;
public:
    Car(std::string n): name(n) {}
    void setTire(Tire* t) {tire = t;}
    void setBody(Body* b) {body = b;}
    void printDetails() {
        std::cout << std::endl << "car:" << name << std::endl;
        std::cout << "tire:" << tire->getName() << "pressure:" << tire->getPresure() << std::endl;
        std::cout << "Body:" << body->getName() << "strength:" << body->getStrenth() << std::endl;
    }
};