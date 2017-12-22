//
//  main.cpp
//  CppDemos
//
//  Created by 李晓宁 on 16/4/18.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>

class A {
public:
    virtual void Fun() {}
    void Fun1() {}
    void Fun2() {}
    bool b1;
    char a;
    int i;
    bool b2;
    int c;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::cout << "Size of A : " << sizeof(A) << std::endl;
    
    return 0;
}
