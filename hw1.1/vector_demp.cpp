#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v = { 1, 2, 3};
    for(auto i : v)
    std::cout << i << ' ';
}