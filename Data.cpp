#include "Data.h"

User::User()
{
	this->Login = "Login";
	this->Password = "Password";
	this->textInf = "textInf";
	this->messageNum = 0;
}

void User::initUser(int messageNum) // ������� ��� �����������
{
    string Login; string Password;     // ����������, � ������� �������� ����� � ������ �������������
    cout << "������� �����: ";
    getline(cin, Login);
    cout << "������� ������: ";
    getline(cin, Password);
    this->Login = Login;
    this->Password = Password;
    this->messageNum = messageNum;
}

string User::getCharValue(int fieldNumber) const // ������ ��� ������ ����� ������ ���� string
{
    switch (fieldNumber)
    {
    case 1: return this->Login; break;
    case 2: return this->Password; break;
    case 3: return this->textInf;
    }; 
}

int User::getCharValue() const // ������ ��� ������ ���� ������ ���� int
{
    return this->messageNum;
}

void User::setValue(int numValue, string value) // ������ ��� ������������� ����� ���� string
{
    (numValue == 1 ? this->Login = value : this->Password = value);
}

void User::setValue(int value) // ������ ��� ������������� ����� ���� int
{
    this->messageNum = value;
}

void Message::initMessage(string Login, int messageNum) //  ������� �������� ���������
{
    string _Password;            // ���� ���������
    string _textInf;               // ���������� ���������
    this->Login = Login;      // �� ���� ���������
    this->messageNum = messageNum;  // ����� ���������
    cout << "���� ��������� ��������� (������� ��� ������������ ��� '����'): ";
    getline(cin, _Password);
    this->Password = _Password;
    cout << "������� ����� ���������: ";
    getline(cin, _textInf);
    this->textInf = _textInf;

}
