//
// Created by dell on 2024-09-10.
//
/**
 *   ��������������ԣ���װ �̳� ��̬
 * ? ������ͬ���ʵĶ������ǿ��Գ����Ϊ��
*/
/*1.��װ*/
//* �����Ժ���Ϊ��Ϊһ�����壬���������е�����
//* �����Ժ���Ϊ����Ȩ�޿���
#include<iostream>
using namespace std;
// ���һ��Բ�࣬��Բ���ܳ�
// Բ���ܳ��Ĺ�ʽ 2 * PI * R
#define PI 3.14159
class Circle{
    //����Ȩ��
public:
    //����
    int m_r;
    //��Ϊ
    double calculate(){
        return 2 * PI * m_r;
    }
};
//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
class Student{
public://
    //���е����Ժ���Ϊͳһ��Ϊ��Ա
    //���� ��Ա���� ��Ա����
    //��Ϊ ��Ա���� ��Ա����
    //����
    string stuName;
    string stuId;
    string printStuInfo(){
        return "������"+stuName+" ѧ�ţ�"+stuId;
    }
    //��������ֵ
    void setName(string name){
        stuName = name;
    }
    void setId(string Id){
        stuId = Id;
    }
};
// �Ż���ѧ����
int main(){
    /*ͨ��Բ�� ���������Բ������*/
//    ʵ����
    Circle c1;
    c1.m_r = 2;

    cout<< "Բ���ܳ�Ϊ"<<c1.calculate()<<endl;

    Student s1;
//    s1.stuId = "20200220230320";
    s1.setId("20200220230320");
//    s1.stuName = "�վ�";
    s1.setName("�վ�");
    cout<<""<<s1.printStuInfo()<<endl;
}