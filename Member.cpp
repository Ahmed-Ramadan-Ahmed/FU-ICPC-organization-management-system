#include <bits/stdc++.h>
#include "Member.h"
using namespace std;

Member::Member() {} ;
Member::Member(string name, string phone, string mail, string university, string faculty, string handle , string Membership_Type, string academic_level)
      : Name(name), Mail(mail), Phone(phone), Faculty(faculty), University(university), Handle(handle), Academic_Level(academic_level)
{
    ID = ( Membership_Type + to_string(ID_Counter++) );
}
int Member::ID_Counter = 1 ;
void Member::Set_Phone(string phone)
{
    Phone = phone ;
}
void Member::Set_Mail(string mail)
{
    Mail = mail ;
}
void Member::Set_Name(string name)
{
    Name = name ;
}
void Member::Set_Handle(string handle)
{
    Handle = handle ;
}
void Member::Set_Academic_Level(string academic_level)
{
    Academic_Level = academic_level ;
}

void Member::Set_Faculty(string faculty)
{
    Faculty=faculty ;
}
void Member::Set_University(string university)
{
    University=university ;
}
string Member::Get_Name()
{
    return Name ;
}
string Member::Get_Phone()
{
    return Phone ;
}
string Member::Get_Mail()
{
    return Mail ;
}
string Member::Get_University()
{
    return University ;
}
string Member::Get_Faculty()
{
    return Faculty ;
}
string Member::Get_ID()
{
    return ID ;
}
string Member::Get_Handle()
{
    return Handle ;
}
string Member::Get_Academic_Level()
{
    return Academic_Level ;
}
void Member::Print_Member_Data()
{

    cout<<"Name : "<<Name<<endl;
    cout<<"ID : "<<ID<<endl;
    cout<<"Role : ";

    if(ID[0]=='M') cout<<"Mentor"<<endl;
    else if(ID[0]=='S') cout<<"Student"<<endl;
    else cout<<"Leader"<<endl;

    cout<<"Phone : "<<Phone<<endl;
    cout<<"Mail : "<<Mail<<endl;
    cout<<"University : "<<University<<endl;
    cout<<"Faculty : "<<Faculty<<endl;
    cout<<"Academic_Level : "<<Academic_Level<<endl;

}
