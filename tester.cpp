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

	

	cout << "Test Student:---------------------------------" << endl << endl;
	
	cout << "Test Constructor: --------------------------------" << endl << endl;

	Student st0(const Student& p);
	
	Student st1(12345678, "ab1cd", "Bee", "Apple", 1, 1, 2000, "apple.bee@richmond.edu",
        "28 Westhampton Way", 804123123, 1, 9, 2013, Student::UNDEFINED, true, 2.0);

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
	cout << "[]" << endl << endl;

	cout << "----------------------------------------------" << endl << endl;

	cout << "Test other getters:" << endl;
	cout << "------------------------------------" << endl << endl;

	cout << st1.getAdmitDate().tm_mon << "/" << st1.getAdmitDate().tm_mday <<
		"/" << st1.getAdmitDate().tm_year << endl;
	cout << "[9/1/2013]" << endl << endl;

	cout << st1.getSchool() << endl;
	cout << "[UNDEFINED]" << endl << endl;

	cout << st1.getGPA() << endl;
	cout << "[0.0]" << endl << endl;

	cout << st1.getUnitsCompleted() << endl;
	cout << "[2.0]" << endl << endl;

	cout << st1.isFullTime() << endl;
	cout << "[true]" << endl << endl;

	cout << "----------------------------------------------" << endl << endl;

	cout << "Test other setters:" << endl;
	st1.setAdmitDate(1, 5, 2014);
	cout << st1.getAdmitDate().tm_mon << "/" << st1.getAdmitDate().tm_mday <<
                "/" << st1.getAdmitDate().tm_year << endl;
	cout << "[5/1/2014]" << endl << endl;

	st1.setSchool(Student::AS);
	cout << st1.getSchool() << endl;
	cout << "[AS]" endl << endl;

	st1.setGPA(4.0);
	cout << st1.getGPA() << endl;
	cout << "[4.0]" << endl << endl;

	st1.setUnitsCompleted(10.0);
	cout << st1.getUnitsCompleted() << endl;
	cout << "[10.0]" << endl << endl;

	st1.setFullTimeStatus(false);
	cout << st1.isFullTime() << endl;
	cout << "[false]" << endl << endl;

	cout << "----------------------------------------------" << endl << endl;

	return 0;
}
