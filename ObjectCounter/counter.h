//
//  counter.h
//  CppDemos
//
//  Created by 李晓宁 on 16/5/3.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#ifndef counter_h
#define counter_h

template <typename BeingCounted>
class Counted {
    
public:
    class TooManyObjects{};
    static int objectCount() { return numObjects; }
    
protected:
    Counted();
    Counted(const Counted& rhs);
    ~Counted() { --numObjects; };
    
    static int numObjects;
    static const size_t maxObjects;
    
private:
    void init();
};


template <typename BeingCounted>
Counted<BeingCounted>::Counted()
{
    init();
}

template <typename BeingCounted>
Counted<BeingCounted>::Counted(const Counted<BeingCounted>&)
{
    init();
}

template <typename BeingCounted>
void Counted<BeingCounted>::init()
{
    if (numObjects > maxObjects) {
        throw TooManyObjects();
    }
    
    ++numObjects;
}

class PrintJob {
    
};


class Printer : private Counted<Printer> {
public:
    static Printer* makePrinter();
    static Printer* makePrinter(const Printer& rhs);
    ~Printer();
    void submitJob(const PrintJob& job);
    void reset();
    void performSelfTest();
    
    
    using Counted<Printer>::objectCount;  //使函数objectCount()对于Printer是public
    using Counted<Printer>::TooManyObjects;
    
private:
    Printer();
    Printer(const Printer& rhs);
    
};


template<typename Printer> const size_t Counted<Printer>::maxObjects = 10;

#endif /* counter_h */
