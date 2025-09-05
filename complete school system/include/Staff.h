#ifndef STAFF_H
#define STAFF_H
#include<Person.h>
class Staff:public Person
{
private:
    int staffId;
    string role;
    float salary;
public:
    Staff()
    {
        staffId=-1;
        role="no role";
        salary=-1;
    }
    Staff(string name,int age, string gender,string address,string phoneNumber,string email,
          int staffId,string role,float salary)
        :Person(name,age,gender,address,phoneNumber,email)
    {
        this-> staffId=staffId;
        this->role=role;
        this->salary=salary;
    }
    void setTeacherId(int staffId)
    {
        this->staffId=staffId;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    int getStaffId()
    {
        return staffId;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        Person::print();
        cout<<"The StaffId is : "<<staffId<<endl;
        cout<<"The Role is : "<<role<<endl;
        cout<<"The Salary is : "<<salary<<endl;
    }
};
#endif // STAFF_H
