#ifndef TEACHER_H
#define TEACHER_H
#include<Person.h>
class Teacher:public Person
{

private:
    int teacherId;
    string subjectSpecilaization;
    float salary;
public:
    Teacher()
    {
        teacherId =-1;
        subjectSpecilaization="no subjectSpecilaization";
        salary=-1;
    }
    Teacher(string name,int age, string gender,string address,string phoneNumber,string email,
            int teacherId,string subjectSpecilaization,float salary)
        :Person(name,age,gender,address,phoneNumber,email)
    {
        this-> teacherId= teacherId;
        this->subjectSpecilaization=subjectSpecilaization;
        this->salary=salary;
    }
    void setTeacherId(int  teacherId)
    {
        this-> teacherId= teacherId;
    }
    void setSubjectSpecilaization(string subjectSpecilaization)
    {
        this->subjectSpecilaization=subjectSpecilaization;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getTeacherId()
    {
        return teacherId;
    }
    string getSubjectSpecilaization()
    {
        return subjectSpecilaization;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The TeacherId is : "<<teacherId<<endl;
        cout<<"The SubjectSpecilaization is : "<<subjectSpecilaization<<endl;
        cout<<"The Salary is : "<<salary<<endl;
    }
};
#endif // TEACHER_H
