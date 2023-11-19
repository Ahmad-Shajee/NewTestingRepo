#include <iostream>
#include <stdbool.h>
#include <string>
#include <stack>
using namespace std;
bool is_sorted(int array[],int i){
    if (i == 1){
        return true;
    }
    else {
        if (array[i-1] > array[i-2]){
        i--;
        is_sorted(array,i);
        }
        else {
            return false;
        }
    }
}
int main()
{
    int n;
    cout << "Enter n " << endl;
    cin >> n;
    int *arr = new int();
    for (int i=0;i<n;i++){
    cout << "Enter array element " << endl;
    cin >> arr[i];
    }
    if (is_sorted(arr,n)){
        cout << "Strictly Increasing " << endl;
    }
    else if (!is_sorted(arr,n)){
        cout << "No";
    }
    delete arr;
    return 0;
}