//
//  main.cpp
//  ObjectCounter
//
//  Created by 李晓宁 on 16/5/3.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>
#include "counter.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Printer* p = Printer::makePrinter();
    const std::type_info& objectType = typeid(*p);
    std::cout << &objectType;
    delete p;
    return 0;
}
