#include "Data.h"

User::User()
{
	this->Login = "Login";
	this->Password = "Password";
	this->textInf = "textInf";
	this->messageNum = 0;
}

void User::initUser(int messageNum) // функция для регистрации
{
    string Login; string Password;     // переменные, в которых хранятся логин и пароль пользователей
    cout << "Введите логин: ";
    getline(cin, Login);
    cout << "Введите пароль: ";
    getline(cin, Password);
    this->Login = Login;
    this->Password = Password;
    this->messageNum = messageNum;
}

string User::getCharValue(int fieldNumber) const // геттер для вывода полей класса типа string
{
    switch (fieldNumber)
    {
    case 1: return this->Login; break;
    case 2: return this->Password; break;
    case 3: return this->textInf;
    }; 
}

int User::getCharValue() const // геттер для вывода поля класса типа int
{
    return this->messageNum;
}

void User::setValue(int numValue, string value) // сеттер для инициализации полей типа string
{
    (numValue == 1 ? this->Login = value : this->Password = value);
}

void User::setValue(int value) // сеттер для инициализации полей типа int
{
    this->messageNum = value;
}

void Message::initMessage(string Login, int messageNum) //  функция создания сообщения
{
    string _Password;            // кому сообщение
    string _textInf;               // содержание сообщения
    this->Login = Login;      // от кого сообщение
    this->messageNum = messageNum;  // номер сообщения
    cout << "Кому отправить сообщение (введите имя пользователя или 'всем'): ";
    getline(cin, _Password);
    this->Password = _Password;
    cout << "Введите текст сообщения: ";
    getline(cin, _textInf);
    this->textInf = _textInf;

}
