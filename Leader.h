#ifndef FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_LEADER_H
#define FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_LEADER_H

#include <bits/stdc++.h>
#include "Member.h"
#include "Student.h"
#include "Mentor.h"
using namespace std;

class Leader: public Member{
private:
    vector<Mentor> Mentors ;
    vector<Student> Students_Waiting_List ;
    int Waiting_List_Start ;
    int Waiting_List_End ;
    int Waiting_List_Size ;
    int static Leaders_Counter ;
    void Fire_Mentor(Mentor mentor) ;
public:
    Leader() ;
    //Leader(Leader &leader) ;
    Leader(string name, string phone, string mail, string university,
           string faculty, string handle, string academic_level);
    void Insert_Mentor(Mentor mentor) ;
    void Insert_Student(Student student) ;
    void Insert_Student_to_Mentor(Student student, string id) ;
    void Fire_Mentor_With_ID(string id) ;
    void Fire_Student_with_ID(string id) ;
    void Print_Leader_Data() ;
    void print_Mentors_Data();
    void print_Students_Data();
    void Print_Waiting_List();
    int Mentors_counter() ;
    int Students_counter() ;
    void Add_points_to_student(string id , int points) ;
    void Warning_student(string id) ;
    void Find_Student(string id) ;
    void Sort_Students_by_point_rate() ;
    void Sort_Students_by_Warning_Times() ;
};


#endif //FU_ICPC_MANAGEMENT_ORGANIZATION_SYSTEM_LEADER_H
