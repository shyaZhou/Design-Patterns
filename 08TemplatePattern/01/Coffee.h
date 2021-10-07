#ifndef _COFFEE_H_
#define _COFFEE_H_
#include <iostream>
class Coffee {
public:
    void boilWater() { //把水煮沸
        std::cout << "Boiling water\n";
    }
    void brewCoffeeGrinds() { // 用沸水冲泡咖啡
        std::cout << "Dripping Coffee through filter\n";
    }
    void pourInCup() { // 把咖啡倒进杯子
        std::cout << "Pouring into cup\n";
    }
    void addSugarAndMilk() { // 加糖和牛奶
        std::cout << "Adding Sugar and Milk\n";
    }
private:
    void prepareRecipe() { // 冲泡方法
        boilWater(); 
        brewCoffeeGrinds(); 
        pourInCup(); 
        addSugarAndMilk(); 
    }
};
#endif