//
//  chapter2.h
//  CppDemos
//
//  Created by 李晓宁 on 16/7/12.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef chapter2_hpp
#define chapter2_hpp

#include <stdio.h>

template <class T>
struct iterator_traits {
    typedef typename T::value_type value_type;
};

template <typename ForwardItemrator1, typename ForwardItemrator2>
void iter_swap(ForwardItemrator1 i1, ForwardItemrator2 i2)
{
    typename iterator_traits<ForwardItemrator1>::value_type tmp = *i1;
    *i1 = *i2;
    *i2 = tmp;
}

void f(int* i1, int* i2)
{
    iter_swap(i1, i2);
}

#endif /* chapter2_hpp */
