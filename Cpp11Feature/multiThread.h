//
//  multiThread.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/11.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef multiThread_h
#define multiThread_h

#include <atomic>
#include <thread>
#include <iostream>
using namespace std;

atomic_llong total {0};

void func(int) {
    for (long long i = 0; i < 100000000LL; ++i) {
        total += i;
    }
}

void testMultiThread()
{
    thread t1(func, 0);
    thread t2(func, 0);
    
    t1.join();
    t2.join();
    cout << total << endl;
}

#endif /* multiThread_h */
