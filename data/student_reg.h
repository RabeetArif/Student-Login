#include"../main_header.h"

class student_reg
{
    private:
    int student_id;
    int course_reg_id;

    public:

    //empty constructor
    student_reg();

    //parametric constructor
    student_reg(int input_stud_id, int input_cr_id);

    //copy constructor
    student_reg(student_reg &sr);

    //getter
    int get_student_id();
    int get_course_reg_id();

    //setter
    void set_student_id(int input_stud_id);
    void set_course_reg_id(int input_cr_id);

    //destructor
    ~student_reg();

};