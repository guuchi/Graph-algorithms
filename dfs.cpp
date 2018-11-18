#include <bits/stdc++.h>
using namespace std;

const int MAX_SOMMETS = 100*1000; //maximal size of your graph
vector<int> graphe[MAX_SOMMETS];
bool visite[MAX_SOMMETS];
int nbSommets, nbAretes;

void dfs(int node ) 
{
    visite[node] = true;
    for (int voisin : graphe[node] ) 
    {
        if ( !visite[voisin] ) 
            dfs(voisin);
    }
    visite[node] = false;
}

void init()
{
    cin >> nbSommets >> nbAretes;
    for (int i = 0; i < nbAretes;i++)
    {
        int node, voisin;
        cin >> node >> voisin;
        graphe[node].push_back(voisin);
    }
}
