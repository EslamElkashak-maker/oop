#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;
public:
    Person()
    {
        name="no name";
        age=-1;
        gender="no gender";
        address="no address";
        phoneNumber="no phoneNumber";
        email="no email";
    }
    Person(string name,int age, string gender,string address,string phoneNumber,string email)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->email=email;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    int getAge()
    {
        return age;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    void print()
    {
        cout<<"The Name is : "<<name<<endl;
        cout<<"The Age is : "<<age<<endl;
        cout<<"The Gender is : "<<gender<<endl;
        cout<<"The Address is : "<<address<<endl;
        cout<<"The PhoneNumber is : "<<phoneNumber<<endl;
        cout<<"The email is : "<<email<<endl;
    }
};


#endif // PERSON_H
