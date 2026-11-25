#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct Student {
    char name[20];
    int id;
    float grade;
    char delim;
};

int main()
{
    ofstream outFile("student.txt", ios::app);
    if (!outFile.is_open()){
        cout<< "Error: Could not open students.txt for writing!"<< endl;
        return 1;
    }
    char choice ='y';

    while (choice == 'y'||  choice== 'y'){
        Student s;
        s.delim='$';

        cout<< "Enter student name:";
        cin.ignore();
        cin.getline(s.name, 20);

        cout<< "Enter student ID:";
        cin>> s.id;

        cout<< "Enter student grade:";
        cin>> s.grade;

        outFile<< s.name<< ","<<s.id<<","<<s.grade<< ""<< s.delim<< endl;

        cout<< "Do you want to add another student? (y/n):";
        cin>> choice;

        outFile.close();
        cout<< "Student records saved to students.txt successfully!"<< endl;
    }
    return 0;
}
