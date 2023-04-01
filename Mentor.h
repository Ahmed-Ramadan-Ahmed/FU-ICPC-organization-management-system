#include <bits/stdc++.h>
#include "Member.h"
#include "Student.h"
#include "Leader.h"
using namespace std;

#ifndef FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_MENTOR_H
#define FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_MENTOR_H

class Mentor : public Member{
    Student * Students ;
    int static Mentors_Counter ;
    int Mentor_Students_Counter ;
public:
    Mentor() ;
    Mentor(string name, string phone, string mail, string university,
           string faculty, string handle, int academic_level);
void Insert_Student(Student student) ;
void Fire_Student(Student student) ;
void Print_Students_Data();
void Print_Mentor_Data() ;
void Add_Points_to_Student(Student &student, int points) ;
void Add_Warning_to_Student(Student &student) ;
friend class Leader ;
};


#endif //FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_MENTOR_H
