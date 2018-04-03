#include <iostream>
#include "Person.h"

using namespace std;

int main()
{

	cout << "Testing getters/setters:" << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "Person p;" << endl;
	Person p;

	cout << "p.setFirstName(\"LeBron\")" << endl;
	p.setFirstName("LeBron");
	cout << "First Name: " << p.getFirstName() << " [Expected: LeBron]" << endl << endl;

	cout << "p.setLastName(\"James\")" << endl;
	p.setLastName("James");
	cout << "Last Name: " << p.getLastName() << " [Expected: James]" << endl << endl;

	cout << "p.setDateOfBirth(30, 12, 1984)" << endl;
	p.setDateOfBirth(30, 12, 1984);
	struct tm year = p.getDateOfBirth();
	cout << "Date of birth: " << year.tm_mon << "/" << year.tm_mday << "/"
		 << year.tm_year << " [Expected: 12/30/1984]" << endl << endl;

	cout << "p.setAddress(\"Cleveland and Los Angeles\")" << endl;
	p.setAddress("Cleveland and Los Angeles");
	cout << "Address: " << p.getAddress() << " [Expected: Cleveland and Los Angeles]"  << endl << endl;

	cout << "p.setNetID(\"GOAT\")" << endl;
	p.setNetID("GOAT");
	cout << "NetID: " << p.getNetID() << " [Expected: GOAT]" << endl << endl;

	cout << "p.setURID(23)" << endl;
	p.setURID(23);
	cout << "URID: " << p.getNetID() << " [Expected: 23]" << endl << endl;

	cout << "p.setEmail(\"goat@goat.com\")" << endl;
	p.setEmail("goat@goat.com");
	cout << "Email: " << p.getEmail() << " [Expected: goat@goat.com]" << endl << endl;

	cout << "p.setPhone(2162134628)" << endl;
	p.setPhone(2162134628);
	cout << "Phone: " << p.getPhone() << " [Expected: 2162134628]" << endl << endl;






	return 0;
}