#include<iostream>
#include<map>

using namespace std;

class society
{
    public:
    string name;
    society(string locname)
    {
        name = locname;
    }
};

class societyclass
{
    public:
    string name;
    societyclass(string anothername)
    {
        name = anothername;
    }
};

// You can either define this
struct test{
    bool operator()(society a, society b) const
    {
        return (a.name.length()>b.name.length())?true:false;
    }
};

// Or this to do comparison for user defined type
bool operator<(society a, society b)
{
    return (a.name.length()>b.name.length())?true:false;
}

int main()
{

    map<society, societyclass, test> mp;
    society s1("deccanpalms");
    societyclass as1("classA");
    society s11("nilayam");
    societyclass as11("scst");
    society s111("rishiwoods");
    societyclass as111("brahimin");
    mp.insert(pair<society, societyclass>{s1, as1});
    mp.insert(pair<society, societyclass>{s11, as11});
    mp.insert(pair<society, societyclass>{s111, as111});
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first.name<<" "<<it->second.name<<endl;
    }

    map<society, societyclass> mmp;
    society ss1("deccanpalms");
    societyclass ass1("classA");
    society ss11("nilayam");
    societyclass ass11("scst");
    society ss111("rishiwoods");
    societyclass ass111("brahimin");

    mmp.insert(pair<society, societyclass>{ss1, ass1});
    mmp.insert(pair<society, societyclass>{ss11, ass11});
    mmp.insert(pair<society, societyclass>{ss111, ass111});
    for(auto it = mmp.begin(); it!=mmp.end(); it++)
    {
        cout<<it->first.name<<" "<<it->second.name<<endl;
    }
}
