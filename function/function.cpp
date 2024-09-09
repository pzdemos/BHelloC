//
// Created by dell on 2024-09-09.
//
/**
 * 函数提高
 */
#include <iostream>
using namespace std;

/*1. 函数的默认参数*/
/**
 *  注意：1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
 * @param a
 * @param b
 * @param c
 * @return three params sum
 */
int func(int a,int b=20,int c=30){
    return a+b+c;
}
/*如果函数声明有默认值，函数实现的时候就不能有默认参数->只能有一个*/
int func2(int a = 10,int b=10);
//int func2(int a=20,int b=20){
//    return a+b
//};

/*2. 函数占位参数 --> only deliver dataType and has defaultValue*/
void func3(int a,int = 10){
    cout<< "this is a func3"<<endl;

}
/*3. 函数重载 ?*/
/**
 * 函数名相同，提高复用性
 * 满足条件
 * 1 同一个作用域下 ?
 * 2 函数名称相同?
 * 3 函数参数类型不同 或者个数不同 或者顺序不同?
 * 注意： 函数返回值不可做为函数重载的条件（重载返回类型不能变）
 * @return
 */
void func4(){
    cout<< "func 4 的调用"<<endl;
}
void func4(int a){
    cout<< "func 4(int a) 的调用！！"<<endl;
}
void func4(double a){
    cout<< "func 4(double a) 的调用！！"<<endl;
}
int main(){
    /*1. 函数的默认参数*/
    cout<< func(10,30)<<endl;
    /*2. 函数占位参数*/
    func3(10);
    /*3. 函数的重载*/
    func4();
    func4(10);
    func4(3.14);
//
}