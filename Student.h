#include <bits/stdc++.h>
#include "Member.h"
#include "Mentor.h"
using namespace std;

#ifndef FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_STUDENT_H
#define FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_STUDENT_H

class Student : public Member {
private :
    int Training_Level ;
    int Points ;
    int Warning_Times ;
    void Add_Points(int points) ;
    void Add_Warning() ;
public:
    Student() ;
    int static Students_Counter ;

    Student(string name, string phone, string mail, string university, string faculty, string handle, int academic_level, int training_level);
    void Print_Student_Data();

    int Get_Points();
    int Get_Training_Level();
    int Get_Absent_times_with_apology();
    int Get_Warning_Times();
    friend class Mentor ;
};

#endif //FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_STUDENT_H
