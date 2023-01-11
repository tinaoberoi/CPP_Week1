#include<vector>
#include<iostream>
using namespace std;

void printVec(vector<auto> v) {
    for (int j = 0; j <(int)v.size(); j++)
        cout << v[j] << ", ";
}

auto square(auto x) { return x * x; }

int main()
{
    vector v = { 1, 2 }; // Init a vector of ints
    v.push_back(4); // Add an element on to the end

    printVec(v);
    return 0;
}
