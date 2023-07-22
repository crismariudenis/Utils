#include <iostream>

class vec3
{
private:
    float data[3];

public:
    vec3();
    vec3(float x, float y, float z);
    vec3(const vec3 &other);

    float operator[](unsigned int index) const;

    float &operator[](unsigned int index);

    vec3 &operator=(const vec3 &other) ;

    bool operator==(const vec3 &other) const;

    bool operator!=(const vec3 &other) const;

    vec3 operator+=(const vec3 &other);
    vec3 operator-=(const vec3 &other);
    vec3 operator*=(const float c);
    vec3 operator/=(const float c);

    vec3 operator+(const vec3 &other) const;
    vec3 operator-(const vec3 &other) const;
    vec3 operator*(const float c) const;
    vec3 operator/(const float c) const;
};

float dor(const vec3 &a, const vec3 &b);

vec3 cross(const vec3 &a, const vec3 &b);

float length(const vec3 &a);

vec3 operator*(float c, const vec3 &a);

std::ostream &operator<<(std::ostream &os, const vec3 &v);