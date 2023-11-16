#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include "Employee.h"

using namespace std;




class Task
{
	unsigned int id_task = 0;
	string name_task = "";
	string description = "";
	unsigned int duration_estim = 0;
	unsigned int duration_actual = 0;
	Date date_issue;
	Date deadline;
	string status = "";
	Employee* employee = nullptr;

public:

	Task(){}
	Task(unsigned int _id_task, string _name_task, string _description,
		unsigned int _duration_estim, unsigned int _duration_actual, 
		Date _date_issue, Date _deadline, string _status, Employee* _employee) :
	  id_task(_id_task), name_task(_name_task), description(_description), 
	duration_estim(_duration_estim), duration_actual(_duration_actual), 
	date_issue(_date_issue), deadline(_deadline), status(_status), employee(_employee){}
	
	~Task(){}

	unsigned int price_tasc() {
		unsigned int price = 0;
		if (duration_actual = 0)
			price = employee->get_salary() * duration_estim;
		else
			price = employee->get_salary() * duration_actual;
		return price;
	}

	void print_task() {
		cout << "Номер завдання" << id_task << endl;
		cout << "Найменування " << name_task << endl;
		cout << "Опис " << description << endl;
		cout << "Тривалість розрахункова " << duration_estim << endl;
		cout << "Тривалість реальна " << duration_actual << endl;
		cout << "Дата видачі " << date_issue.day << "." << date_issue.month << "." << date_issue.year << endl;
		cout << "Кінцевий термін " << deadline.day << "." << deadline.month << "." << deadline.year << endl;
		cout << "Статус " << status << endl;
		cout << "Виконавець " << employee->get_name() << endl;
	}

	unsigned int get_id_task() {
		return id_task;
	}
	string get_name_task() {
		return name_task;
	}
	string get_description() {
		return description;
	}
	unsigned int get_duration_estim() {
		return duration_estim;
	}
	unsigned int get_duration_actual() {
		return duration_actual;
	}
	Date get_date_issue() {
		return date_issue;
	}
	Date get_deadline() {
		return deadline;
	}
	string get_status() {
		return status;
	}
	Employee* get_employee() {
		return employee;
	}
	Task set_id_task(unsigned int _id_task) {
		id_task = _id_task;
		return *this;
	}
	Task set_name_task(string _name_task) {
		name_task = _name_task;
		return *this;
	}
	Task set_description(string _description) {
		description = _description;
		return *this;
	}
	Task set_duration_estim(unsigned int _duration_estim) {
		duration_estim = _duration_estim;
		return *this;
	}
	Task set_duration_actual(unsigned int _duration_actual) {
		duration_actual = _duration_actual;
		return *this;
	}
	Task set_date_issue(Date _date_issue) {
		date_issue = _date_issue;
		return *this;
	}
	Task set_deadline(Date _deadline) {
		deadline = _deadline;
		return *this;
	}
	Task set_status(string _status) {
		status = _status;
		return *this;
	}
	Task set_employee(Employee* _employee) {
		employee = _employee;
		return *this;
	}

	
};
