#include"../main_header.h"

class course
{
    private:
    int code;
    string course_name;
    int credit_hours;
    string department;

    public:

    //empty constructor
    course();

    //parametric constructor
    course(int input_code, string input_cname, int input_credit_hours, string input_dept);

    //copy constructor
    course(course &c1);

    //getter
    int get_code();
    string get_course_name();
    int get_credit_hours();
    string get_department();

    //setter
    void set_code(int input_code);
    void set_course_name(string input_cname);
    void set_credit_hours(int input_credit_hours);
    void set_department(string input_dept);

    //destructor
    ~course();
};