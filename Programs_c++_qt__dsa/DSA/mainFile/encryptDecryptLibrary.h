#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define pass "12345";

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else return gcd(b%a,a);
}

int calculatePublicKey(int lambada_n)
{
    int i;
    for(i=2;i<lambada_n;i++)
    {
        if(gcd(i,lambada_n)==1)
            return i;
    }
    return -1;
}

int calculatePrivateKey(int publickey,int lambada_n)
{   int i;
    for(i=1;i<lambada_n;i++)
    {
        if(((i*publickey)%lambada_n)==1)
            return i;
    }
    return -1;
}

int createFile(char *fileName,int p,int q)
{
    FILE *fp;
    char *message="5E,7.0.8,6.0.8,3.600";
    int n=0,lambada=0,publickey=0,privateKey=0;
    n=p*q;
    lambada=((p-1)*(q-1));
    publickey=calculatePublicKey(lambada);
    printf("Public key = %d\n",publickey);
    privateKey=calculatePrivateKey(publickey,lambada);
    printf("private key = %d\n",privateKey);

    fp=fopen(fileName,"r");
    if(fp==NULL)
    {
        printf("File is empty\n");
    }
    else
    {
        fgets(message,strlen(message),fp);
    }



    return privateKey;
}
