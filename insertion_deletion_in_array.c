#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    //traverse
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    //insert at position
    int pos,val;
    printf("\nEnter position and value to be inserted:");
    scanf("%d%d",&pos,&val);
    for(int i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    n++;
    //insert at beginning
    for( int i=n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=val;
    n++;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }

    //insert at end
    arr[n]=val;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //delete at position 
    printf("Enter position to be deleted:");
    scanf("%d",&pos);
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    //delete at beginning
    for(int i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //delete at end
    n--;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}
