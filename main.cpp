#include <bits/stdc++.h>
#include "Member.h"
#include "Student.h"
#include "Mentor.h"
#include "Leader.h"

using namespace std;
vector<Leader> Leaders ;

void Add_Leader()
{
    cout<<"Enter Leader Data : "<<endl;
    cout<<"Name : ";    string name ; getline(cin,name);
    cout<<"Phone : ";   string phone ; getline(cin,phone);
    cout<<"Mail : ";    string mail ; getline(cin,mail);
    cout<<"University : ";  string university ; getline(cin,university);
    cout<<"Faculity : ";    string faculity ; getline(cin,faculity);
    cout<<"Handle : ";  string handle ; getline(cin,handle);
    cout<<"Academic_level : ";  string academic_level ; getline(cin,academic_level);
    Leaders.push_back(Leader(name,phone,mail,university,faculity,handle,academic_level)) ;
}

void Add_Mentor()
{
    cout<<"Enter Mentor Data : "<<endl;
    cout<<"Name : ";    string name ; getline(cin,name);
    cout<<"Phone : ";   string phone ; getline(cin,phone);
    cout<<"Mail : ";    string mail ; getline(cin,mail);
    cout<<"University : ";  string university ; getline(cin,university);
    cout<<"Faculity : ";    string faculity ; getline(cin,faculity);
    cout<<"Handle : ";  string handle ; getline(cin,handle);
    cout<<"Academic_level : ";  string academic_level ; getline(cin,academic_level);

    Mentor mentor(name,phone,mail,university,faculity,handle,academic_level) ;
    Leaders[0].Insert_Mentor(mentor) ;
}
void Add_Student_to_random_available_class()
{
    cout<<"Enter Student Data : "<<endl;
    cout<<"Name : ";    string name ; getline(cin,name);
    cout<<"Phone : ";   string phone ; getline(cin,phone);
    cout<<"Mail : ";    string mail ; getline(cin,mail);
    cout<<"University : ";  string university ; getline(cin,university);
    cout<<"Faculity : ";    string faculity ; getline(cin,faculity);
    cout<<"Handle : ";  string handle ; getline(cin,handle);
    cout<<"Academic_level : ";  string academic_level ; getline(cin,academic_level);
    cout<<"Training Level : "; string training_level ; getline(cin,training_level);

    Student student(name,phone,mail,university,faculity,handle,academic_level,training_level) ;
    Leaders[0].Insert_Student(student) ;
}
void Add_Student_to_specific_mentor()
{
    cout<<"Enter Student Data : "<<endl;
    cout<<"Name : ";    string name ; getline(cin,name);
    cout<<"Phone : ";   string phone ; getline(cin,phone);
    cout<<"Mail : ";    string mail ; getline(cin,mail);
    cout<<"University : ";  string university ; getline(cin,university);
    cout<<"Faculity : ";    string faculity ; getline(cin,faculity);
    cout<<"Handle : ";  string handle ; getline(cin,handle);
    cout<<"Academic_level : ";  string academic_level ; getline(cin,academic_level);
    cout<<"Training Level : "; string training_level ; getline(cin,training_level);

    Student student(name,phone,mail,university,faculity,handle,academic_level,training_level) ;

    cout<<"Enter class (Mentor ID) : " ;
    string id ; getline(cin,id);
    Leaders[0].Insert_Student_to_Mentor(student,id) ;
}
void Fire_Mentor()
{
    cout<<"Enter class (Mentor ID) : " ;
    string id ; getline(cin,id);
    Leaders[0].Fire_Mentor_With_ID(id) ;
}
void Fire_Student()
{
    cout<<"Enter student ID : " ;
    string id ; getline(cin,id);
    Leaders[0].Fire_Student_with_ID(id) ;
}
void Display_Leaders()
{
    cout<<"There are "<<Leaders.size()<<" Leaders : "<<endl;
    for(int i=0;i<Leaders.size();i++)
    {
        Leaders[i].Print_Leader_Data();
    }
}
void Display_Mentors()
{
    cout<<"There are "<<Leaders[0].Mentors_counter()<<" Mentors : "<<endl;
    Leaders[0].print_Mentors_Data(); ;
}
void Display_Students()
{
    cout<<"There are "<<Leaders[0].Students_counter()<<" Students : "<<endl;
    Leaders[0].print_Mentors_Data(); ;
}
void Display_Students_Waiting_list()
{
    Leaders[0].Print_Waiting_List() ;
}
void Leader_Play_Ground()
{
    int choice ;
    do {
        cout<<"<<<<<<<<<< Welcome in Leaders scope >>>>>>>>>>"<<endl<<endl;
        cout<<"Choose operation : "<<endl;
        cout<<"1- Add Leader \t\t"<<"2- Add Mentor \t\t"<<endl;
        cout<<"3- Add Student to random available class"<<"4- Add Student to specific mentor"<<endl;
        cout<<"5- Fire Mentor \t\t 6- Fire Student"<<endl;
        cout<<"7- Display Leaders \t\t 8- Display Mentors "<<endl;
        cout<<"9- Display Students \t\t 10- Display Students' Waiting list"<<endl;
        cout<<"0- Exit"<<endl<<endl;

        cin>>choice ;
        if(choice==1) Add_Leader() ;
        else if(choice==2) Add_Mentor() ;
        else if(choice==3) Add_Student_to_random_available_class() ;
        else if(choice==4) Add_Student_to_specific_mentor() ;
        else if(choice==5) Fire_Mentor() ;
        else if(choice==6) Fire_Student() ;
        else if(choice==7) Display_Leaders() ;
        else if(choice==8) Display_Mentors() ;
        else if(choice==9) Display_Students() ;
        else if(choice==10) Display_Students_Waiting_list() ;
    } while (choice!=0) ;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Add_points_to_student()
{
    cout<<"Enter student ID : " ;
    string id ; getline(cin,id);
    cout<<"Points to be added : ";
    int points ; cin>>points;
    Leaders[0].Add_points_to_student(id,points) ;
}
void Warning_student()
{
    cout<<"Enter student ID : " ;
    string id ; getline(cin,id);
    Leaders[0].Warning_student(id) ;
}
void Mentor_Play_Ground()
{
    int choice ;
    do {
        cout<<"<<<<<<<<<< Welcome in Mentors scope >>>>>>>>>>"<<endl<<endl;
        cout<<"Choose operation : "<<endl;
        cout<<"1- Add Mentor \t\t"<<"2- Add Student to random available class"<<endl;
        cout<<"3- Add Student to specific mentor \t\t 4- Fire Student"<<endl;
        cout<<"5- Display Mentors \t\t 6- Display Students"<<endl;
        cout<<"7- Display Students' Waiting list"<<endl;
        cout<<"8- Add points to student \t\t 9-Warning student"<<endl;

        cout<<"0- Exit"<<endl<<endl;

        cin>>choice ;
        if(choice==1) Add_Mentor() ;
        else if(choice==2) Add_Student_to_random_available_class() ;
        else if(choice==3) Add_Student_to_specific_mentor() ;
        else if(choice==4) Fire_Student() ;
        else if(choice==5) Display_Mentors() ;
        else if(choice==6) Display_Students() ;
        else if(choice==7) Display_Students_Waiting_list() ;
        else if(choice==8) Add_points_to_student() ;
        else if(choice==9) Warning_student() ;
    } while (choice!=0) ;

};













////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Find_Student()
{
    cout<<"Enter student ID : " ;
    string id ; getline(cin,id);
    Leaders[0].Find_Student(id) ;
}
void Sort_Students_by_point_rate()
{
    Leaders[0].Sort_Students_by_point_rate() ;
}
void Sort_Students_by_warning_times()
{
    Leaders[0].Sort_Students_by_Warning_Times() ;
}
void Student_Play_Ground()
{
    int choice ;
    do {
        cout<<"<<<<<<<<<< Welcome in Students scope >>>>>>>>>>"<<endl<<endl;
        cout<<"Choose operation : "<<endl;
        cout<<"1- Display Students"<<endl;
        cout<<"2- Display Students' Waiting list"<<endl;
        cout<<"3- Add points to student \t\t 4-Warning student"<<endl;
        cout<<"5- Find student \t\t 6- Sort Students in class by point rate"<<endl;
        cout<<"7- Sort Students in class by warning times"<<endl;
        cout<<"0- Exit"<<endl<<endl;

        cin>>choice ;
        if(choice==1) Display_Students() ;
        else if(choice==2) Display_Students_Waiting_list() ;
        else if(choice==3) Add_points_to_student() ;
        else if(choice==4) Warning_student() ;
        else if(choice==5) Find_Student() ;
        else if(choice==6) Sort_Students_by_point_rate() ;
        else if(choice==7) Sort_Students_by_warning_times() ;
    } while (choice!=0) ;
};
void Menu()
{
    int choice ;
    do{
        cout<<"Welcome in FU-ICPC Organization Management System. "<<endl<<endl;
        cout<<"Choose role you want to act as : "<<endl ;
        cout<<"1- Leader"<<endl<<"2- Mentor"<<endl<<"3- Student"<<endl<<"0- Exit"<<endl<<endl;
        cin>>choice ;
        if(choice==1) Leader_Play_Ground() ;
        else if(choice==2) Mentor_Play_Ground() ;
        else if(choice==3) Student_Play_Ground() ;
    } while (choice!=0) ;

}
int main()
{
    Menu() ;
    return 0;
}
