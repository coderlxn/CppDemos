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

#endif /* perfectForward_h */
