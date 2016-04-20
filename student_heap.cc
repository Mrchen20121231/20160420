 ///
 /// @file    student_stack.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-20 07:58:01
 ///
 
#include <iostream>
#include <string.h>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;
//只能生成堆对象，不能生成栈对象
//将构造函数 放入private
class Student
{
      public:
		    Student(int id,const char *name)
			:_id(id)
			{
                 cout << "Student(int id,const char*name)" << endl;
				 _name=new char[strlen(name)+1];
				 strcpy(_name,name);

			}
			Student()
			{
               cout << "Student" << endl;
			}
		public:
			 ~Student()
			 {
                cout << "~Student()" << endl;
				delete [] _name;

			 }
			 void print()
			 {
                cout << "id=" << _id << endl;
				cout << "name=" << _name << endl;
			 }
             static Student * creat(int id,const char * name)
			 {
                  return new Student(id,name);
			 }
			 static Student * creat()
			 {
                     return new Student;
			 }
    private:
			 int _id;
			 char *_name;
};
int main()
{
      Student * pStu=new Student(10,"jack");
	  pStu->print();
	  delete pStu;
	  Student s1(1001,"jane");
	  s1.print();

}
