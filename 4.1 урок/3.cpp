// сам раб 4 прод 3

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    
    int matrix[rows][cols];

   
     for(int i = 0; i < rows; ++i)
        for(int j = 0; j < cols; ++j)
        {
            cout << "Enter element (" << i + 1<< "," << j + 1<< ") : ";
            cin >> matrix[i][j];
        }

  
   cout<<"\nOriginal Matrix:\n";
      for (int i=0;i<rows;++i){
         for (int j=0;j<cols;++j){
             cout<<matrix[i][j]<<" ";  
         }
       cout<<"\n";
      }

 
   int transpose[cols][rows];
   
      for (int i=0;i<cols;++i){    
        for (int j=0;j<rows;++j){    
          transpose[i][j]=matrix[j][i];    
        }        
     }    

     
   cout<<"\nThe transposed Matrix is:\n";      
    for(int k = 0;k < cols;k++){       
       for(int l = 0;l < rows;l++){           
          cout<<transpose[k] [l]<<" ";       
        }          
      cout<<"\n";     
    } 

return(1);
}