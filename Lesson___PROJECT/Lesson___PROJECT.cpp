
#include <iostream>
#include <Windows.h>
#include <string>
#include "Employee.h"
#include "Task.h"

using namespace std;

int main()
{
    Employee emp1(
        12, 
        "Тараненко Ігор Степанович", 
        "розробник", 
        { 15,02,1995 },
        { 10,01,2020 },
        27000
    );

    emp1.print();

}
