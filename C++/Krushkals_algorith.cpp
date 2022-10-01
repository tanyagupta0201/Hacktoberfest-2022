#include <bits/stdc++.h>
using namespace std;

struct node {
    int u;
    int v;
    int wt;
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(node a, node b) {
    return a.wt < b.wt;
}

int findParent(int node, vector<int> &parent) {
    if (parent[node] == node) {
        return node;
    }
    return parent[node] = findParent(parent[node], parent);
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findParent(u, parent);
    v = findParent(v, parent);

    if (rank[u] < rank[v]) {
        parent[u] = v;
    }
    else if (rank[u] > rank[v]) {
        parent[v] = u;
    }
    else {
        parent[v] = u;
        rank[u]++;
    }
}

int main()
{
    int N = 6;
    int E = 9;
    vector<node> edges;
    edges.push_back(node(1, 4, 1));
    edges.push_back(node(1, 2, 2));
    edges.push_back(node(2, 3, 3));
    edges.push_back(node(2, 4, 3));
    edges.push_back(node(1, 5, 4));
    edges.push_back(node(3, 4, 5));
    edges.push_back(node(2, 6, 7));
    edges.push_back(node(3, 6, 8));
    edges.push_back(node(4, 5, 9));

    vector<int> rank(N + 1, 0);
    vector<int> parent(N + 1);
    for (int i = 0; i < N + 1; i++) {
        parent[i] = i;
    }

    sort(edges.begin(), edges.end(), comp);

    vector<pair<int, int>> MSTedges;

    int MSTedgeWeight = 0;

    for (auto it : edges)
    {
        if (findParent(it.u, parent) != findParent(it.v, parent))
        {
            MSTedges.push_back({it.u, it.v});
            unionn(it.u, it.v, parent, rank);
            MSTedgeWeight += it.wt;
        }
    }

    cout << MSTedgeWeight << "\n";
    for (auto it : MSTedges) {
        cout << it.first << " - " << it.second << "\n";
    }

    return 0;
}
