#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function to check the number prime or not
int Prime(int x)
{
    if(x==1)
    {
        return 0;
    }
    for (int i = x; i >2 ; --i) {
        if(x%(i-1)==0)
        {
            return 0;
        }

    }
    return 1;
}
int main() {
    printf("Prime Numbers From 1 to 100: ");
    //for loop to check all numbers between 1 to 100
    for (int i = 1; i <=100 ; ++i) {
        if(Prime(i) && i!=97)
        {
            printf("%d, ",i);
        }
        //since 97 is the last number so we don't want to print ',' in the end
        if(i==97)
        {
            printf("%d",i);
        }
    }
    return 0;
}
