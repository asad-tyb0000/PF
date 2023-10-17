#include <iostream>
using namespace std;
float calculateAverage(string name,float maths,float bio,float chem,float ssc,float engl,float sum);
string calculateGrade(float average);
main()
{
    string name,gra;
    float maths, bio,chem,eng,ssc,engl,sum;
    float average;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> engl;
    cout << "Enter marks for Maths: ";
    cin >> maths;
    cout << "Enter marks for Chemistry: ";
    cin >> chem;
    cout << "Enter marks for Social Science: ";
    cin >> ssc;
    cout << "Enter marks for Biology: ";
    cin >> bio;
    sum = maths+bio+engl+chem+ssc;
    average = calculateAverage(name,maths,bio,chem,ssc,engl,sum);
    gra = calculateGrade(average);
    cout << "Student Name: "<< name << endl;
    cout << "Percentage: " << average << "%" <<endl;
    cout << "Grade: " << gra << endl;
}
float calculateAverage(string name,float maths,float bio,float chem,float ssc,float engl,float sum)
{
    float avg;
    avg = (sum / 5) ;
    return avg;
}

string calculateGrade(float average)
{
    string grade;
    if (average >= 90)
    {
        grade = "A+"; 
    }
    if (average >= 80 && average < 90)
    {
        grade = "A"; 
    }
    if (average >= 70 && average < 80)
    {
        grade = "B+"; 
    }
    if (average >= 60 && average < 70)
    {
        grade = "B"; 
    }
    if (average >= 50 && average < 60)
    {
        grade = "C"; 
    }
    if (average >= 40 && average < 50)
    {
        grade = "D"; 
    }
    if (average < 40)
    {
        grade = "F";
    }
    return grade;
}