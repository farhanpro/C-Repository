#include<iostream>
#include<string>
using namespace std;
constexpr int maxbuffer = 1024;
int main()
{
    const char *fileName = "MyThisFile.txt";
    const char *information = "the information in this file is generated throug a c++ programe";
    // FILE *fh = fopen(fileName,"w");   //used to insert information in a text file
    // for(int i;i<50;i++)
    // {
    //     fputs(information,fh);
    // }
    // fclose(fh);

    // char buf[maxbuffer];           //used to read the data from the file
    // FILE * fh = fopen(fileName,"r");
    // while(fgets(buf,maxbuffer,fh))
    // {
    //     fputs(buf,stdout);
    // }
    return 0;
}