//prgram to store n display 5 subject marks
#include<stdio.h>
int main()
{
    int mymarks[5];
    int submarks[5];  // declares an array 'submarks' w size 5 of 'int' type
    //  storing data/array initialisation - arrayname[index]=data/value
    submarks[0]=50;  // stores '50' in an array position whose index is '0'
    submarks[1]=22;
    submarks[2]=23;
    submarks[3]=45;
    submarks[4]=90;  // statis array initialisation
    printf("first subject marks: %d\n",submarks[0]);
    printf("second subject marks: %d\n",submarks[1]);
    printf("third subject marks: %d\n",submarks[2]);
    printf("fourth subject marks: %d\n",submarks[3]);
    printf("fifth subject marks: %d\n",submarks[4]);
    //  dynamic array initialisation
    for (int i=0;i<5;i++)
    {
        printf("enter subject %d marks: ",i+1);
        scanf("%d",&mymarks[i]);
    } 
    for (int n=0;n<5;n++)
    {
        printf("my sub%d marks is: %d\n",n+1,mymarks[n]);
    }
    /*
    printf("my sub1 marks is: %d\n",mymarks[0]);
    printf("my sub2 marks is: %d\n",mymarks[1]);
    printf("my sub3 marks is: %d\n",mymarks[2]);
    printf("my sub4 marks is: %d\n",mymarks[3]);
    printf("my sub5 marks is: %d\n",mymarks[4]);
    
    printf("enter first subject marks: ");
    scanf("%d",&mymarks[0]);  //stored in first location
    printf("enter second subject marks: ");
    scanf("%d",&mymarks[1]);
    printf("enter third subject marks: ");
    scanf("%d",&mymarks[2]);
    printf("enter fourth subject marks: ");
    scanf("%d",&mymarks[3]);
    printf("enter fifth subject marks: ");
    scanf("%d",&mymarks[4]);
    printf("my sub1 marks is: %d\n",mymarks[0]);
    printf("my sub2 marks is: %d\n",mymarks[1]);
    printf("my sub3 marks is: %d\n",mymarks[2]);
    printf("my sub4 marks is: %d\n",mymarks[3]);
    printf("my sub5 marks is: %d\n",mymarks[4]);
    */
    return 0;
}