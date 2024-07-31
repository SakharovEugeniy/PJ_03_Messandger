#include "List.h"
#include <iostream>
using namespace std;

void List::push_back(int data)
{
    // ������� ����� ����
    Node* node = new Node(data);
    // ���� ������ ����, ���������� ����
    if (m_head == nullptr)
    {
        m_head = node;
        return;
    }
    // � ����� ���� ��������� ������� ������
    Node* last = m_head;
    while (last->m_next != nullptr)
    {
        last = last->m_next;
    }
    // ��������� ��������� next ���������� ���� �� ��������� �� ����� ����
    last->m_next = node;
    return;
}

void List::show()
{
    Node* current = m_head;

    while (current != nullptr)
    {
        cout << current->m_data;
        current = current->m_next;
    }
}

void List::deleteNode(int position)
{
    Node* temp = m_head;
    Node* prev = nullptr;
    int counter = 0;

    // ������� ������ �������� ������ ������
    if (position == 0)
    {
        m_head = temp->m_next;
        delete temp;
        return;
    }
    // ���� �� ������, ���� �� ������ ���� �� ��������� ������, ������ ��������
    while (counter != position)
    {
        prev = temp;
        temp = temp->m_next;
        counter++;
    }
    // ���� ���� �� ������, ����������
    if (!temp)
        return;
    // ������ ��������� ���������� ���� ��� ����������� ���� �� ����, ��������� �� ��������� �����, � ������� ���� � �������
    prev->m_next = temp->m_next;
    delete temp;
}
