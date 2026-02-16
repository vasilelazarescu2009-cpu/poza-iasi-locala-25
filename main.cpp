#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
ofstream out("poza.out");
ifstream in("poza.in");
//adaugari erhan
void sortare(int n, int x[])
{
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(x[i]<x[j])
                swap(x[i],x[j]);

}

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

    ifstream in("poza.in");
    ofstream out("poza.out");

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
        sortare(a, A.data());
        afisare(a, A.data());
    }




    return 0;
}
