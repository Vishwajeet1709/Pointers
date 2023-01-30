#include<stdio.h>
void sort(int *ptr,int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                ptr[i]=ptr[i]+ptr[j];
                ptr[j]=ptr[i]-ptr[j];
                ptr[i]=ptr[i]-ptr[j];
            }
        }
    }
}
int main()
{
    int i, size;
    printf("Enter the number or array : ");
    scanf("%d",&size);
    printf("\nEnter %d elements/numbers : ",size);
    int ptr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n Array before sorting : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
    sort(ptr,size);
    printf("\n Array after sorting : ");
    for(i=0;i<size;i++)
    {
        printf(" %d",ptr[i]);
    }
    printf("\n\n");
    return 0;
}
