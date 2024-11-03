#include<iostream>
using namespace std;

void insertionSort(int arr[], int n, int &comparisons, int &swaps)
{
    comparisons = 0;
    swaps = 0;
    
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > key)
        {
            comparisons++;   
            arr[j + 1] = arr[j];  
            swaps++;  
            j = j - 1;
        }
        comparisons++;  
        arr[j + 1] = key; 
    }
}

void display(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array1[10] = {1, 4, 3, 6, 2, 9, 0, 7, 8, 5};
    int array2[10] = {34, 98, 34, 1, 23, 0, 8, 2345, 2, 7};
    int array3[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int n = 10;

    int comparisons, swaps;

    cout << "\nArray 1 before sorting: ";
    display(array1, n);
    insertionSort(array1, n, comparisons, swaps);
    cout << "Array 1 after sorting: ";
    display(array1, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;

    cout << "\nArray 2 before sorting: ";
    display(array2, n);
    insertionSort(array2, n, comparisons, swaps);
    cout << "Array 2 after sorting: ";
    display(array2, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;

    cout << "\nArray 3 before sorting: ";
    display(array3, n);
    insertionSort(array3, n, comparisons, swaps);
    cout << "Array 3 after sorting: ";
    display(array3, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;

    return 0;
}
