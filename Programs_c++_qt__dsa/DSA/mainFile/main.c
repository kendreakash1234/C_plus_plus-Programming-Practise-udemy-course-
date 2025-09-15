#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encryptDecryptLibrary.h"

int isPrime(int num)
{
    int i;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int p,q,private_key;
    printf("Enter two prime numbers\n");
    scanf("%d%d",&p,&q);
    if(isPrime(p)&&isPrime(q))
    {
        char *fileName="";
        printf("enter fileName\n");
        scanf("%s",fileName);
        private_key=createFile(fileName,p,q);
    }
    else{
        printf("entered numbers are not prime\n");
    }
    return 0;
}
