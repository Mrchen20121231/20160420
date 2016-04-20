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
//只能生成栈对象，不能生成堆对象
//将operator new(size_t) 放入private
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
       private:
			 static void * operator new(size_t size);
			 static void operator delete(void *pRet);
#if 1
			 static void * operator new(size_t size)
			 {
                      cout <<"operator new(size_t)" << endl;
					  void *pRet=malloc(size);
					  return pRet;
			 }
			 static void operator delete(void *pRet)
			 {
                      cout <<"operator delete(void *pRet)" << endl;
                      free(pRet);
			 }
#endif
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
