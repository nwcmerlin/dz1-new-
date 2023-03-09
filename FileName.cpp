#include <iostream> 
using namespace std;
//1) ЗАДАНИЕ - придумать 3 ситуации с агрегированием
/*
ПРИМЕРЫ:
Дерево - яблоко
Магазин - продукты
Грядка - цветы
*/


//2) ЗАДАНИЕ -  написать код реализующий АГРЕГИРОВАНИЕ 
// У нас есть Дерево, которое заведомо появилось раньше и есть Яблоко, которое выросло на этом же дереве
// Яблоко
class Apple
{
    string color; // У яьорка есть цвет
public:
    Apple(string _color) {
        color = _color;
    }

    string getColor() {
        return color;
    }
};

// Сначала было дерево, а потом появилось яблоко
class Tree  // Первый тип
{
public:
    Apple* apple;// Реализация АГРЕГИРОВАНИЯ. В классе Дерево присутствует поле указатель с типом другого класа (Яблоко)

    void GrowApple(Apple* _apple)
    {
        apple = _apple;
        cout << "Выросло яблочко такого цвета - " << _apple->getColor() << endl;
    }

    void PlugApple()
    {
        apple = nullptr;
        cout << "Яблочко упало";
    }
};

int main()
{
    setlocale(0, "");

    Tree* tree = new Tree;

    Apple* apple = new Apple("Спелое яблочко");

    tree->GrowApple(Apple);

    tree->PlugApple();

    delete apple; //яблоко съели
}