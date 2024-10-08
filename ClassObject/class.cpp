//
// Created by dell on 2024-09-10.
//
/**
 *   面向对象三大特性：封装 继承 多态
 * ? 具有相同性质的对象，我们可以抽象称为类
*/
/*1.封装*/
//* 将属性和行为作为一个整体，表现生活中的事物
//* 将属性和行为加以权限控制
#include<iostream>
using namespace std;
// 设计一个圆类，求圆的周长
// 圆求周长的公式 2 * PI * R
#define PI 3.14159
class Circle{
    //访问权限
public:
    //属性
    int m_r;
    //行为
    double calculate(){
        return 2 * PI * m_r;
    }
};
//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
class Student{
public://
    //类中的属性和行为统一称为成员
    //属性 成员属性 成员变量
    //行为 成员函数 成员方法
    //属性
    string stuName;
    string stuId;
    string printStuInfo(){
        return "姓名："+stuName+" 学号："+stuId;
    }
    //给姓名赋值
    void setName(string name){
        stuName = name;
    }
    void setId(string Id){
        stuId = Id;
    }
};
/*访问权限*/
//公共权限: 成员类内能访问 类外也能访问 public
//保护权限： 类内能访问 类外不能访问 protected? 父传子
//私有权限   类内能访问 类外不能访问 private ? 父私有
class Person{
public:
    string mName;
protected:
    string mCar;
private:
    int mPassWord;
public://private:protected:
    void func(){
        mName="照旧";
        mCar="兰博基尼";
        mPassWord=123456;
    }
};
/**
 * 在C++中 struct和class唯一的区别就在于? 默认的访问权限不同
区别：
* struct 默认权限为公共
* class   默认权限为私有
 */
class C1{
    int man;
};
struct C2{
    int man;
};
int main(){
    /*通过圆类 创建具体的圆（对象）*/
//    实例化
//    Circle c1;
//    c1.m_r = 2;
//    cout<< "圆的周长为"<<c1.calculate()<<endl;
//
//    Student s1;
////    s1.stuId = "20200220230320";
//    s1.setId("20200220230320");
////    s1.stuName = "照旧";
//    s1.setName("照旧");
//    cout<<""<<s1.printStuInfo()<<endl;
//
//    /*访问权限*/
//    Person p1;
//    p1.mName = "jack";
    //?'mCar' is a protected member of 'Person' 权限不足
//    p1.mCar = "BYO";
    // ?'mPassWord' is a private member of 'Person' 权限不足
//    p1.mPassWord=123456;

    /*struct和class的区别*/
    C1 k1;
//    k1.man = 100;//?
    C2 c2;
    c2.man = 100;//?
}