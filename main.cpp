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
        int Min = INT_MAX;
        int count = 0;
        int row = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++)
                if(A[i][j] < Min)
                    Min = A[i][j];

        }
    }

    return 0;
}
