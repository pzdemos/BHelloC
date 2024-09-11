//
// Created by dell on 2024-09-11.
//
#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {
public:
   Point() : pointX(0), pointY(0) {}
   void setX(int x);
   int getX() const;
   void setY(int y);
   int getY() const;

private:
   int pointX;
   int pointY;
};

#endif //POINT_H

