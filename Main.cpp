#include "iostream"
#include "List.h"


int main()
{
	List myList;

	myList.push_back(100);
	myList.push_back(101);
	myList.push_back(102);
	myList.push_back(103);

	myList.show();

	myList.deleteNode(100);

	myList.show();


	return 0;
}