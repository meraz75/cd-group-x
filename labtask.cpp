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
