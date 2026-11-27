#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  const int n=4;
  string names[n]={
   "Hadeer Mahmoud",
   "Youssef Ali",
   "Ahmed Mostafa",
   "Esraa Ebrahim"
   };
  sort(names, names + n);

  cout<< "Sorted names(Ascending order):\n";
  for (int i=0; i<n; i++){
    cout<< (i+1)<<"."<<names[i]<< endl;
  }
       return 0;
}
