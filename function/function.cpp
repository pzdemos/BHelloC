//
// Created by dell on 2024-09-09.
//
/**
 * �������
 */
#include <iostream>
using namespace std;

/*1. ������Ĭ�ϲ���*/
/**
 *  ע�⣺1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
 * @param a
 * @param b
 * @param c
 * @return three params sum
 */
int func(int a,int b=20,int c=30){
    return a+b+c;
}
/*�������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���->ֻ����һ��*/
int func2(int a = 10,int b=10);
//int func2(int a=20,int b=20){
//    return a+b
//};

/*2. ����ռλ���� --> only deliver dataType and has defaultValue*/
void func3(int a,int = 10){
    cout<< "this is a func3"<<endl;

}
/*3. �������� ?*/
/**
 * ��������ͬ����߸�����
 * ��������
 * 1 ͬһ���������� ?
 * 2 ����������ͬ?
 * 3 �����������Ͳ�ͬ ���߸�����ͬ ����˳��ͬ?
 * ע�⣺ ��������ֵ������Ϊ�������ص����������ط������Ͳ��ܱ䣩
 * @return
 */
void func4(){
    cout<< "func 4 �ĵ���"<<endl;
}
void func4(int a){
    cout<< "func 4(int a) �ĵ��ã���"<<endl;
}
void func4(double a){
    cout<< "func 4(double a) �ĵ��ã���"<<endl;
}
int main(){
    /*1. ������Ĭ�ϲ���*/
    cout<< func(10,30)<<endl;
    /*2. ����ռλ����*/
    func3(10);
    /*3. ����������*/
    func4();
    func4(10);
    func4(3.14);
//
}