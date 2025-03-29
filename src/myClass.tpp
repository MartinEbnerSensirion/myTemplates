#include <myClass.hpp>

template <size_t BUFFER_SIZE>
constexpr myClass<BUFFER_SIZE>::myClass()
{
}

template <size_t BUFFER_SIZE>
void myClass<BUFFER_SIZE>::clearBuffer()
{
    temperatureBuffer.clear();
}