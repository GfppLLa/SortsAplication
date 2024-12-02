#include <time.h>
double protoQSort(int*contentArray, int target)
{
    clock_t start, end;
    start=clock();
    quickSort(contentArray,0, target);
    end=clock();

    return ((double)(end-start)/CLOCKS_PER_SEC);

}
int randomPivot(int left, int right)
{
    int toReturn=rand()%(right-left+1)+left;
}
void swap(int*contentArray, int i, int j)
{
    int temp=contentArray[i];
    contentArray[i]=contentArray[j];
    contentArray[j]=temp;
}
int quickSort(int*contentArray, int left , int right)
{
    int pivot=randomPivot(left, right);
    int i=left;
    for(int j=left+1;j<=right; j++)
    {
        if(contentArray[j]<=pivot)
        {
            i++;
            swap(contentArray, i, j);
        }
    }
    swap(contentArray, left, i);
    return i;
}