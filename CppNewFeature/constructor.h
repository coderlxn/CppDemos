//
//  constructor.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/6.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef constructor_h
#define constructor_h

class Info {
public:
    Info() { InitReset(); }
    Info(int i) : Info() { type = i; }  //通过调用无参构造函数，可以减少构造函数内容的重写
    Info(char e) : Info() { name = e; }  //委派构造函数和初始化列表不能同时存在，使用委派构造函数后，初始化代码需要放在函数体中
    
private:
    int type { 1 };         //初始化成员变量
    char name { 'a' };
    
    void InitReset() {}
    
};


#include <list>
#include <vector>
#include <deque>
using namespace std;

class TDConstructed {
    template<class T> TDConstructed(T first, T last):
    l(first, last) {}
    
    list<int> l;
    
public:
    TDConstructed(vector<short>& v):
    TDConstructed(v.begin(), v.end()) {}
    
    TDConstructed(deque<int>& d):
    TDConstructed(d.begin(), d.end()) {}
};


#endif /* constructor_h */
