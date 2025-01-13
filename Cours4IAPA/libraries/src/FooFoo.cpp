//
// Created by m.fuster on 25/11/2024.
//

#include "FooFoo.h"

#include <iostream>

FooFoo::FooFoo()
{
    std::cout << "FooFoo::FooFoo()" << std::endl;
}

FooFoo::~FooFoo()
{
    std::cout << "FooFoo::~FooFoo()" << std::endl;
}

void FooFoo::print()
{
    std::cout << "FooFoo::print()" << std::endl;
}

void FooFoo::print(int i) const
{
    std::cout << "FooFoo::print(i)" << std::endl;
}
