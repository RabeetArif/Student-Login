#include"../main_header.h"

//empty constructor
student_reg::student_reg()
{
    student_id = 0;
    course_reg_id = 0;
}

//parameteric constructor
student_reg::student_reg(int input_stud_id, int input_cr_id)
{
    student_id = input_stud_id;
    course_reg_id = input_cr_id;
}

//copy constructor
student_reg::student_reg(student_reg &sr)
{
    student_id = sr.student_id;
    course_reg_id = sr.course_reg_id;
}

//setter
void student_reg::set_student_id(int input_stud_id)
{
    student_id = input_stud_id;
}

void student_reg::set_course_reg_id(int input_cr_id)
{
    course_reg_id = input_cr_id;
}

//getter
int student_reg::get_student_id()
{
    return student_id;
}

int student_reg::get_course_reg_id()
{
    return course_reg_id;
}

//destructor
student_reg::~student_reg()
{
    //empty
}