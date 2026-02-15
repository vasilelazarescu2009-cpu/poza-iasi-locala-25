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
    vector<int> r1(n);
    vector<int> r2(n);
    vector<int> r3(n);
    for(int &i : r1)
        in >> i;
    for(int &i : r2)
        in >> i;
    for(int &i : r3)
        in >> i;
    if(C == 1){
        int Max = 0, Min = INT_MAX;
        //cout << Min;
        for(int i : r1){
            if(i > Max)
                Max = i;
            if(i < Min)
                Min = i;
        }
        for(int i : r2){
            if(i > Max)
                Max = i;
            if(i < Min)
                Min = i;
        }
        for(int i : r3){
            if(i > Max)
                Max = i;
            if(i < Min)
                Min = i;
        }
        out << Max << " " << Min;

    }

    return 0;
}
