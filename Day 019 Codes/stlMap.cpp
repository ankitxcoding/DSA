#include<iostream>
#include<map>
using namespace std;

int main() {

    map<int, int> map;

    map.insert({1, 10});
    map.insert({2, 20});
    map.insert({3, 30});
    map.insert({4, 40});
    map.insert({5, 50});

    //Also we can insert the element like this.

    // map[1]=10;
    // map[2]=20;
    // map[3]=30;
    // map[4]=40;
    // map[5]=50;

    cout<<"The size of map: "<<map.size()<<endl;

    cout<<"Map is empty or not: "<<map.empty()<<endl;

    cout<<"Map: "<<endl;
    cout<<"Key\tElement"<<endl;
    for(auto &k : map)
        cout<<k.first<<"\t"<<k.second<<"\t"<<endl;

    cout<<"Element 5 is present or not: "<<map.count(5);

    cout<<"\nElement -5 is present or not: "<<map.count(-5);

    map.erase(3);

    cout<<"\nAfter erase: "<<endl;
    cout<<"Key\tElement"<<endl;

    for(auto &k : map)
        cout<<k.first<<"\t"<<k.second<<"\t"<<endl;

    // auto it=map.find(3);

    // cout<<"\nIterator is: "<<*it;

    return 0;

}

// Output-

// The size of map: 5
// Map is empty or not: 0
// Map: 
// Key     Element
// 1       10
// 2       20
// 3       30
// 4       40
// 5       50
// Element 5 is present or not: 1
// Element -5 is present or not: 0
// After erase: 
// Key     Element
// 1       10
// 2       20
// 4       40
// 5       50