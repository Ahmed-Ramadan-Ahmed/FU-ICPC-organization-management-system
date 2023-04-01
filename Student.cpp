#include <bits/stdc++.h>
#include "Student.h"
#include "Member.h"
using namespace std;

Student::Student() {} ;

Student::Student(string name, string phone, string mail, string university,
                 string faculty, string handle, int academic_level, int training_level )
        :   Member(name,phone,mail,university,faculty,handle,"S",academic_level)
            ,Training_Level(training_level), Points(0), Warning_Times(0)
{
    Students_Counter++ ;
}
int Student::Students_Counter = 0 ;

int Student::Get_Points()
{
    return Points ;
}
int Student::Get_Training_Level()
{
    return Training_Level ;
}
int Student::Get_Warning_Times()
{
    return Warning_Times ;
}
void Student::Print_Student_Data()
{
    Print_Member_Data() ;
}
void Student::Add_Points(int points)
{
    Points+=points ;
}
void Student::Add_Warning()
{
    Warning_Times++ ;
}