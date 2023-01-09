#include<iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> arr(8);
    arr[0] = {1};
    arr[1] = {1, 1};
    for(int i = 2; i<8; i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j = 1; j<arr[i-1].size(); j++){
            temp.push_back(arr[i-1][j-1] + arr[i-1][j]);
        }
        temp.push_back(1);
        arr[i] = temp;
    }
    for(int i = 0; i<8; i++){
        int count = 9-i;
        while(count > 0){
            cout<<"  ";
            count--;
        }
        for(int j = 0; j< arr[i].size(); j++){
            if(arr[i][j] < 10)
                cout<<" "<<arr[i][j]<<"  ";
            else
                cout<<arr[i][j]<<"  ";
        count = i;
        }
        cout<<"\n";
    }
    return 0;
}