// Wesley Su and Maxine Xin

#include <iostream>
#include "Person.h"
#include "Student.h"

using namespace std;

int main()
{

	cout << "Testing Person" << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "Testing non-default constructors" << endl;
	cout << "--------------------------------------------" << endl << endl;

	cout << "Person a(1, \"2\", \"3\", \"4\", 5, 6, 2018, \"8\", \"9\", 10);" << endl;
	Person a(1, "2", "3", "4", 5, 6, 2018, "8", "9", 10);

	cout << "Person b(a);" << endl << endl;
	Person b(a);

	cout << "URID: " << b.getURID() << " [Expected: 1]" << endl << endl;

	cout << "NetID: " << b.getNetID() << " Expected: 2]" << endl << endl;

	cout << "Last Name: " << b.getLastName() << " [Expected: 3]" << endl << endl;

	cout << "First Name: " << b.getFirstName() << " [Expected: 4]" << endl << endl;

	struct tm bday = b.getDateOfBirth();
	cout << "Date of birth: " << bday.tm_mon << "/" << bday.tm_mday << "/"
		 << bday.tm_year << " [Expected: 5/5/118]" << endl << endl;

	cout << "Email: " << b.getEmail() << " [Expected: 8]" << endl << endl;

	cout << "Address: " << b.getAddress() << " [Expected: 9]" << endl << endl;

	cout << "Phone: " << b.getPhone() << " [Expected: 10]" << endl << endl;

	cout << "Testing getters/setters w/ default person:" << endl;
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
	cout << "Date of birth: " << (bday2.tm_mon + 1) << "/" << bday2.tm_mday << "/"
		 << (bday2.tm_year + 1900) << " [Expected: 12/30/1984]" << endl << endl;

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

	

	cout << "Test Student:---------------------------------" << endl << endl;
	
	cout << "Test Constructor: --------------------------------" << endl;
	cout << "default constructor: +++++++++++++++++++++++" << endl; 
	Student stDf;
	//information printed out should be default value
	cout << "last name: " << stDf.getLastName() << " -- []" << endl;
	cout << "URID: " << stDf.getURID() << " -- [0]" << endl;
	cout << "GPA: " << stDf.getGPA() << " -- [0]" << endl;
	cout << "Admission Year: " << (stDf.getAdmitDate().tm_year + 1990) << " -- [1990]" << endl;
	stDf.setGPA(0.5);		//set new GPA
	stDf.setAdmitDate(1, 5, 2010);	//set new admission date

	//new GPA and Admission year should be printed out
	cout << "New GPA: " << stDf.getGPA() << " -- [0.5]" << endl;
	cout << "New Admission Year: " << (stDf.getAdmitDate().tm_year + 1990) << " -- [2010]" << endl << endl;

	cout << "copy constructor: +++++++++++++++++++++" << endl;
	Student stCp(stDf);
	cout << "URID: " << stCp.getURID() << " -- [0]" << endl;
	cout << "GPA: " << stCp.getGPA() << " -- [0.5]" << endl;
	cout << "Admission Year: " << (stCp.getAdmitDate().tm_year + 1990) << " -- [2010]" << endl;
	//set new URID, GPA, and Admission Year
	stCp.setURID(11280921);
	stCp.setGPA(4.0);
	stCp.setAdmitDate(1, 5, 2017);
	cout << "URID: " << stCp.getURID() << " -- [11280921]" << endl;
        cout << "GPA: " << stCp.getGPA() << " -- [4]" << endl;
	cout << "Admission Year: " << (stCp.getAdmitDate().tm_year + 1990) << " -- [2017]" << endl << endl;

	cout << "normal constructor: +++++++++++++++++++++:" << endl;	
	Student st1(12345678, "ab1cd", "Bee", "Apple", 1, 1, 2000, "apple.bee@richmond.edu",
        "28 Westhampton Way", 804123123, 1, 9, 2013, Student::UNDEFINED, true, 2.5);
	cout<< "NetID: " << st1.getNetID() << " -- [ab1cd]" << endl;
	cout << "Units Completed: " << st1.getUnitsCompleted() << " -- [2.5]" << endl << endl;	
	cout << "------------------------------------" << endl;


        cout << "Test courses methods(getter/setter/adder/remover/clearer):" << endl;
        cout << "------------------------------------" << endl;
	//setter
	list<string> newCourses;
	newCourses.push_back("cs150");
	newCourses.push_back("cs221");
	cout << "courses set: " << endl;
	st1.setCourses(newCourses);
	st1.printCourses();
	cout << "[cs150" << endl << " cs221]" << endl << endl;
	
	//getter
	list<string> currentCourse = st1.getCourse();
	list<string>::iterator itr;
	cout << "get courses: " << endl;
	for (itr = currentCourse.begin(); itr != currentCourse.end(); ++itr)
                std::cout << *itr << std::endl;
	cout << "[cs150" << endl << " cs221]" << endl << endl;
	
	//adder
	st1.addCourse("cs240");
	cout << "new course added: " << endl;
        st1.printCourses();
	cout << "[cs150" << endl << " cs221" << endl << " cs240]" << endl << endl; 
	
	//remover
	st1.removeCourse("cs150");
	cout << "one course removed: " << endl;
	st1.printCourses();
	cout << "[cs221" << endl << " cs240]" << endl << endl;
	
	//clearer
	st1.clearCourses();
	cout << "courses cleared: " << endl; 
	st1.printCourses();
	cout << "[]" << endl;

	cout << "----------------------------------------------" << endl << endl;

	cout << "Test other getters:" << endl;
	cout << "------------------------------------" << endl;

	cout << "admission date: ";
	cout << (st1.getAdmitDate().tm_mon + 1) << "/" << st1.getAdmitDate().tm_mday <<
		"/" << (st1.getAdmitDate().tm_year + 1990) <<  " -- [9/1/2013]" << endl;

	cout << "school: ";
	switch(st1.getSchool()) {
                case 0: cout << "AS"; break;
                case 1: cout << "JSLS"; break;
                case 2: cout << "LAW"; break;
                case 3: cout << "RSB"; break;
                case 4: cout << "SPCS"; break;
                case 5: cout << "UNDEFINED"; break;
        }
	cout << "-- [UNDEFINED]" << endl;

	cout << "GPA: "<< st1.getGPA() << " -- [0]" << endl;
	cout << "units completed: " << st1.getUnitsCompleted() << " -- [2.5]" << endl;
	cout << "is full time: " << st1.isFullTime() << " -- [1]" << endl;
	cout << "----------------------------------------------" << endl << endl;

	cout << "Test other setters:" << endl;
	cout << "------------------------------------" << endl;
	st1.setAdmitDate(1, 5, 2014);
	cout << "new admission date: ";
	cout << (st1.getAdmitDate().tm_mon + 1) << "/" << st1.getAdmitDate().tm_mday <<
                "/" << (st1.getAdmitDate().tm_year + 1990) << " -- [5/1/2014]" << endl;

	st1.setSchool(Student::AS);
	cout << "new school: ";
	switch(st1.getSchool()) {
		case 0: cout << "AS"; break;
		case 1: cout << "JSLS"; break;
		case 2: cout << "LAW"; break;
		case 3: cout << "RSB"; break;
		case 4: cout << "SPCS"; break;
		case 5: cout << "UNDEFINED"; break;
	}
	cout << " -- [AS]" << endl;

	st1.setGPA(3.9);
	cout << "new GPA: " << st1.getGPA() << " -- [3.9]" << endl;

	st1.setUnitsCompleted(10.5);
	cout << "new units completed: " << st1.getUnitsCompleted() << " -- [10.5]" << endl;

	st1.setFullTimeStatus(false);
	cout << "new is full time: " << st1.isFullTime() << " -- [0]" << endl;

	cout << "----------------------------------------------" << endl << endl;
	return 0;
}
