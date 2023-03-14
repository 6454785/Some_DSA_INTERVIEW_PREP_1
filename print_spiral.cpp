# include<bits/stdc++.h>
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int count=0;
        int row= matrix.size();
        int col=matrix[0].size();

        int total=row*col;

        //initialization
        int startingRow=0;
        int startingCol=0;
        int endingCol=row-1;
        int endingRow=col-1;

     // now writing all the conditions 

     while(count<total){
       
         
         // loop for the starting row
         for(int index=startingCol; count<total && index<=endingCol;index++){
             ans.push_back(matrix[startingRow][index]);
           
             count++;
         }
           startingRow++;

    // loop for the ending  column 

        for(int index=startingRow;  count<total && index<=endingRow;index++){
            ans.push_back(matrix[index][endingCol]);
            
            count++;
        }
        endingCol--;

    // loop for the ending row 

       for(int index= endingCol;  count<total &&  index>=startingCol;index--){
           ans.push_back(matrix[endingRow][index]);
           
           count++;
       }
       endingRow--;

    // loop for the starting column 
      
       for (int index= endingRow; count<total && index>=startingRow;index--){
           ans.push_back(matrix[startingCol][index]);
          
           count++;
       }
        startingCol++;
       }

       return ans;


    }
};