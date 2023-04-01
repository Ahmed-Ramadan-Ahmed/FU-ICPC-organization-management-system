#include <bits/stdc++.h>
#include "Member.h"
#include "Mentor.h"
using namespace std;

#ifndef FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_LEADER_H
#define FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_LEADER_H

class Leader: public Member{
private:
    Mentor *Mentors ;
    int Leader_Mentors ;
    int static Leaders_Counter ;

public:
    Leader(string name, string phone, string mail, string university,
           string faculty, string handle, int academic_level);

};


#endif //FU_ICPC_ORGANIZATION_MANAGEMENT_SYSTEM_LEADER_H
