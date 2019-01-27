//
//  chronotime.h
//  CppDemos
//
//  Created by 李晓宁 on 1/8/18.
//  Copyright © 2018 Vector Li. All rights reserved.
//

#ifndef chronotime_h
#define chronotime_h

#include <iostream>
#include <chrono>
#include <ctime>

long fibonacci(unsigned n)
{
    if (n < 2)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


void chronotime()
{
    auto start = std::chrono::system_clock::now();
    std::cout << "f(42) = " << fibonacci(42) << '\n';
    auto end = std::chrono::system_clock::now();
    
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    
    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";
}


#endif /* chronotime_h */
