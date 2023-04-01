#include <bits/stdc++.h>
#include "Mentor.h"
#include "Member.h"
#include "Student.h"
#include "Leader.h"
using namespace std;

int Mentor::Mentors_Counter = 0 ;
Mentor::Mentor() {} ;

Mentor::Mentor(string name, string phone, string mail, string university,
               string faculty, string handle, int academic_level)
               :Member(name,phone,mail,university,faculty,handle,"M",academic_level)
{
    Students = new Student[30] ;
    Mentor_Students_Counter=0 ;
    Mentors_Counter++ ;
}

void Mentor::Insert_Student(Student student)
{
    Students[Mentor_Students_Counter++] = student ;
}
void Mentor::Print_Students_Data()
{
    cout<<"Mentor Name : "<<Get_Name()<<" "<<endl;
    cout<<"Mentor ID : "<<Get_ID()<<" "<<endl;
    cout<<"NO# of students : "<< Mentor_Students_Counter<<endl<<endl;
    for(int i=0; i < Mentor_Students_Counter ; i++)
    {
        Students[i].Print_Student_Data();
        cout<<endl<<"-------------------------------------"<<endl;
    }
    cout<<endl;
}
void Mentor::Print_Mentor_Data()
{
    Print_Member_Data() ;
    cout<<"NO# of Students: "<< Mentor_Students_Counter<<endl<<endl;
}

void Mentor::Fire_Student(Student student)
{
    for(int i=0;i< Mentor_Students_Counter;i++)
    {
        if(Students[i].Get_ID()==student.Get_ID())
        {
            cout<<"Student "<<student.Get_Name()<<" fired successfully"<<endl<<endl;
            for(int j=i+1;j< Mentor_Students_Counter ;j++)
            {
                Students[j-1]=Students[j] ;
            }
            Mentor_Students_Counter-- ;
            return ;
        }
    }
    cout<<"Student "<<student.Get_Name()<<" not found in class with mentor "<<Get_Name()<<endl<<endl;
}
void Mentor::Add_Points_to_Student(Student &student , int points)
{
    student.Add_Points(points) ;
}
void Mentor::Add_Warning_to_Student(Student &student)
{
};

