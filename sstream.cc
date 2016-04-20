 ///
 /// @file    sstream.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-20 06:58:43
 ///
 
#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::stringstream;
int test0()
{
   int deva1=512;
   int deva2=1024;
   stringstream ss;
   ss << "deva1=" << deva1 << "deva2=" << deva2 << endl;
    
   char buf[128];
   sprintf(buf,"deva1=%d,deva2=%d",deva1,deva2);
   cout << buf << endl;

   string str=ss.str();
   cout << str << endl;
   while(ss >>str)
   {
     cout << str << endl;

   }
   return 0;


}
int main()
{
    test0();   

}
