#include <iostream>
using namespace std;

int main(){
    int card;
    card = 40;
    int *myp = &card;
   // myp = &card;
    int my_card = *myp;

    printf("Value of card is : %d\n",my_card);
    printf("Value of MYP is : %p\n",myp);
    printf("Value of my_card is %d\n",my_card);


    return 0;
}