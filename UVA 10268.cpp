//UVA10268 - 498 bits

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    string x;

    while(cin>>a){
        cin.get();
        getline(cin,x);

        vector<int> st;
        st.clear();
        stringstream ss;
        ss.clear();
        ss<<x;
        int t;

        while(ss>>t){
            st.push_back(t);
        }

        int sum=0;
        int ct=st.size()-1;

        for(int i=0;i<st.size()-1;i++){
            sum+=st[i]*ct*pow(a,ct-1);
            ct--;
        }
        cout<<sum<<endl;
    }


    return 0;
}