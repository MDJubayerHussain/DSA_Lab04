#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include<iostream>
using namespace std;

class StudentInfo
{
public:
    StudentInfo();
    StudentInfo(int,string,double);
    void setid(int);
    void setname(string);
    void setcgpa(double);
    int getid();
    string getname();
    double getcgpa();
    void print();
    void deleteItem();
    void retriveItem(bool&);
    void restList();
    friend bool operator==(StudentInfo,StudentInfo);
    friend bool operator!=(StudentInfo,StudentInfo);
private:
    string name;
    int id;
    double cgpa;
};
#endif // STUDENT_H_INCLUDED
