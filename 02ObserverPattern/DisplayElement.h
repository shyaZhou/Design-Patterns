#ifndef _DISPLAYELEMENT_H_
#define _DISPLAYELEMENT_H_
struct DisplayElement {
    // DisplayElement接口只包含一个方法，也就是display()。当布告板需要显示时调用此方法。
    virtual void display() = 0;
};
#endif