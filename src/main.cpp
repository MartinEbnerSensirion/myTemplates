#include <Arduino.h>
#include <CircularBuffer.hpp>

template <class T>
T sum(T a, T b)
{
    T result;
    result = a + b;
    return result;
}

template <int bufferSize>
class myClass
{
private:
    int foo = bufferSize;

public:
    CircularBuffer<int, bufferSize> myBuffer;
    myClass() {}
    int getFoo()
    {
        return foo;
    }
};

void setup()
{
    Serial.begin(115200);
    while (!Serial)
        ;
    Serial.println("Serial interface started.");
    int a = 12;
    int b = 4;
    int k;
    k = sum<int>(a, b);
    Serial.printf("%d + %d = %d\r\n", a, b, k);

    myClass<123> inst;
    Serial.printf("foo: %d\n", inst.getFoo());
    Serial.printf("BufferSize: %d\n", inst.myBuffer.capacity);
}

void loop()
{
}
