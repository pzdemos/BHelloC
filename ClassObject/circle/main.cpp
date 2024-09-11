//
// Created by dell on 2024-09-11.
//
#include<iostream>
#include "Circle.h"
#include "Point.h"
using namespace std;
/*设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。*/
/**
 * analyze
 * 圆内
 * 圆上
 * 圆外
 * @return
 */
/*class Point{
public:
    void setX(int x){
        pointX = x;
    }
    int getX(){
        return pointX;
    }
    void setY(int y){
        pointY = y;
    }
    int getY(){
        return pointY;
    }
private:
    int pointX;
    int pointY;
};
class Circle{
public:
//    void setX(int x){
//        circleX = x;
//    }
//    int getX(){
//        return circleX;
//    }
//    void setY(int y){
//        circleY = y;
//    }
//    int getY(){
//        return circleY;
//    }
    void setR(int r){
        circleR = r;
    }
    int getR(){
        return circleR;
    }
    void setCenter(Point c){
    circleCenter = c;
    }
    Point getCenter(){
        return circleCenter;
    }
private:
    int circleR;//圆半径
    *//*圆心坐标*//*
//    int circleX;
//    int circleY;
    Point circleCenter;//?类中可以让另一个类作为本类的成员

};*/

void judgeCirclePointRelationship(Circle &c,Point &p){
    int distance =  (p.getX()-c.getCenter().getX())*(p.getX()-c.getCenter().getX()) +
            (p.getY()-c.getCenter().getY())*(p.getY()-c.getCenter().getY());
    int circleR2 = c.getR()*c.getR();
    if(distance > circleR2){
        cout<< "该点在圆外"<<endl;
    }
    else if(distance <circleR2)
    {
        cout<< "该点在圆内"<<endl;
    }
    else{
        cout<< "该点在圆上"<<endl;
    }
}
int main(){
    Circle c;
    c.setR(2);
    Point center;
    center.setX(4);
    center.setY(4);
    c.setCenter(center);

    Point p;
    p.setX(4);
    p.setY(6);



    judgeCirclePointRelationship(c,p);

}