//
//  lamdba.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/13.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef lamdba_h
#define lamdba_h

#include <vector>
#include <algorithm>
using namespace std;

int z;
float c;
void Calc(int&, int, float&, float) {}

void TestCalc() {
    int x, y = 3;
    float a, b = 4.0;
    
    int success = 0;
    
    auto validate = [&]() -> bool
    {
        if ((x == y + z) && (a == b + c))
            return 1;
        else
            return 0;
    };
    
    Calc(x, y, a, b);
    success += validate();
    
    y = 1024;
    b = 1e13;
    
    Calc(x, y, a, b);
    success += validate();
}

//////////////////////////////

int Prioritize(int) { return 1; }

int AllWorks(int times) {
    int i;
    int x;
    try {
        for (i = 0; i < times; i++) {
            x += Prioritize(i);
        }
    } catch (...) {
        x = 0;
    }
    
    const int y = [=]{    /////通过执行lambda将值赋值给const变量
        
        return 1;
    }();
    
    return y;
}


void testMutable()
{
    int val;
//    auto const_val_lambda = [=](){ val = 3;}; //无法通过编译
    
    auto mutable_val_lambda = [=]()mutable{ val = 3;};
    
    auto const_ref_lambda = [&]{ val = 3; };
    
    auto const_param_lambda = [&](int v) { v = 3; };
    const_param_lambda(val);
}


vector<int> nums;

void OneCond(int val) {
    for (auto i = nums.begin(); i != nums.end(); i++)
        if (*i == val)
            break;
    
    find_if(nums.begin(), nums.end(), bind2nd(equal_to<int>(), val));
    
    find_if(nums.begin(), nums.end(), [=](int i) {
        return i == val;
    });
}

#endif /* lamdba_h */
