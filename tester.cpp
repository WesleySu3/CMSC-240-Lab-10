#include <iostream>
#include "Person.h"

using namespace std;

int main()
{

	cout << "Testing getters/setters:" endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "Person p;" << endl;
	Person p;

	cout << "p.setFirstName(\"LeBron\")" << endl;
	p.setFirstName("LeBron");
	cout << "First Name: " < p.getFirstName() << " [Expected: LeBron]" << endl;

	cout << "p.setLastName(\"James\")" << endl;
	p.setLastName("James");
	cout << "Last Name: " < p.getLastName() << " [Expected: James]" << endl;


	p.setDateOfBirth(30, 12, 1984);
	cout << "DateOfBirth: " < p.getFirstName() << " [Expected: LeBron]" << endl;


	p.setAddress("Cleveland and Los Angeles");
	p.setNetID("GOAT");
	p.setURID(23);
	p.setEmail("goat@goat.com");
	p.setPhone(2162134628);






	return 0;
}