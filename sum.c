#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void * sumofarr(Void*arg);
int array[1000];
int start=0;
int sum=0;

int main()
{
	for(int i=0;i<1000;i++)
	{
		array[i]=1+i;
	}
	
	pthread_t p;
	
	for(int i=0;i<=9;i++)
	{
		pthread_create(&p ,NULL,sum,NULL);
		pthread_join(p,NULL);
	}
	printf("sum of ellement of 1000 element array,%d",sum)
	

}
void * sumofarr(void * agr)
{
	for(int i=start;i<start+100;i++)
	{
		sum=sum+array[i];
	}
	
	start=start+100;
	
	return NULL;
	
	
}