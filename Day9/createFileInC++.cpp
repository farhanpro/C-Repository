#include<iostream>
#include <string>
using namespace std;
int main()
{
    static const  char* originalfile = "originalFile.txt";
    static const  char* Editedfile = "editedFile.txt";
    // FILE *fh = fopen(originalfile,"w"); //Used for file creation
    // fclose(fh);  //Whenever you open a file make sure to close it
    
    // printf("%p\n",*originalfile);
    // cout<<originalfile<<endl;
   
    //rename(originalfile,Editedfile); // To rename and edit a file

    remove(Editedfile); //To Remove Delete a file 

    
    return 0;
}