#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::map<string, string> phoneBook;
    int n;
    cin >> n;
    
    //Read names an number, add to phoneBook:
    for(int i = 0; i < n; i++){
        string name;
        string phone;
        cin >> name;
        cin >> phone;
        phoneBook[name]= phone;
    }
    // Execute queries:
    std::map<string,string>::iterator it;
    string query;
    while( cin >> query ){
        it = phoneBook.find(query);
        
        if ( it != phoneBook.end() ){ // key is found in phoneBook
        cout << it->first << "=" << it->second << '\n';
        }
        else{ //the iterator hit the end of the phone book without finding key
            cout << "Not found" << '\n';
        }
    }
    return 0;
}