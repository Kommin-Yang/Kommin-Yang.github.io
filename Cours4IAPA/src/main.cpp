#include <iostream>
#include "FooLib.h"

int main()
{
    std::cout << "Hello, World!" << std::endl;
    FooLib foo = FooLib();
    foo.print();
    foo.test2();
    system("pause");
    return 0;
}
