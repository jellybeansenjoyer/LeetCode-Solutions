#include<bits/stdc++.h>
using namespace std;
int top1;
int top2;
void push1(int ele,int arr[]){
    if(top2-top1>1){
        arr[++top1] = ele;
    }else{
        cout<<"stack overflow"<<endl;
    }
}
void push2(int ele,int arr[]){
    if(top2-top1>1){
        arr[--top2] = ele;
    }else{
        cout<<"stack overflow"<<endl;
    }
}
int pop1(int arr[],int n){
    if(top1>=0){
        return arr[top1--];
    }else 
        return -999;    
}
int pop2(int arr[],int n){
    if(top2<n){
        return arr[top2++];
    }
    else 
        return -999;
}
void display(int arr[],int n){
    for(int i =0;i<=n;i++){
        if(arr[i]==-999)
            cout<<" _ ";
        else
            cout<<" "<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        arr[i]=-999;
    }
    top1 = -1;
    int ch,m,ele;
    top2 = n+1;
    while(1){
        cin>>ch;
        switch(ch){
            case 1:
                    cin>>ele;
                    push1(ele,arr);
                    display(arr,n);
                    break;
            case 2: 
                    cin>>ele;
                    push2(ele,arr);
                    display(arr,n);
                    break;
            case 3: m = pop1(arr,n);
                    if(m==-999){
                        cout<<"Stack underflow"<<endl;
                    }else{
                        cout<<"popped element: "<<m<<endl;
                    }
                    display(arr,n);
                    break;
            case 4: m = pop2(arr,n);
                    if(m==-999){
                        cout<<"Stack underflow"<<endl;
                    }else{
                        cout<<"popped element: "<<m<<endl;
                    }
                    display(arr,n);
                    break;
            case 5: exit(1);
            default:cout<<"Invalid option"<<endl;
        }   
    }
}
