#include "List.h"
#include <iostream>
using namespace std;

void List::push_back(int data)
{
    // создаем новый узел
    Node* node = new Node(data);
    // если список пуст, возвращаем узел
    if (m_head == nullptr)
    {
        m_head = node;
        return;
    }
    // в цикле ищем последний элемент списка
    Node* last = m_head;
    while (last->m_next != nullptr)
    {
        last = last->m_next;
    }
    // Обновляем указатель next последнего узла на указатель на новый узел
    last->m_next = node;
    return;
}

void List::show()
{
    Node* current = m_head;

    while (current != nullptr)
    {
        cout << current->m_data << '\t';
        current = current->m_next;
    }
    cout << endl;
}

void List::deleteNode(int position)
{
    Node* temp = m_head;
    Node* prev = nullptr;
    int counter = 0;

    // крайний случай удаления начала списка
    if (position == 0)
    {
        m_head = temp->m_next;
        delete temp;
        return;
    }
    // идем по списку, пока не найдем узел со значением данных, равных счётчику
    while (counter != position && temp != nullptr)
    {
        prev = temp;
        temp = temp->m_next;
        counter++;
    }
    // если узел не найден, возвращаем
    if (!temp)
    {
        std::cout << "The element goes beyond the limit" << std::endl;
        return;
    }
    // меняем указатель следующего узла для предыдущего узла на узел, следующий за удаляемым узлом, и удаляем узел с данными
    prev->m_next = temp->m_next;
    delete temp;
}
