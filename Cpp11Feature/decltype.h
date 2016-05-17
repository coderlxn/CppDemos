//
//  decltype.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/9.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef decltype_h
#define decltype_h

#include <iostream>
#include <type_traits>
using namespace std;

template<typename T1, typename T2>
auto Sum(T1 & t1, T2 & t2) -> decltype(t1 + t2) {
    return t1 + t2;
}


int (*(*pf())())() {
    return nullptr;
}

//auto (*)() -> int (*)()   一个返回函数指针的函数（假设为a函数）
//auto pf1() -> auto (*)()  一个返回a函数的指针的函数
auto pf1() -> auto (*)() -> int (*)() {
    return nullptr;
}


void testDecltype()
{
    auto a = 33;
    auto b = 433.34;
    auto c = Sum(a, b);
    cout << c << endl;
    
    
    cout << is_same<decltype(pf), decltype(pf1)>::value << endl;
}

#endif /* decltype_h */
