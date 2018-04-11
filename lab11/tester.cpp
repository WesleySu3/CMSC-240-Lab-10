#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	cout << "Test LinkedList:-----------------" << endl << endl;
        LinkedList<int> l;
	cout << "Test add and size: +++++++++++++++++++" << endl << endl;
	cout << "before add:" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [0]" << endl;
	
	cout << "after add:" << endl;
	l.add(1);
	l.add(2);
	cout << l.get(0) << " -- [1]" << endl;
	cout << l.get(1) << " -- [2]" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [2]" << end;

	
	

		


        return 0;
}
