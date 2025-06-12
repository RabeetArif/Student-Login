#include"../main_header.h"
#define size 100

class portal
{
    private:
    student student_array[size];
    int student_count;

    teacher teacher_array[size];
    int teacher_count;

    course course_array[size];
    int course_count;

    course_reg course_reg_array[size];
    int course_reg_count;

    student_reg student_reg_array[size];
    int student_reg_count;

    public:

    //empty constructor
    portal();

    //parametric constructor
    portal(student s1[size], teacher t1[size], course c1[size], course_reg cr1[size], student_reg sr1[size], int s, int t, int c, int cr, int sr);
    
    //copy constructor 
    portal(portal &p);

    //getter for arrays
    void get_student_array(student s[size]);
    void get_teacher_array(teacher t[size]);
    void get_course_array(course c[size]);
    void get_course_reg_array(course_reg cr[size]);
    void get_student_reg_array(student_reg sr[size]);

    //setter for arrays
    void set_student_array(student s1[size]);
    void set_teacher_array(teacher t1[size]);
    void set_course_array(course c1[size]);
    void set_course_reg_array(course_reg cr1[size]);
    void set_student_reg_array(student_reg sr1[size]);

    //getter for count
    int get_student_count();
    int get_teacher_count();
    int get_course_count();
    int get_course_reg_count();
    int get_student_reg_count();

    //setter for count
    void set_student_count(int sc);
    void set_teacher_count(int tc);
    void set_course_count(int cc);
    void set_course_reg_count(int crc);
    void set_student_reg_count(int src);

    //funtion for adding
    void add_student(student s1);
    void add_teacher(teacher t1);
    void add_course(course c1);
    void add_course_reg(course_reg cr1);
    void add_student_reg(student_reg sr1);

    //function for deleting
    void delete_student(int index);
    void delete_teacher(int index);
    void delete_course(int index);
    void delete_course_reg(int index);
    void delete_student_reg(int index);

    //function for updating
    void update_student(int index, student s1);
    void update_teacher(int index, teacher t1);
    void update_course(int index, course c1);
    void update_course_reg(int index, course_reg cr1);
    void update_student_reg(int index, student_reg sr1);

      

    //destructor
    ~portal();  


};