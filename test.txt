 ///
 /// @file    io.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-20 01:53:58
 ///
 
#include <iostream>
#include <string>
#include <limits>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void print()
{
    cout << "bad=" <<cin.bad() << endl;
    cout << "fail=" <<cin.fail() << endl;
    cout << "eof=" <<cin.eof() << endl;
    cout << "good=" <<cin.good() << endl;


}
int main()
{
     int num;
	 print();
	 while(cin>> num)
	 { 
          cout << "num=" <<num << endl;
   
	 }
	 print();
	 cin.clear();
	// cin.ignore(1024,'\n');//非法的值被忽略
	 cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	 cout << endl;
	 print();
     string s;
	 while(cin >> s)
	 {
         cout << "str=" << s << endl;
	 }

	 return 0;



}
