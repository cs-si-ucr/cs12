#include <iostream>
#include <cmath>

class Point {
    private:
        double x, y;
    public:
        Point() : x(0), y(0) {}
        Point(double x, double y) : x(x), y(y){}
        void print() const {
            cout << '(' << x << ", " << y << ')';
        }
        Point operator+(Point v) const {
            return Point(x + v.x, y + v.y);
        }
        Point operator-(Point v) const {
            return Point(x - v.x, y - v.y);
        }
        Point operator*(double n) const {
            return Point(x * n, y * n);
        }
        double operator*(Point v) const {
            return x * v.x + y * v.y;
        }
        Point operator+=(Point v) {
            *this = *this + v;
        }
        Point operator-=(Point v) {
            *this = *this - v;
        }
        Point operator*=(double n) {
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
        double getX() const {
            return x;
        }
        double getY() const {
            return y;
        }
};
