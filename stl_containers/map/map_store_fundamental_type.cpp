//map means ordered map
#include<map>
#include<iostream>

using namespace std;
int main()
{
    map<string, int> mp;

    //Different ways of inserting key, value in map
    mp["hello"] = 5;
    mp.insert(pair<string, int>{"world", 5});
    mp.insert(make_pair<string, int>("nadeem", 6));

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" = "<<it->second<<endl;
    }

}

// Output-Keys are sorted lexicographically
/*
hello = 5
nadeem = 6
world = 5
*/
