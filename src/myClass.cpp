#include "myClass.h"

template <int bufferSize>
myClass<bufferSize>::myClass()
{
}

template <int bufferSize>
int myClass<bufferSize>::getFoo()
{
    return foo;
}