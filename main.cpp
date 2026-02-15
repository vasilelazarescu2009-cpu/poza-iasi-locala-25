#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream in("poza.in");
    ofstream out("poza.out");

    int C, n;
    in >> C >> n;
    int A[3][n];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            in >> A[i][j];
        }
    }
    if(C == 1){
        int Min = INT_MAX, Max = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                if(A[i][j] > Max)
                    Max = A[i][j];
                if(A[i][j] < Min)
                    Min = A[i][j];
            }
        }
        out << Max << " " << Min;
        return 0;

    }
    if(C == 2){
        int B[3][n];
        int Min = INT_MAX, prevMin = -1;
        int Count = 0;
        int row = 0;
        bool order;
        do{
        order = true;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){

                if(prevMin < A[i][j] && A[i][j] < Min){
                    Min = A[i][j];
                    B[row][Count]=Min;
                    Count++;
                    if(Count >= n){
                        Count = 0;
                        row++;
                    }
                    prevMin = Min;
                    Min = INT_MAX;
                }

                }
        }
            for(int k = 0; k < 3; k++){
                    for(int l = 0; l < n; l++){
                        if(B[k][l] > B[k+1][l+1])
                            order = false;
                    }
                }

        }while(order == false);

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                out << B[i][j] << " ";
            }
            out << endl;
        }
    }


    return 0;
}
