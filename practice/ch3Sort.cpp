#include <bits/stdc++.h>

template <class T> void bubble_sort(std::vector<T>& v){
    typename std::vector<T>::iterator i;
    typename std::vector<T>::iterator j;

    /*
     * if you want to get index();
     * auto in = 0;
     * auto jn = 0;
    */

    for(i = v.begin(); i != v.end(); ++i){
        for(j = v.begin(); j != v.end(); ++j){
            //in = std::distance(l.begin(), i);
            //jn = std::distance(l.begin(), j);
            if(*i < *j){
                auto temp = *j;
                *j = *i;
                *i = temp;
            }
        }
    }
}

template <class T> void merge_sort(typename std::vector<T>::iterator start, typename std::vector<T>::iterator end){
    typename std::vector<T>::iterator i;
    typename std::vector<T>::iterator j;

    i = start;
    //can't check if iterator is last element..
    //if(end == v.end())
    j = end--;

    auto in = std::distance(start, end) - std::distance(start, end);
    auto jn = std::distance(start, end) - 1;
 
    if(*i != *j){
        auto mid = (in + jn)/2;
        merge_sort(start, start+mid);
        merge_sort(start+mid+1, end);
    }
}

template <class T> void print(std::vector<T>& v){
    typename std::vector<T>::iterator i;
    for(i = v.begin(); i != v.end(); ++i){
        std::cout << (*i) << std::endl;
    }
}


int main(){

    std::vector<int> vec = {1, 5, 2, 7, 19, -3, 3, 3, 3, 5, 99, 0};

    //bubble_sort(vec);
    merge_sort(vec.begin(), vec.end());

    print(vec);

    return 0;
}
