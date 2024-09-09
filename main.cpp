#include <iostream>
using namespace std;
#define MAX 1000 /*最大记录数上线*/
/**
 * 企业员工管理系统
 */
/*展示菜单*/
void showMenu(){
    cout <<"================================="<<endl;
    cout <<"=======   1、添加员工   ===========" <<endl;
    cout <<"=======   2、显示员工   ===========" <<endl;
    cout <<"=======   3、删除员工   ===========" <<endl;
    cout <<"=======   4、查找员工   ===========" <<endl;
    cout <<"=======   5、修改员工   ===========" <<endl;
    cout <<"=======   6、清空员工   ===========" <<endl;
    cout <<"=======   0、退出系统   ===========" <<endl;
    cout <<"=================================" <<endl;
};
/*员工结构体*/
struct employee{
    string name;
    int gender;// 1 男 2 女
    int age;
    string phone;
    string address;
    string department;/*所属部门*/
};
/*管理表结构体*/
struct MsTable{
    /*保存的员工数组*/
    employee personArray[MAX];
    /*当前记录条数*/
    int record;
};
/*添加员工*/
void add(MsTable * mst){
    if(mst->record == MAX){
        cout<< "记录已满，无法添加"<<endl;
        return;
    }else{
        string name;
        cout<< "请输入姓名:" <<endl;
        cin>>name;
        mst->personArray[mst->record].name  = name;

        int gender = 0;
        cout<< "请输入性别:(1-->男 0-->女)" <<endl;
        while(true){
            cin>>gender;
            if((gender == 1 || gender == 2)) {
                mst->personArray[mst->record].gender  = gender;
                break;
            }
            cout<<"输入有误，请重新输入！！"<<endl;
        }

        int age = 18;
        cout<< "请输入年龄" <<endl;
        while(true){
            cin>>age;
            if((age >= 18 && age <= 60)) {
                mst->personArray[mst->record].age  = age;
                break;
            }
            cout<<"输入有误，请重新输入！！"<<endl;
        }

        string phone;
        cout<< "请输入手机号:" <<endl;
        cin>>phone;
        mst->personArray[mst->record].phone  = phone;

        string address;
        cout<< "请输入地址:" <<endl;
        cin>>address;
        mst->personArray[mst->record].address  = address;

        string department;
        cout<< "请输入所属部门:" <<endl;
        cin>>department;
        mst->personArray[mst->record].department  = department;

        mst->record ++;
        cout<<"add successful!!"<<endl;
//        system("pause");
//        system("cls");
    }

}
/*展示员工*/
void showTable(MsTable * mst){
    if(mst->record == 0){
        cout<<"员工列表为空哦！！"<<endl;
    }else{
        for (int i = 0; i <mst->record; i++) {
            cout << "姓名: " << mst->personArray[i].name << "\t "
                 << "性别: " << (mst->personArray[i].gender == 1 ? "男" : "女") << "\t "
                 << "年龄: " << mst->personArray[i].age << "\t "
                 << "手机号: " << mst->personArray[i].phone << "\t"
                 << "地址: " << mst->personArray[i].address << "\t "
                 << "部门: " << mst->personArray[i].department << std::endl;
        }
    }
//    system("pause");
//    system("cls");

}
/*判断员工是否存在——》若存在，则返回联系人所在数组具体位置，不存在返回 -1 */
int isExist(MsTable * mst, string name){
    for (int i =0 ;i < mst->record;i++){
       if(mst->personArray[i].name == name){
           return i;/*返回联系人所在数组具体位置*/
       }
    }
    return -1;

}
/*删除员工*/
void remove(MsTable * mst){
    cout<< "请输入要删除的联系人"<<endl;
    string name;
    cin >> name;
    int result = isExist(mst,name);
    if(result != -1){
        /*具体删除操作*/
        for(int i = result; i < mst->record;i++){
            /*数据前移*/
            mst->personArray[i] = mst->personArray[i+1];
        }
        mst->record--;/*更新人数*/
        cout<<"删除成功"<<endl;
    }else{
        cout<<"查无此人"<<endl;
    }
//    system("pause");
//    system("cls");


}
/*查找员工*/
void find(MsTable * mst){
    cout << "请输入要查找的员工姓名"<<endl;
    string name;
    cin>> name;
    int result = isExist(mst,name);
    if(result != -1){
        cout << "姓名: " << mst->personArray[result].name << "\t "
             << "性别: " << (mst->personArray[result].gender == 1 ? "男" : "女") << "\t "
             << "年龄: " << mst->personArray[result].age << "\t "
             << "手机号: " << mst->personArray[result].phone << "\t"
             << "地址: " << mst->personArray[result].address << "\t "
             << "部门: " << mst->personArray[result].department << std::endl;

    }else{
        cout<< "员工: "<<name << "不存在"<<endl;
    }

}
/*修改员工*/
void change(MsTable * mst){
    cout<< "请输入需要修改员工的姓名"<<endl;
    string name;
    cin >> name;
    int result = isExist(mst,name);
    if(result != -1){
        cout<< "开始修改(输入值0回车不修改)" << endl;
        cout<< name <<endl;
        cout<< "修改姓名"<<endl;
        string name;
        cin >> name;
        mst->personArray[result].name = name != "0" ?name:mst->personArray[result].name;

        cout<< "性别(1->男,2->女)"<<endl;
        int gender;
        while(true){
            cin>> gender;
            if(gender == 1 || gender == 2){
                cin >> gender;
                mst->personArray[result].gender = gender != 0 ?gender:mst->personArray[result].gender;
                break;
            }
            cout<< "输入有误，请重新输入1->男,2->女"<<endl;
        }


        cout<< "年龄"<<endl;
        int age;
        cin >> age;
        mst->personArray[result].age = age != 0 ?age:mst->personArray[result].age;

        cout<< "电话"<<endl;
        string phone;
        cin >> phone;
        mst->personArray[result].phone = phone != "0" ?phone:mst->personArray[result].phone;

        cout<< "地址"<<endl;
        string address;
        cin >> address;
        mst->personArray[result].address = address != "0" ?address:mst->personArray[result].address;

        cout<< "所属部门"<<endl;
        string department;
        cin >> department;
        mst->personArray[result].department = department != "0" ?department:mst->personArray[result].department;
        cout<< "修改成功"<<endl;

    }else{
        cout<<"该员工不存在"<<endl;
    }
}
/*清空员工*/
void clear(MsTable * mst){
    string commit ;
    cout<< "请确认是否清空（y or n）"<<endl;
    cin>>commit;
    if(commit == "y" || commit == "Y"){
        mst->record = 0;
        cout<< "员工表已清空"<<endl;
    }else{
        cout<< "已取消清空"<<endl;
    }
}
int main() {
    cout<<"<<<<<<<<< 员工信息管理系统 >>>>>>>>>>"<<endl;
    /*创建管理表结构变量*/
    MsTable mst;
    /*初始化记录数*/
    mst.record = 0;
    int select = 0;
    while(true){
        showMenu();
        cout<<"请输入选项:"<<endl;
        cin>>select;
        switch (select) {
            case 1: /*添加员工*/
                add(&mst); /*地址传递可修饰实参*/
                break;
            case 2:/*显示员工*/
                showTable(&mst);
                break;
            case 3:/*删除员工*/
//            {
//                cout << "请输入删除员工姓名" << endl;
//                string name;
//                cin >> name;
//                if (isExist(&mst, name) == -1) {
//                    cout << " 查无此人" << endl;
//                } else {
//                    cout << "找到此人" << endl;
//                }
//                break;
//            }
                remove(&mst);
            case 4:/*查找员工*/
                find(&mst);
                break;
            case 5: /*修改员工*/
                change(&mst);
                break;
            case 6: /*清空员工*/
                clear(&mst);
                break;
            case 0: /*退出系统*/
                cout<<"欢迎下次使用"<<endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }



}
