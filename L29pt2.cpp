#include <iostream>
#include <iterator>
#include <string>
#include <set>
#include <map>
using namespace std;

int main(){
    map<string, int> D;
    D.insert(make_pair("two", 2));
    D.insert(make_pair("zero", 0));
    
    D["three"] = 3;// shorter way
    D["one"]= 1;

    // for( auto x= D.begin(); x != D.end(); x++){
    //     cout << " "<< x -> first<< endl;
    //     cout << " "<< x-> second<< endl;
    //     cout << "--------------"<< endl;
    // }
    // getting the value associated with the key
    // cout << D["three"]<< endl; 
    

    //erasing 
    D.erase("zero");
    if (D. find("zero") != D.end())
        cout << "zero found" << endl;
    else   
        cout << "zero not found"<< endl;
        
    return 0;
}