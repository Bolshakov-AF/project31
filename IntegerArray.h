#ifndef ARRAY_H
#define ARRAY_H

#include <assert.h> 

template <class T> 
class IntegerArray
{
private:
    int m_length;
    T* m_data;

public:
    IntegerArray()
    {
        m_length = 0;
        m_data = nullptr;
    }

    IntegerArray(int length)
    {
        m_data = new T[length];
        m_length = length;
    }

    ~IntegerArray()
    {
        delete[] m_data;
    }

    void Erase()
    {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }


    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    
    int getLength(); 
};

template <typename T> 
int IntegerArray<T>::getLength() { return m_length; } 

#endif