#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	cout << "Test LinkedList:-----------------" << endl << endl;
        LinkedList<int> l;
	cout << "Test add, size, get: +++++++++++++++++++" << endl << endl;
	cout << "before add:" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [0]" << endl;
	
	cout << "after add:" << endl;
	l.add(1);
	l.add(2);
	cout << "get index 0: " << l.get(0) << " -- [1]" << endl;
	cout << "get index 1: " <<  l.get(1) << " -- [2]" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [2]" << end;

	cout << "Test remove: +++++++++++++" << endl << endl;
	cout << "remove index 0: " << l.remove(0) << " -- [1]" << endl;
	
	cout << "Test toArray: ++++++++++++" << endl << endl;

	cout << "Test operator: ++++++++++++" << endl << endl;
		


        return 0;
}
