//  ARRAYS PART 2:
// 3. Check if the given array is sorted or not
# include <iostream>
# include <vector>
using namespace std;
int main(){
int n;
cout<<"ENTER THE NO OF ELEMENTS IN AN ARRAY  ";
cin>>n;
vector <int> arr;
cout<<"ENTER THE ELEMENTS IN ARRAY  ";
for(int i=0;i<n;i++){
    int num;
    cin>>num;
    arr.push_back(num);
}
int i=0;
int flag=0;
while(i<n-1){
    if(arr[i]<arr[i+1]){
        i++;
    }
    else{
        cout<<"NOT A SORTED ARRAY";
        flag=1;
        break;
    }
}
 if(flag==0){
    cout<<"SORTED ARRAY";
    }
 
}