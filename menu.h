#define clrscr() system("cls")
#define centerAlign(x) {int l=string(x).size();cout<<right<<setw(40+l/2)<<x<<endl;}
using namespace std;

void displayMenu(){
  clrscr();
  centerAlign("SCHOOL MANAGEMENT SYSTEM")
  cout<<" 1. Add Student"<<"\n";
  cout<<" 2. Display Student"<<"\n";
  cout<<" 3. Display All Student"<<"\n";
  cout<<" 4. Clear Screen"<<"\n";
  cout<<" 5. Exit"<<"\n\n";
}
