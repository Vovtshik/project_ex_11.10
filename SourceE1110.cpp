#include "../std_lib_facilities.h"

vector<string>split(const string& s);

int main()
{
    string str("Two little birds\nSitting on a wall,\nOne called Peter,\nOne called Paul.\nFly away Peter,\nFly away Paul,\nCome back Peter,\nCome back Paul.\n");
    cout << "\n\n" << str << '\n';
    vector<string>vstr(split(str));
    for(string s: vstr)
    { 
        cout << s << '\n';
    }
    return 0;
}

vector<string>split(const string& s)
{
    vector<string>vs;
    stringstream ss(s);
    for(string tmp; ss >> tmp;)
    {
        vs.push_back(tmp);
    }
    return vs;
}