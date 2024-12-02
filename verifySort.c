/*
function to verify if the arry is sorted
*/
int verifyIfSort(int*contentArray, int target)
{
    for(int i=0; i<target-1; i++)
    {
        if(contentArray[i]>contentArray[i+1])
        {
            return 0;
        }
    }
    return 1;
}
void arrayNotSorted(char*funcSorted)
{
    //do something about the array not being sorted
    printf("\n\n---->if youre seing this that menas the array is not sorted<----\n---->%s<----\n", funcSorted);
    getchar();
    exit(1);
}