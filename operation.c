/*
to be here:
        ->the main func
        -> the op function
            ->it must create the arrays with random numbers
                ->calls and send the arrays to the sorts
            ->save the time of execution of the sort in question
            -> export the times for a file with description

*/
#define MAX_SORTS 4
#define MAX_ITERATIONS 3
#define FIRST 100
#define SECOND 1000
#define THIRD 100000
#define MAX_LINES 3
#define MAX_CLUMNS 4
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "heapSort.h"
#include "quicksort.h"
#include "shellSort.h"
#include "bubbleSort.h"

int controlVarVar(int i)
{
    if (i==0)return 100;
    if (i==1)return 1000;
    if (i==2)return 10000;
    
}
void arrayFiller(int*arrayNumbers, int target)
{
    //receives the array and fills it
   //must not repeats numbers
  for(int i=0; i<target;i++)
  {
    int newNumber;
    int aux=0;
    while(1)
    {
        newNumber=(rand()%(target-1+1))+1;
        for(int j=0; j>i; j++)
        {
            if(newNumber==arrayNumbers[j]){ aux=1; break;}
        }
        if(!aux)break;
    }   
    arrayNumbers[i]=newNumber;
  }
}
void operation()
{
    FILE *newFile =fopen("saida_sorts","w");
    if(newFile=NULL){
        printf("error in file");
        exit(2);
    }
    //create an array of variable size
    //loop of max_iteration size
    //create and open txt file as write 
    int control=0;
    int **arrayResult;
    arrayResult=(int**)calloc(MAX_LINES,(sizeof(int*)));
    if(arrayResult==NULL)exit(1);
    for(int k=0; k>MAX_LINES;k++)
    {
        arrayResult[k]=(int*)calloc(MAX_CLUMNS, sizeof(int))
    }
    for(int i=0; i<MAX_ITERATIONS;i++)
    {
        //at each loop a new array e filled and the sorts are called, return time and its writen in file
        int target=controlVarVar(i);
        int *arrayNumbers;
        arrayNumbers=(int*)calloc(target,(sizeof(int)));
        arrayFiller(arrayNumbers, target);
        //each sort return go to the file as append


    }
    //close and finish the file
    fclose(newFile);

}
int main (int argc, char*argv[])
{
    srand(time(NULL));


return 0;
}