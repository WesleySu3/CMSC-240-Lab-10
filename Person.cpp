#ifndef __PERSON_CPP__
#define __PERSON_CPP__

#include "Person.h"

//-----------------------------
// Constructors


Person::Person()
{
	firstName = "";
	lastName = "";
	birthYear = 0;
	birthDay = 0;
	birthMonth = 0;
	address = "";
	phoneNumber = 0;
	email = "";
	netID = "";
	URID = 0;
}

Person::Person(const Person& other)
{
	this->firstName = other.firstName;
	this->lastName = other.lastName;
	this->birthYear = other.birthYear;
	this->birthDay = other.birthDay;
	this->birthMonth = other.birthMonth;
	this->address = other.address;
	this->phoneNumber = other.phoneNumber;
	this->email = other.email;
	this->netID = other.netID;
	this->URID = other.URID;
}

Person::Person(int urid, std::string netid, std::string lname, std::string fname, 
    int dob_day, int dob_month, int dob_year,
    std::string email, std::string address, long phone)
{
	firstName = fname;
	lastName = lname;
	birthYear = dob_year;
	birthDay = dob_day;
	birthMonth = dob_month;
	this->address = address;
	phoneNumber = phone;
	this->email = email;
	netID = netid;
	URID = urid;
}


Person::~Person() {}


//-----------------------------
// Getters

std::string  Person::getFirstName()
{
	return this->firstName;
}

std::string  Person::getLastName()
{
	return this->lastName;
}

struct tm    Person::getDateOfBirth()
{
	struct tm year;
	year.tm_mday = this->birthDay;
	year.tm_mon = (this->birthMonth - 1);
	year.tm_year = (this->birthYear - 1900);
	return year;
}

std::string  Person::getAddress()
{
	return this->address;
}


std::string  Person::getNetID()
{
	return this->netID;
}

int          Person::getURID()
{
	return this->URID;
}

std::string  Person::getEmail()
{
	return this->email;
}

long         Person::getPhone()
{
	return this->phoneNumber;
}



//-----------------------------
// Setters

void Person::setFirstName(std::string fname)
{
	this->firstName = fname;
}

void Person::setLastName(std::string lname)
{
	this->lastName = lname;
}

void Person::setDateOfBirth(int day, int month, int year)
{
	this->birthDay = day;
	this->birthMonth = month;
	this->birthYear = year;
}

void Person::setAddress(std::string address)
{
	this->address = address;
}

void Person::setNetID(std::string netid)
{
	this->netID = netid;
}

void Person::setURID(int urid)
{
	this->URID = urid;
}

void Person::setEmail(std::string email)
{
	this->email = email;
}

void Person::setPhone(long number)
{
	this->phoneNumber = number;
}





#endif
