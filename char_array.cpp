//   so starting our question of valid palindrome in which there are three conditions to be satisfied 

//          conditions :--
//     1. Write all the small case characters and alpha numerics.
//     2. Remove all the characters which are not alpha -numeric.
//     3. Now write the String in reverse order with the required set of valid characters only .


#include<bits/stdc++.h>
using namespace std;

    bool valid(char ch){
        if((ch>='A' && ch<='Z')  || (ch>='a' && ch<='z') ||(ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
    }

    char toLowerCase(char ch){
        if( (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        else{
        int temp= ch-'A'+'a';
        return temp;
    }
    }
    
    bool  checkPlaindrome(string a) {
        int s=0;
        int e=a.length()-1;
        while(s<=e){
        if(a[s]!=a[e]){
           return 0;  // mtlb hamari string palindrome nhi he 
        }
        else{
        s++;
        e--;

        }
        }
        return 1;   //metl hum shi he --hamari string palindrone he 
    }

    
    bool isPalindrome(string s){
               string temp = "/0";
               for(int j=0;j<=s.length();j++){
                if(valid(s[j]))
                temp.push_back(s[j]);
               }
        
        for(int j=0; j<=temp.length()-1;j++){
            temp[j]=toLowerCase(temp[j]);
        }

        return checkPlaindrome(temp);

    }






