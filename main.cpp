#include <bits/stdc++.h>
#include "menu.h"
#include "Student.h"
using namespace std;

unordered_map<int,Student*> data;
int main(){
  int choice;
  bool loop = true;
  displayMenu();
  while(loop){
    cout<<"----------------------------------------------------------\n";
    cout<<"Enter Choice : ";
    cin>>choice;
    switch(choice){
      case 1:
        displayMenu();
        addStudent(data);
        break;
      case 2:
        displayStudent(data);
        break;
      case 3:
        clrscr();
        displayAllStudent(data);
        char ch;
        cout<<"\n Press Enter to return to Menu";
        getchar();
        getchar();
        displayMenu();
        break;
      case 4:
        displayMenu();
        break;
      default:
        { //Write to a file
          ofstream MyFile("Student.txt");
          writeStudents(MyFile,data);
          MyFile.close();
        }
        loop = false;
        cout<<"Exiting";
        system("exit()");
        break;
    }
  }
  return 0;
}
