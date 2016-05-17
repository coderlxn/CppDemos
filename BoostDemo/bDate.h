//
//  bDate.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/17.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef bDate_h
#define bDate_h

#include <iostream>
#include <boost/date_time/gregorian/gregorian.hpp>
using namespace std;
using namespace boost::gregorian;


void testDateTime()
{
    date d1;
    date d2(2010, 1, 1);
    date d3(2000, Jan, 1);
    date d4(d2);
    
    assert(d1 == date(not_a_date_time));
    assert(d2 == d4);
    assert(d3 < d4);
    
    date d5 = from_string("1999-12-31");
    date d6 = from_string("2005/1/1");
    date d7 = from_undelimited_string("20011118");

    cout << d5 << endl;
    cout << d6 << endl;
    cout << "to string: " << d7 << endl;
    cout << "to simple string: " << to_simple_string(d7) << endl;
    cout << "to iso string: " << to_iso_string(d7) << endl;
    cout << "to iso extended string: " << to_iso_extended_string(d7) << endl;

    cout << day_clock::local_day() << endl;
    cout << day_clock::universal_day() << endl;
    
    date d8(neg_infin); //负无限
    date d9(pos_infin); //正无限
    date d10(not_a_date_time);  //无效日期
    date d11(max_date_time);  //最大可能日期  9999-12-31
    date d12(min_date_time);  //最小可能日期  1400-01-01
    
    cout << d8 << endl;
    cout << d9 << endl;
    cout << d10 << endl;
    cout << d11 << endl;
    cout << d12 << endl;
}

#endif /* bDate_h */
