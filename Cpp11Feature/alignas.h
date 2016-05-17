//
//  alignas.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/13.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef alignas_h
#define alignas_h

#include <iostream>
using namespace std;

struct ColorVector {
    double r;
    double g;
    double b;
    double a;
};

struct alignas(alignof(double)*4) AlignedColorVector {
    double r;
    double g;
    double b;
    double a;
};

template <typename T>
class FixedCapacityArray {
public:
    void push_back(T t) {}
    //
//    char alignas(T) data[1024] = {0};
};

void testAlignas()
{
    cout << "alignof(ColorVecotr): " << alignof(ColorVector) << endl;
    cout << "alignof(AlignedColorVector): " << alignof(AlignedColorVector) << endl;
}

#endif /* alignas_h */
