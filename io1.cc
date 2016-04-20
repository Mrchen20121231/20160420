 ///
 /// @file    io1.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-20 05:23:31
 ///
 
#include <iostream>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int deval;
	while(cin >>deval,!cin.eof())
	{
         if(cin.bad())
		 {
           cout << "output failed" << endl;
		   return -1;

		 }
		 if(cin.fail())
		 {
            cout << "illegal input,try again" << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            continue;
		 }
		 cout << "deval=" << deval << endl;
 
     }
    return 0;


}
