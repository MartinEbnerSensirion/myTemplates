#ifndef MYCLASS_H
#define MYCLASS_H

#include <Arduino.h>
#include <CircularBuffer.hpp>

template <size_t BUFFER_SIZE>
class myClass
{
private:
    int valA;
    CircularBuffer<int, BUFFER_SIZE> temperatureBuffer;

public:
    constexpr myClass();
    void clearBuffer();
};

#include <myClass.tpp>
#endif // MYCLASS_H