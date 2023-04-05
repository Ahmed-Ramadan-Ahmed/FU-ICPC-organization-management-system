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

//Student::Student(Student &student)
//{
//    Set_Name(student.Get_Name()) ;
//    Set_Phone(student.Get_Phone()) ;
//    Set_Mail(student.Get_Mail()) ;
//    Set_Handle(student.Get_Handle()) ;
//    Set_Academic_Level(student.Get_Academic_Level()) ;
//    Set_Faculty(student.Get_Faculty()) ;
//    Set_University(student.Get_University()) ;
//    Training_Level=student.Get_Training_Level() ;
//}

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
