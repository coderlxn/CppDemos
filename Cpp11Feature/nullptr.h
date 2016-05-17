//
//  nullptr.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/12.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef nullptr_h
#define nullptr_h

#include <cstdio>
#include <cstddef>
using namespace std;

void testNullptr()
{
    nullptr_t my_null;
    printf("%x\n", &my_null);
    
//    printf("%x\n", &nullptr);   //无法通过编译
    
    printf("%d\n", my_null == nullptr);
    
    const nullptr_t && default_nullptr = nullptr;
    printf("%x\n", &default_nullptr);
}


#endif /* nullptr_h */
