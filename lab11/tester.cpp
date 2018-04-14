//Name: Wesley Su
//Name: Maxine Xin
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
	cout << "get from empty list: " << endl;
	try {
		cout << l.get(0) << endl;
	}	
	catch (const exception& err1) {
		cerr << err1.what();
	}
	cout << " -- [invalid attempt to retrieve from empty list]" << endl << endl;

	cout << "after add:" << endl;
	l.add(1);
	l.add(2);
	cout << "get index 0: " << l.get(0) << " -- [1]" << endl;
	cout << "get index 1: " <<  l.get(1) << " -- [2]" << endl;
	cout << "get index 2(out of bound):" << endl;
	try {
		cout << l.get(2) << endl;
	}
	catch (const exception& err2) {
                cerr << err2.what();
        }
	cout << " -- [invalid index: 2   list size: 2]" << endl;
	
	cout << "get index -1(out of bound):" << endl;
        try {
                cout << l.get(-1) << endl;
        }
        catch (const exception& err3) {
                cerr << err3.what();
        }
        cout << " -- [invalid index: -1   list size: 2]" << endl;
	cout << "size:" << endl;
	cout << l.size() << " -- [2]" << endl << endl;

	
	cout << "Test remove: +++++++++++++" << endl << endl;
	cout << "remove index -2(out of bound): " << endl;
	try {
		cout << l.remove(-2) << endl;
	}
	catch (const exception& err4) {
                cerr << err4.what();
        }
	cout << " -- [invalid index: -2   list size: 2]" << endl;
	cout << "remove index 10(out of bound): " << endl;
        try {
                cout << l.remove(10) << endl;
        }
        catch (const exception& err5) {
                cerr << err5.what();
        }
        cout << " -- [invalid index: 10   list size: 2]" << endl;
	cout << "remove index 1: " << l.remove(1) << " -- [2]" << endl;
	cout << "remove index 0: " << l.remove(0) << " -- [1]" << endl << endl;
	cout << "remove from empty list: " << endl;
	try {
                cout << l.remove(5) << endl;
        }
        catch (const exception& err6) {
                cerr << err6.what();
        }
	cout << " -- [invalid attempt to remove from empty list]" << endl << endl;

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
