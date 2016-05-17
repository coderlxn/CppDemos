//
//  constexpr.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/10.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef constexpr_h
#define constexpr_h

#include <iostream>
using namespace std;

constexpr int FibonacciC(int n) {
    return (n == 1) ? 1 : ((n == 2) ? 1 : FibonacciC(n - 1) + FibonacciC(n - 2));
}

void testConstexpr()
{
    cout << "Fib array :" << endl;
    
    int fib[] = {
        FibonacciC(11), FibonacciC(12),
        FibonacciC(13), FibonacciC(14),
        FibonacciC(15), FibonacciC(16)
    };
    
    for (int i : fib)
        cout << i << endl;
}


#endif /* constexpr_h */
