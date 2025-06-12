#include"../main_header.h"

class teacher
{
    private:
    string name;
    string gender;
    int id;
    int age;
    string phone_number;
    string address;
    string email;
    string specialization;

    public:
    
    //empty constructor
    teacher();

    //parameteric constructor
    teacher(string input_name, string input_gender, int input_id, int input_age, string input_phone_no, string input_address, string input_email, string input_spec);

    //copy constructor
    teacher(teacher &t);

    //getter
    string get_name();
    string get_gender();
    int get_id();
    int get_age();
    string get_phone_number();
    string get_address();
    string get_email();
    string get_specialization();

    //setter
    void set_name(string input_name);
    void set_gender(string input_gender);
    void set_id(int input_id);
    void set_age(int input_age);
    void set_phone_number(string input_phone_no);
    void set_address(string input_address);
    void set_email(string input_email);
    void set_specialization(string input_spec);

    //destructor
    ~teacher();

};