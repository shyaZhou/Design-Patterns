#ifndef _OBSERVER_H_
#define _OBSERVER_H_
struct Observer {
    // 当气象观测值改变时，主题会把这些状态当作方法的参数，传送给观察者
    virtual void update(float temp, float humidity, float pressure) = 0; 
};
#endif