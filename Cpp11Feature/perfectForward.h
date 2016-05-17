//
//  perfectForward.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/7.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef perfectForward_h
#define perfectForward_h

#include <iostream>
using namespace std;

void RunCode(int && m) { cout << "rvalue ref" << endl; }
void RunCode(int & m) { cout << "lvalue ref" << endl; }
void RunCode(const int && m) { cout << "const rvalue ref" << endl; }
void RunCode(const int & m) { cout << "const lvalue ref" << endl; }

template <typename T>
void PerfectForward(T && t) { RunCode(forward<T>(t)); }


////////////////

template <typename T, typename U>
void PerfectForward(T &&t, U& Func) {
    cout << t << "\tforwarded..." << endl;
    Func(forward<T>(t));
}

void RunCade(double && m) {}
void RunHome(double && n) {}
void RunComp(double && n) {}


///////////////////////变长模板与完美转发

struct A {
    A() {}
    A(const A& a) { cout << "Copy Constructed " << __func__ << endl; }
    A(A&& a) { cout << "Move Constructed " << __func__ << endl; }
};

struct B {
    B() {}
    B(const B& a) { cout << "Copy Constructed " << __func__ << endl; }
    B(B&& a) { cout << "Move Constructed " << __func__ << endl; }
};

//变长模板定义
template<typename... T> struct MultiTypes;
template<typename T1, typename... T>
struct MultiTypes<T1, T...> : public MultiTypes<T...> {
    T1 t1;
    MultiTypes<T1, T...>(T1 a, T... b):
        t1(a), MultiTypes<T...>(b...) {
            cout << "MultiTypes<T1, T...>(T1 a, T... b)" << endl;
        }
};
template<> struct MultiTypes<> {
    MultiTypes<>() { cout << "MultiTypes<>()" << endl; }
};
//完美转发的变长模板
template<template <typename...> class VariadicType, typename... Args>
VariadicType<Args...> Build(Args&&... args)
{
    return VariadicType<Args...>(forward<Args>(args)...);
}

void templatePerfectMove()
{
    A a;
    B b;
    
    Build<MultiTypes>(a, b);
}

////////////////////////

#endif /* perfectForward_h */
