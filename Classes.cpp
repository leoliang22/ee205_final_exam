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
        throw std::invalid_argument("length cannot be less than 0");
    }
    if (newWidth <= 0){
        throw std::invalid_argument("Width cannot be less than 0");
    }
    length = newLength;
    width = newWidth;
}
