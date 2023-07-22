#include <vec3.h>
#include <assert.h>
#include <math.h>
#include <cmath>

vec3::vec3()
{
    data[0] = 0;
    data[1] = 0;
    data[2] = 0;
}

vec3::vec3(float x, float y, float z)
{
    data[0] = x;
    data[1] = y;
    data[2] = z;
}

vec3::vec3(const vec3 &other)
{
    *this = other;
}

float vec3::operator[](unsigned int index) const
{
    assert(index >= 0 && index <= 2);
    return data[index];
}

float &vec3::operator[](unsigned int index)
{
    assert(index >= 0 && index <= 2);
    return data[index];
}

vec3 &vec3::operator=(const vec3 &other)
{
    for (int i = 0; i < 3; i++)
        this->data[i] = other.data[i];
    return *this;
}

bool vec3::operator==(const vec3 &other) const
{
    for (int i = 0; i < 3; i++)
        if (this->data[i] != other.data[i])
            return false;
    return true;
}

bool vec3::operator!=(const vec3 &other) const
{
    return !(*this == other);
}