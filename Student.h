#include <bits/stdc++.h>
using namespace std;
class Student{
private:
  string firstName;
  string lastName;
  int rollNo;
public:
  Student(string firstName,string lastName,int rollNo){
    this->firstName = firstName;
    this->lastName = lastName;
    this->rollNo = rollNo;
  }
  string getFirst(){
    return this->firstName;
  }
  string getLast(){
    return this->lastName;
  }
  int getRoll(){
    return this->rollNo;
  }
};

void addStudent(unordered_map<int,Student*> &data){
  string first,last;
  int roll;
  cout<<"Enter First Name : ";
  cin>>first;
  cout<<"Enter Last Name  : ";
  cin>>last;
  cout<<"Enter Roll No    : ";
  cin>>roll;
  if(data.find(roll) != data.end()){
    cout<<"Roll no. Already Exists"<<endl;
    return;
  }
  Student *s = new Student(first,last,roll);
  data[roll] = s;
  cout<<"                                 Student Added! "<<endl;
  cout<<"                                 Total Student: "<<data.size()<<endl;
  cout<<endl;
}

void displayStudent(unordered_map<int,Student*> &data){
  cout<<"Enter Roll No.   : ";
  int roll;
  cin>>roll;
  if(data.find(roll) != data.end()){
    Student *s = data[roll];
    cout<<"----------------------------------------------------------"<<endl;
    cout<<"  Student Details\n\n";
    cout<<"  Name     : "<<s->getFirst()<<" "<<s->getLast()<<endl;
    cout<<"  Roll No. : "<<s->getRoll()<<endl;
    cout<<"----------------------------------------------------------"<<endl;
  }
  else{
    cout<<"Student Not Found"<<endl;
  }
}

void writeStudents(ofstream &file,unordered_map<int,Student*> &data){
  for(auto i : data){
    int roll = i.first;
    if(data.find(roll) != data.end()){
      Student *s = data[roll];
      file<<"----------------------------------------------------------"<<endl;
      file<<"  Student Details\n\n";
      file<<"  Name     : "<<s->getFirst()<<" "<<s->getLast()<<endl;
      file<<"  Roll No. : "<<s->getRoll()<<endl;
      file<<"----------------------------------------------------------"<<endl;
    }
  }
}

void displayAllStudent(unordered_map<int,Student*> &data){
  cout<<"Total Students : "<<data.size()<<endl;
  for(auto i : data){
    int roll = i.first;
    if(data.find(roll) != data.end()){
      Student *s = data[roll];
      cout<<"----------------------------------------------------------"<<endl;
      cout<<"  Student Details\n\n";
      cout<<"  Name     : "<<s->getFirst()<<" "<<s->getLast()<<endl;
      cout<<"  Roll No. : "<<s->getRoll()<<endl;
      cout<<"----------------------------------------------------------"<<endl;
    }
  }
}
