#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main()
{

	cout << "Testing Person" << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "Testing constructors" << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "Person a(1, \"2\", \"3\", \"4\", 5, 6, 1907, \"8\", \"9\", 10);" << endl;
	Person a(1, "2", "3", "4", 5, 6, 1907, "8", "9", 10);

	cout << "Person b(a);" << endl << endl;
	Person b(a);

	cout << "URID: " << b.getURID() << " [Expected: 1]" << endl << endl;

	cout << "NetID: " << b.getNetID() << " Expected: 2]" << endl << endl;

	cout << "Last Name: " << b.getLastName() << " [Expected: 3]" << endl << endl;

	cout << "First Name: " << b.getFirstName() << " [Expected: 4]" << endl << endl;

	struct tm bday = b.getDateOfBirth();
	cout << "Date of birth: " << bday.tm_mon << "/" << bday.tm_mday << "/"
		 << bday.tm_year << " [Expected: 5/6/7]" << endl << endl;

	cout << "Email: " << b.getEmail() << " [Expected: 8]" << endl << endl;

	cout << "Address: " << b.getAddress() << " [Expected: 9]" << endl << endl;

	cout << "Phone: " << b.getPhone() << " [Expected: 10]" << endl << endl;

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
	struct tm bday2 = p.getDateOfBirth();
	cout << "Date of birth: " << bday2.tm_mon << "/" << bday2.tm_mday << "/"
		 << bday2.tm_year << " [Expected: 12/30/84]" << endl << endl;

	cout << "p.setAddress(\"Cleveland and Los Angeles\")" << endl;
	p.setAddress("Cleveland and Los Angeles");
	cout << "Address: " << p.getAddress() << " [Expected: Cleveland and Los Angeles]"  << endl << endl;

	cout << "p.setNetID(\"GOAT\")" << endl;
	p.setNetID("GOAT");
	cout << "NetID: " << p.getNetID() << " [Expected: GOAT]" << endl << endl;

	cout << "p.setURID(23)" << endl;
	p.setURID(23);
	cout << "URID: " << p.getURID() << " [Expected: 23]" << endl << endl;

	cout << "p.setEmail(\"goat@goat.com\")" << endl;
	p.setEmail("goat@goat.com");
	cout << "Email: " << p.getEmail() << " [Expected: goat@goat.com]" << endl << endl;

	cout << "p.setPhone(2162134628)" << endl;
	p.setPhone(2162134628);
	cout << "Phone: " << p.getPhone() << " [Expected: 2162134628]" << endl << endl;

	

	/*cout << "Test Student:---------------------------------" << endl << endl;
	
	cout << "Test Constructor: --------------------------------" << endl << endl;

	Student st0(const Student& p);
	
	Student st1(12345678, "ab1cd", "Bee", "Apple", 1, 1, 2000, "apple.bee@richmond.edu",
        "28 Westhampton Way", 804123123, 1, 9, 2013, Student::AS, true, 15.5);

        cout << "Test courses methods(getter/setter/remover/etc):" << endl;
        cout << "------------------------------------" << endl << endl;

	cout << "setter: ++++++++++++++++++++" << endl;
	list<string> newCourses;
	newCourses.push_back("cs150");
	newCourses.push_back("cs221");
	st1.setCourses(newCourses);
	st1.printCourses();
	cout << "[cs150" << endl << " cs221]" << endl << endl;

	cout << "getter: ++++++++++++++++++++" << endl;
	list<string> currentCourse = st1.getCourse();
	for (itr = currentCourse.begin(); itr != currentCourse.end(); ++itr)
                std::cout << *itr << std::endl;
	cout << "[cs150" << endl << " cs221]" << endl << endl;

	cout << "adder: ++++++++++++++++++++" << endl;
	st1.addCourse("cs240");
        st1.printCourses();
	cout << "[cs150" << endl << " cs221" << endl << " cs240]" << endl << endl; 

	cout << "remover: ++++++++++++++++++++" << endl;
	st1.removeCourses("cs150");
	st1.printCourses();
	cout << "[cs221" << endl << " cs240]" << endl << endl;
	
	cout << "clearer: ++++++++++++++++++++" << endl;
	st1.clearCourses();
	st1.printCourse();
	cout << "[]" << endl << endl;*/

	return 0;
}
