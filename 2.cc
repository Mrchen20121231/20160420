 ///
 /// @file    2.cc
 /// @author  Mrchen20121231(392911409@qq.com)
 /// @date    2016-04-20 08:47:07
 //
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
//定义存储单词和出现次数的结构体
typedef struct{
 string word;
  int num;
  }count;
int main()
  {
         vector<count> v;  //定义count类型的向量，动态存储count变量
         count tempstr;   //临时存储count变量
         tempstr.num=0;   //num初始化为0
         ifstream in("The_Holy_Bible.txt"); //打开文件
          string temp;   //临时变量，存储文件的一行信息
           string str;    //临时变量，存储单个单词
            int count=0;   //记录单词字符个数
             int j=0;
              
              //按行读取文件，对每行信息截取单词并计数  
			  while(getline(in,temp))
                {
                  for(int i=0;i<temp.length ();i++)
                    {
                       if((temp[i]>='a'&&temp[i]<='z')||(temp[i]>='A'&&temp[i]<='Z'))
                           count++;                        //如果是英文字符，则计数加1
                              else if(count)                      //单词遇非英文字符时，计数终止，截取单词
                      {
        
				str=temp.substr (i-count,count);  //取子串（截取单词）
                 if(v.size ())                  //若向量的长度不为0，则将单词与已有单词比较
                 {
                 for(j=0;j<v.size ();j++)
                if(str.compare(v[j].word )==0)
				{
					v[j].num ++;          //单词相同，则将相应单词的数目加1
				           count=0;              //计数变量重新赋值为0，以便记录新的单词
						             break;
									       }
				     }  //end if
							      if(j>=v.size ())                  //单词第一次出现，将其添加至向量中
									      {
					 tempstr.word = str;
					    tempstr.num =1;
						   v.push_back (tempstr);
					  count = 0;                    //单词添加完毕，计数变量归0，记录新单词
					  } //end if
				     } //end elseif
				    } //end for
			   
				   //end while
                  //打印单词及出现次数
                  for(int i=0;i<v.size ();i++)
                  cout<<"the word is:"<<v[i].word<<", the times is:"<<v[i].num<<endl;

				  return 0;
}		
}	
