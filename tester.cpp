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

	

	cout << "Test Student:---------------------------------" << endl << endl;
	
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
	cout << "[]" << endl << endl;

	return 0;
}
