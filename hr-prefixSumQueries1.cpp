#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, Qrow;
    cin >> n >> Qrow;
    // 1st Line contains N and Q separated by space
    int Q[Qrow][2];
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        // 2nd Lind contains arr[N] separated by space
    }
    
    for(int i=0; i<Qrow; i++){
        cin >> Q[i][0] >> Q[i][1];
        // Next Q lines contains queries, each line contians l and r separated by space
    }
    
    long sum = 0;
    long pfSum[n];
    
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
        pfSum[i] = sum;
    }
    
    for(int i=0; i<Qrow; i++){
        int s = Q[i][0];
        int e = Q[i][1];
        
        if(s==0){
            cout << pfSum[e] << endl;
        }
        else{
            cout << pfSum[e]-pfSum[s-1] << endl;
        }
    }
    
    return 0;
}
