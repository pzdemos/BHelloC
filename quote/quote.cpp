//
// Created by dell on 2024-09-05.
//
/**
 * quote 引用
 * 作用： 给变量起别名
 *语法： 数据类型 &别名 = 原名
 * 本质：**引用的本质在c++内部实现是一个指针常量.** int * const p = 10;
 * 指针指向不能改变，指针指向的值可以改变
 * */
#include<iostream>
using namespace std;
//交换函数
// 1.值传递
void swap01(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    cout<< "swap01->a = "<< a<<endl;
    cout<< "swap01->b = "<< b<<endl;
}
/*2.地址传递*/
void swap02(int * a,int * b){
    int temp = *a;
    * a = * b;
    * b = temp;
};
/*3.引用传递*/
// ⭐总结：通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单
void swap03(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
/*引用做函数的返回值*/
/*1.不要返回局部变量的引用*/
int & test01(){
    int a = 10;//局部变量存放在四区中的栈区
    return a;
}
/*2.函数的调用可以作为左值 */
int & test02(){
    static int a = 10;//⭐静态变量 存放在全局区，全局区上的数据在程序结束后系统释放
    return a;
}

// 常量引用 修饰形参，防止误操作
//打印数据函数
void showValue(const int &val){
//    val = 1000;//无法修改
    cout<< "val="<<val <<endl;

}
/*地址传递*/
int main(){
    /*1.引用的基本语法*/
//    int a = 10;
//    int &b = a;
//    b = 20;
//    cout<<"a = " <<a <<endl;
//    cout<<"b = "<< b <<endl;
//    int *p = &a;
//    cout<< *p <<endl;
//    /*2.引用的注意事项*/
//    // 引用必须初始化，初始化后不可更改
////    int &k;  ❌
//    int c = 30;
//    b = c;//赋值操作，而不是更改引用
//    cout<<"a = " <<a <<endl;
//    cout<<"b = "<< b <<endl;
//    cout<<"c = "<< c <<endl;

/*值传递*/
//    int a = 10;
//    int b = 20;
//
//    swap01(a,b);
//    // 值传递，形参不会修饰实参
//    cout<< "a = "<< a<<endl;
//    cout<< "b = "<< b<<endl;

    /*地址传递*/
//    int c = 20 ;
//    int d = 10 ;
//    swap02(&c,&d);
////    // 值传递，形参不会修饰实参
//    cout<< "c = "<< c<<endl;
//    cout<< "d = "<< d<<endl;

    /*引用传递*/
//    int c = 20 ;
//    int d = 10 ;
//    swap03(c,d);
////    // 值传递，形参不会修饰实参
//    cout<< "c = "<< c<<endl;
//    cout<< "d = "<< d<<endl;

// 引用做函数的返回值 -> ❌不要返回局部变量的引用
//    int &ref = test01();
//    cout << "ref = "<<ref <<endl;  // 内存已被释放

// 函数的调用可以作为左值 ✅
//    int &ref2 = test02();
//    cout<< "ref2 = "<<ref2 <<endl;
//    cout<< "ref2 = "<<ref2 <<endl;
//    test02() = 1000;//如果函数的返回值是引用，这个函数调用也可以作为左值
//    cout<< "ref2 = "<<ref2 <<endl;

//常量引用 修饰形参，防止误操作
    int a = 10;
    // 加上const之后 编译器代码修改 一快临时的值 int temp = 10; int &ref = temp;
   const int &ref = 10;//引用必须引一块合法的内存空间
//    ref = 100; // 加上const之后变为只读，不可以修改
    showValue(a);

}
