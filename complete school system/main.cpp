#include <iostream>
#include <Person.h>
#include <Teacher.h>
#include <Student.h>
#include <Staff.h>
#include <Course.h>
#include <Classroom.h>
#include <Exam.h>
#include <School.h>

using namespace std;

int main()
{
    Student s("Eslam",21,"male","Cairo","01256983454","eslam@gmail.com",78,"3",3.9);
    Student s1("Ali",21,"male","Cairo","01056873423","ali@gmail.com",60,"3",3.5);
    Student s2("Aya",21,"female","Cairo","01576239978","aya@gmail.com",90,"3",3.2);
    School sc;
    sc.addStudent(s);
    sc.addStudent(s1);
    sc.addStudent(s2);
    sc.printStudents();
    Teacher t("Ahmed",45,"male","Giza","01272397127","ahmed@gmail.com",80,"oop",15000.700);
    Teacher t1("Karim",37,"male","Giza","01045676866","karim@gmail.com",88,"Programming basics",19000.300);
    sc.addTeacher(t);
    sc.addTeacher(t1);
    sc.printTeachers();
    Staff f("Ali",41,"male","Cairo","01075634256","ali@gmail.com",90,"management",10000.500);
    Staff f1("Mohamed",37,"male","Giza","01078532190","mohamed@gmail.com",90,"management",12000.200);
    sc.addStaff(f);
    sc.addStaff(f1);
    sc.printStaffMembers();
    Course c("p125","Programming basics","Karim");
    Course c1("o245","oop","Ahmed");
    sc.addCourse(c);
    sc.addCourse(c1);
    sc.printCourses();
    Classroom cl(1,50);
    Classroom cl1(2,50);
    sc.addClassrom(cl);
    sc.addClassrom(cl1);
    sc.printClassrooms();
    return 0;
}
