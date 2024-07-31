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

	std::cout << "Delete element whith index 2\n" << std::endl;
	myList.deleteNode(2);

	myList.show();


	return 0;
}