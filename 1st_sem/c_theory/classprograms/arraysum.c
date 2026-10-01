#include<stdio.h>

int getarraysize()
{
    int size;
    printf("enter the size of the array:");
    scanf("%d",size);
    return size;
}


int isvalid(size)    
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


int arraysum(array,size)
{
    int arraysize=getarraysize();
    int array=initialise(arraysize);
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    
}



int main()
{
    int arraysize=getarraysize();
    int valid=isvalid(arraysize);
    if (valid==0)
    {
        while (arraysize<4)
        {
            printf("array size is not valid please try again");
            int arraysize=getarraysize();
        }
        
    }
    
    
    
    int sum=arraysum(array,arraysize);
}