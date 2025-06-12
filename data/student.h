#include"../main_header.h"
using namespace std;


class student
{
    private:
    string name;
    int roll_no;
    int age;
    string gender;
    int semester;
    float gpa;
    string phone_number;
    string address;
    string email;
    string specialization;

    public:

    //empty constructor
    student();

    //parametric constructor
    student(string input_name, int input_roll_no, int input_age, string input_gender, int input_semester, float input_gpa, string input_phone_no, string input_address, string input_email, string input_spec);

    //copy constructor
    student(student &s);

    //getter
    string get_name();
    int get_age();
    string get_gender();
    int get_semester();
    int get_roll_no();
    float get_gpa();
    string get_phone_number();
    string get_address();
    string get_email();
    string get_specialization();

    //setter
    void set_name(string input_name);
    void set_age(int input_age);
    void set_gender(string input_gender);
    void set_semester(int input_semester);
    void set_roll_no(int input_roll);
    void set_gpa(float input_gpa);
    void set_phone_number(string input_phone_no);
    void set_address(string input_address);
    void set_email(string input_email);
    void set_specialization(string input_spec);

    //destructor
    ~student();

};