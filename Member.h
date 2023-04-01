#include <bits/stdc++.h>
using namespace std;
#ifndef FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_MEMBER_H
#define FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_MEMBER_H


class Member {
private:
    string Name ;
    string Phone ;
    string Mail ;
    string Password ;
    string University ;
    string Faculty ;
    string Handle ;
    string ID ;
    int Academic_Level ;
    int static ID_Counter ;
protected:
    void Print_Member_Data();
    Member() ;
public:
    Member(string name, string phone, string mail, string university, string faculty, string handle, string Membership_Type , int academic_level);

    void Set_Name(string name) ;
    void Set_Phone(string phone) ;
    void Set_Mail(string mail) ;
    void Set_Handle(string handle) ;
    void Set_Academic_Level(int academic_level) ;

    string Get_Name() ;
    string Get_Phone() ;
    string Get_Mail() ;
    string Get_University() ;
    string Get_Faculty() ;
    string Get_ID() ;
    string Get_Handle() ;
    int Get_Academic_Level() ;
};

#endif //FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_MEMBER_H
