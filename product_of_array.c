#include<stdio.h>
int main()
{
    int sz;
    
    scanf("%d",&sz);
    int arr[sz],pro=1,i;
    
    
    for( i=0;i<sz;i++)
    {
        scanf("%d",&arr[i]);
        //arr[i+1]=' ';
        //i++;
    }
    for( i=0;i<sz;i++)
    {
        if(arr[i]!=' ')
        {
            pro=pro*arr[i];
        }
    }
    printf("%d",pro);

return 0;
    
}
