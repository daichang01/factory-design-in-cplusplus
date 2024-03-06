/*
content
1.AFDP(Abstact factory design pattern)
    AFDP defines an abstract class for creating familiess of related 
    objects but without specifying their concrete sub_class
2.Fundamental Diagram
3.why/when to use AFDP
    1.you need system to be independent of how objucts are created, composed and represented.
    2.show interface not implementation.
    3.system need to be configured with one of the multiple family of bojects
4.UML Diagram
5.Program In C++
*/

#ifndef __io__
#define __io__
#include <iostream>
#endif

#include "Car.cpp"

class CarFactory {
private:
    Car* car;
protected:
    virtual Tire * buildTire() = 0;
    virtual Body * buildBody() = 0;
    //much more product's parts could come here...
public:
    virtual Car* buildWholeCar() = 0;
    
};

class SimpleCarFactory: public CarFactory {
    Tire * buildTire() {
        return new SimpleTire();
    }
    Body* buildBody() {
        return new SimpleBody();
    }
    Car * buildWholeCar() {
        Car* car = new Car("SimpleCar");
        car ->setTire(buildTire());
        car->setBody(buildBody());
        return car;
    }
};

class LuxuryCarFactory: public CarFactory {
    Tire * buildTire() {
        return new LuxuryTire();
    }
    Body* buildBody() {
        return new LuxuryBody();
    }
    Car * buildWholeCar() {
        Car* car = new Car("Luxury");
        car ->setTire(buildTire());
        car->setBody(buildBody());
        return car;
    }
};