#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>\


using namespace std;
ofstream out("poza.out");
ifstream in("poza.in");
//adaugari erhan

void afisare(int n, int x[])
{
    int i, j = 0, a = n/3;
    for(i=n/3*2;i<n;i++)
        out<<x[i]<<" ";
    out << endl;
    for(i=n/3;i<n/3*2;i++)
        out<<x[i]<<" ";

    out << endl;
    for(i=0;i<n/3;i++)
        out<<x[i]<<" ";

}
//adaugari autor
int main()
{
    /*int n=6,x[]={1,2,100,3,4,5};
    sortare(n,x);
    afisare(n,x);*/



    int C, n;
    in >> C >> n;
    vector<int> A(n*3);
    int a = n * 3;
    for(int &i : A)
        in >> i;
    if(C==1){
        int Min = INT_MAX, Max = 0;
        for(int i : A){
            if(i < Min)
                Min = i;
            if(i > Max)
                Max = i;
        }
        out << Min << " " << Max;
        return 0;
    }
    if(C==2){
        sort(A.begin(), A.end(), greater<int>());
        afisare(a, A.data());
    }




    return 0;
}
