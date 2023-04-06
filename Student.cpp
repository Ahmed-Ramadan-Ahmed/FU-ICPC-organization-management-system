#include <bits/stdc++.h>
#include "Student.h"
using namespace std;

int Student::Students_Counter = 0 ;
Student::Student() {} ;
Student::Student(string name, string phone, string mail, string university,
                 string faculty, string handle, string academic_level, string training_level )
        :   Member(name,phone,mail,university,faculty,handle,"S",academic_level)
{
    Training_Level=training_level, Points=(0), Warning_Times=(0) ;
    Students_Counter++ ;
}

void Student::Set_Training_Level(string training_level)
{
    Training_Level=training_level ;
}
int Student::Get_Points()
{
    return Points ;
}
string Student::Get_Training_Level()
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
    cout<<"Points : "<<Points<<endl;
    cout<<"Warning times : "<<Warning_Times<<" Times"<<endl;
    cout<<"Training Level : "<<Training_Level<<endl<<endl;
}
void Student::Add_Points(int points)
{
    Points+=points ;
}
void Student::Add_Warning()
{
    Warning_Times++ ;
    cout<<"Student "<<Get_Name()<<" has been warned "<<Warning_Times<<" Times"<<endl<<endl;
}
