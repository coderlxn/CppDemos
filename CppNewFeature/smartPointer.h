/*
 * Created on Wed Nov 13 2024 by Jax Li
 *
 * Copyright (c) 2024 Dogesot
 */

#include <stdio.h>
#include <iostream>
#include <memory>

using namespace std;

class Object
{
private:
    /* data */
public:
    Object(/* args */);
    ~Object();
};

Object::Object(/* args */)
{
    printf("object created!\n");
}

Object::~Object()
{
    printf("object deleted!\n");
}

void startPointer()
{
    printf("Hello World!\n");

    {
        unique_ptr<Object> obj1 = make_unique<Object>();
        unique_ptr<Object> obj2 = std::move(obj1);
    }

    {
        shared_ptr<Object> obj1 = make_shared<Object>();
        weak_ptr<Object> obj2 = obj1;
        cout << "weak ptr " << obj2.expired() << endl;
        shared_ptr<Object> obj3 = obj1;
        cout << "shared count " << obj3.use_count() << endl;
    }
}