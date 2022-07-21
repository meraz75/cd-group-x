#include <iostream>
#include <string>

using namespace std;

void validexp(string ex){
    string str = "";
    string s1="",s2="";
    int esz=ex.size();
    bool f=1;
    if(ex[1]=='U' and ex[2]!='*' and ex[2]!='+' and ex[2]!='U'){
        cout<<"Enter a string to verify [$ for empty string]: ";
        cin>>str;
        s1+=ex[0];
        s2+=ex[2];
        if(str==s1 or str==s2)cout<<"status: valid"<<endl;
        else cout<<"status: invalid"<<endl;
    }




}


int main() {
    string input = "";
    cout << "\nTakes in at most 3 elements and is made with U, * and +.\nIt will take one string as input and check if it's"
            "valid or invalid for the regular expression\n" <<endl;
    cout<<"Input regular expression : ";
    cin >> input;
    validexp(input);
    return 0;
}
