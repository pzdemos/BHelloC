//
// Created by dell on 2024-09-11.
//
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"

class Circle {
public:
   Circle() : circleR(0) {}
   void setR(int r);
   int getR() const;
   void setCenter(const Point& c);
   Point getCenter() const;

private:
   int circleR;
   Point circleCenter;
};

#endif //CIRCLE_H

