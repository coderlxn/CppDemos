//
//  bTimer.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/15.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef bTimer_h
#define bTimer_h

#include <vector>
#include <string>
#include <fstream>
#include <boost/timer.hpp>
#include <boost/progress.hpp>
using namespace boost;
using namespace std;

void testTimer()
{
    ////////////////////progress_timer
    progress_timer pt;
    
    
    ////////////////////timer
    timer t;
    std::cout << "max timespan:" << t.elapsed_max() / 3600 << "h" << std::endl;
    cout << "min timespan:" << t.elapsed_min() << "s" << endl;
    
    cout << "now time elapsed:" << t.elapsed() << "s" << endl;
    
    //////////progress_display
    vector<string> v(100);
    v.insert(v.begin(), "This is a huage setence");
    ofstream fs("test.txt");
    
    progress_display pd(v.size());
    
    for (auto it : v)
    {
        fs << it << endl;
        ++pd;
    }
}

#endif /* bTimer_h */
