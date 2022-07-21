#include <iostream>
#include <string>

using namespace std;




void validexp(string ex){
    //from here was made by Kamruzzaman Uzzal
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
    //Until here
    //From here is Meraz's part
//star
else if(ex[1]=='*'){
        if(esz==2){
            cout<<"Enter a string to verify [$ for empty string]: ";
            cin>>str;
            int sz=str.size();
            if(str[0]=='$')cout<<"status: valid"<<endl;
            else{
                for(int i=0;i<sz;i++){
                    if(str[i]!=ex[0]){
                        f=0;
                        break;
                    }
                }
                if(f)cout<<"status: valid"<<endl;
                else cout<<"status: invalid"<<endl;
            }
        }
        else if(esz>2 and ex[2]!='U' and ex[2]!='+' and ex[2]!='*'){
            cout<<"Enter a string to verify [$ for empty string]: ";
            cin>>str;
            int sz=str.size();
            sz--;
            if(sz==0 and str[0]==ex[2])cout<<"status: valid"<<endl;
            else{
                if(str[sz]!=ex[2])f=0;
                if(f){
                    for(int i=0;i<sz;i++){
                        if(str[i]!=ex[0]){
                            f=0;
                            break;
                        }
                    }
                }
                if(f)cout<<"status: valid"<<endl;
                else cout<<"status: invalid"<<endl;
            }
        }
        else cout<<"status: invalid expression"<<endl;
    }
    //Unti here

    //From here is Tuba's part

    //Until here

    //From here is Shafin er part
    //plus
    else if(esz==3 and ex[2]=='+' and ex[1]!='*' and ex[1]!='U' and ex[1]!='+'){
        cout<<"Enter a string to verify [$ for empty string]: ";
        cin>>str;
        int sz=str.size();

        if(ex[0]!=str[0] or sz==1)f=0;
        if(f){
            for(int i=1;i<sz;i++){
                if(str[i]!=ex[1]){
                    f=0;
                    break;
                }
            }
        }
        if(f)cout<<"status: valid"<<endl;
        else cout<<"status: invalid"<<endl;
    }
    else if(ex[0]=='U' or ex[0]=='*' or ex[0]=='+')cout<<"status: invalid expression"<<endl;
    else cout<<"status: invalid expression"<<endl;
    //Until here
}

//main function created by Kamruzzaman Uzzal
int main() {
    string input = "";
    cout << "\nTakes in at most 3 elements and is made with U, * and +.\nIt will take one string as input and check if it's"
            "valid or invalid for the regular expression\n" <<endl;
    cout<<"Input regular expression : ";
    cin >> input;
    validexp(input);
    return 0;
}
