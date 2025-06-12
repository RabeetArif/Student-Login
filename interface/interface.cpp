#include"../main_header.h"


//MAIN PAGE

void interface::main_page()
{ while(1)
   
 {
      int choice = 0; //To select what to display
   
   cout << "                        --------------------------------------------------------------------------------------  " << endl;
   cout << "                       | **************************** WELCOME TO MAIN PAGE *********************************  | " << endl;
   cout << "                       | **************************** SELECT YOUR CHOICE ***********************************  | " << endl;
   cout << "                       | **************************** PRESS 1 TO ACCESS STUDENT PAGE ***********************  | " << endl;
   cout << "                       | **************************** PRESS 2 TO ACCESS TEACHER PAGE ***********************  | " << endl;
   cout << "                       | **************************** PRESS 3 TO ACCESS COURSE PAGE ************************  | " << endl;
   cout << "                       | **************************** PRESS 4 FOR COURSE REGISTRATION **********************  | " << endl;
   cout << "                       | **************************** PRESS 5 FOR STUDENT REGISTRATION *********************  | " << endl;
   cout << "                       | **************************** PRESS -1 TO EXIT THE PROGRAM *************************  | " << endl;
   cout << "                        --------------------------------------------------------------------------------------  " << endl;
   
   cin >> choice;
   switch(choice)
   {
     case 1:
      student_record();
      break;

      case 2:
       teacher_record();
       break;

      case 3:
       course_record();
       break;

       
      case 4:
       course_registration_page();
       break;

       
      case 5:
       student_registration_page();
       break;
      
      case -1: 
        cout << "                                     --------------------- EXITING PROGRAM ---------------------" << endl;
        exit(0);
       break;

      default:
       cout << "                                       -------- YOU HAVE ENTERED AN INVALID OPTION ------------- " << endl; 
       cout << "                                                -------- ENTER A VALID OPTION --------           " << endl; 
       
   }
          
    }
}

 // ****************** STUDENT PAGE *******************
void interface::student_record()
{
    int option;
    bool repeat = true;

    while(repeat)
{ 
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   cout << "                       |  *************************** STUDENT RECORD PAGE *************************************   | " << endl;
   cout << "                       |  *************************** SELECT AN OPTION ****************************************   | " << endl;
   cout << "                       |  *************************** SELECT 1 TO DISPLAY STUDENT RECORD **********************   | " << endl;
   cout << "                       |  *************************** SELECT 2 TO ADD IN STUDENT RECORD ***********************   | " << endl;
   cout << "                       |  *************************** SELECT 3 TO DELETE FROM STUDENT RECORD ******************   | " << endl;
   cout << "                       |  *************************** SELECT 4 TO UPDATE STUDENT RECORD ***********************   | " << endl;
   cout << "                       |  *************************** SELECT 0 TO RETURN TO MAIN PAGE *************************   | " << endl;
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;

   cin >> option;
   switch(option)
   {
     case 1:
      display_student();
      student_record();
      break;

     case 2:
      inter_add_student();
      student_record();
      break;

     case 3:
      inter_delete_student();
      student_record();
      break;
      
     case 4:
      inter_update_student();
      student_record();
      break;

     case 0:
      if(option == 0)
      repeat = false;
      main_page();
      break; 

     default:
      cout << "                                       -------- YOU HAVE ENTERED AN INVALID OPTION -------------               " << endl; 
      cout << "                                                -------- ENTER A VALID OPTION --------                         " << endl; 
      break;
    
   }
}
}

void interface::display_student()
{
   int count = p.get_student_count();
   student student_array[size];
   p.get_student_array(student_array);
   
   
   
   if(count == 0)
   {
      cout << "                                        ---------------- No Student Found ----------------- " << endl;
   
   }
   else
   {
   
     for(int i=0; i<count; i++)
     {  
      cout << "                                        --------------- STUDENT RECORD TABLE -------------- " << endl;
      cout << i+1 << "                                 Student Name: " << student_array[i].get_name() << endl;
      cout <<        "                                  Student Roll Number: " << student_array[i].get_roll_no() << endl;
      cout <<        "                                  Student Gender: " << student_array[i].get_gender() << endl;
      cout <<        "                                  Student Age: " << student_array[i].get_age() << endl;
      cout <<        "                                  Current Semester: " << student_array[i].get_semester() << endl;
      cout <<        "                                  Student GPA: " << student_array[i].get_gpa() << endl;
      cout <<        "                                  Student Phone-Number: " << student_array[i].get_phone_number() << endl;
      cout <<        "                                  Student Address: " << student_array[i].get_address() << endl;
      cout <<        "                                  Student Email: " << student_array[i].get_email() << endl;
      cout <<        "                                  Student Specialization: " << student_array[i].get_specialization() << endl;    
      cout <<        "                                        -------------------------------------------- " << endl;  
   }
 }
  
  student_record();

}

void interface::inter_add_student()
{
   cout << "Enter the Details of the Student to Add:" << endl;
   
   // get student details from the user
    string name;
    cout << "Enter The Name of Student: ";
    cin >> name;

    int roll_no = 0;
    cout << "Enter The Roll Number of Student: ";
    cin >> roll_no;

    int age = 0;
    cout << "Enter The Age of Student: ";
    cin >> age;

    string gender;
    cout << "Enter The Gender of Student: ";
    cin >> gender;

    int semester = 0;
    cout << "Enter The Semester of Student: ";
    cin >> semester;

    float gpa = 0.00;
    cout << "Enter The Gpa of Student: ";
    cin >> gpa;

    string phone_number;
    cout << "Enter The Phone number of Student: ";
    cin >> phone_number;

    string address;
    cout << "Enter The Address of Student: ";
    getline(cin, address);  
      
    string email;
    cout << "Enter The Email of Student: ";
    getline(cin, email); 

    string specialization;
    cout << "Enter The Specialization of Student: ";
    cin >> specialization;

   student s1(name, roll_no, age, gender, semester, gpa, phone_number, address, email, specialization);
   p.add_student(s1);

   cout << "STUDENT ADDED SUCCESSFULLY." << endl;

// Return to the student record page
student_record();

}


void interface::inter_delete_student()
{
    int index = 0;
    cout << "Enter The Index Of The Student To Delete:  " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_student_count();
    if( index >= 0 && index < count)
    {
      p.delete_student(index); 
       cout << "Student Has Been Deleted Successfully." << endl;
       student_record();
    }

    else
    {
       cout << "Student not Found." << endl;
       inter_delete_student();
    }
    
}


void interface::inter_update_student()
{
    int index = 0;
    cout << "Enter the index of the student to update: " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_student_count();
    if (index >= 0 && index < count)
     {
        cout << "Enter the updated student information: " << endl;

        string name;
        cout << "Name: ";
        cin >> name;
        
        int roll_no = 0;
        cout << "Roll Number: ";
        cin >> roll_no;

        int age = 0;
        cout << "Age: ";
        cin >> age;

        string gender;
        cout << "Gender: ";
        cin >> gender;

        int semester = 0;
        cout << "Semester: ";
        cin >> semester;

        float gpa = 0.00;
        cout << "Gpa: ";
        cin >> gpa;

        string phone_number;
        cout << "Phone number: ";
        cin >> phone_number;

        string address;
        cout << "Address: ";
        getline(cin, address);   

        string email;
        cout << "Email: ";
        getline(cin, email);

        string specialization;
        cout << "Specialization: ";
        cin >> specialization;
   
        // create a new student object with the updated information
        student s1(name, roll_no, age, gender, semester, gpa, phone_number, address, email, specialization);
        p.update_student(index, s1);
        cout << "STUDENT UPDATED SUCCESSFULLY." << endl;
      student_record();
      } 
      
    else 
    {
        cout << "STUDENT NOT FOUND." << endl;
        student_record();  
    }

   
}

 // ****************** TEACHER PAGE *******************
void interface::teacher_record()
{
    int option;
    bool repeat = true;
    
    while(repeat)
 {   
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   cout << "                       |  *************************** TEACHER RECORD PAGE *************************************   | " << endl;
   cout << "                       |  *************************** SELECT AN OPTION ****************************************   | " << endl;
   cout << "                       |  *************************** SELECT 1 TO DISPLAY TEACHER RECORD **********************   | " << endl;
   cout << "                       |  *************************** SELECT 2 TO ADD IN TEACHER RECORD ***********************   | " << endl;
   cout << "                       |  *************************** SELECT 3 TO DELETE FROM TEACHER RECORD ******************   | " << endl;
   cout << "                       |  *************************** SELECT 4 TO UPDATE TEACHER RECORD ***********************   | " << endl;
   cout << "                       |  *************************** SELECT 0 TO RETURN TO MAIN PAGE *************************   | " << endl;
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   
   cin >> option;
   switch(option)
   {
     case 1:
      display_teacher();
      teacher_record();
      break;

      case 2:
        add_teacher();
        teacher_record();
        break;

       case 3:
        delete_teacher();
        teacher_record();
        break;
      
       case 4:
        update_teacher();
        teacher_record();
        break;

      case 0:
       repeat = false;
       main_page(); 

      default:
       cout << "                                       -------- YOU HAVE ENTERED AN INVALID OPTION -------------               " << endl; 
       cout << "                                                -------- ENTER A VALID OPTION --------                         " << endl; 
        teacher_record();
    
   }
 }
} 

void interface::display_teacher()
{
   int count = p.get_teacher_count();
   teacher teacher_array[size];
   p.get_teacher_array(teacher_array);
   
   if(count == 0)
   {
      cout << "                                        ---------------- No Teacher Found ----------------- " << endl;
      teacher_record();
   }
   else
   {
   
     for(int i=0; i<count; i++)
     {  
      cout << "                                        --------------- TEACHER RECORD TABLE -------------- " << endl;
      cout << i+1 << "                                 Teacher Name: " << teacher_array[i].get_name() << endl;
      cout <<        "                                  Teacher Gender: " << teacher_array[i].get_gender() << endl;
      cout <<        "                                  Teacher ID: " << teacher_array[i].get_id() << endl;
      cout <<        "                                  Teacher Age: " << teacher_array[i].get_age() << endl;
      cout <<        "                                  Teacher Phone-Number: " << teacher_array[i].get_phone_number() << endl;
      cout <<        "                                  Teacher Address: " << teacher_array[i].get_address() << endl;
      cout <<        "                                  Teacher Email: " << teacher_array[i].get_email() << endl;
      cout <<        "                                  Teacher Specialization: " << teacher_array[i].get_specialization() << endl;    
      cout <<        "                                  -------------------------------------------------------- " << endl;  
   }
    
}
  teacher_record();
}


void interface::add_teacher()
{
   cout << "Enter the Details of the Teacher to Add:" << endl;
   
   // get teacher details from the user
    string name;
    cout << "Enter The Name of Teacher: ";
    cin >> name;

    string gender;
    cout << "Enter The Gender of Teacher: ";
    cin >> gender;

    int id = 0;
    cout << "Enter The ID of Teacher: ";
    cin >> id;

    int age = 0;
    cout << "Enter The Age of Teacher: ";
    cin >> age;

    string phone_number;
    cout << "Enter The Phone number of Teacher: ";
    cin >> phone_number;

    string address;
    cout << "Enter The Address of Teacher: ";    
    getline(cin, address);   
      
    string email;
    cout << "Enter The Email of Teacher: ";
    getline(cin, email);

    string specialization;
    cout << "Enter The Specialization of Teacher: ";
    cin >> specialization;

   teacher t(name, gender, id, age, phone_number,address, email, specialization );
   p.add_teacher(t);

   cout << "TEACHER ADDED SUCCESSFULLY." << endl;

// Return to the teacher record page
teacher_record();

}


void interface::delete_teacher()
{
    int index = 0;
    cout << "Enter The Index Of The Teacher To Delete:  " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_teacher_count();
    if( index >= 0 && index < count)
    {
      p.delete_teacher(index); 
       cout << "Teacher Has Been Deleted Successfully." << endl;
       teacher_record();
    }

    else
    {
       cout << "Teacher not Found." << endl;
       teacher_record();
    }
    
}


void interface::update_teacher()
{
    int index = 0;
    cout << "Enter the index of the Teacher to update: " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_teacher_count();
    if (index >= 0 && index < count)
     {
        cout << "Enter the updated Teacher Information: " << endl;

        string name;
        cout << "Name: ";
        cin >> name;
     
        string gender;
        cout << "Gender: ";
        cin >> gender;

        int id = 0;
        cout << "ID: ";
        cin >> id;

        int age = 0;
        cout << "Age: ";
        cin >> age;
     
        string phone_number;
        cout << "Phone number: ";
        cin >> phone_number;

        string address;
        cout << "Address: ";
        getline(cin, address);
      
        string email;
        cout << "Email: ";
        getline(cin, email);

        string specialization;
        cout << "Specialization: ";
        cin >> specialization;
   
        // create a new student object with the updated information
        teacher t(name, gender, id, age, phone_number, address, email, specialization);
        p.update_teacher(index, t);
        cout << "Teacher updated successfully." << endl;
        
        teacher_record();
      } 
      
    else 
    {
        cout << "Teacher not found." << endl;
      teacher_record();
    }

}

 // ****************** COURSE PAGE *******************
void interface::course_record()
{
    int option;
    bool repeat = true;
    
    while(repeat)

{ 
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   cout << "                       |  *************************** COURSE RECORD PAGE *************************************   | " << endl;
   cout << "                       |  *************************** SELECT AN OPTION ****************************************   | " << endl;
   cout << "                       |  *************************** SELECT 1 TO DISPLAY COURSE RECORD **********************   | " << endl;
   cout << "                       |  *************************** SELECT 2 TO ADD IN COURSE RECORD ***********************   | " << endl;
   cout << "                       |  *************************** SELECT 3 TO DELETE FROM COURSE RECORD ******************   | " << endl;
   cout << "                       |  *************************** SELECT 4 TO UPDATE COURSE RECORD ***********************   | " << endl;
   cout << "                       |  *************************** SELECT 0 TO RETURN TO MAIN PAGE *************************   | " << endl;
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   
   cin >> option;
   switch(option)
   {
     case 1:
      display_course();
      course_record();
      break;

      case 2:
        add_course();
        course_record();
        break;

       case 3:
        delete_course();
        course_record();
        break;
      
       case 4:
        update_course();
        course_record();
        break;

      case 0:
       repeat = false;
       main_page(); 

      default:
       cout << "                                       -------- YOU HAVE ENTERED AN INVALID OPTION -------------               " << endl; 
       cout << "                                                -------- ENTER A VALID OPTION --------                         " << endl; 
        course_record();
    
   }
 }
}

void interface::display_course()
{
   int count = p.get_course_count();
   course course_array[size];
   p.get_course_array(course_array);
   
   if(count == 0)
   {
      cout << "                                        ---------------- No Course Found ----------------- " << endl;
      course_record();
   }
   else 

   {
   
     for(int i=0; i<count; i++)
     {  
      cout << "                                        --------------- COURSE RECORD TABLE -------------- " << endl;
      cout << i+1 << "                                 Course Code: " << course_array[i].get_code() << endl;
      cout <<        "                                  Course Name: " << course_array[i].get_course_name() << endl;
      cout <<        "                                  Credit Hours: " << course_array[i].get_credit_hours() << endl;
      cout <<        "                                  Department: " << course_array[i].get_department() << endl;
      cout <<        "                                 ------------------------------------------------------ " << endl;  
   }
  }

  course_record();
}


void interface::add_course()
{
   cout << "Enter the Details of the Course to Add:" << endl;
   
   // get course details from the user
    int code = 0;
    cout << "Enter the Code of Course: " << endl;
    cin >> code;

    string name;
    cout << "Enter The Course Name: ";
    cin >> name;

    int credit_hours = 0;
    cout << "Enter The Course Credit Hours: ";
    cin >> credit_hours;

    string department;
    cout << "Enter The Department: ";
    cin >> department;

   course c1(code, name, credit_hours, department);
   p.add_course(c1);

   cout << " COURSE ADDED SUCCESSFULLY." << endl;

// Return to the course record page
course_record();

}


void interface::delete_course()
{
    int index = 0;
    cout << "Enter The Index Of The Course To Delete:  " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_course_count();
    if( index >= 0 && index < count)
    {
      p.delete_course(index); 
       cout << "Course Has Been Deleted Successfully." << endl;
       course_record();
    }

    else
    {
       cout << "Course not Found." << endl;
       course_record();   
    }
    
}


void interface::update_course()
{
    int index = 0;
    cout << "Enter the index of the Course to update: " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_course_count();
    if (index >= 0 && index < count)
     {
        cout << "Enter the updated Course Information: " << endl;
           
        int code = 0;
        cout << "Code: " << endl;
        cin >> code;

        string name;
        cout << "Course Name: ";
        cin >> name;

        int credit_hours = 0;
        cout << "Course Credit Hours: ";
        cin >> credit_hours;

        string department;
        cout << "Department: ";
        cin >> department;

      course c1(code, name, credit_hours, department);
      p.update_course(index,c1);

        cout << "Course updated successfully." << endl;

      } 
      
    else 
    {
        cout << "Course not found." << endl;
        course_record();   
    }
}
 
 // ****************** COURSE REGISTRATION PAGE *******************
void interface::course_registration_page()
{
    int option;
    bool repeat = true;

    while(repeat)
{ 
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   cout << "                       |  *************************** COURSE REGISTRTAION PAGE *********************************   | " << endl;
   cout << "                       |  *************************** SELECT AN OPTION *****************************************   | " << endl;
   cout << "                       |  *************************** SELECT 1 TO DISPLAY COURSE REGISTRATION ******************   | " << endl;
   cout << "                       |  *************************** SELECT 2 ADD IN COURSE REGISTRATION **********************   | " << endl;
   cout << "                       |  *************************** SELECT 3 TO DELETE A COURSE REGISTRATION******************   | " << endl;
   cout << "                       |  *************************** SELECT 4 TO UPDATE A COURSE REGISTRATION ******************  | " << endl;
   cout << "                       |  *************************** SELECT 0 TO RETURN TO MAIN PAGE **************************   | " << endl;
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;

   cin >> option;
   switch(option)
   {
     case 1:
      display_course_registration();
      course_registration_page();
      break;

     case 2:
      add_course_regsitration();
      course_registration_page();
      break;

     case 3:
      delete_course_registration();
      course_registration_page();
      break;
      
     case 4:
      update_course_registration();
      course_registration_page();
      break;

     case 0:
      repeat = false;
      main_page();
      break; 

     default:
      cout << "                                       -------- YOU HAVE ENTERED AN INVALID OPTION -------------               " << endl; 
      cout << "                                                -------- ENTER A VALID OPTION --------                         " << endl; 
      course_registration_page();
      break;

    
   }
}
}

void interface::display_course_registration()
{
   int count = p.get_course_reg_count();
   course_reg cr_array[size];
   p.get_course_reg_array(cr_array);
 
   
   if(count == 0)
   {
      cout << "                                        ---------------- No Course Registration Found ----------------- " << endl;
      course_registration_page();
   }
   else 

   {
   
     for(int i=0; i<count; i++)
     {  
      cout << "                                        --------------- COURSE REGISTRATION TABLE -------------- " << endl;
      cout << i+1 << "                                 Teacher Id: " << cr_array[i].get_teacher_id() << endl;
      cout <<        "                                  Course Id: " << cr_array[i].get_course_id() << endl;
      cout <<        "                                 ------------------------------------------------------ " << endl;  
   }
 }
 course_registration_page();
}

 void interface::add_course_regsitration()
 {
    cout << "Enter the Details of the Course Registration to Add:" << endl;
   
   // get course registrstion details from the user
    int teacher_id = 0;
    cout << "Enter Teacher Id: " << endl;
    cin >> teacher_id;

    int course_id = 0;
    cout << "Enter The Course Id: ";
    cin >> course_id;

   course_reg cr1(teacher_id, course_id);
   p.add_course_reg(cr1);

   cout << " COURSE REGISTRATION ADDED SUCCESSFULLY." << endl;

  // Return to the course registration page
    course_registration_page();

 }

 void interface::delete_course_registration()
{
    int index = 0;
    cout << "Enter The Index Of The Course Registration To Delete:  " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_course_reg_count();
    if( index >= 0 && index < count)
    {
      p.delete_course_reg(index); 
       cout << "Course Registration Has Been Deleted Successfully." << endl;
       course_registration_page();
    }

    else
    {
       cout << "Course Registration not Found." << endl;
       course_registration_page();
    }
    
}


void interface::update_course_registration()
{
    int index = 0;
    cout << "Enter the index of the Course Registration to update: " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_course_reg_count();
    if (index >= 0 && index < count)
     {
        cout << "Enter the updated Course Registration Information: " << endl;
           
          int teacher_id = 0;
          cout << "Enter Teacher Id: " << endl;
          cin >> teacher_id;

          int course_id = 0;
          cout << "Enter The Course Id: ";
          cin >> course_id;

      course_reg cr1(teacher_id, course_id);
      p.update_course_reg(index,cr1);

        cout << "Course Registration updated successfully." << endl;

      } 
      
    else 
    {
        cout << "Course Registration not found." << endl;
      course_registration_page();    
    }

    
}

/* Assign a course to teacher 

void interface::assign_course_to_teacher()
{
   int teacher_index = 0;
   cout << "Enter the teacher index to assign to a course" << endl;
   cin >> teacher_index;
   p.course_assign_to_teacher(teacher_index);

}
*/

 // ****************** STUDENT REGISTRATION PAGE *******************
void interface::student_registration_page()
{
    int option;
    bool repeat = true;

    while(repeat)
{ 
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;
   cout << "                       |  *************************** STUDENT REGISTRTAION PAGE *********************************   | " << endl;
   cout << "                       |  *************************** SELECT AN OPTION ******************************************   | " << endl;
   cout << "                       |  *************************** SELECT 1 TO DISPLAY STUDENT REGISTRATION ******************   | " << endl;
   cout << "                       |  *************************** SELECT 2 ADD IN STUDENT REGISTRATION **********************   | " << endl;
   cout << "                       |  *************************** SELECT 3 TO DELETE A STUDENT REGISTRATION******************   | " << endl;
   cout << "                       |  *************************** SELECT 4 TO UPDATE A STUDENT REGISTRATION ******************  | " << endl;
   cout << "                       |  *************************** SELECT 0 TO RETURN TO MAIN PAGE ***************************   | " << endl;
   cout << "                        ------------------------------------------------------------------------------------------  " << endl;

   cin >> option;
   switch(option)
   {
     case 1:
      display_student_registration();
      student_registration_page();
      break;

     case 2:
      add_student_registration();
      student_registration_page();
      break;

     case 3:
      delete_student_registration();
      student_registration_page();
      break;
      
     case 4:
      update_student_registration();
      student_registration_page();
      break;

     case 0:
      repeat = false;
      main_page();
      break; 

     default:
      cout << "                                       -------- YOU HAVE ENTERED AN INVALID OPTION -------------               " << endl; 
      cout << "                                                -------- ENTER A VALID OPTION --------                         " << endl; 
      student_registration_page();
      break;
    
   }
}
}

void interface::display_student_registration()
{
   int count = p.get_student_reg_count();
   student_reg sr_array[size];
   p.get_student_reg_array(sr_array);
 
   
   if(count == 0)
   {
      cout << "                                        ---------------- No Student Registration Found ----------------- " << endl;
      student_registration_page();
   }
   else 

   {
   
     for(int i=0; i<count; i++)
     {  
      cout << "                                      ------------------- STUDENT REGISTRATION TABLE __-------------- " << endl;
      cout << i+1 << "                                 Course Regsitartion Id: " << sr_array[i].get_course_reg_id() << endl;
      cout <<        "                                  Student Id: " << sr_array[i].get_student_id() << endl;
      cout <<        "                               ---------------------------------------------------------------- " << endl;  
    }
  }
  student_registration_page();
}

 void interface::add_student_registration()
 {
    cout << "Enter the Details of the Student Registration to Add:" << endl;
   
   // get student registrstion details from the user
    int student_id = 0;
    cout << "Enter Student Id: " << endl;
    cin >> student_id;

    int course_reg_id = 0;
    cout << "Enter The Course Registration Id: ";
    cin >> course_reg_id;

   student_reg sr1(student_id, course_reg_id);
   p.add_student_reg(sr1);

   cout << " STUDENT REGISTRATION ADDED SUCCESSFULLY." << endl;

  // Return to the student registration page
    student_registration_page();

 }

 void interface::delete_student_registration()
{
    int index = 0;
    cout << "Enter The Index Of The Student Registration To Delete:  " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_student_reg_count();
    if( index >= 0 && index < count)
    {
      p.delete_student_reg(index); 
       cout << "Student Registration Has Been Deleted Successfully." << endl;
       student_registration_page();
    }

    else
    {
       cout << "Student Registration not Found." << endl;
       student_registration_page();    
    }
    
}


void interface::update_student_registration()
{
    int index = 0;
    cout << "Enter the index of the Student Registration to update: " << endl;
    cin >> index;
    if (cin.fail()) 
    {
        // input is not an integer
        cout << "Invalid input. Please enter a valid index." << endl;
        return;
    }

    int count = p.get_student_reg_count();
    if (index >= 0 && index < count)
     {
        cout << "Enter the updated Student Registration Information: " << endl;
           
          int student_id = 0;
          cout << "Enter Student Id: " << endl;
          cin >> student_id;

          int course_reg_id = 0;
          cout << "Enter The Course Registration Id: ";
          cin >> course_reg_id;

      student_reg sr1(student_id, course_reg_id);
      p.update_student_reg(index,sr1);

        cout << "Student Registration updated successfully." << endl;

      } 
      
    else 
    {
        cout << "Student Registration not found." << endl;
        student_registration_page();
    }
    
}

/* Assign a course to student 

void interface::assign_course_to_student()
{
   int student_index = 0;
   cout << "Enter the student index to assign to a course" << endl;
   cin >> student_index;
   p.course_assign_to_student(student_index);

}
*/