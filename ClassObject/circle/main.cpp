//
// Created by dell on 2024-09-11.
//
#include<iostream>
#include "Circle.h"
#include "Point.h"
using namespace std;
/*���һ��Բ���ࣨCircle������һ�����ࣨPoint����������Բ�Ĺ�ϵ��*/
/**
 * analyze
 * Բ��
 * Բ��
 * Բ��
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
    int circleR;//Բ�뾶
    *//*Բ������*//*
//    int circleX;
//    int circleY;
    Point circleCenter;//?���п�������һ������Ϊ����ĳ�Ա

};*/

void judgeCirclePointRelationship(Circle &c,Point &p){
    int distance =  (p.getX()-c.getCenter().getX())*(p.getX()-c.getCenter().getX()) +
            (p.getY()-c.getCenter().getY())*(p.getY()-c.getCenter().getY());
    int circleR2 = c.getR()*c.getR();
    if(distance > circleR2){
        cout<< "�õ���Բ��"<<endl;
    }
    else if(distance <circleR2)
    {
        cout<< "�õ���Բ��"<<endl;
    }
    else{
        cout<< "�õ���Բ��"<<endl;
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