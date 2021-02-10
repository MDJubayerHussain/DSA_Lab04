#include"StudentInfo.h"
#include <string>

StudentInfo::StudentInfo()
{
    id=0;
    name="";
    cgpa=0.0;
}
StudentInfo::StudentInfo(int n,string i,double c)
{
    id=n;
    name=i;
    cgpa=c;
}
void StudentInfo::setid(int n)
{
    id=n;
}
void StudentInfo::setname(string i)
{
    name=i;
}
void StudentInfo::setcgpa(double c)
{
    cgpa=c;
}
int StudentInfo::getid()
{
    return id;
}
string StudentInfo::getname()
{
    return name;
}
double StudentInfo::getcgpa()
{
    return cgpa;
}
void StudentInfo::print()
{
     cout<<id<<"  "<<name<<"  "<<cgpa<<endl;
}
bool operator==(StudentInfo x,StudentInfo y)
{
    if(x.getid()==y.getid())
        return true;
    else
        return false;
}
bool operator!=(StudentInfo x,StudentInfo y)
{
    if(x.getid()!=y.getid())
        return true;
    else
        return false;
}
