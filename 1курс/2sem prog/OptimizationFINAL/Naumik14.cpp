#include <iostream>

// ���������, ��� ����� �����.
template <typename T>
struct NodeStack
{
    T item;
    NodeStack<T>* next;
};

// ��������� ���� ���� �� ��� ������������ ������.
template <typename T>
class StackList
{
private:
    NodeStack<T>* pTop; // �������� �� ������� �����.

public:
    // ����������� �� ������������.
    StackList() : pTop(nullptr) { }

    // ����������� ���������.
    StackList(const StackList& SL)
    {
        NodeStack<T>* p; // �������� ���������.
        NodeStack<T>* p2;
        NodeStack<T>* p3;

        // ����������� pTop.
        pTop = nullptr;
        p3 = nullptr;

        p = SL.pTop; // �������� p �������� �� ������ SL.pTop->...
        while (p != nullptr)
        {
            // 1. ���������� ����� p2.
            try {
                // ������ �������� �����.
                p2 = new NodeStack<T>;
            }
            catch (std::bad_alloc e)
            {
                // ���� ������ �� �������.
                std::cout << e.what() << "\n";
                return;
            }
            p2->item = p->item;
            p2->next = nullptr;

            // 2. pTop = pTop + p2
            if (pTop == nullptr) // �������� �����.
            {
                pTop = p2;
                p3 = p2;
            }
            else
            {
                p3->next = p2;
                p3 = p3->next;
            }

            // 3. ������� �� ��������� �������.
            p = p->next;
        }
    }

    // �������� ������� � ����.
    // ������� ��������� �� ������� ������.
    void Push(T item)
    {
        NodeStack<T>* p;

        // 1. ���������� �������.
        try {
            p = new NodeStack<T>; // ������ ������� ������.
        }
        catch (std::bad_alloc e)
        {
            // ���� ������ �� ���������.
            std::cout << e.what() << "\n";
            return;
        }
        p->item = item;
        p->next = pTop; // p ����� �� 1-� �������.

        // 2. ������������� pTop �� p
        pTop = p;
    }

    // ʳ������ �������� � �����.
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

    // ����� ���� - ������� �� �������� � �����.
    void Empty()
    {
        NodeStack<T>* p; // ���������� ��������.
        NodeStack<T>* p2;

        p = pTop;

        while (p != nullptr)
        {
            p2 = p; // �������� ���� �� p.
            p = p->next; // ������� �� ��������� ������� �����.
            delete p2; // �������� ������, ������� ��� ������������ ��������.
        }
        pTop = nullptr; // ��������� ������� �����.
    }

    // �������� ���������.
    StackList<T>& operator=(const StackList<T>& LS)
    {
        // �� � �������� � �����.
        if (pTop != nullptr)
        {
            Empty();
        }

        NodeStack<T>* p; // ���������� ��������.
        NodeStack<T>* p2;
        NodeStack<T>* p3;

        // ����������� pTop.
        pTop = nullptr;
        p3 = nullptr;

        p = LS.pTop; // �������� p �������� �� ������ SL.pTop->...
        while (p != nullptr)
        {
            // 1. ���������� ����� p2.
            try {
                // ������ ������� ������.
                p2 = new NodeStack<T>;
            }
            catch (std::bad_alloc e)
            {
                // ���� ������ �� �������.
                std::cout << e.what() << "\n";
                return *this;
            }
            p2->item = p->item;
            p2->next = nullptr;

            // 2. pTop = pTop + p2
            if (pTop == nullptr) // �������� ����.
            {
                pTop = p2;
                p3 = p2;
            }
            else
            {
                p3->next = p2;
                p3 = p3->next;
            }

            // 3. ������� �� ��������� �������.
            p = p->next;
        }
        return *this;
    }

    // ������� ����.
    template <class T>
    friend void Print(const StackList<T>& stack, const char* objName);

    // ����������.
    ~StackList()
    {
        Empty();
    }

    // �����, ���� ������ ������� � �����.
    T Pop()
    {
        // ��������� �� ������ ����.
        if (pTop == nullptr)
        {
            return 0;
        }

        NodeStack<T>* p2; // ���������� ��������.
        T item;
        item = pTop->item;

        // ������������� ��������� pTop, p2.
        p2 = pTop;
        pTop = pTop->next;

        // �������� ������, ������� �� 1-� �������.
        delete p2;

        // ��������� item.
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
        NodeStack<T>* p; // ���������� ��������.
        p = stack.pTop;
        while (p != nullptr)
        {
            std::cout << p->item << "\t";
            p = p->next;
        }
        std::cout << "\n";
    }
}

// ����� ����� � ��������.
int main(int argc, char* argv[])
{
    StackList<int> SL;
    Print<int>(SL, "SL");

    SL.Push(8);
    SL.Push(5);
    SL.Push(10);
    SL.Push(7);
    Print<int>(SL, "SL");

    // �������� ������������ ���������.
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
