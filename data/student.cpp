#include"../main_header.h"

//empty constructor
student::student()
{
    name = " ";
    roll_no = 0;
    age = 0;
    gender = " ";
    semester = 0;
    gpa = 0.0;
    phone_number = "0000-0000000";
    address = " ";
    email = " ";
    specialization = " ";
}

//parametric constructor
student::student(string input_name, int input_roll_no, int input_age, string input_gender, int input_semester, float input_gpa, string input_phone_no, string input_address, string input_email, string input_spec)
{
    name = input_name;
    roll_no = input_roll_no;
    age = input_age;
    gender = input_gender;
    semester = input_semester;
    gpa = input_gpa;
    phone_number = input_phone_no;
    address = input_address;
    email = input_email;      
    specialization = input_spec;
}

//copy constructor
student::student(student &s)
{
    name = s.name;
    roll_no = s.roll_no;
    age = s.age;
    gender = s.gender;
    semester = s.semester;
    gpa = s.gpa;
    phone_number = s.phone_number;
    address = s.address;
    email = s.email;
    specialization = s.specialization;
}

//setter
void student::set_name(string input_name)
{
    name = input_name;
}

void student::set_age(int input_age)
{
    age = input_age;
}

void student::set_gender(string input_gender)
{
    gender = input_gender;
}

void student::set_semester(int input_semester)
{
        semester= input_semester;
}

void student::set_roll_no(int input_roll)
{
        roll_no = input_roll;
}

void student::set_gpa(float input_gpa)
{
    gpa = input_gpa;
}

void student::set_phone_number(string input_phone_no)
{
    phone_number = input_phone_no;
}

void student::set_address(string input_address)
{
    address = input_address;
}

void student::set_email(string input_email)
{
    email = input_email;
}

void student::set_specialization(string input_spec)
{
    specialization = input_spec;
}

//getter
string student::get_name()
{
    return name;
}

int student::get_age()
{
    return age;
}

string student::get_gender()
{
    return gender;
}

int student::get_semester()
{
    return semester;
}

int student::get_roll_no()
{
    return roll_no;
}

float student::get_gpa()
{
    return gpa;
}

string student::get_phone_number()
{
    return phone_number;
}

string student::get_address() 
{
    return address;
}

string student::get_email() 
{
    return email;
}

string student::get_specialization()
{
    return specialization;
}
 
//destructor
student::~student()
{
    //empty
}

