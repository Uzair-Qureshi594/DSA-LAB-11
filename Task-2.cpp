#include<iostream>
using namespace std;

void swap(int &a, int &b, int &swaps)
{
    int temp = a;
    a = b;
    b = temp;
    swaps++; 
}

void bubbleSort(int arr[], int n, int &comparisons, int &swaps)
{
    comparisons = 0;  
    swaps = 0;        

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            comparisons++;  
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1], swaps);
            }
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array1[10] = {34, 98, 34, 0, 23, 0, 8, 2345, 2, 7};
    int array2[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int array3[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

    int n = 10;
    int comparisons, swaps;

    // Sort and display for array1
    cout << "Bubble Sort Array 1" << endl;
    bubbleSort(array1, n, comparisons, swaps);
    display(array1, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;

    // Sort and display for array2
    cout << "Bubble Sort Array 2" << endl;
    bubbleSort(array2, n, comparisons, swaps);
    display(array2, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;

    // Sort and display for array3
    cout << "Bubble Sort Array 3" << endl;
    bubbleSort(array3, n, comparisons, swaps);
    display(array3, n);
    cout << "Comparisons: " << comparisons << ", Swaps: " << swaps << endl;

    return 0;
}
