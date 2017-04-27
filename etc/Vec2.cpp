#include <iostream>

class Vec2 {
    private:
        double x, y;
    public:
        Vec2() : x(0), y(0) {}
        Vec2(double x, double y) : x(x), y(y){}
        void print() const {
            cout << '(' << x << ", " << y << ')';
        }
        Vec2 operator+(Vec2 v) const {
            return Vec2(x + v.x, y + v.y);
        }
        Vec2 operator-(Vec2 v) const {
            return Vec2(x - v.x, y - v.y);
        }
	Vec2 operator*(double n) const { // scale
            return Vec2(x * n, y * n);
        }
        double operator*(Vec2 v) const { // dot product
            return x * v.x + y * v.y;
        }
        Vec2 operator+=(Vec2 v) {
            *this = *this + v;
        }
        Vec2 operator-=(Vec2 v) {
            *this = *this - v;
        }
        Vec2 operator*=(double n) {
            *this = *this * n;
        }
        void normalize() {
            double length = length();
            x = x / length;
            y = y / length;
        }
        double length() const {
            return sqrt(*this * *this):
        }
};
