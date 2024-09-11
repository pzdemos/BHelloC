//
// Created by dell on 2024-09-11.
//
   #include "Circle.h"
   #include <iostream>

   void Circle::setR(int r) { circleR = r; }
   int Circle::getR() const { return circleR; }
   void Circle::setCenter(const Point& c) { circleCenter = c; }
   Point Circle::getCenter() const { return circleCenter; }
