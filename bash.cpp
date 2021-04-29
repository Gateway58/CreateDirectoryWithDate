#include <iostream>
#include <math.h>
#include <fstab.h>
#include <fstream>
#include <ostream>
#include <sstream>
#include <condition_variable>
#include <cerrno>
#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std; 
string unt = "\"HowYourFolderShouldBeCalled "; //to this it will add the current date of your OS like it creates "HowYourFolderShouldBeCalled 25.04.2021" in  "/home/your_user/yourpath/" 
string date;  
void DoSomeStuff(string &path1, string &path2, string &path3, string &path4); 
void CreateDir(string &Command); 
int main()
{
     
    string path1, path2, path3, path4; 
   DoSomeStuff(path1, path2, path3, path4); 
   CreateDir(path1); 
    CreateDir(path2);
     CreateDir(path3);
      CreateDir(path4);
      return 0; 
}

void CreateDir(string &path)
{
    if (path != "")
    {
       string fin = "mkdir " + path +unt; 
   int n = fin.length(); 
   char doo[n+1]; 
  stpcpy(doo, fin.c_str());
  system(doo); 
    }
    return; 
    

}
void DoSomeStuff(string &path1, string &path2, string &path3, string &path4)
{
 char a[40];  
    time_t now = time(0); 
    struct tm * nowLocal = localtime(&now); 

    strftime(a, 40, "%d.%m.%Y\"", nowLocal);

    for (int i = 0; i < 12; i++)
    {
       date += a[i];  
    }

    unt += date; 

    strftime(a, 40, "%A", nowLocal);

   switch (a[1])
   {
   case 'o':  
   path1 = "/home/your_user/yourpath/"; 
   path2 = "/home/your_user/yourpath/"; 
   path3 = "/home/your_user/yourpath/"; 
   path4 = "/home/your_user/yourpath/"; 
    break; 
    // end Mon
    case 'u':  
    if (a[0] == 'T')
    { 
   path1 = "/home/your_user/yourpath/"; 
   path2 = "/home/your_user/yourpath/"; 
   path3 = "/home/your_user/yourpath/"; 
   path4 = "/home/your_user/yourpath/"; 
    break; 
    }
    else if (a[0] == 'S')
    {
        break; 
    }
    // end Tue
   case 'e': 
   path1 = "/home/your_user/yourpath"; 
   path2 = "/home/your_user/yourpath"; 
   path3 = "/home/your_user/yourpath"; 
   path4 = "/home/your_user/yourpath"; 
     break; 
     // end Wed
   case 'h':  
    path1 = "/home/your_user/yourpath/"; 
   path2 = "/home/your_user/yourpath/"; 
   path3 = "/home/your_user/yourpath/"; 
   path4 = "/home/your_user/yourpath/"; 
   break; 
   // end Thu
   case 'r': 
    path1 = "/home/your_user/yourpath/"; 
   path2 = "/home/your_user/yourpath/"; 
   path3 = "/home/your_user/yourpath/"; 
   path4 = "/home/your_user/yourpath/"; 
    break; 
    // end Fri
   case 'a':  break; 
   // end Sat
    default: std::cout << "Error" << std::endl; break; 
    // end Err
   }
}

/*
    Monday – MUN – day.
    Tuesday – TUEZ – day.
    Wednesday – WENZ – day.
    Thursday – THURZ – day.
    Friday – FRY – day.
    Saturday – SAH-DER-day.
    Sunday – SUN – day.
*/
//Don't blame me i don't know the english days so well xD
