//
//  main.cpp
//  Cpp11Feature
//
//  Created by 李晓宁 on 16/5/6.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>
#include <map>
#include <initializer_list>
#include "constructor.h"
#include "moveSemantics.h"
#include "perfectForward.h"
#include "literalOperator.h"
#include "decltype.h"
#include "templateMeta.h"
#include "constexpr.h"
#include "multiThread.h"
#include "nullptr.h"
#include "lamdba.h"
#include "alignas.h"
#include "unicode.h"
#include "locale.h"
#include "chronotime.h"


void Func(initializer_list<int> iv) {} //通过initializer_list来初始化函数的参数列表

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
    
    
    ////////////////////////通过initializer_list来初始化函数的参数列表，参数列表使用{}包含
    Func({1, 2});
    Func({});
    
//    char x = { 2034 };   //使用列表初始化，在出现类型收窄时会编译失败
    
    ///////////字面量操作符
    literalOperator();
    
    /////////////decltype
//    testDecltype();
    
    
    /////////////////// 模板元编程
//    testTemplateMeta();
    
    ///////////////////变长模板与完美转发
//    templatePerfectMove();
    
    ////////////////常量表达式
//    testConstexpr();
    
    //////////////////多线程
//    testMultiThread();
    
    //////////////////空指针 nullptr
//    testNullptr();
    
    ////////////////////////地址对齐
    testAlignas();
    
    ////////////////////////unicode
    testUnicode();
    
    /////////////////////////locale
    testLocale();
    
    ///////////////////////// chrono 时间
    chronotime();
    
    return 0;
}
