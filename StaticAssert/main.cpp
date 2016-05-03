//
//  main.cpp
//  Cpp11
//
//  Created by 李晓宁 on 16/1/21.
//  Copyright © 2016年 李晓宁. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

const char* hello() { return __func__; }   //获取函数的名称
const char* world() { return __func__; }


struct TestStruct {
    TestStruct(): name(__func__) {}
    const char* name;
};

#define LOG(...) { \
fprintf(stderr,"%s: Line %d:\t", __FILE__, __LINE__);\
fprintf(stderr, __VA_ARGS__);\
fprintf(stderr,"\n");\
}


////静态断言
#define assert_static(e) \
do { \
enum { assert_static__ = 1/(e) }; \
} while (0)

template <typename T, typename U>
int bit_copy(T& a, U& b) {
    //    static_assert(sizeof(b) == sizeof(a), "size do not match");
    memcpy(&a, &b, sizeof(b));
}



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    cout << "Standard Clib: " << __STDC_HOSTED__ << endl;
    cout << "Standard C: " << __STDC__ << endl;
    //cout << "ISO/IEC " << __STDC_ISO_10646 << endl;
    
    //
    cout << hello() << ", " << world() << endl;
    
    //
    TestStruct ts;
    cout << ts.name << endl;
    
    ////////
    int x = 3;
    LOG("x = %d", x);
    
    
    ///
    //    int a = 0x2468;
    //    double b;
    //    bit_copy(a, b);
    
    return 0;
}
