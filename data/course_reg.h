#include"../main_header.h"

class course_reg
{
    private:
    int teacher_id;
    int course_id;

    public:

    //empty constructor
    course_reg();

    //parametric constructor
    course_reg(int input_teacher_id, int course_id);

    //copy constructor
    course_reg(course_reg &cr);

    //getter
    int get_teacher_id();
    int get_course_id();

    //setter
    void set_teacher_id(int input_teacher_id);
    void set_course_id(int input_course_id);

    //destructor
    ~course_reg();
};