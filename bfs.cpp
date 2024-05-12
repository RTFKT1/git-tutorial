#include <iostream>
#include <vector>

using namespace std;

void bfs(){
    return;
}

int main() {
    vector<vector<int> > edges;
    edges.push_back(vector<int> {0, 1});
    edges.push_back(vector<int> {0, 2});
    edges.push_back(vector<int> {1, 3});
    edges.push_back(vector<int> {2, 4});
    edges.push_back(vector<int> {2, 5});
    for(auto x:edges){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
    return 0;
}
