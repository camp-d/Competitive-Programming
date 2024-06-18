#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n, b;

    std::cin >> n >> b;

    std::vector<std::pair<int,int>> points(n);

    int c, d;
    for(auto &x: points){
        std::cin >> c >> d;
        x = std::make_pair(c, d);
    }

    int min = n, q1, q2, q3, q4;


    for(int i = 1; i <= b; i++){
        for(int j = 1; j <= b; j++){
            q1 = 0;
            q2 = 0;
            q3 = 0;
            q4 = 0;
            for(auto x : points){
                if( x.first > i && x.second > j)
                    q1++;
                else if (x.first < i && x.second > j)
                    q2++;
                else if( x.first < i && x.second < j)
                    q3++;
                else if( x.first > i && x.second > j)
                    q4++;

            }
            min = std::min(min, std::max({q1,q2,q3,q4})); 
        }
    }


    std::cout << q1 << " " << q2 << " " << q3 << " " << q4 << std::endl;

    std::cout << min << '\n';
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen("balancing.in","r",stdin);
std::freopen("balancing.out","w",stdout);

solve();

return 0;
}
