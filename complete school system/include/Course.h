#ifndef COURSE_H
#define COURSE_H
class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course()
    {
        courseCode ="No courseCode";
        courseName="No courseName";
        teacherName="NO teacherName";
    }
    Course(string courseCode,string courseName, string teacherName)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->teacherName=teacherName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getCourseName()
    {
        return courseName;
    }
    string getTeacherName()
    {
        return teacherName;
    }
    void setCourseCode (string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setCourseName (string courseName)
    {
        this->courseName=courseName;
    }
    void setTeacherName (string teacherName)
    {
        this->teacherName=teacherName;
    }

   void print()
   {
    cout<<"CourseCode is : "<<courseCode<<endl;
    cout<<"CourseName is : "<<courseName<<endl;
    cout<<"TeacherName is : "<<teacherName<<endl;
   }
};

#endif // COURSE_H
