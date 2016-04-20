 ///
 /// @file    ifstream.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-20 05:47:58
 ///
 
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int test0()
{
	std::ifstream ifs("io.cc");//创建一个对象用来读数据
	  if(!cin.good())
      {
             cout << "open file error" << endl;
			 return -1;
      }
      vector<string> str; //创建一个数组类型的对象来存储数据
	  string line; //创建一个字符串类型的line每次读取文件的一行
	  while(getline(ifs,line))
	  {
          str.push_back(line);
	  }
	  vector<string>::iterator sit=str.begin();
	  for(;sit!=str.end();sit++)
	  {
         cout << *sit << endl;
	  }
	  ifs.close();
	  return 0;


}
int main()
{
    std::ifstream ifs("io.cc");
	  if(!cin.good())
      {
             cout << "open file error" << endl;
			 return -1;
      }
     std::ofstream ofs("test.txt");
	 string line;
	 while(getline(ifs,line))
	 {
         ofs << line << endl;
       
	 }
     ifs.close();
	 ofs.close();
	 return 0;
}
