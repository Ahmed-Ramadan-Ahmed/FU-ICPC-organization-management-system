#include <bits/stdc++.h>
#include "Leader.h"
#include "Student.h"
#include "Mentor.h"

using namespace std;
int Leader::Leaders_Counter = 0 ;
Leader::Leader() {} ;
//Leader::Leader(Leader &leader)
//{
//    Set_Name(leader.Get_Name()) ;
//    Set_Phone(leader.Get_Phone()) ;
//    Set_Mail(leader.Get_Mail()) ;
//    Set_Handle(leader.Get_Handle()) ;
//    Set_Academic_Level(leader.Get_Academic_Level()) ;
//    Set_Faculty(leader.Get_Faculty()) ;
//    Set_University(leader.Get_University()) ;
//}
Leader::Leader(string name, string phone, string mail, string university,
               string faculty, string handle, string academic_level)
        : Member(name,phone,mail,university,faculty,handle,"L",academic_level)
{
    Students_Waiting_List.resize(300) ;
    Waiting_List_Size=0 ;
    Waiting_List_Start=Waiting_List_End=0 ;
}
void Leader::Insert_Mentor(Mentor mentor)
{
    Mentors.push_back(mentor) ;
    while(Waiting_List_Start!=Waiting_List_End)
    {
        Waiting_List_Start%=300 ;
        Mentors.back().Insert_Student(Students_Waiting_List[Waiting_List_Start++]) ;
        Waiting_List_Size-- ;
        if(Mentors.back().Students.size()==30) break;
    }
    cout<<mentor.Get_Name()<<" now is a mentor"<<endl;
    cout<<Mentors.back().Students.size()<<" students were moved from waiting list to "<<mentor.Get_Name()<<"'s group"<<endl<<endl;
}
void Leader::Insert_Student_to_Mentor(Student student, string id)
{
    for(auto &it:Mentors)
    {
        if(it.Get_ID()==id)
        {
            it.Insert_Student(student) ;
        }
    }
}
void Leader::Insert_Student(Student student)
{
    for(int i=0;i<Mentors.size();i++)
    {
        if(Mentors[i].Students.size()<30)
        {
            Insert_Student_to_Mentor(student,Mentors[i].Get_ID()) ;
            break;
        }
    }
}

void Leader::Fire_Mentor(Mentor mentor)
{
    for(int i=0;i<mentor.Students.size();i++)
    {
        Students_Waiting_List[Waiting_List_End++] = mentor.Students[i];
        Waiting_List_Size++ ;
        Waiting_List_End%=300 ;
    }
    cout<<"Mentor "<<mentor.Get_Name()<<" , with ID = "<<mentor.Get_ID()<<" is fired "<<endl;
    cout<<mentor.Students.size()<<" students were moved to students waiting list"<<endl<<endl;
    for(int i=0;i<Mentors.size();i++)
    {
        if(Mentors[i].Get_ID()==mentor.Get_ID())
        {
            for(int j=i+1; j<Mentors.size() ; j++)
            {
                Mentors[j-1]=Mentors[j] ;
            }
            Mentors.pop_back() ;
        }
    }
}
void Leader::Fire_Mentor_With_ID(string id)
{
    for(int i=0;i<Mentors.size();i++)
    {
        if(Mentors[i].Get_ID()==id)
        {
            Fire_Mentor(Mentors[i]) ;
        }
    }
}
void Leader::Fire_Student_with_ID(string id)
{
    for(int i=0;i<Mentors.size();i++)
    {
        for(int j=0 ; j<Mentors[i].Students.size();j++)
        {
            if(Mentors[i].Students[j].Get_ID() == id )
            {
                Mentors[i].Fire_Student(Mentors[i].Students[j]) ;
                return;
            }
        }
    }
}

void Leader::Print_Leader_Data()
{
    Print_Member_Data() ;
    cout<<"NO# of Mentors: "<< Mentors.size()<<endl<<endl;
}
void Leader::Print_Waiting_List()
{
    cout<<"Waiting List has "<<Waiting_List_Size<<" students :"<<endl;
    for(int i=Waiting_List_Start;i!=Waiting_List_End;i=(i+1)%300)
    {
        cout<<"Student name : "<<Students_Waiting_List[i].Get_Name()<<endl;
        cout<<"Student ID : "<<Students_Waiting_List[i].Get_ID()<<endl<<endl;
    }
    cout<<endl;
}
void Leader::print_Mentors_Data()
{
    for(int i=0;i<Mentors.size();i++)
    {
        Mentors[i].Print_Mentor_Data() ;
    }
}
int Leader::Mentors_counter()
{
    return Mentors.size() ;
}
int Leader::Students_counter()
{
    int counter = 0;
    for(int i=0;i<Mentors.size();i++)
    {
        counter+=Mentors[i].Students.size() ;
    }
    return counter ;
}
void Leader::print_Students_Data()
{
    for(int i=0;i<Mentors.size();i++)
    {
        Mentors[i].Print_Students_Data() ;
    }
}

void Leader::Add_points_to_student(string id , int points)
{
    for(int i=0;i<Mentors.size();i++)
    {
        for(int j=0;j<Mentors[i].Students.size();j++)
        {
            if(Mentors[i].Students[j].Get_ID()==id)
            {
                Mentors[i].Add_Points_to_Student(Mentors[i].Students[j],points) ;
                break;
            }
        }
    }
}
void Leader::Warning_student(string id)
{
    for(int i=0;i<Mentors.size();i++)
    {
        for(int j=0;j<Mentors[i].Students.size();j++)
        {
            if(Mentors[i].Students[j].Get_ID()==id)
            {
                Mentors[i].Add_Warning_to_Student(Mentors[i].Students[j]) ;
                break;
            }
        }
    }
}

void Leader::Find_Student(string id)
{
    for(int i=0;i<Mentors.size();i++)
    {
        for(int j=0;j<Mentors[i].Students.size();j++)
        {
            if(Mentors[i].Students[j].Get_ID()==id)
            {
                cout<<"Student is found : "<<endl;
                Mentors[i].Students[j].Print_Student_Data() ;
                return;
            }
        }
    }
    cout<<"Student isn't found : "<<endl<<endl;
}

bool CMP_Points(Student x , Student y)
{
    return x.Get_Points() < y.Get_Points()  ;
}
void Leader::Sort_Students_by_point_rate()
{
    for(int i=0;i<Mentors.size();i++)
    {
        sort(Mentors[i].Students.begin() , Mentors[i].Students.end() ,CMP_Points ) ;
        cout<<"Class "<<Mentors[i].Get_ID()<<" : "<<endl;
        Mentors[i].Print_Students_Data() ;
    }
}

bool CMP_Warning(Student x , Student y)
{
    return x.Get_Warning_Times() < y.Get_Warning_Times()  ;
}
void Leader::Sort_Students_by_Warning_Times()
{
    for(int i=0;i<Mentors.size();i++)
    {
        sort(Mentors[i].Students.begin() , Mentors[i].Students.end() ,CMP_Points ) ;
        cout<<"Class "<<Mentors[i].Get_ID()<<" : "<<endl;
        Mentors[i].Print_Students_Data() ;
    }
}
