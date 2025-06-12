#include"../main_header.h"

//empty constructor
teacher::teacher()
{
    name = " ";
    gender = " ";
    id = 0;
    age = 0;
    phone_number = "0000-0000000";
    address = " ";
    email = " ";
    specialization = " ";
}

//parametric constructor
teacher::teacher(string input_name, string input_gender, int input_id, int input_age, string input_phone_no, string input_address, string input_email, string input_spec)
{
    name = input_name;
    gender = input_gender;
    id = input_id;
    age = input_age;
    phone_number = input_phone_no;
    address = input_address;
    email = input_email;
    specialization = input_spec;
}

//copy constructor
teacher::teacher(teacher &t)
{
    name = t.name;
    gender = t.gender;
    id = t.id;
    age = t.age;
    phone_number = t.phone_number;
    address = t.address;
    email = t.email;
    specialization = t.specialization;
}

//setter
void teacher::set_name(string input_name)
{
    name = input_name;
}

void teacher::set_gender(string input_gender)
{
    gender = input_gender;
}

void teacher::set_id(int input_id)
{
    id = input_id;
}

void teacher::set_age(int input_age)
{
    age = input_age;
}

void teacher::set_phone_number(string input_phone_no)
{
    phone_number = input_phone_no;
}

void teacher::set_address(string input_address)
{
    address = input_address;
}

void teacher::set_email(string input_email)
{
    email = input_email;
}

void teacher::set_specialization(string input_spec)
{
    specialization = input_spec;
}

//getter
string teacher::get_name() 
{
    return name;
}

string teacher::get_gender() 
{
    return gender;
}

int teacher::get_id()
{
    return id;
}

int teacher::get_age()
{
    return age;
}

string teacher::get_phone_number()
{
    return phone_number;
}

string teacher::get_address() 
{
    return address;
}

string teacher::get_email() 
{
    return email;
}

string teacher::get_specialization()
{
    return specialization;
}

//destructor
teacher::~teacher()
{
    //empty
}