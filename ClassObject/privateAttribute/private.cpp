//
// Created by dell on 2024-09-10.
//
#include<iostream>
using namespace std;
//��Ա��������Ϊ˽��
/**
 * ���Կ��ƶ�дȨ��
 * ����д���Լ��������Ч��
 * @return
 */
class Person{
public:
    //��������
    void setName(string name){
        mName = name;
    }
    //��ȡ����
    string getName(){
        return mName;
    }
    void setAge(int age){
        if(age< 0 || age>150){
            cout<<"������������"<<endl;
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
    string mName;//���� �ɶ���д
    int mAge=18;// ���� ֻ�� Ҳ����д age������0~100֮��
    string mFavourite;//���ʳ�� ֻд
};

int main(){
    Person p;
    p.setName("�վ�");
    p.setFavourite("����");//ֻд����粻�ɷ���
//    p.mAge = 20;?
    p.setAge(160);
    cout<<"����: "<<p.getName()<<endl;
    cout<<"����: "<<p.getAge()<<endl;
}