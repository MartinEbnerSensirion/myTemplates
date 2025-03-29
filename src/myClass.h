#ifndef MYCLASS_H
#define MYCLASS_H

#include "CircularBuffer.h" // Include the header for CircularBuffer

template <int bufferSize>
class myClass
{
private:
    int foo = bufferSize;

public:
    CircularBuffer<int, bufferSize> myBuffer;
    myClass();
    int getFoo();
};

#endif // MYCLASS_H