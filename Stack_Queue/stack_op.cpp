#include<bits/stdc++.h>
using namespace std;
void deleteStack(stack<int> &st,int size,int cnt){
    if(st.empty())
        return;
    
    int ele = st.top();
    st.pop();
    if(cnt==size/2){   
        return;
    }
    deleteStack(st,size,cnt+1);
    cout<<ele<<endl;
    st.push(ele);
}
void deleteStack(stack<int> &st, int n){
    if(st.empty())
        return;
    
    int ele = st.top();
    st.pop();
    if(ele==n){   
        return;
    }
    deleteStack(st,n);
    cout<<ele<<endl;
    st.push(ele);
}
void sortedInsert(stack<int> &st,int ele){
    if(st.empty())
        {
            st.push(ele);
            return;
        }

    if(st.top()<=ele){
        st.push(ele);
        return;
    }
    int elem = st.top();
    st.pop();
    sortedInsert(st,ele);
    cout<<elem<<endl;
    st.push(elem);
}
void sortStack(stack<int> &st){
    if(st.empty())
        return;
    int ele= st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st,ele);
}

void runner(){
    int ele;
    int n;
    stack<int> st;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the stack data"<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        st.push(ele);
    }
    deleteStack(st,n,0);
    for(int i =0;i<n-1;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void runner1(){
    int n;
    int ele;
    stack<int> st;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the stack data"<<endl;

    for(int i=0;i<n;i++){
        cin>>ele;
        st.push(ele);
    
    }
    cout<<"enter the element"<<endl;
    cin>>ele;
    deleteStack(st,ele);
    for(int i =0;i<n-1;i++){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void runner2(){
    int n;
    int ele;
    stack<int> st;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the stack data"<<endl;

    for(int i=0;i<n;i++){
        cin>>ele;
        st.push(ele);

    }
    cout<<"enter the element"<<endl;
    cin>>ele;
    sortedInsert(st,ele);
    cout<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
void runner3(){
    int n,ele;
    stack<int> st;
    cout<<"enter the size"<<endl;
    cin>>n;
    cout<<"enter the stack data"<<endl;
    for(int i=0;i<n;i++){
        cin>>ele;
        st.push(ele);
    }
    sortStack(st);
    cout<<st.size()<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    runner3();
    return 0;
}