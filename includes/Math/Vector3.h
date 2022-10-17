#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
    float x = 0, y = 0, z = 0;
    Vector3(float x, float y, float z);
    Vector3(float *v);
    Vector3();
    ~Vector3();
    float length();
    Vector3 normalize();
    float distanceTo(Vector3 v);
    float fastDistanceTo(Vector3 v);
    Vector3 cross(Vector3 v);
    float dot(Vector3 v);
    Vector3 operator+(Vector3 v);
    Vector3 operator+(float v);
    Vector3 operator-(Vector3 v);
    Vector3 operator-(float v);
    Vector3 operator*(Vector3 v);
    Vector3 operator*(float f);
    Vector3 operator/(Vector3 f);
    Vector3 operator/(float f);
    bool operator<(const Vector3 v) const;
    bool operator==(Vector3 v);
    bool operator!=(Vector3 v);
    float operator[](int i);
    Vector3 rotate(Vector3 axis, float angle);
    float angleTo(Vector3 v);
};

#endif