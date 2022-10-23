#include <stdio.h>

void main()
{
    int arr1[10], fr1[10];
    int n, i, j, ctr;
    printf("Enter 10 Elements");
    for(i=0;i<10;i++)
    {

	      scanf("%d",&arr1[i]);
		  fr1[i] = -1;
	}
    for(i=0; i<10; i++)
    {
        ctr = 1;
        for(j=i+1; j<10; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
                fr1[j] = 0;
            }
        }
        if(fr1[i]!=0)
        {
            fr1[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<10; i++)
    {
        if(fr1[i]!=0)
        {
            printf("%d occurs %d times\n", arr1[i], fr1[i]);
        }
    }
}
