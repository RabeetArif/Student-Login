#include"../main_header.h"

//empty constructor
course::course()
{
    code = 0;
    credit_hours = 0;
    course_name = " ";
    department = " ";
}

//parametric constructor
course::course(int input_code, string input_cname, int input_credit_hours, string input_dept)
{
    code = input_code;
    course_name = input_cname;
    credit_hours = input_credit_hours;
    department = input_dept;
}

//copy constructor
course::course(course &c1)
{
    code = c1.code;
    course_name = c1.course_name;
    credit_hours = c1.credit_hours;
    department = c1.department;
}

//setter
void course::set_code(int input_code)
{
    code = input_code;
}

void course::set_course_name(string input_cname)
{
    course_name = input_cname;

}

void course::set_credit_hours(int input_credit_hours)
{
    credit_hours = input_credit_hours;
}

void course::set_department(string input_dept)
{
    department = input_dept;
}

//getter
int course::get_code()
{
    return code;
}

string course::get_course_name()
{
    return course_name;
}

int course::get_credit_hours()
{
    return credit_hours;
}

string course::get_department()
{
    return department;
}

//destructor
course::~course()
{
    //empty
}
