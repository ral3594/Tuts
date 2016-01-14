//
//  main.cpp
//  Tutor
//
//  Created by Becca Lesser on 1/13/16.
//  Copyright © 2016 Becca Lesser. All rights reserved.
//

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

struct words{
    string val;
    int prev;
};

int main() {
    vector<int> vec;
    vec.reserve(20);
    vector<int> vec2(20);
    cout<< vec2.size();
    cout << vec.size();
    for (int i = 0; i < 20; i++){
        vec.insert(vec.begin(), i);
    }
    vec.insert(vec.begin(), 30);
    deque<words>deq;
    words first = {"hello", 0};
    deq.push_back(first);
}
