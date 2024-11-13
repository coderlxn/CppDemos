//
//  locale.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/14.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef locale_h
#define locale_h

#include <iostream>
#include <locale>
using namespace std;

void testLocale()
{
    locale lc("en_US.UTF-8");
    bool can_cvt = has_facet<codecvt<wchar_t, char, mbstate_t>>(lc);
    if (!can_cvt)
        cout << "Do not support char-wchar_t facet!" << endl;
    
    can_cvt = has_facet<codecvt<char16_t, char, mbstate_t>>(lc);
    if (!can_cvt)
        cout << "Do not support char-char16 facet!" << endl;
    
    can_cvt = has_facet<codecvt<char32_t, char, mbstate_t>>(lc);
    if (!can_cvt)
        cout << "Do not support char-char32 facet!" << endl;
    
    can_cvt = has_facet<codecvt<char, char, mbstate_t>>(lc);
    if (!can_cvt)
        cout << "Do not support char-char facet!" << endl;
}


#endif /* locale_h */
