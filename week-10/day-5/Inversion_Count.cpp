/*
 * author: saifabrar
 * created: 2024-05-29 12:07:13
 * problem link: 
 */

#include<bits/stdc++.h>
using namespace std;

long long merge(int a[],int l,int m,int r){
    long long inv=0;
    int leftSize=m-l+1;
    int rightSize=r-m;
    int L[leftSize],R[rightSize];
    int k=0;
    for(int i=l;i<=m;i++){
        L[k]=a[i];
        k++;
    }
    k=0;
    for(int i=m+1;i<=r;i++){
        R[k]=a[i];
        k++;
    }
    int i=0,j=0,curr=l;
    while(i<leftSize&& j<rightSize){
        if(L[i]<=R[j]){
            a[curr]=L[i];
            i++;
        }else{
            a[curr]=R[j];
            inv+=(leftSize-i);
            j++;
        }
        curr++;
    }
    while(i<leftSize){
        a[curr]=L[i];
        i++;
        curr++;
    }
    while(i<leftSize){
        a[curr]=R[i];
        i++;
        curr++;
    }
    return inv;
}

long long merge_sort(int a[],int l,int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=merge_sort(a,l,mid);
        inv+=merge_sort(a,mid+1,r);
        inv+=merge(a,l,mid,r);
    }
    return inv;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long cnt=merge_sort(a,0,n-1);
        cout<<cnt<<'\n';
    }
    return 0;
}