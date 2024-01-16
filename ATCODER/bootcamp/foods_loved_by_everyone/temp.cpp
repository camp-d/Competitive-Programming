#include<bits/stdc++.h>

typedef long long ll;

void solve(){


    unsigned n;
    unsigned m;

    std::cin >> n >> m;

    std::vector<std::vector<int>> mat(n);

    std::unordered_map<int, int> map;


    int writes;
    int insert;
    int count = 0;

    for(unsigned i {0}; i < n; i++){
        std::cin >> writes;
        while(writes--){
            std::cin >> insert;
            mat[i].push_back(insert);
        }
    }

    for(unsigned i{0}; i < mat[0].size(); i++){
        map.insert(std::make_pair(mat[0][i], 1));
    }

    for(unsigned i {1}; i < mat.size(); i++){
        for(unsigned j {0}; j < mat[i].size(); j++){
            if( map.contains(mat[i][j]) )
                map.at(mat[i][j])++;
        }
    }


    for(auto x : map){
        if(x.second >= (int)n){
            count++;
        }
    }

    std::cout << count << '\n';
        

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
