#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    std::string a, b, result = "EQUAL";

    std::cin >> a >> b;

    if(a.length() > b.length()){
        result = "GREATER";
    }
    else if(a.length() < b.length()){
        result = "LESS";
    }
    else{
        for(unsigned i = 0; i < a.length(); i++){
            if(a[i] > b[i]){
                result = "GREATER";
                break;
            }
            else if(b[i] > a[i]){
                result = "LESS";
                break;
            }
        }
    }

    std::cout << result << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
