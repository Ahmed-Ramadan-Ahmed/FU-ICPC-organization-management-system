#ifndef FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_STUDENT_H
#define FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_STUDENT_H


#include <bits/stdc++.h>
#include "Member.h"
class Mentor ;

using namespace std;

class Student : public Member {
private :
    string Training_Level ;
    int Points ;
    int Warning_Times ;
    void Add_Points(int points) ;
    void Add_Warning() ;
public:
    Student() ;
    int static Students_Counter ;

    Student(string name, string phone, string mail, string university, string faculty, string handle, string academic_level, string training_level);
    void Print_Student_Data();

    int Get_Points();
    string Get_Training_Level();
    int Get_Warning_Times();
    void Set_Training_Level(string training_level) ;
    friend class Mentor ;
};

#endif //FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_STUDENT_H
