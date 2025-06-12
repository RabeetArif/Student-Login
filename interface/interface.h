#include"../main_header.h"

class interface
{
   private:
   portal p;

   public:
   //For main_page
   void main_page();

   //for student_page
    void student_record();
     void inter_add_student();
     void inter_update_student();
     void inter_delete_student();
     void display_student();

   // for teacher_page
    void teacher_record();
     void add_teacher();
     void update_teacher();
     void delete_teacher();
     void display_teacher();

  //for course_page  
    void course_record();
     void add_course();
     void update_course();
     void delete_course();
     void display_course();

  //for course_registration
   void course_registration_page();
     void add_course_regsitration();
     void update_course_registration();
     void delete_course_registration();
     void display_course_registration();

  //for student_registration
  void student_registration_page();
     void add_student_registration();
     void update_student_registration();
     void delete_student_registration();
     void display_student_registration();
};