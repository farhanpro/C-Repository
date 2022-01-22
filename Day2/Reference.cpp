#include <iostream>

using namespace std;

int main()
{
    int score = 500;
    int *myscr = &score;
    int scoreCopy = *myscr;
    int &another_Score = score; //any change in the reference will change its actual value
    another_Score = 800;

    printf("Value of Score is %d\n" ,score);
    printf("Value of Myscr %p\n",myscr);
    printf("Value of scoreCopy is %d\n",scoreCopy);
    printf("Value of Score is %d\n",score);
    printf("Value Of Pointer is %p\n",myscr);

    return 0;

}