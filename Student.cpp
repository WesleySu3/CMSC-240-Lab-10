#include "Student.h"
#include <string>
#include <iostream>

Student::Student() : Person(){}
Student::Student(const Student& other) : Person(other){}
Student::Student(int urid, std::string netid, std::string lname, std::string fname,
               int dob_day, int dob_mo, int dob_yr,
               std::string email, std::string address, long phone,
               int day_admit, int month_admit, int year_admit,
               School school, bool is_full_time,
               double units_completed) : Person(urid, netid, lname, fname, dob_day,
               dob_month, dob_year, email, address, phone) {
        dateAdmit.tm_mday = day_admit;
        dateAdmit.tm_mon = month_admit;
        dateAdmit.tm_year = year_admit;
        this->school = school;
        this->is_full_time = is_full_time;
        this->units_completed = units_completed;
}
Student::~Student(){}

std::list<std::string> Student::getCourse() {
        return courses;
}

void Student::addCourse(std::string course) {
        courses.push_back(course);
}

void Student::removeCourse(std::string course) {
        std::list<std::string>::iterator itr;
        for (itr = this->courses.begin(); itr != this->courses.end(); ++itr) {
                if(course.compare(*itr) == 0) {
                        this->courses.erase(itr);
                        break;
                }
        }
}

void Student::printCourses() {
        std::list<std::string>::iterator itr;   //declare an iterator type for a list of string
        for (itr = courses.begin(); itr != courses.end(); ++itr)
                std::cout << *itr << std::endl;
}

void Student::setCourses(std::list<std::string> courses) {
        this->courses = courses;
}

void Student::clearCourses() {
        courses.clear();
}


struct tm Student::getAdmitDate() {
        return dateAdmit;
}

Student::School Student::getSchool() {
        return school;
}

double Student::getGPA() {
        return gpa;
}

double Student::getUnitsCompleted() {
        return units_completed;
}

bool Student::isFullTime() {
        return is_full_time;
}


void Student::setAdmitDate(int day, int month, int year) {
        dateAdmit.tm_mday = day;
        dateAdmit.tm_mon = month;
        dateAdmit.tm_year = year;
}

void Student::setSchool(School school) {
        this->school = school;
}

void Student::setGPA(double gpa) {
        this->gpa = gpa;
}

void Student::setUnitsCompleted(double units) {
        units_completed = units;
}

void Student::setFullTimeStatus(bool isFullTime) {
        is_full_time = isFullTime;
}

