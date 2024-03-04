#ifndef __io__
#define __io__

#include <iostream>
#endif

#include "Object.cpp"

class ToyFactory {
public:
    static Toy * createToy(int type) {
        Toy* toy = nullptr;
        switch (type) {
            case 1:{
                toy = new Car;
                break;
            }

            case 2: {
                toy = new Bike;
                break;
            }
            case 3: {
                toy = new Plane;
                break;
            }
            default: {
                std::cout << "invalid toy type please re-enter type" << std::endl;
                return nullptr;
            }  
        }
        toy-> prepareParts();
        toy->combineParts();
        toy -> assembleParts();
        toy -> applyLable();

        return toy;
    }

};