#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int count;

int fib(int n)
{
if (n <= 1)
	return n;
	count++;
return n*fib(n-1);
}

int main ()
{
int i,j,k,n,l=2;
   FILE *ptr1,*ptr2;
   ptr2=fopen("Fact_count.txt","a");
   ptr1=fopen("Fact.txt","a");
   for(i=0;i<=20;i++)
     {
        count=0;
        j=fib(i*2);
        fprintf(ptr1,"\nThe factorial of %d is %d\n",i*2,j);
        fprintf(ptr2,"%d\t%d\n",i*2,count);
     }
     fclose(ptr1);
     fclose(ptr2);
    system("gnuplot -p 'commands.txt'");
return 0;
}


