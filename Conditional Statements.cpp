#include <bits/stdc++.h>
#include <map>
#include<string>  //inserd to use arrray of Strings.
using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    string words[10] = {"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    if(n>0 && n <= 9){
        cout<<words[n];
        
    }else{
        cout<<words[0];
    }
    
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
