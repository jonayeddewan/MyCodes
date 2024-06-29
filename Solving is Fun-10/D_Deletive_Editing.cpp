#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string st, wd, fin;
    map<char, int> s, t;

    cin >> n;

    while(n--){
        cin >> st >> wd;

        for(int i = 0; i < st.size(); i++) s[st[i]] += 1;
        for(int j = 0; j < wd.size(); j++) t[wd[j]] += 1;

        bool flag = true;
        for(int i = 0; i < st.size(); i++){
            if(s[st[i]] > t[st[i]]){
                s[st[i]]--;
            }

            else if(s[st[i]] == t[st[i]] && s[st[i]] != 0){
                fin.push_back(st[i]);
                s[st[i]]--;
                t[st[i]]--;
            }

            else{
                flag = false;
                break;
            }
        }

        if(flag){

            if(fin == wd) cout << "YES\n";
            else cout << "NO\n";
        }

        else{
            cout << "NO\n";
        }

        fin.clear();
        s.clear();
        t.clear();
    }

    return 0;
}
