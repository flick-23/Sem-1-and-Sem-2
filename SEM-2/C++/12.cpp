#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
     ifstream fin1, fin2;
     ofstream fout;
     char ch, file_name1[20], file_name2[20], file_name3[30];
     cout<<"\n Enter First File Name with Extension '.txt'    :   ";
     gets(file_name1);
     cout<<"\n Enter Second File Name with Extension '.txt'   :   ";
     gets(file_name2);
     cout<<"\n Enter Third File Name with Extension '.txt' ";
     cout<<"\n (which will Store the Contents of \n First File and Second File)                     :   ";
     gets(file_name3);
     
     fin1.open(file_name1);
     fin2.open(file_name2);
     if(fin1==NULL || fin2==NULL)
     {
          cout<<"\n Invalid File Name. \n There is no such File or Directory ...";
          exit(EXIT_FAILURE);
     }
     fout.open(file_name3);
     if(!fout)
     {
          cout<<"\n Invalid File Name. \n There is no such File or Directory ...";
          exit(EXIT_FAILURE);
     }
     while(fin1.eof()==0)
     {
          fin1>>ch;
          fout<<ch;
     }
     while(fin2.eof()==0)
     {
          fin2>>ch;
          fout<<ch;
     }
     cout<<"\n Two Files have been Merged into "<<file_name3<<" File Successfully...!!!";
     fin1.close();
     fin2.close();
     fout.close();
     return 0;
}
