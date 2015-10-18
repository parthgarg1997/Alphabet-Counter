/* copyright are only reserved to Mr. Parth Garg
          If you are using turbo c++
          then use iostream.h and string.h(put .h at last)
           and remove line "using namespace std;"
  THANK YOU    */
#include<iostream>
#include<string>
using namespace std;
int main()
{ int i,j=0,k,count[24][20]={0},q=0,total[24]={0},m;
  char string[500],alphabet[26];
  cout<<"enter the string \t";
  cin.getline(string,500);
     for(i=0;string[i]!='\0';i++)
      {
        if(string[i]=='*')
          {
             continue;
          }
         else
           {
               alphabet[j]=string[i];
                j++;
             for(k=i;string[k]!='\0';k++)
                {
                    if(string[k]==alphabet[j-1])
                      {
                      count[j-1][q]=k+1;
                      q++;
                       string[k]='*';
                       total[j-1]++;
                      }
                }
                q=0;
           }
      }
    for(i=0;i<=j-1;i++)
       {
        cout<<"alphabet  "<<alphabet[i]<<" comes at positin=";
        for(m=0;m<total[i];m++)
        cout<<count[i][m]<<',';
        cout<<"\t total="<<total[i];
      cout<<"\n"; }
    return 1.5;
}