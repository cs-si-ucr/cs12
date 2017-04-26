#include <iostream>

class Vec3 {
    private:
        double x, y, z;
    public:
        Vec3() : x(0), y(0), z(0) {}
        Vec3(double x, double y, double z) : x(x), y(y), z(z) {}
        void print() const {
            cout << '(' << x << ", " << y << ", " << z << ')';
        }
        Vec3 operator+(Vec3 v) const {
            return Vec3(x + v.x, y + v.y, z + v.z);
        }
        Vec3 operator-(Vec3 v) const {
            return Vec3(x - v.x, y - v.y, z - v.z);
        }
	Vec3 operator*(double n) const { // scale
            return Vec3(x * n, y * n, z * n);
        }
        double operator*(Vec3) const; // dot product
        Vec3 operator+=(Vec3);
        Vec3 operator-=(Vec3);
        Vec3 operator*=(double);
        void normalize();
        double length() const;
};
