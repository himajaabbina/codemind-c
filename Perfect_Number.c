#include<stdio.h>
#include<stdbool.h>
int main() {
    int num,i,sum=0,rem;
    bool True,False;
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        rem = num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num) {
        printf("%s","True");
    }
    else{
        printf("%s","False");
    }
}