#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
    int s=0,e=n-1,ans=-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]==key){
            ans= mid;
            e=mid-1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    
    }
    return -1;
}
int last(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    while(s<e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    
    }
    return -1;
}
int main(){
    int n,arr[50],i,key ;
    cout<<"enter the size of array you want=";
    cin>>n;
    cout<<"enter the element you want=";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key you wants to search=";
    cin>>key;
    
    int starting=first(arr,n,key);
     int end=last(arr,n,key);
    cout<<"you search the element "<<key<<" and it is found in the index"<<starting<< " from the starting and "<<end<<"from  the last "<<endl;

    return 0;
}