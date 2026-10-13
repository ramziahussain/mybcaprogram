#include<stdio.h>
//int array[23];

int getarraysize()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",size);
    return size;
}


int isvalid(int size)    
{
    int val;
    if (size>4)
    {
        printf("array size is valid");
        val=1;
    }
    else
    {
        val=0;
    }
    return val;
}

/*
int initialise(size)
{
    int element;
    int arr[size];
    int n=0;
    while (n<=size)
    {
        printf("enter %d element:",n);
        scanf("%d",element);
        arr[n]=arr[element];
        n+=1;
    }
    return arr;
}    


int arraysum()
{
    int size=getarraysize();
    int array=initialise(size);
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum=sum+array;
    }
    
}
*/


int main()
{
    //int array[23];
    int arraysize=getarraysize();
    
    while (true)
    {
        int array[arraysize];
        int valid=isvalid(arraysize);
        if (valid==1)
        {
            break;
        }
        printf("array size is not valid please try again");
    }
    
    //int sum=arraysum();
}