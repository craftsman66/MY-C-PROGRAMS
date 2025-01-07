#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    printf("%d \n", *ptra);
    printf("%d \n", ptra);
    printf("%d \n", ptra + 1);
    printf("%d \n", ptra++);
    printf("HELLO WORLD \n");


    
    int arr[]={1,2,3,4,5,6,7,9,8};
    printf("THE VALUE AT THE POSITION 3 OF THE ARRAY IS %d \n", arr[3]);
    printf("THE ADDRESS OS THE 1ST ELEMENT OF THE ARRA IS %d \n", &arr[1]);
    printf("THE ADDRESS OS THE 1ST ELEMENT OF THE ARRA IS %d \n", &arr[0])+1;

    printf("THE value ADDRESS OS THE 1ST ELEMENT OF THE ARRA IS %d \n", *(&arr[0]));
    printf("THE value ADDRESS OS THE 1ST ELEMENT OF THE ARRA IS %d \n", *(&arr[1]))+1;
    printf("THE value ADDRESS OS THE 1ST ELEMENT OF THE ARRA IS %d \n", *(&arr[2]));
    return 0;
}