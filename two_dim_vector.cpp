#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> v(10, vector<int>(5, 0));
    for(auto it : v)
    {
        for(auto itr: it)
        cout<<itr<<" ";
        cout<<endl;
    }
}