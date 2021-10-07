#ifndef _TEA_H_
#define _TEA_H_
#include <iostream>
class Tea {
public:
    void boilWater() { //把水煮沸
        std::cout << "Boiling water\n";
    }
    void steepTeaBag() { // 用沸水浸泡茶叶
        std::cout << "Dripping Coffee through filter\n";
    }
    void addLemon() { // 加柠檬
        std::cout << "Pouring into cup\n";
    }
    void pourInCup() { // 把茶倒进杯子
        std::cout << "Adding Sugar and Milk\n";
    }
private:
    void prepareRecipe() { // 冲泡方法
        boilWater(); 
        steepTeaBag(); 
        pourInCup(); 
        addLemon(); 
    }
};
#endif