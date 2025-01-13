//
// Created by m.fuster on 25/11/2024.
//

#pragma once
#include "DLLExport.h"

class DLL_API FooFoo
{
public:
    FooFoo();
    ~FooFoo();

    void print();
    void print(int i) const;
};
