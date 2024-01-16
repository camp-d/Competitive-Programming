#include<bits/stdc++.h>

typedef long long ll;

void solve(){
    int a, b;

    std::cin >> a >> b;

    if(a > 0 && b > 0){
        std::cout << "Positive\n";
    }
    else if((a <= 0 && b >= 0) || ( a == 0 || b == 0)){
        std::cout << "Zero\n";
    }
    else if((b-a+1)%2 == 1){
        std::cout << "Negative\n";
    }
    else{
        std::cout << "Positive\n";
    }

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
