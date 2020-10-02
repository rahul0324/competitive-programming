#include <bits/stdc++.h> 
using namespace std; 
 
void print_distance(int arr[], int n) 
{ 
    int ans[n]; 
    memset(arr, 0, sizeof(arr)); 
 
    if (arr[0] == 0) 
        ans[0] = 0; 
    else
        ans[0] = INT_MAX;   

    for (int i = 1; i < n; ++i) { 
          ans[i] = ans[i - 1] + 1; 

        if (arr[i] == 0)  
            ans[i] = 0;         
    } 
 
    if (arr[n - 1] == 0) 
        ans[n - 1] = 0; 

    for (int i = n - 2; i >= 0; --i) { 
 
        ans[i] = min(ans[i], ans[i + 1] + 1); 
 
        if (arr[i] == 0)  
            ans[i] = 0; 
    } 

    for (int i = 0; i < n; ++i)  
        cout << ans[i] << " ";     
} 

int main() 
{ 
    int a[] = { 2, 1, 0, 3, 0, 0, 3, 2, 4 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    printDistances(a, n); 
    return 0; 
} 
