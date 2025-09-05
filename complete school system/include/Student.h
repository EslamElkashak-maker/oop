#ifndef STUDENT_H
#define STUDENT_H
#include<Person.h>
class Student:public Person
{
private:
    int studentId;
    string gradeLevel;
    float gpa;
public:
    Student()
    {
        studentId=-1;
        gradeLevel="no gradeLevel";
        gpa=-1;
    }
    Student(string name,int age, string gender,string address,string phoneNumber,string email,
            int studentId,string gradeLevel,float gpa)
        :Person(name,age,gender,address,phoneNumber,email)
    {
        this->studentId=studentId;
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    void setStudentId(int studentId)
    {
        this->studentId=studentId;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa=gpa;
    }
    int getStudentId()
    {
        return studentId;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
    }
    void print()
    {
        Person::print();
        cout<<"The StudentId is : "<<studentId<<endl;
        cout<<"The GradeLevel is : "<<gradeLevel<<endl;
        cout<<"The Gpa is : "<<gpa<<endl;
    }
};
#endif // STUDENT_H
