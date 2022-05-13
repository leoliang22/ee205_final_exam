//
// Created by Leo Liang on 5/13/22.
//

#ifndef EE205_FINAL_EXAM_CLASSES_H
#define EE205_FINAL_EXAM_CLASSES_H

#endif //EE205_FINAL_EXAM_CLASSES_H

class Shape{
public:
    virtual double compute_area();
};

class Rectangle : public Shape{
protected:
    double length;
    double width;

public:
    Rectangle(double newLength, double newWidth);
};