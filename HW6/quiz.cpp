#include <iostream>
#include <fstream>
using namespace std; 

int main()
{
   char ch;
   int n;
   ifstream in_file;
   in_file.open("c:\\sales.txt");
   while (in_file.get(ch))
   {
      if (isdigit(ch))
      {
         in_file.unget();
         in_file >> n;
         cout << n;
      }
   }
   return 0;
}