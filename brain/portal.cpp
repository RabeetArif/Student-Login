#include"../main_header.h"

//empty constructor
portal::portal()
{
    student_count = 0;
    teacher_count = 0;
    course_count = 0;
    course_reg_count = 0;
    student_reg_count = 0;

    for(int i=0; i<size; i++)
    {
        //for student
        student_array[i] = student();

        //for teacher
        teacher_array[i] = teacher();

        //for course
        course_array[i] = course();

        //for course_reg
        course_reg_array[i] = course_reg(); 

        //for student_reg
        student_reg_array[i] = student_reg();

    }
}

//copy constructor
portal::portal(portal &p1)
{
    student_count = p1.student_count;
    teacher_count = p1.teacher_count;
    course_count = p1.course_count;
    course_reg_count = p1.course_reg_count;
    student_reg_count = p1.student_reg_count;

    //for student
    for(int i =0; i<p1.student_count; i++)
    {
        student_array[i] = p1.student_array[i];
    }

    //for teacher
    for(int i =0; i<p1.teacher_count; i++)
    {
        teacher_array[i] = p1.teacher_array[i];
    }

    //for course
    for(int i=0; i<p1.course_count; i++)
    {
        course_array[i] = p1.course_array[i];
    }

    //for course_reg
    for(int i=0; i<p1.course_reg_count; i++)
    {
        course_reg_array[i] = p1.course_reg_array[i];
    }

    //for student_reg
    for(int i=0; i<student_reg_count; i++)
    {
        student_reg_array[i] = p1.student_reg_array[i];
    }
}

//for parametric constructor
portal::portal(student s1[size], teacher t1[size], course c1[size], course_reg cr1[size], student_reg sr1[size], int s, int t, int c, int cr, int sr   )
{
    student_count = s;
    teacher_count = t;
    course_count = c;
    course_reg_count = cr;
    student_reg_count = sr;

    //for student
    for(int i=0; i<s; i++)
    {
       student_array[i] = s1[i];
    }

    //for teacher
    for(int i=0; i<t; i++)
    {
        teacher_array[i] = t1[i];
    }
 
    //for course
    for(int i=0; i<c; i++)
    {
        course_array[i] = c1[i];
    }

    //for course_reg
    for(int i=0; i<cr; i++)
    {
        course_reg_array[i] = cr1[i];
    }

    //for student_reg
    for(int i=0; i<sr; i++)
    {
        student_reg_array[i] = sr1[i];
    }
}

//For student

// 1) set student count
void portal::set_student_count(int sc)
{
    student_count = sc;
}
// get student count
int portal::get_student_count()
{
    return student_count;
}
  
// 2) set student_array
 void portal::set_student_array(student s1[size])
{
    for(int i=0; i < size; i++)
    {
        student_array[i] = s1[i];
    }
}

//getter
void portal::get_student_array(student s[size])
 {
    for(int i=0; i<size; i++)
    {
        s[i] = student_array[i];
    }
}

// 3) add, delete, and update student
void portal::add_student(student s1)
{

       student_array[student_count] = s1;
        student_count++;
}

void portal::delete_student(int index)
{
   for(int i=0; i<student_count; i++)
   {  
     if(i == index)
     {
         for(int j = i; j < student_count - i; j++)
         {
             student_array[j] = student_array[j+1];
         }
        student_count--;
     }
    }
}

void portal::update_student(int index, student s1)
{
    index--;
    if(index == 0)
    {
        student_array[0]=s1;
    }
    if(index <= student_count)
    {
        student_array[index] = s1;
    }    
}


//for teacher

// 1) Teacher count
void portal::set_teacher_count(int tc)
{
    teacher_count = tc;
}

int portal::get_teacher_count()
{
    return teacher_count;
}

// 2) Teacher array
void portal::set_teacher_array(teacher t1[size])
{
    for(int i=0; i<size; i++)
    {
        teacher_array[i] = t1[i];
    }
}

void portal::get_teacher_array(teacher t[size])
{
    for(int i=0; i<size; i++)
    {
        t[i] = teacher_array[i];
    }
}

// 3) add, delete, and update teacher
void portal::add_teacher(teacher t1)
{
    teacher_array[teacher_count] = t1;
    teacher_count++;
}

void portal::delete_teacher(int index)
{
    for(int i = 0; i < teacher_count; i++)
    {
        if( i == index )
        {
          for(int j = i; j < teacher_count -1; j++)
          {
            teacher_array[j] = teacher_array[j+1];
           }

       teacher_count--;
    }
   } 
}

void portal::update_teacher(int index, teacher t1)
{
    index--;
    if(index <= teacher_count)
     {
      teacher_array[index] = t1;
    }
}

//for course
// 1) course count
void portal::set_course_count(int cc)
{
    course_count = cc;
}

int portal::get_course_count()
{
    return course_count;
}

// 2) course array
void portal::set_course_array(course c1[size])
{
    for(int i=0; i<size; i++)
    {
        course_array[i] = c1[i];
    }
}

void portal::get_course_array(course c[size])
{
    for(int i=0; i<size; i++)
    {
        c[i] = course_array[i];
    }
}

// 3) add, delete, and update course
void portal::add_course(course c1)
{
    course_array[course_count] = c1;
    course_count++;
}

void portal::delete_course(int index)
{
   for(int i=0; i<course_count; i++)
    {
     if( i == index)
     {
        for(int j = j; j < course_count -1; j++)
        {
            course_array[j] = course_array[j+1];
        }

       course_count--;
    }
  }
}

void portal::update_course(int index, course c1)
{
    index--;
    if( index <= course_count)
    {
      course_array[index] = c1;
    }
}    

//for course registration
// 1) course_reg_count
void portal::set_course_reg_count(int crc)
{
    course_reg_count = crc;
}

int portal::get_course_reg_count()
{
    return course_reg_count;
}

// 2) cr_array
void portal::set_course_reg_array(course_reg cr1[size])
{
    for(int i=0; i<size; i++)
    {
        course_reg_array[i] = cr1[i];
    }
}

void portal::get_course_reg_array(course_reg cr[size])
{
    for(int i=0; i<size; i++)
    {
        cr[i] =course_reg_array[i];
    }
}

// 3) add, delete, and update course_reg
void portal::add_course_reg(course_reg cr1)
{
    course_reg_array[course_reg_count] = cr1;
    course_reg_count++;
}

void portal::delete_course_reg(int index)
{
    for( int i=0; i<course_reg_count; i++)
    {
        if(i == index)
        {
            for(int j=i; j < course_reg_count-1; j++)
            {
                course_reg_array[j] = course_reg_array[j+1];
            }
          course_reg_count--;
        }
    }
}

void portal::update_course_reg(int index, course_reg cr1)
{
    index--;
    if(index <= course_reg_count)
    {
        course_reg_array[index] = cr1;
        int course_id = cr1.get_course_id();
        int teacher_id = cr1.get_teacher_id();
        cout << "Course Details: " << course_array[course_id].get_course_name() << endl;
        cout << "Teacher assigned is: " << teacher_array[teacher_id].get_name() << endl;
               
    }
}

 
//for student registration
// 1) student_reg_count
void portal::set_student_reg_count(int src)
{
    student_reg_count = src;
}

int portal::get_student_reg_count()
{
    return student_reg_count;
}

// 2) sr_array
void portal::set_student_reg_array(student_reg sr1[size])
{
    for(int i=0; i<size; i++)
    {
        student_reg_array[i] = sr1[i];
    }
}

void portal::get_student_reg_array(student_reg sr[size])
{
    for(int i=0; i<size; i++)
    {
        sr[i] =student_reg_array[i];
    }
}

// 3) add, delete, and update student_reg
void portal::add_student_reg(student_reg sr1)
{
    student_reg_array[student_reg_count] = sr1;
    student_reg_count++;
}

void portal::delete_student_reg(int index)
{
    for( int i=0; i<student_reg_count; i++)
    {
        if(i == index)
        {
            for(int j=i; j < student_reg_count-1; j++)
            {
                student_reg_array[j] = student_reg_array[j+1];
            }
          student_reg_count--;
        }
    }
}

void portal::update_student_reg(int index, student_reg sr1)
{
    index--;
    if(index <= student_reg_count)
    {
        student_reg_array[index] = sr1;
        int course_reg_id = sr1.get_course_reg_id();
        int student_id = sr1.get_student_id();
        cout << "Course Details are: " << student_array[student_id].get_name();
        int course_reg_index = course_reg_array[course_reg_id].get_course_id();
        int teacher_reg_index = course_reg_array[course_reg_id].get_teacher_id();
        cout << "The course registered is: " << course_array[course_reg_index].get_course_name() << endl;
        cout << "The teacher assigned is: " << teacher_array[teacher_reg_index].get_name() << endl;                 
    }
}

  portal::~portal()
{
     cout << "Empty" << endl;    
}

