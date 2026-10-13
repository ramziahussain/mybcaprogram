#include<stdio.h>

int read_size()
{
    int size;
    printf("Enter the array size:");
    scanf("%d",&size);
    return size;
}
bool validate_size(int arraysize)
{
    if(arraysize<=1)
    {
        return false;
    }
    return true;
}
int binary_search(int myarray[],int searchkey,int arraysize)
{
    int low=0, high=arraysize-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (myarray[mid]==searchkey)
        {
            return mid;
        }
        else if (myarray[mid]<searchkey)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }   
    }
    return -1;
}
int main()
{
    bool isvalid=true;
    int size,key;
    do{
        size=read_size();
        if(validate_size(size)){
            break;
        }
        printf("Please enter valid array size..");

    }while (isvalid);
    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter elements in ascending order:");
        printf("Enter %d array element:", i+1);
        scanf("%d",&numbers[i]);
    }
    printf("Enter the search element");
    scanf("%d",&key);
    
    int pos=binary_search(numbers,key,size);
    if (pos==-1)
    {
       printf("element not found");
    }
    else
    {
        printf("element found at index %d",pos);
    }
    
}




