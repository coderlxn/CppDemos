//
//  main.cpp
//  Cpp11Feature
//
//  Created by 李晓宁 on 16/5/6.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>
#include <map>
#include "constructor.h"
#include "moveSemantics.h"
#include "perfectForward.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Info i;
    
    HasPtrMem a = GetTemp();
    cout << "Resource form " << __func__ << ": " << hex << a.d << endl;
    
    Maythrow m;
    Nothrow n;
    
    Maythrow mt = move_if_noexcept(m);  //如果移动构造函数会抛出异常则使用拷贝构造函数代替
    Nothrow nt = move_if_noexcept(n);
    
    ////////////完美转发
    int a1;
    int b;
    const int c = 1;
    const int d = 0;
    
    PerfectForward(a1);
    PerfectForward(move(b));
    PerfectForward(c);
    PerfectForward(move(d));
    
    /////通过完美转发做包装函数
    PerfectForward(1.5, RunComp);
    PerfectForward(9, RunCade);
    PerfectForward(1.5, RunHome);
    
    
    //初始化列表  通过{} 进行列表初始化
    int arrayA[] = {1, 3, 5};
    int arrayB[] {2, 4, 6};
    vector<int> vectorC{1, 3, 5};
    map<int, float> mapD = {{1, 1.0f}, {2, 2.0f}, {5, 3.2f}};
    
    return 0;
}
