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
    struct Person personArray[MAX]; //ͨѶ¼�������ϵ������
    int m_Size;                     //ͨѶ¼����Ա����
};
void showMenu()
{
    cout << "**********************" << endl;
    cout << "*****1.�����ϵ��*****" << endl;
    cout << "*****2.��ʾ��ϵ��*****" << endl;
    cout << "*****3.ɾ����ϵ��*****" << endl;
    cout << "*****4.������ϵ��*****" << endl;
    cout << "*****5.�����ϵ��*****" << endl;
    cout << "*****6.���ͨѶ¼*****" << endl;
    cout << "*****0.�˳�ͨѶ¼*****" << endl;
    cout << "**********************" << endl;
}
void addPerson(AddressBooks *abs)
{
    //�ж�ͨѶ¼�Ƿ�����
    if (abs->m_Size == MAX)
    {
        cout << "ͨѶ¼����,�޷��������" << endl;
        return;
    }
    else
    {
        //����
        string name;
        cout << "���������� : " << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;
        //�Ա�
        cout << "�������Ա� : " << endl;
        cout << "1--��" << endl
             << "2--Ů" << endl;
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
                cout << "��������,����������" << endl;
            }
        }
        //����
        cout << "���������� : " << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;
        //��ϵ�绰
        cout << "��������ϵ�绰 : " << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;
        //��ͥסַ
        cout << "�������ͥסַ" << endl;
        string address = "";
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;
        abs->m_Size++;
        cout << "��ӳɹ�" << endl;
        system("pause");
    }
}
void showPerson(AddressBooks *abs)
{
    if (abs->m_Size == 0)
    {
        cout << "��ǰ��¼Ϊ��,���������ϵ��" << endl;
        system("pause");
        return;
    }
    else
    {
        for (int i = 0; i < abs->m_Size; i++)
        {
            cout << "���� : " << abs->personArray[i].m_Name << '\t';
            cout << "�Ա� : " << abs->personArray[i].m_Sex << '\t';
            cout << "���� : " << abs->personArray[i].m_Age << '\t';
            cout << "�绰 : " << abs->personArray[i].m_Phone << '\t';
            cout << "סַ : " << abs->personArray[i].m_Addr << '\t';
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
    cout << "��������Ҫɾ������ϵ�� : " << endl;
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
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
}
void findPerson(AddressBooks *abs)
{
    cout << "��������Ҫ���ҵ���ϵ�� : " << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "���� : " << abs->personArray[ret].m_Name << '\t';
        cout << "�Ա� : " << abs->personArray[ret].m_Sex << '\t';
        cout << "���� : " << abs->personArray[ret].m_Age << '\t';
        cout << "�绰 : " << abs->personArray[ret].m_Phone << '\t';
        cout << "סַ : " << abs->personArray[ret].m_Addr << '\t';
    }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
}
void modifyPerson(AddressBooks *abs)
{
    cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);
    if (ret != -1)
    {
        //����
        string name;
        cout << "���������� : " << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        //�Ա�
        cout << "�������Ա� : " << endl;
        cout << "1--��" << endl
             << "2--Ů" << endl;
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
                cout << "��������,����������" << endl;
            }
        }
        //����
        cout << "���������� : " << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;
        //��ϵ�绰
        cout << "��������ϵ�绰 : " << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;
        //��ͥסַ
        cout << "�������ͥסַ" << endl;
        string address = "";
        cin >> address;
        abs->personArray[ret].m_Addr = address;
        cout << "�޸ĳɹ�" << endl;
        system("pause");
    }
    else
    {
        cout << "���޴���" << endl;
    }
    system("pause");
}
void cleanPerson(AddressBooks *abs)
{
    abs->m_Size = 0;
    cout << "ͨѶ¼�����" << endl;
    system("pause");
}
int main()
{
    AddressBooks abs;
    abs.m_Size = 0; //��ʼ��ͨѶ¼��ϵ��Ϊ0
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
            cout << "��ӭ�´�ʹ��" << endl;
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
