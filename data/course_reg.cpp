#include"../main_header.h"

//empty constructor
course_reg::course_reg()
{
    teacher_id = 0;
    course_id = 0;
}

//parametric constructor
course_reg::course_reg(int input_teacher_id, int input_course_id)
{
    teacher_id = input_teacher_id;
    course_id = input_course_id;
}

//copy constructor
course_reg::course_reg(course_reg &cr)
{
    teacher_id = cr.teacher_id;
    course_id = cr.course_id;
}

//setter
void course_reg::set_teacher_id(int input_teacher_id)
{
    teacher_id = input_teacher_id;
}

void course_reg::set_course_id(int input_course_id)
{
    course_id = input_course_id;
}

//getter
int course_reg::get_teacher_id()
{
    return teacher_id;
}

int course_reg::get_course_id()
{
    return course_id;
}

//destructor
course_reg::~course_reg()
{
    //empty
}