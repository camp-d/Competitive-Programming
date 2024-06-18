#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int n, b;

    std::cin >> n >> b;

    std::vector<std::pair<int,int>> points(n);
    std::vector<std::pair<int, int>> dxdy = { {1,1}, {-1,1}, {-1,-1}, {1,-1} };

    int c, d;
    for(auto &x: points){
        std::cin >> c >> d;
        x = std::make_pair(c, d);
    }

    int min = n, q1, q2, q3, q4;

    for(auto it1 = points.begin(); it1 != points.end(); it1++){
        q1 = 0, q2 = 0, q3 = 0, q4 = 0;

        int hsplit = (*it1).first;
        int vsplit = (*it1).second;

        for( auto x : dxdy){
            int horz_split = hsplit + x.first;
            int vert_split = vsplit + x.second;
            q1 = 0; q2 = 0; q3 = 0; q4 = 0;

            if(x.first == 1 && x.second == 1)
                q1++;
            else if(x.first == -1 && x.second == 1)
                q2++;
            else if(x.first == -1 && x.second == -1)
                q3++;
            else
                q4++;

            for(auto it2 = points.begin(); it2 != points.end(); it2++){
                if(it1 == it2)
                    continue;

                int x = (*it2).first;
                int y = (*it2).second;

                if(x > horz_split && y > vert_split)
                    q1++;
                else if( x < horz_split && y > vert_split)
                    q2++;
                else if( x < horz_split && y < vert_split)
                    q3++;
                else
                    q4++;
                
            }
            min = std::min(min, std::max(q1, std::max(q2, std::max(q3, q4))));
        }
    }
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
