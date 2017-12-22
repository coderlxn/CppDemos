//
//  main.cpp
//  BinaryToHex
//
//  Created by 李晓宁 on 16/7/12.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

template <unsigned long N>
struct binary
{
    static unsigned const value
    = binary<N/10>::value * 2 + N % 10;
};

template <>     //特化
struct binary<0>   //终结递归
{
    static unsigned const value = 0;
};

unsigned binaryToOct1(unsigned long N)
{
    return N == 0 ? 0 : N%10 + 2 * binaryToOct1(N/10);
}

unsigned binaryToOct2(unsigned long N)
{
    unsigned result = 0;
    for (unsigned bit = 0x1; N; N /= 10, bit <<= 1)
    {
        if (N%10)
            result += bit;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    unsigned const one = binary<1>::value;
    unsigned const five = binary<101>::value;
    unsigned const nine = binary<1001>::value;
    unsigned const value = binary<1110>::value;
    
    cout << std::hex << 23434 << endl << one << endl << five << endl << nine << endl << value << endl;
    
    std::cout << "Hello, World!\n";
    return 0;
}
