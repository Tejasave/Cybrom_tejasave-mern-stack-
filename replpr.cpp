#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 0, 6, 7, 4};
    
    
       
    for(int i = 0; i <5; i++)
	 {
      if(arr[i]==0)
	  {
      	arr[i]=-1;

	  }	
    
    }
    for(int i = 0; i <5; i++)
	 {
    cout<<arr[i]<<"\n";
    }
    return 0;
}