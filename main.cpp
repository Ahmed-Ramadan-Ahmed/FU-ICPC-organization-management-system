#include <bits/stdc++.h>
//#include "Student.h"
//#include "Mentor.h"
//#include "Leader.h"
#include "Member.h"
using namespace std;
void Get_Data(string role)
{
    string name ;
    cout<<role<<"'s name : ";
    cin>>name;

    string phone ;
    cout<<role<<"'s phone : ";
    cin>>phone;

    string mail ;
    cout<<role<<"'s mail : ";
    cin>>mail;

    string university ;
    cout<<role<<"'s university : ";
    cin>>university;

    string faculity ;
    cout<<role<<"'s faculity : ";
    cin>>faculity;

    string handle ;
    cout<<role<<"'s handle : ";
    cin>>handle;

    string academic_level ;
    cout<<role<<"'s academic_level : ";
    cin>>academic_level;

}
int main()
{

//Mentor Ahmed("Ahmed Ramadan Ahmed","01552372197","aramadan442000@gmail.com","Fayoum","FAI","A.R.A",3) ;
//Student s1("s1","010","@","U","F","Handle",1,1) ;
//Student s2("s2","011","#","UU","FFF","HHH",3,2) ;
//Ahmed.Insert_Student(s1) ;
//Ahmed.Insert_Student(s2) ;
//Ahmed.Print_Students_Data() ;
//Ahmed.Print_Mentor_Data() ;
//Ahmed.Fire_Student(s1) ;
//Ahmed.Fire_Student(s1) ;
//Ahmed.Print_Students_Data() ;

Member Ahmed("Ahmed Ramadan Ahmed","01552372197","aramadan442000@gmail.com","Fayoum","FAI","A.R.A","L",3) ;
cout<<Ahmed.Get_Name();
    return 0;
}
