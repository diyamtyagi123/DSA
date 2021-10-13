#include <stdio.h> 
int binarysearch(int arr[], int size , int element){
    int mid , high=size-1 , low=0;
    while(low<=high){
        mid =(low+high)/2;
        if(arr[mid]==element)
            return mid;
        if(arr[mid]<element)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,14,17,18,25,27,29,33,36,45,49,52,56,61,69,88,92,95,99};
    int size=sizeof(arr)/sizeof(int);
    int element=56;
    int searchindex=binarysearch(arr,size,element);
    printf("the index of element %d is %d ", element , searchindex);
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//int binarySearch(int arr[], int low, int high, int element)
//{
//    if (high >= low) {
//        int mid = low + (high - low) / 2;
//        if (arr[mid] == element)
//            return mid;
//        if (arr[mid] > element)
//            return binarySearch(arr, low, mid - 1, element);
//        return binarySearch(arr, mid + 1, high, element);
//    }
//    return -1;
//}
//  
//int main(void)
//{
//    int arr[]={2,4,6,8,14,17,18,25,27,29,33,36,45,49,52,56,61,69,88,92,95,99};
//    int element = 56;
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int result = binarySearch(arr, 0, n - 1, element);
//    (result == -1) ? cout << "Element not found"
//                   : cout << "The index of element "<< element <<" is " << result;
//    return 0;
//}