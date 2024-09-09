#include <iostream>
using namespace std;
#define MAX 1000 /*����¼������*/
/**
 * ��ҵԱ������ϵͳ
 */
/*չʾ�˵�*/
void showMenu(){
    cout <<"================================="<<endl;
    cout <<"=======   1�����Ա��   ===========" <<endl;
    cout <<"=======   2����ʾԱ��   ===========" <<endl;
    cout <<"=======   3��ɾ��Ա��   ===========" <<endl;
    cout <<"=======   4������Ա��   ===========" <<endl;
    cout <<"=======   5���޸�Ա��   ===========" <<endl;
    cout <<"=======   6�����Ա��   ===========" <<endl;
    cout <<"=======   0���˳�ϵͳ   ===========" <<endl;
    cout <<"=================================" <<endl;
};
/*Ա���ṹ��*/
struct employee{
    string name;
    int gender;// 1 �� 2 Ů
    int age;
    string phone;
    string address;
    string department;/*��������*/
};
/*�����ṹ��*/
struct MsTable{
    /*�����Ա������*/
    employee personArray[MAX];
    /*��ǰ��¼����*/
    int record;
};
/*���Ա��*/
void add(MsTable * mst){
    if(mst->record == MAX){
        cout<< "��¼�������޷����"<<endl;
        return;
    }else{
        string name;
        cout<< "����������:" <<endl;
        cin>>name;
        mst->personArray[mst->record].name  = name;

        int gender = 0;
        cout<< "�������Ա�:(1-->�� 0-->Ů)" <<endl;
        while(true){
            cin>>gender;
            if((gender == 1 || gender == 2)) {
                mst->personArray[mst->record].gender  = gender;
                break;
            }
            cout<<"�����������������룡��"<<endl;
        }

        int age = 18;
        cout<< "����������" <<endl;
        while(true){
            cin>>age;
            if((age >= 18 && age <= 60)) {
                mst->personArray[mst->record].age  = age;
                break;
            }
            cout<<"�����������������룡��"<<endl;
        }

        string phone;
        cout<< "�������ֻ���:" <<endl;
        cin>>phone;
        mst->personArray[mst->record].phone  = phone;

        string address;
        cout<< "�������ַ:" <<endl;
        cin>>address;
        mst->personArray[mst->record].address  = address;

        string department;
        cout<< "��������������:" <<endl;
        cin>>department;
        mst->personArray[mst->record].department  = department;

        mst->record ++;
        cout<<"add successful!!"<<endl;
//        system("pause");
//        system("cls");
    }

}
/*չʾԱ��*/
void showTable(MsTable * mst){
    if(mst->record == 0){
        cout<<"Ա���б�Ϊ��Ŷ����"<<endl;
    }else{
        for (int i = 0; i <mst->record; i++) {
            cout << "����: " << mst->personArray[i].name << "\t "
                 << "�Ա�: " << (mst->personArray[i].gender == 1 ? "��" : "Ů") << "\t "
                 << "����: " << mst->personArray[i].age << "\t "
                 << "�ֻ���: " << mst->personArray[i].phone << "\t"
                 << "��ַ: " << mst->personArray[i].address << "\t "
                 << "����: " << mst->personArray[i].department << std::endl;
        }
    }
//    system("pause");
//    system("cls");

}
/*�ж�Ա���Ƿ���ڡ����������ڣ��򷵻���ϵ�������������λ�ã������ڷ��� -1 */
int isExist(MsTable * mst, string name){
    for (int i =0 ;i < mst->record;i++){
       if(mst->personArray[i].name == name){
           return i;/*������ϵ�������������λ��*/
       }
    }
    return -1;

}
/*ɾ��Ա��*/
void remove(MsTable * mst){
    cout<< "������Ҫɾ������ϵ��"<<endl;
    string name;
    cin >> name;
    int result = isExist(mst,name);
    if(result != -1){
        /*����ɾ������*/
        for(int i = result; i < mst->record;i++){
            /*����ǰ��*/
            mst->personArray[i] = mst->personArray[i+1];
        }
        mst->record--;/*��������*/
        cout<<"ɾ���ɹ�"<<endl;
    }else{
        cout<<"���޴���"<<endl;
    }
//    system("pause");
//    system("cls");


}
/*����Ա��*/
void find(MsTable * mst){
    cout << "������Ҫ���ҵ�Ա������"<<endl;
    string name;
    cin>> name;
    int result = isExist(mst,name);
    if(result != -1){
        cout << "����: " << mst->personArray[result].name << "\t "
             << "�Ա�: " << (mst->personArray[result].gender == 1 ? "��" : "Ů") << "\t "
             << "����: " << mst->personArray[result].age << "\t "
             << "�ֻ���: " << mst->personArray[result].phone << "\t"
             << "��ַ: " << mst->personArray[result].address << "\t "
             << "����: " << mst->personArray[result].department << std::endl;

    }else{
        cout<< "Ա��: "<<name << "������"<<endl;
    }

}
/*�޸�Ա��*/
void change(MsTable * mst){
    cout<< "��������Ҫ�޸�Ա��������"<<endl;
    string name;
    cin >> name;
    int result = isExist(mst,name);
    if(result != -1){
        cout<< "��ʼ�޸�(����ֵ0�س����޸�)" << endl;
        cout<< name <<endl;
        cout<< "�޸�����"<<endl;
        string name;
        cin >> name;
        mst->personArray[result].name = name != "0" ?name:mst->personArray[result].name;

        cout<< "�Ա�(1->��,2->Ů)"<<endl;
        int gender;
        while(true){
            cin>> gender;
            if(gender == 1 || gender == 2){
                cin >> gender;
                mst->personArray[result].gender = gender != 0 ?gender:mst->personArray[result].gender;
                break;
            }
            cout<< "������������������1->��,2->Ů"<<endl;
        }


        cout<< "����"<<endl;
        int age;
        cin >> age;
        mst->personArray[result].age = age != 0 ?age:mst->personArray[result].age;

        cout<< "�绰"<<endl;
        string phone;
        cin >> phone;
        mst->personArray[result].phone = phone != "0" ?phone:mst->personArray[result].phone;

        cout<< "��ַ"<<endl;
        string address;
        cin >> address;
        mst->personArray[result].address = address != "0" ?address:mst->personArray[result].address;

        cout<< "��������"<<endl;
        string department;
        cin >> department;
        mst->personArray[result].department = department != "0" ?department:mst->personArray[result].department;
        cout<< "�޸ĳɹ�"<<endl;

    }else{
        cout<<"��Ա��������"<<endl;
    }
}
/*���Ա��*/
void clear(MsTable * mst){
    string commit ;
    cout<< "��ȷ���Ƿ���գ�y or n��"<<endl;
    cin>>commit;
    if(commit == "y" || commit == "Y"){
        mst->record = 0;
        cout<< "Ա���������"<<endl;
    }else{
        cout<< "��ȡ�����"<<endl;
    }
}
int main() {
    cout<<"<<<<<<<<< Ա����Ϣ����ϵͳ >>>>>>>>>>"<<endl;
    /*���������ṹ����*/
    MsTable mst;
    /*��ʼ����¼��*/
    mst.record = 0;
    int select = 0;
    while(true){
        showMenu();
        cout<<"������ѡ��:"<<endl;
        cin>>select;
        switch (select) {
            case 1: /*���Ա��*/
                add(&mst); /*��ַ���ݿ�����ʵ��*/
                break;
            case 2:/*��ʾԱ��*/
                showTable(&mst);
                break;
            case 3:/*ɾ��Ա��*/
//            {
//                cout << "������ɾ��Ա������" << endl;
//                string name;
//                cin >> name;
//                if (isExist(&mst, name) == -1) {
//                    cout << " ���޴���" << endl;
//                } else {
//                    cout << "�ҵ�����" << endl;
//                }
//                break;
//            }
                remove(&mst);
            case 4:/*����Ա��*/
                find(&mst);
                break;
            case 5: /*�޸�Ա��*/
                change(&mst);
                break;
            case 6: /*���Ա��*/
                clear(&mst);
                break;
            case 0: /*�˳�ϵͳ*/
                cout<<"��ӭ�´�ʹ��"<<endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }



}
