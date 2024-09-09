//
// Created by dell on 2024-09-03. 内存分区模型--->程序运行后
//
/**
 *
    运行后
    - 栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
    ⭐注意事项：不要返回局部变量的地址，栈区开辟的数据又编译器自动释放
    - 堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
 */
 /*栈区*/
//#include<iostream>
//using namespace std;
//int * func(int b){//形参数据也会存放在栈区
//    b = 100;
//    int a = 10;// 局部变量 存放在栈区，栈区的数据在函数执行完成后自动释放
//
//    return &a;//返回局部变量的地址
//
//}
//int main(){
//    int * p = func(1);
//    cout<< p <<endl;
//}
/*堆区开辟数据*/
#include<iostream>
using namespace std;
int * func(){
//    利用⭐new关键字，可以将数据开辟到堆区
// 指针 本质也是局部变量 ，放到栈上，指针保存的数据放在堆区
   int * p = new int(10);//返回的是该类型的指针
    return p;
}
/*1.new基本语法*/
void test01(){
    int * p = func();
    cout<< *p <<endl;
    cout<< *p <<endl;
    cout<< *p <<endl;
    delete p;//释放堆区的 p
//    cout<< *p <<endl; 内存已被释放，再次访问就是非法操作
}
/*2.在堆区利用new开辟数组*/
void test02(){
   int * arr =  new int[10];//创建一个数组含十个元素
    for (int i = 0; i < 10; i++) {
        arr[i] = i+100;//给十个元素赋值
    }
    for (int i = 0; i < 10; i++) {
        cout<< arr[i]<<endl;
    }
    delete [] arr;//释放数组要加中括号
}
int main(){
//   int *p = func();
//   cout<< *p<< endl;
//   cout<< *p<< endl;
//   cout<< *p<< endl;
//   cout<< *p<< endl;
/*堆区的数据由程序员管理开辟，程序员管理释放*/
/*释放 ：delete */
    test01();


    test02();

}