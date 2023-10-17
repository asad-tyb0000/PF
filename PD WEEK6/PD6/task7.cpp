#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
    int examHour, examMinute, studentHour, studentMinute;
    string result;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    result = checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
    cout << result;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    int difference;
    int differenceHour,differenceMinute;
    int totalExamMinutes,totalStudentMinutes;
    totalExamMinutes = (examHour*60)+examMinute;
    totalStudentMinutes = (studentHour*60)+studentMinute;
    if (totalExamMinutes >= totalStudentMinutes )
    {
        difference = ((examHour*60)+examMinute)-((studentHour*60)+studentMinute);
        differenceHour= difference/60;
        differenceMinute=difference - (differenceHour*60);
        if(difference > 30)
        {
            if(difference < 60)
            {
                return "Early\n" + to_string(difference) +" minutes before the start";
            }
            if(difference >= 60)
            {
               return "Early\n"+ to_string(differenceHour)+":"+to_string(differenceMinute) +" hours before the start";
 
            }  
        }
        if(difference <= 30)
        {
            return "On time";
        }
    }
    if(totalExamMinutes < totalStudentMinutes)
    {
        difference = ((studentHour*60)+studentMinute)-((examHour*60)+examMinute);
        differenceHour= difference/60;
        differenceMinute=difference - (differenceHour*60);
        if(difference > 0 && difference < 60)
        {
            return "Late\n " + to_string(difference) +" minutes after the start";

        }
        if (difference >= 60)
        {
            return "Late\n" + to_string(differenceHour)+":"+to_string(differenceMinute) +" hours after the start";
        }
    }
}
