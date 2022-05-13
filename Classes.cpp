//
// Created by Leo Liang on 5/13/22.
//

#include "Classes.h"
#include <iostream>
double Shape::compute_area() {
    return 0;
}

Rectangle::Rectangle(double newLength, double newWidth) : length(length), width(width) {
    if (newLength <= 0){
        throw std::invalid_argument("Length must be greater than 0");
    }
    if (newWidth <= 0){
        throw std::invalid_argument("Width must be greater tha 0");
    }
    length = newLength;
    width = newWidth;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::compute_area() {
    double lhs= getWidth();
    double rhs= getLength();
    return lhs*rhs;
}


double Square::getSide() const{
    return Rectangle::getWidth();
}


