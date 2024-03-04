/*
in software industries, a design pattern is a general repeatable solution to a commonly occrring problem in software design

types:
1. creational degisn pattern 6  
2. behavioral design pattern 12
3. structural design pattern 8

what is FDP
1. it creates object for you , rather you initiating object directly.
2. FDP is also known as "virtual constructor" 虚拟构造函数   c++ doesn't support virtual constructor

how to implement FDP
1.define an interface or an abstract class for creating an object but let the subclasses decide which class to initiate
*/

# include <iostream>


#include "Toyfactory.cpp"

int main() {
    //client code starts
    int type;
    while(1) {
        std::cout << std::endl << "enter type or zero for exit" << std::endl;
        std::cin >> type;
        if (!type) {
            break;
        }
        Toy *v = ToyFactory::createToy(type);
        if (v) {
            v -> showProduct();
            delete v; //删除它是因为在迭代器中迭代执行此操作
        }
    }
    std::cout << "exit:" << std::endl;
    return 0;
}
