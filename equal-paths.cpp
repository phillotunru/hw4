#include "equal-paths.h"
#include<bits/stdc++.h>
using namespace std;


// You may add any prototypes of helper functions here

pair<bool, int> equal(Node* cur){
    if (cur==NULL) return make_pair(true, 0);
    pair<bool,int> a = equal(cur->right);
    pair<bool,int> b = equal(cur->left);
    if ((cur->right==nullptr) != (cur->left==nullptr)) return make_pair(a.first&&b.first, a.second+b.second+1);
    if (!a.first || !b.first) return make_pair(false, 0);
    if (a.second != b.second) return make_pair(false, 0);
    return make_pair(true, a.second+1);

}
bool equalPaths(Node * root)
{
    return equal(root).first;
    // Add your code below

}

