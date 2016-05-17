//
//  templateMeta.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/10.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef templateMeta_h
#define templateMeta_h

#include <iostream>
using namespace std;

template <long num>
struct Fibonacci{
    static const long val = Fibonacci<num - 1>::val + Fibonacci<num - 2>::val;
};

template <> struct Fibonacci<2> { static const long val = 1; };
template <> struct Fibonacci<1> { static const long val = 1; };
template <> struct Fibonacci<0> { static const long val = 0; };



//接受非类型的变长模板参数
template <long... nums> struct Multiply;

template <long first, long... last>
struct Multiply<first, last...> {
    static const long val = first * Multiply<last...>::val;
};

template<>
struct Multiply<> {
    static const long val = 1;
};


///////////////////////模板参数包解包

template <typename ... T>
void DummyWrapper(T... t) {}

template <typename T> T pr(T t) {
    cout << t;
    return t;
}

template<typename... A>
void VTPrint(A... a) {
    DummyWrapper(pr(a)...);
}

//////////////////////// 多个模板参数包

template<typename A, typename B> struct S {};

template<
    template<typename...> class T, typename... TArgs
    ,template<typename...> class U, typename... UArgs
    >
    struct S< T< TArgs... >, U< UArgs... > > {};

//////////////////////////



void testTemplateMeta()
{
    cout << "Fib array:" << endl << dec;
    int fib[] = {
        Fibonacci<11>::val, Fibonacci<12>::val,
        Fibonacci<13>::val, Fibonacci<14>::val,
        Fibonacci<15>::val, Fibonacci<16>::val
    };
    
    for (int i : fib)
        cout << i << endl;
    
    cout << Multiply<2, 3, 4, 5>::val << endl;
    cout << Multiply<22, 44, 66, 88, 9>::val << endl;

    VTPrint(1, ", ", 1.2, ", abc \n");
    
    S<int, float> p;
    S<tuple<int, float>, tuple<char>> s;
}


#endif /* templateMeta_h */
