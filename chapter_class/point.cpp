#include <iostream>
#include "point.hpp"

Point::Point(double x, double y) : x_(x), y_(y) {}

double Point::getX() const {
    return x_;
}

double Point::getY() const {
    return y_;
}

void Point::print() const {
    std::cout << "Point(" << x_ << ", " << y_ << ")" << std::endl;
}
