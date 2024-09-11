//
// Created by dell on 2024-09-11.
//
/**
�����������(Cube)
������������������
�ֱ���ȫ�ֺ����ͳ�Ա����
 �ж������������Ƿ���ȡ�*/
#include<iostream>
using namespace std;
class Cube{
public:
    void setLength(double l){
        m_L = l;
       }
   double getLength(){
       return m_L;
    }
    void setWidth(double w){
        m_W = w;
       }
   double getWidth(){
       return m_W;
    }
    void setHeight(double h){
        m_H = h;
       }
   double getHeight(){
       return m_H;
    }

   double CubeArea(){
        int CubeAreaSum = m_H * m_W * 2 + m_H * m_L * 2 + m_L * m_W * 2;
        return CubeAreaSum;
   }
   double CubeBulk(){
       return m_W * m_H * m_L;
    }
    /*��Ա�����ж�*/
    bool isSameByClass(Cube &c){
        if(CubeBulk() == c.CubeBulk()&& CubeArea() == c.CubeArea()){
            return true;
        }else{
            return false;
        }
    }

private:
    double m_L;
    double m_H;
    double m_W;

};
/**
 * ȫ�ֺ����ж�
 * @param c1
 * @param c2
 * @return 1 or 0
 */
bool equal(Cube &c1,Cube &c2){//���ô���?
    if(c1.CubeArea() == c2.CubeArea()&& c1.CubeBulk() == c2.CubeBulk()){
        return true;//���
    }
    return false;//�����

}
int main(){
    Cube c1;
    c1.setHeight(2);
    c1.setLength(5);
    c1.setWidth(4);
//    cout<<"c1�����: "<<c1.CubeArea()<<endl;
//    cout<<"c1���: "<<c1.CubeBulk()<<endl;
    Cube c2;
    c2.setHeight(5);
    c2.setLength(4);
    c2.setWidth(2);
//    cout<<"c2�����: "<<c2.CubeArea()<<endl;
//    cout<<"c2���: "<<c2.CubeBulk()<<endl;

//    ȫ�ֺ����ж�
    cout<< "����������"<<(equal(c1,c2)?"���":"�����")<<endl;
//    ��Ա�����ж�
    cout<< "����������"<<(c1.isSameByClass(c2)?"���":"�����")<<endl;


}
