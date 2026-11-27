#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
   ofstream outfile("Student.txt");
   if(!outfile){
     cout<< "Error creating the file!" <<endl;
     return 1;
   }

   outfile<< "Ali Ahmed"<< endl;
   outfile<< "Mohamed Rady"<< endl;
   outfile<< "Youssef Zaki"<< endl;
   outfile.close();

   ifstream infile("Students.txt");
   ofstream tempFile("temp.txt");

   if(!infile|| !tempFile){
     cout<< "Error opening files for deleting!"<< endl;
     return 1;
    }
   string line;
   int currentLine=1;
   int lineToDelete=1;

   while (getline(infile, line)){
    if (currentLine =! lineToDelete){
        tempFile<< line<< endl;
    }
    currentLine++;
   }
   infile.close();
   tempFile.close();

   remove("Students.txt");
   rename("temp.txt", "Students.txt");

   cout<< "First name deleted successfully!"<< endl;
    return 0;
}
