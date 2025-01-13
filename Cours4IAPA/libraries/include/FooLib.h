#ifndef FOOLIB_H
#define FOOLIB_H
#include "DLLExport.h"

class DLL_API FooLib
{
public:
    FooLib();
    ~FooLib();

    void print() const;
    void test();
    void test2();
};

#endif //FOOLIB_H
