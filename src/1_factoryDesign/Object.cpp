#include <iostream>
#include <string>

class Toy {
protected:
    std::string name;
    float price;
public: 
    virtual void  prepareParts() = 0;
    virtual void combineParts() = 0;
    virtual void assembleParts() = 0;
    virtual void applyLable() = 0;
    virtual void showProduct() = 0;

};

class Car: public Toy {
    //make all constrctor private or protected !!
    public:
        void prepareParts() {std::cout << "preparing car parts" << std::endl;}
        void combineParts() {std::cout << "combining car parts" << std::endl;}
        void assembleParts() {std::cout << "assmbling car parts"<< std::endl;}
        void applyLable() {
            std::cout << "applying car label" << std::endl;
            name = "Car";
            price = 10;
        }
        void showProduct() {std::cout << "Name: " << name << std::endl << "price:" << price <<std::endl;}
};

class Bike: public Toy {
    //make all constrctor private or protected !!
    public:
        void prepareParts() {std::cout << "preparing Bike parts" << std::endl;}
        void combineParts() {std::cout << "combining Bike parts" << std::endl;}
        void assembleParts() {std::cout << "assmbling Bike parts"<< std::endl;}
        void applyLable() {
            std::cout << "applying Bike label" << std::endl;
            name = "Bike";
            price = 3;
        }
        void showProduct() {std::cout << "Name: " << name << std::endl << "price:" << price <<std::endl;}
};

class Plane: public Toy {
    //make all constrctor private or protected !!
    public:
        void prepareParts() {std::cout << "preparing Plane parts" << std::endl;}
        void combineParts() {std::cout << "combining Plane parts" << std::endl;}
        void assembleParts() {std::cout << "assmbling Plane parts"<< std::endl;}
        void applyLable() {
            std::cout << "applying Plane label" << std::endl;
            name = "Plane";
            price = 30;
        }
        void showProduct() {std::cout << "Name: " << name << std::endl << "price:" << price <<std::endl;}
};