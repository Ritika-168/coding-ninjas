void swapAlternate(int *arr, int size)
{
    //Write your code here
int i = 0; int j = i+1;
    while (i<size-1){
   int  temp = arr[i];
    arr[i]=arr[j];
    arr[j]= temp;
    i=i+2;
    j=j+2;
}
}