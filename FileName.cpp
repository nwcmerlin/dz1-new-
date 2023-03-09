#include <iostream> 
using namespace std;
//1) ������� - ��������� 3 �������� � ��������������
/*
�������:
������ - ������
������� - ��������
������ - �����
*/


//2) ������� -  �������� ��� ����������� ������������� 
// � ��� ���� ������, ������� �������� ��������� ������ � ���� ������, ������� ������� �� ���� �� ������
// ������
class Apple
{
    string color; // � ������ ���� ����
public:
    Apple(string _color) {
        color = _color;
    }

    string getColor() {
        return color;
    }
};

// ������� ���� ������, � ����� ��������� ������
class Tree  // ������ ���
{
public:
    Apple* apple;// ���������� �������������. � ������ ������ ������������ ���� ��������� � ����� ������� ����� (������)

    void GrowApple(Apple* _apple)
    {
        apple = _apple;
        cout << "������� ������� ������ ����� - " << _apple->getColor() << endl;
    }

    void PlugApple()
    {
        apple = nullptr;
        cout << "������� �����";
    }
};

int main()
{
    setlocale(0, "");

    Tree* tree = new Tree;

    Apple* apple = new Apple("������ �������");

    tree->GrowApple(Apple);

    tree->PlugApple();

    delete apple; //������ �����
}