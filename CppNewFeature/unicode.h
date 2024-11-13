//
//  unicode.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/13.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef unicode_h
#define unicode_h

#include <iostream>
using namespace std;

void testUnicode()
{
    char utf8[] = u8"\u4F60\u597D\u554A";  // u8  UTF-8
    char16_t utf16[] = u"hello";    // u  UTF-16
    char32_t utf32[] = U"hello equals \u4F60\u597D\u554A";  // U  UTF-32
    
    cout << utf8 << endl;
    cout << utf16 << endl;
    cout << utf32 << endl;

    //不同类型的unicode间不能相互使用
//    char32_t u2[] = u"hello";
//    char u3[] = U"hello";
//    char16_t u4[] = u8"hello";
}


#endif /* unicode_h */
