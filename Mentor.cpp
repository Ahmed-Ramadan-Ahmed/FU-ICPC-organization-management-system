#include <bits/stdc++.h>
#include "Mentor.h"
#include "Student.h"

using namespace std;

int Mentor::Mentors_Counter = 0 ;
Mentor::Mentor() {} ;

Mentor::Mentor(string name, string phone, string mail, string university,
               string faculty, string handle, string academic_level)
               :Member(name,phone,mail,university,faculty,handle,"M",academic_level)
{
    Mentors_Counter++ ;
}

void Mentor::Insert_Student(Student student)
{
    Students.push_back(student) ;
    cout<<"Student "<<student.Get_Name()<<" has been added to mentor with id "<<Get_ID()<<endl;
    student.Print_Student_Data() ;

}
void Mentor::Print_Students_Data()
{
    cout<<"Mentor Name : "<<Get_Name()<<" "<<endl;
    cout<<"Mentor ID : "<<Get_ID()<<" "<<endl;
    cout<<"NO# of students : "<< Students.size()<<endl<<endl;
    for(int i=0; i < Students.size() ; i++)
    {
        Students[i].Print_Student_Data();
        cout<<"-------------------------------------"<<endl;
    }
    cout<<endl;
}
void Mentor::Print_Mentor_Data()
{
    Print_Member_Data() ;
    cout<<"NO# of Students: "<< Students.size()<<endl<<endl;
}

void Mentor::Fire_Student(Student student)
{
    for(int i=0;i< Students.size();i++)
    {
        if(Students[i].Get_ID()==student.Get_ID())
        {
            cout<<"Student "<<Students[i].Get_Name()<<" fired successfully"<<endl<<endl;
            for(int j=i+1;j< Students.size();j++)
            {
                Students[j-1]=Students[j] ;
            }
            Students.pop_back() ;
            return ;
        }
    }
}

void Mentor::Fire_Student_with_ID(string id)
{
    for(int i=0;i< Students.size();i++)
    {
        if(Students[i].Get_ID()==id)
        {
            cout<<"Student "<<Students[i].Get_Name()<<" fired successfully"<<endl<<endl;
            for(int j=i+1;j< Students.size() ;j++)
            {
                Students[j-1]=Students[j] ;
            }
            Students.pop_back();
            return ;
        }
    }
}
void Mentor::Add_Points_to_Student(Student &student , int points)
{
    cout<<"Student "<<student.Get_Name()<<" has "<<student.Get_Points()<<" + "<<points<<" = "<<student.Get_Points()+points<<endl<<endl;
    student.Add_Points(points) ;
}
void Mentor::Add_Warning_to_Student(Student &student)
{
    student.Warning_Times++ ;
    cout<<"Student "<<student.Get_Name()<<" has been warned"<<student.Get_Warning_Times()<<endl<<endl;
};




