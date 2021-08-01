#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 scanf("%d",&t);
 for(int i=0;i<t;i++){
     int arr[26];
     for(int j=0;j<26;j++){
       arr[j] = 0;
     }
     int n;
     scanf("%d",&n);
     char str[n];
     scanf("%s",str);
     for(int j=0;j<n;j++){
         int ind = char[j] - 'a';
         arr[ind] = 1;
     }
     int sol = 0;
     for(int j=0;j<26;j++){
         if(arr[j] == 0){
             printf("%c\n",'a'+j);
             sol = 1;
             break;
         }
     }
     if(sol == 0){
         
     }
 }   
}