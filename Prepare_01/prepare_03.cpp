#include <iostream>
#include <string>
using namespace std;

int main() 
{
    
    const int MAX_STUDENTS = 1000; 
    string students[MAX_STUDENTS]; 
    bool isPresent[MAX_STUDENTS] = { false }; 

    int numStudents;

    cout << "Enter the total number of students : ";
    cin >> numStudents;

    
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name of student " << i + 1 << ":-  ";
        cin >> students[i];
    }

    
    cout << "Mark attendance ( press 1 for present, any other number for absent):" << endl;
    
    for (int i = 0; i < numStudents; ++i) 
    {
        cout << students[i] << ": ";
        int attendance;
        cin >> attendance;
        isPresent[i] = (attendance == 1);
    }

    
    cout << "\nAttendance Report: " << endl;
    for (int i = 0; i < numStudents; ++i)
    {
        cout << students[i] << " - " << (isPresent[i] ? "Present" : "Absent") << endl;
    }
    
        system("pause");
    return 0;
}
