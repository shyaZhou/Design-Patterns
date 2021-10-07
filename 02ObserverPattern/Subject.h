#ifndef _SUBJECT_H_
#define _SUBJECT_H_
class Observer;
struct Subject {
    virtual void registerObserver(Observer *o) = 0; //
    virtual void removeObserver(Observer *o) = 0; // 这两个方法都需要一个观察者作为变量，该观察者是用来注册或是被删除的
    virtual void notifyObserver() = 0; // 当主题状态改变时，这个方法会被调用，1⃣️通知所有的观察者。
};

#endif