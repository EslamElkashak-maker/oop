#ifndef EXAM_H
#define EXAM_H


class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam()
    {
        examName ="No examName";
        courseCode="No courseCode";
        examDate="No examDate";
    }
    Exam(string examName,string courseCode,string examDate)
    {
        this->examName = examName;
        this->courseCode=courseCode;
        this->examDate=examDate;
    }
    void setExamName(string examName)
    {
        this->examName=examName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setExamDate(string examDate)
    {
        this->examDate=examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getExamDate()
    {
        return examDate;
    }
    void print()
    {
        cout<<"ExamName is : "<<examName<<endl;
        cout<<"CourseCode is : "<<courseCode<<endl;
        cout<<"ExamDate is: "<<examDate<<endl;
    }
};

#endif // EXAM_H
