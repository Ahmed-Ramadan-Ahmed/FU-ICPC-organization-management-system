#ifndef FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_MENTOR_H
#define FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_MENTOR_H

#include <bits/stdc++.h>
#include "Member.h"
#include "Student.h"

class Leader ;
using namespace std;

class Leader ;

class Mentor : public Member{
    vector<Student> Students ;
    int static Mentors_Counter ;
    void Fire_Student(Student student) ;
public:
    Mentor() ;
    Mentor(string name, string phone, string mail, string university,
           string faculty, string handle, string academic_level);
    void Insert_Student(Student student) ;
    void Fire_Student_with_ID(string id) ;
    void Print_Students_Data();
    void Print_Mentor_Data() ;
    void Add_Points_to_Student(Student &student, int points) ;
    void Add_Warning_to_Student(Student &student) ;
    friend class Leader ;
};

#endif //FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_MENTOR_H
