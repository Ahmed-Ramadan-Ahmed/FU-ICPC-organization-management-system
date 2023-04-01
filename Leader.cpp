#include <bits/stdc++.h>
#include "Leader.h"
using namespace std;

Leader::Leader(string name, string phone, string mail, string university,
        string faculty, string handle, int academic_level)
        : Member(name,phone,mail,university,faculty,handle,"L",academic_level)
{
    Mentors = new Mentor[10] ;
    Leader_Mentors= 0 ;
}

int Leader::Leaders_Counter = 0 ;
