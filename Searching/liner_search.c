/*
#include <stdio.h>

int main(){
    int arr[] = {12,13,1,8,20};
    int i;
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;

    printf("Enter the element do you want to search : ");
    scanf("%d",&target);

    for(i=0;i<n;i++){
        if(target == arr[i]){
            printf("data is found");
            return 0;
        }
    }
    printf("data is not present");
}
*/

// binary search
/*
#include <stdio.h>

int main()
{
    int arr[] = {8,9,10,12,18,20};
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    int flag = 0;
    int l = 0;
    int h = n - 1;
    printf("Enter the element do you want to search : ");
    scanf("%d", &target);

    if (target == arr[0])
    {
        printf("Data is found");
        return 0;
    }
    else if (target == arr[n - 1])
    {
        printf("Data is found");
        return 0;
    }
    else
    {

        while (l<=h)
        {
            int mid = (l+h)/2;
            if (target == arr[mid])
            {
                printf("data is present");
                return 0;
            }
            else if (target > arr[mid])
            {
                l = mid+1;
            }
            else if (target < arr[mid])
            {
                h = mid-1;
            }
        }
    }
    printf("data is not present");
}
*/

