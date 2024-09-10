//
// Created by dell on 2024-09-10.
//
#include<iostream>
using namespace std;
//成员属性设置为私有
/**
 * 可以控制读写权限
 * 对于写可以检查数据有效性
 * @return
 */
class Person{
public:
    //设置姓名
    void setName(string name){
        mName = name;
    }
    //获取姓名
    string getName(){
        return mName;
    }
    void setAge(int age){
        if(age< 0 || age>150){
            cout<<"年龄输入有误"<<endl;
            return;
        }
        mAge = age;
    }
    int getAge(){
        return mAge;
    }
    void setFavourite(string food){
        mFavourite = food;
    }
private:
    string mName;//姓名 可读可写
    int mAge=18;// 年龄 只读 也可以写 age必须在0~100之间
    string mFavourite;//最爱的食物 只写
};

int main(){
    Person p;
    p.setName("照旧");
    p.setFavourite("大鸡腿");//只写，外界不可访问
//    p.mAge = 20;?
    p.setAge(160);
    cout<<"姓名: "<<p.getName()<<endl;
    cout<<"年龄: "<<p.getAge()<<endl;
}