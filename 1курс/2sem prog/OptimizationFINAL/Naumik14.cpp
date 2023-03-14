#include <iostream>

// Структура, яка описує вузол.
template <typename T>
struct NodeStack
{
    T item;
    NodeStack<T>* next;
};

// Шаблонний клас Стек на базі однозвязного списку.
template <typename T>
class StackList
{
private:
    NodeStack<T>* pTop; // Вказівник на вершину стеку.

public:
    // Конструктор по замовчуванню.
    StackList() : pTop(nullptr) { }

    // Конструктор копіювання.
    StackList(const StackList& SL)
    {
        NodeStack<T>* p; // Додаткові вказівники.
        NodeStack<T>* p2;
        NodeStack<T>* p3;

        // Ініціалізація pTop.
        pTop = nullptr;
        p3 = nullptr;

        p = SL.pTop; // Вказівник p рухається по списку SL.pTop->...
        while (p != nullptr)
        {
            // 1. Формування вузла p2.
            try {
                // Спроба виділення памяті.
                p2 = new NodeStack<T>;
            }
            catch (std::bad_alloc e)
            {
                // Якщо память не виділена.
                std::cout << e.what() << "\n";
                return;
            }
            p2->item = p->item;
            p2->next = nullptr;

            // 2. pTop = pTop + p2
            if (pTop == nullptr) // Створити чергу.
            {
                pTop = p2;
                p3 = p2;
            }
            else
            {
                p3->next = p2;
                p3 = p3->next;
            }

            // 3. Перейти на наступний елемент.
            p = p->next;
        }
    }

    // Помістити елемент в стек.
    // Елемент поміщається на початок списку.
    void Push(T item)
    {
        NodeStack<T>* p;

        // 1. Сформувати елемент.
        try {
            p = new NodeStack<T>; // Спроба виділити память.
        }
        catch (std::bad_alloc e)
        {
            // Якщо память не виділилася.
            std::cout << e.what() << "\n";
            return;
        }
        p->item = item;
        p->next = pTop; // p вказує на 1-й елемент.

        // 2. Перенаправити pTop на p
        pTop = p;
    }

    // Кількість елементів в стеку.
    int Count()
    {
        if (pTop == nullptr)
        {
            return 0;
        }
        else
        {
            NodeStack<T>* p = pTop;
            int count = 0;

            while (p != nullptr)
            {
                count++;
                p = p->next;
            }
        }
    }

    // Очищає стек - видаляє всі елементи зі стеку.
    void Empty()
    {
        NodeStack<T>* p; // Додатковий вказівник.
        NodeStack<T>* p2;

        p = pTop;

        while (p != nullptr)
        {
            p2 = p; // Створити копію із p.
            p = p->next; // Перейти на наступний елемент стеку.
            delete p2; // Видалити память, виділену для попереднього елементу.
        }
        pTop = nullptr; // Поправити вершину стеку.
    }

    // Оператор копіювания.
    StackList<T>& operator=(const StackList<T>& LS)
    {
        // Чи є елементи в стеку.
        if (pTop != nullptr)
        {
            Empty();
        }

        NodeStack<T>* p; // Додатковий вказівник.
        NodeStack<T>* p2;
        NodeStack<T>* p3;

        // Ініціалізація pTop.
        pTop = nullptr;
        p3 = nullptr;

        p = LS.pTop; // Вказівник p рухається по списку SL.pTop->...
        while (p != nullptr)
        {
            // 1. Сформувати вузол p2.
            try {
                // Спроба виділити память.
                p2 = new NodeStack<T>;
            }
            catch (std::bad_alloc e)
            {
                // Якщо память не виділена.
                std::cout << e.what() << "\n";
                return *this;
            }
            p2->item = p->item;
            p2->next = nullptr;

            // 2. pTop = pTop + p2
            if (pTop == nullptr) // Створити стек.
            {
                pTop = p2;
                p3 = p2;
            }
            else
            {
                p3->next = p2;
                p3 = p3->next;
            }

            // 3. Перейти на наступний елемент.
            p = p->next;
        }
        return *this;
    }

    // Вивести стек.
    template <class T>
    friend void Print(const StackList<T>& stack, const char* objName);

    // Деструктор.
    ~StackList()
    {
        Empty();
    }

    // Метод, який витягає елемент зі стеку.
    T Pop()
    {
        // Перевіряєм чи пустий стек.
        if (pTop == nullptr)
        {
            return 0;
        }

        NodeStack<T>* p2; // Додатковий вказівник.
        T item;
        item = pTop->item;

        // Перенаправити вказівники pTop, p2.
        p2 = pTop;
        pTop = pTop->next;

        // Видаляєм память, виділену під 1-й елемент.
        delete p2;

        // Повернути item.
        return item;
    }
};

template <typename T>
void Print(const StackList<T>& stack, const char* objName)
{
    std::cout << "Object: " << objName << "\n";
    if (stack.pTop == nullptr)
    {
        std::cout << "stack is empty.\n";
    }
    else
    {
        NodeStack<T>* p; // Додатковий вказівник.
        p = stack.pTop;
        while (p != nullptr)
        {
            std::cout << p->item << "\t";
            p = p->next;
        }
        std::cout << "\n";
    }
}

// Точка входу в програму.
int main(int argc, char* argv[])
{
    StackList<int> SL;
    Print<int>(SL, "SL");

    SL.Push(8);
    SL.Push(5);
    SL.Push(10);
    SL.Push(7);
    Print<int>(SL, "SL");

    // Перевірка конструктора копіювання.
    StackList<int> SL2 = SL;
    Print<int>(SL2, "SL2");

    SL.Empty();
    Print<int>(SL, "SL");

    SL = SL2;
    Print<int>(SL, "SL = SL2");

    StackList<int> SL3;
    SL3.Push(1);
    SL3.Push(2);
    SL3.Push(3);
    Print<int>(SL3, "SL3");

    SL = SL2 = SL3;
    Print<int>(SL, "SL");
    Print<int>(SL2, "SL2");

    int d = SL2.Pop();

    std::cout << "d = " << d << "\n";
    Print<int>(SL2, "SL2-1");

    d = SL2.Pop();
    Print<int>(SL2, "SL2-2");

    d = SL2.Pop();
    Print<int>(SL2, "SL2-3");

    d = SL2.Pop();
    std::cout << "d = " << d << "\n";
    Print<int>(SL2, "SL2----");

    return 0;
}
