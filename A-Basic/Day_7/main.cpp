#if 1
#define MAX 1000
#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};
struct AddressBooks
{
    struct Person personArray[MAX]; //通讯录保存的联系人数组
    int m_Size;                     //通讯录的人员个数
};
void showMenu()
{
    cout << "**********************" << endl;
    cout << "*****1.添加联系人*****" << endl;
    cout << "*****2.显示联系人*****" << endl;
    cout << "*****3.删除联系人*****" << endl;
    cout << "*****4.查找联系人*****" << endl;
    cout << "*****5.清空联系人*****" << endl;
    cout << "*****6.清空通讯录*****" << endl;
    cout << "*****0.退出通讯录*****" << endl;
    cout << "**********************" << endl;
}
void addPerson(AddressBooks *abs)
{
    //判断通讯录是否满了
    if (abs->m_Size == MAX)
    {
        cout << "通讯录已满,无法继续添加" << endl;
        return;
    }
    else
    {
        //姓名
        string name;
        cout << "请输入姓名 : " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        //性别
        cout << "请输入性别 : " << endl;
        cout << "1--男" << endl
             << "2--女" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            else
            {
                cout << "输入有误,请重新输入" << endl;
            }
        }
        //年龄
        cout << "请输入年龄 : " << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        //联系电话
        cout << "请输入联系电话 : " << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        //家庭住址
        cout << "请输入家庭住址" << endl;
        string address = "";
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        abs->m_Size++;
        cout << "添加成功" << endl;
        system("pause");
    }
}
void showPerson(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "当前记录为空,请先添加联系人" << endl;
        system("pause");
        return;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名 : " << abs->personArray[i].m_Name << '\t';
            cout << "性别 : " << abs->personArray[i].m_Sex << '\t';
            cout << "年龄 : " << abs->personArray[i].m_Age << '\t';
            cout << "电话 : " << abs->personArray[i].m_Phone << '\t';
            cout << "住址 : " << abs->personArray[i].m_Addr << '\t';
        }
        system("pause");
    }
}

int isExist(AddressBooks *abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}
void deletePerson(AddressBooks *abs)
{
    cout << "请输入你要删除的联系人 : " << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret; i < abs->m_Size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
        cout << "删除成功" << endl;
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
}
void findPerson(AddressBooks *abs)
{
    cout << "请输入你要查找的联系人 : " << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "姓名 : " << abs->personArray[ret].m_Name << '\t';
        cout << "性别 : " << abs->personArray[ret].m_Sex << '\t';
        cout << "年龄 : " << abs->personArray[ret].m_Age << '\t';
        cout << "电话 : " << abs->personArray[ret].m_Phone << '\t';
        cout << "住址 : " << abs->personArray[ret].m_Addr << '\t';
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
}
void modifyPerson(AddressBooks *abs)
{
    cout << "请输入您要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        //姓名
        string name;
        cout << "请输入姓名 : " << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        //性别
        cout << "请输入性别 : " << endl;
        cout << "1--男" << endl
             << "2--女" << endl;
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].m_Sex = sex;
                break;
            }
            else
            {
                cout << "输入有误,请重新输入" << endl;
            }
        }
        //年龄
        cout << "请输入年龄 : " << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;
        //联系电话
        cout << "请输入联系电话 : " << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;
        //家庭住址
        cout << "请输入家庭住址" << endl;
        string address = "";
        cin >> address;
        abs->personArray[ret].m_Addr = address;
        cout << "修改成功" << endl;
        system("pause");
    }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
}
void cleanPerson(AddressBooks *abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空" << endl;
    system("pause");
}
int main()
{
    AddressBooks abs;
    abs.m_Size = 0; //初始化通讯录联系人为0
    while (true)
    {
        system("cls");
        int select = 0;
        showMenu();
        cin >> select;
        switch (select)
        {
        case 1:
            addPerson(&abs);
            break;
        case 2:
            showPerson(&abs);
            break;
        case 3:
            deletePerson(&abs);
            break;
        case 4:
            findPerson(&abs);
            break;
        case 5:
            modifyPerson(&abs);
            break;
        case 6:
            cleanPerson(&abs);
            break;
        case 0:
            cout << "欢迎下次使用" << endl;
            return 0;
            break;
        default:
            break;
        }
        system("cls");
    }

    system("pause");
    return 0;
}

#endif
