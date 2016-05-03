//
//  main.cpp
//  BuilderDemo
//
//  Created by 李晓宁 on 16/4/18.
//  Copyright © 2016年 Vector Li. All rights reserved.
//

#include <iostream>
#include <memory>
using namespace std;

class BuilderDemo
{
public:
    class Builder
    {
    public:
        int servingSize;
        int servings;
        
        Builder(int servingSize, int servings)
        :servingSize(servingSize),servings(servings)
        {
        }
        
        shared_ptr<BuilderDemo> build()
        {
            return shared_ptr<BuilderDemo>(new BuilderDemo(*this));
        }
    };
    
    void print()
    {
        cout << "servings " << servings << "  servingSize " << servingSize << endl;
    }
    
    ~BuilderDemo()
    {
        cout << "BuilderDemo destruction" << endl;;
    }
private:
    BuilderDemo(const Builder& builder)
    {
        servingSize = builder.servingSize;
        servings = builder.servings;
    }
    
    friend class Builder;
    
private:
    int servingSize;
    int servings;
};


int main()
{
    BuilderDemo::Builder builder(4, 43);
    builder.servingSize = 34;
    builder.servings = 23;
    shared_ptr<BuilderDemo> demo = builder.build();
    demo->print();
}
