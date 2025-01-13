#include "FooLib.h"
#include <iostream>

FooLib::FooLib()
{
    std::cout << "FooLib::Constructor" << std::endl;
}

FooLib::~FooLib()
{
    std::cout << "FooLib::Destructor" << std::endl;
}

void FooLib::print() const
{
    std::cout << "FooLib::print" << std::endl;
}

void FooLib::test()
{
    std::cout << "FooLib::test" << std::endl;
}

void FooLib::test2()
{
    std::cout << "FooLib::test2" << std::endl;
}
