#include<iostream>
#include<vector>

using namespace std;
int main()
{
    // way-1
    vector<int> way_one;
    for(int i = 0; i<5; i++)
        way_one.push_back(i);

    //Direct initialisation
    vector<int> way_two {1,2,3,4};

    //vector of size 5 with initial value 0
    vector<int> way_three(5, 0);
    for(auto it = way_three.begin(); it!=way_three.end(); it++)
        cout<<" "<<*it<<" ";

    //initialise one vector with another
    vector<int> way_four(way_three.begin(), way_three.end());


    //initialise with another array
    int arr[5] = {1,2,3,4,5};
    vector<int> way_five(arr, arr+5);

    


}