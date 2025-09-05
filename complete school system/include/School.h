#ifndef SCHOOL_H
#define SCHOOL_H
#include <Teacher.h>
#include <Student.h>
#include <Staff.h>
#include <Course.h>
#include <Classroom.h>
class School
{
private:
    int studentCounter;
    int teacherCounter;
    int staffCounter;
    int courseCounter;
    int classroomCounter;
    string schoolName;
    string address;
    string principalName;
    Student students[500];
    Teacher teachers[20];
    Staff staffMembers[20];
    Course courses[6];
    Classroom classrooms[10];
public:

    School()
    {
        studentCounter=0;
        teacherCounter=0;
        staffCounter=0;
        courseCounter=0;
        classroomCounter=0;
        schoolName="No schoolName";
        address="No address";
        principalName="No principalName";
    }
    void addStudent(Student student)
    {
        if( studentCounter==500)
        {
            cout<<"The Student In The School Is Full"<<endl;
        }
        else
        {

            students[studentCounter]=student;
            studentCounter++;
        }
    }
    void printStudents()
    {
        for (int i=0; i<studentCounter; i++)
        {
            students[i].print();
            cout<<"_________________________"<<endl;
        }
    }
     void addTeacher(Teacher teacher)
    {
        if( teacherCounter==20)
        {
            cout<<"The Teacher In The School Is Full"<<endl;
        }
        else
        {

            teachers[teacherCounter]=teacher;
            teacherCounter++;
        }
    }
    void printTeachers()
    {
        for (int i=0; i<teacherCounter; i++)
        {
            teachers[i].print();
            cout<<"_________________________"<<endl;
        }
    }
     void addStaff(Staff staff)
    {
        if( staffCounter==20)
        {
            cout<<"The Staff In The School Is Full"<<endl;
        }
        else
        {

            staffMembers[staffCounter]=staff;
            staffCounter++;
        }
    }
    void printStaffMembers()
    {
        for (int i=0; i<staffCounter; i++)
        {
             staffMembers[i].print();
            cout<<"_________________________"<<endl;
        }
    }
     void addCourse(Course course)
    {
        if( courseCounter==6)
        {
            cout<<"The courses to This Student Is Full"<<endl;
        }
        else
        {

           courses[courseCounter]=course;
            courseCounter++;
        }
    }
    void printCourses()
    {
        for (int i=0; i<courseCounter; i++)
        {
            courses[i].print();
            cout<<"_________________________"<<endl;
        }
    }
     void addClassrom(Classroom classroom)
    {
        if( classroomCounter==500)
        {
            cout<<"The Classrom In The School Is Full"<<endl;
        }
        else
        {

            classrooms[classroomCounter]=classroom;
            classroomCounter++;
        }
    }
    void printClassrooms()
    {
        for (int i=0; i<classroomCounter; i++)
        {
            classrooms[i].print();
            cout<<"_________________________"<<endl;
        }
    }
    School( string schoolName,string address,string principalName)
    {
        this->schoolName=schoolName;
        this->address=address;
        this->principalName=principalName;
    }
    void setSchoolName(string schoolName)
    {
        this->schoolName=schoolName;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPrincipalName(string principalName)
    {
        this->principalName=principalName;
    }
    string getSchoolName()
    {
        return schoolName;
    }
    string getAddress()
    {
        return address;
    }
    string getPrincipalName()
    {
        return principalName;
    }

};

#endif // SCHOOL_H
