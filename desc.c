
#include <stdio.h>
    void main()
    {
        int temp, n,a[30];

        printf("Enter how many elements:");
        scanf("%d", &n);

        printf("Enter %d values:",n);
        for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

       for (int i = 0; i < n; i++) 

        {
            for (int j = i + 1; j < n; j++)

            {
                if (a[i] < a[j]) 

                {
                    temp =  a[i];

                    a[i] = a[j];

                    a[j] = temp;
                }
            }


        }
        printf("The numbers arranged in descending order is:");

        for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
    }

