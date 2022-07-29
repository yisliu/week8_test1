#include <iostream>
using namespace std;

int main() {
  int n; 
  int b;
  int cnt;
  cin>>n;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  cin>>b;
  for(int i = 0; i<n; i++){
    if(b<arr[i]){
      cnt+=1;
    }
  }
  cout<<cnt;
}