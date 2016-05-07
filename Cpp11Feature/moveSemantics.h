//
//  moveSemantics.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/6.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef moveSemantics_h
#define moveSemantics_h

#include <iostream>
#include <utility>
using namespace std;

class HasPtrMem {
public:
    HasPtrMem():d(new int(3)) {
        cout << "Construct: " << ++n_cptr << endl;
    }
    
    HasPtrMem(const HasPtrMem& h): d(new int(*h.d)) {
        cout << "Copy construct: " << ++n_cptr << endl;
    }
    
    HasPtrMem(HasPtrMem && h): d(h.d) {             //移动构造函数，将数据转移到当前对象中
        h.d = nullptr;                              //将临时值的指针成员置空
        cout << "Move construct: " << ++n_mvtr << endl;
    }
    
    ~HasPtrMem() {
        delete d;
        cout << "Destruct: " << ++n_dstr << endl;
    }
    
    
    int *d;
    static int n_cstr;
    static int n_dstr;
    static int n_cptr;
    static int n_mvtr;
};

int HasPtrMem::n_cstr = 0;
int HasPtrMem::n_dstr = 0;
int HasPtrMem::n_cptr = 0;
int HasPtrMem::n_mvtr = 0;

HasPtrMem GetTemp() {
    HasPtrMem h;
    cout << "Resource form " << __func__ << ": " << hex << h.d << endl;
    return h;
}


struct Maythrow {
    Maythrow() {}
    Maythrow(const Maythrow&) {
        cout << "Maythrow copy constructor." << endl;
    }
    Maythrow(Maythrow&&) {
        cout << "Maythrow move constructor." << endl;
    }
};

struct Nothrow {
    Nothrow() {}
    Nothrow(Nothrow&&) noexcept {
        cout << "Nothrow move constructor." << endl;
    }
    Nothrow(const Nothrow&) {
        cout << "Nothrow copy constructor." << endl;
    }
};


#endif /* moveSemantics_h */
