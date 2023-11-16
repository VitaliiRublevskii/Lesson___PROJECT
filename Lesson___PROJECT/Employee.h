#pragma once
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

class Employee
{
	unsigned int id_emp = 0;
	string name = "";
	string title = "";
	Date born;
	Date work;
	unsigned int salary = 0;
public:

	Employee(){}
	Employee(unsigned int _id_emp, string _name, string _title,
		Date _born, Date _work, unsigned int _salary) : 
	id_emp(_id_emp), name(_name), title(_title), born(_born),
	work(_work), salary(_salary) {}
	
	~Employee(){}

	void print() {
		cout << "id співробітника:          " << id_emp << endl;
		cout << "ПІБ:                       " << name << endl;
		cout << "Посада:                    " << title << endl;
		cout << "Дата народження:           " << born.day << "." << born.month << "." << born.year << endl;
		cout << "Дата прийняття на работу:  " << work.day << "." << work.month << "." << work.year << endl;
	}
	unsigned int get_id_emp() {
		return id_emp;
	}

	string get_name() {
		return name;
	}
	string get_title() {
		return title;
	}

	Date get_born() {
		return born;
	}
	Date get_work() {
		return work;
	}
	unsigned int get_salary() {
		return salary;
	}

	
	Employee set_id_emp(unsigned int _id_emp) {
		id_emp = _id_emp;
		return *this;
	}
	Employee set_name(string _name) {
		name = _name;
		return *this;
	}
	Employee set_titlep(string _title) {
		title = _title;
		return *this;
	}
	Employee set_born(Date _born) {
		born = _born;
		return *this;
	}
	Employee set_work(Date _work) {
		born = _work;
		return *this;
	}
	Employee set_salary(unsigned int _salary) {
		salary = _salary;
		return *this;
	}

};

