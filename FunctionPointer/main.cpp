//
//  main.cpp
//  FunctionPointer
//
//  Created by 李晓宁 on 16/4/18.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>
#include "functionTable.h"

int inc(int a)
{
    return (++a);
}

int multi(int *a, int *b, int *c)
{
    return (*c = *a * *b);
}

typedef int(FUNC1) (int);
typedef int(FUNC2) (int*, int*, int*);


void show(FUNC2 fun, int arg1, int *arg2)
{
    FUNC1 *p = &inc;
    int temp = p(arg1);
    fun(&temp, &arg1, arg2);
    printf("%d\n", *arg2);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a;
    show(multi, 10, &a);
    
    SpaceShip station;
    std::cout << typeid(station).name() << "\n";
    
    return 0;
}
