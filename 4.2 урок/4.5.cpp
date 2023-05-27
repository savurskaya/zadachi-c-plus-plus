//сам раб 4 баз (4.5)


#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int x = 1;
    int mid = 3/2; 
    
    for(int i=0;i<=mid;i++) {
        for(int j=i;j<3-i;j++) {
            arr[i][j]=x++; 
        } 
        for(int j=i+1;j<3-i;j++) {
            arr[j][3-i-1]=x++; 
        } 
        for(int j=3-i-2;j>=i;j--) {
            arr[3-i-1][j]=x++; 
        } 
        for(int j=3-i-2;j>i;j--) {
            arr[j][i]=x++;  
        } 
    }

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}

