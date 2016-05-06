//
//  using.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/6.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef using_h
#define using_h

//如果父类有多个构造函数，子类可以使用using关键字来继承父类的构造函数
//而不用逐个重新实现

struct A {
    A(int i) {}
    A(double d, int i) {}
    A(float f, int i, const char* ch) {}
};

struct B : A {
    using A::A;  //继承构造函数
    
    B(double d, int i) : A(d, i) {} //也可以显式定义构造函数，这会阻止类似的隐式构造函数
    
    virtual void ExtraInterface() {}
};

#endif /* using_h */
