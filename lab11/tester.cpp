#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
	cout << "Test LinkedList:-----------------" << endl << endl;
    	LinkedList<int> l;

	// getter need test out of bound
	cout << "Test add, size, get: +++++++++++++++++++" << endl << endl;
	cout << "before add:" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [0]" << endl << endl;
	

	cout << "after add:" << endl;
	l.add(1);
	l.add(2);
	cout << "get index 0: " << l.get(0) << " -- [1]" << endl;
	cout << "get index 1: " <<  l.get(1) << " -- [2]" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [2]" << endl << endl;

	
	//need out of bound
	cout << "Test remove: +++++++++++++" << endl << endl;
	cout << "remove index 1: " << l.remove(1) << " -- [2]" << endl;
	cout << "remove index 0: " << l.remove(0) << " -- [1]" << endl << endl;
	

	cout << "Test toArray: ++++++++++++" << endl << endl;
	cout << "empty list:" << endl;
	//l is empty right now
	vector<int> arr = l.toArray();
	vector<int>::iterator itr = arr.begin();
	while (itr != arr.end()) {
		cout << *itr << " ";
		itr++;
	}
	cout << "-- []" << endl;

	cout << "non-empty list:" << endl;
	l.add(1);
	l.add(2);
	l.add(3);
	arr = l.toArray();
	vector<int>::iterator itr2 = arr.begin();
	while (itr2 != arr.end()) {
        cout << *itr2 << " ";
        itr2++;
    }
	cout << "-- [1 2 3]" << endl << endl;



	cout << "Test operator+=: ++++++++++++" << endl << endl;

	// add contents to c1 and c2
	LinkedList<char> c1;
	c1.add('a');
	c1.add('b');

	// display c1
	cout << "c1:";
	for (int i = 0; i < c1.size(); i++)
	{
		cout << c1.get(i) << " ";
	}
	cout << "-- [a b]" << endl;

	//add to c1
	cout << "c1 += \'c\'" << endl;
	c1 += 'c';

	// display modified c1
	cout << "c1:";
	for (int i = 0; i < c1.size(); i++)
	{
		cout << c1.get(i) << " ";
	}
	cout << "-- [a b c]" << endl << endl;





		
	cout << "Test copy constructor: ++++++++++" << endl << endl;

	cout << "LinkedList<char> c2(c1);" << endl;
	LinkedList<char> c2(c1);

	cout << "c2:";
	for (int i = 0; i < c2.size(); i++)
	{
		cout << c2.get(i) << " ";
	}
	cout << "-- [a b c]" << endl << endl;

    


    return 0;
}
