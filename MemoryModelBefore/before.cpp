//
// Created by dell on 2024-09-02. 内存分区模型--->程序运行前
//
// 不同的区域存放不同的数据，赋予不同的生命周期，给更大的灵活编程
/**
 *  运行前
 * - 代码区：存放函数体的二进制代码，由操作系统进行管理的
    - 全局区：存放全局变量和静态变量以及常量
    运行后
    - 栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
    - 堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
 */
#include<iostream>
using namespace std;
int g_a = 10;
int g_b = 10;
//全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main(){
    int a = 10;
    int b = 10;

    cout<< "局部变量 a 的地址为"<< &a <<endl;
    // 将a的地址强制转换成十进制
//    uintptr_t addr_a = reinterpret_cast<uintptr_t>(&a);
//    std::cout << "局部变量 a 的地址为 " << addr_a << std::endl;
    cout<< "局部变量 b 的地址为"<< &b <<endl;

    cout << "全局变量g_a地址为： " <<  &g_a << endl;
    cout << "全局变量g_b地址为： " <<  &g_b << endl;

    //静态变量   与静态变量距离很近
    static int s_a = 10;
    static int s_b = 10;

    cout << "静态变量s_a地址为： " << &s_a << endl;
    cout << "静态变量s_b地址为： " << &s_b << endl;

    cout << "字符串常量地址为： " << &"hello world" << endl;
    cout << "字符串常量地址为： " << &"hello world1" << endl;

    cout << "全局常量c_g_a地址为： " << &c_g_a << endl;
    cout << "全局常量c_g_b地址为： " << &c_g_b << endl;

    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "局部常量c_l_a地址为： " << &c_l_a << endl;
    cout << "局部常量c_l_b地址为： " << &c_l_b << endl;

    system("pause");

    return 0;

}