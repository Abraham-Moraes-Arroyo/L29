#include <iostream>
#include <iterator>
#include <string>
#include <set>
#include <map>
using namespace std;
int main(){
    // maps are like python dictionaries
    // sets are balanced binary tree
    set<int> s1;
    set<string> s2;
    s1.insert(2);
    s1.insert(0);
    s1.insert(2);
    s1.insert(1);

    s2.insert("two");
    s2.insert("zero");
    s2.insert("two");
    s2.insert("one");

    // for(auto x= s1.begin(); x != s1.end(); ++x)
    //     cout << " "<<*x;
    // cout << endl;
    // for(auto x= s2.begin(); x != s2.end(); ++x)
    //     cout << " "<<*x;
    // cout << endl;


    // cout << s1.size()<< endl;

    set<int>:: iterator y;
    y= s1.find(1);
    if (y != s1.end())
        cout << "1 is found"<< endl;
    else    
        cout<< "1 is not found"<< endl;
    

    s2.erase("one");
    for (auto x = s2.begin(); x != s2.end(); ++x)
        cout << " "<< *x;
    cout <<endl;

    return 0;

}

/*
final exam schedule 
look up on google final exam schedule
look up the final exam schedule for 
MCS 360 
*/