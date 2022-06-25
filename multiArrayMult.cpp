#include <iostream>
using namespace std;

// we are going to write a program for the multiplication of two matrices
 int main()
 {
    //  making the two dimensional arrays of each matrix
     int A[2][2]{
         {2,3},
         {3,4}
     };
    int B[2][2]{
         {5,8},
         {2,7}
    };
    int C[2][2]{
        {0,0},
        {0,0}
    };

    
    int M,N;
    M=1; //row index i.e here is two rows so 0 to 1
    N=1; //column index i.e here is two columns so 0 to 1
     int P=1;  // (M or N)
     
    //  outer loop

    for(int i=0; i<=M; i++)
    {
        // inner loop
        for(int j=0; j<=N; j++)
        {   
            C[i][j]=0;   //remove the garbage value
            for(int k=0; k<=P; k++)  //P or 1 , that k repeats 2 time
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
                
            }
          cout<<"c["<<i<<"]["<<j<<"]= ";  // output look

            cout<<C[i][j]<<endl; //print each element of matrix "C"
        }
        
    }



     
 }