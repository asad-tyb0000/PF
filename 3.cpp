#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int vertices;
    int edges;
    int e1;
    int v1;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << endl;
    cout << "Enter the number of edges: ";
    cin >> edges;
    int v[vertices][edges];
    int edgeCheck[edges];
    fill(v[0],v[0]+vertices*edges,0);
    fill(edgeCheck, edgeCheck+edges, 0);
    for(int x=0 ; x<edges ; x++)
    {
        while(true) 
        {
            cout << "Enter the edge: ";
            cin >> e1;
            if(edgeCheck[e1-1] == 0) 
            {
                edgeCheck[e1-1]++;
                break;
            } 
            else 
            {
                cout << "Edge " << e1 << " has already been entered. Please enter a different edge.\n";
            }
        }
        cout << endl;
        cout << "Enter 1st vertex: ";
        cin >> v1;
        v[v1-1][e1-1]++;
        cout << "Enter 2nd vertex: ";
        cin >> v1;
        v[v1-1][e1-1]++;
        cout << "\n\n" << endl;
    }
    for(int y=0 ; y<vertices ; y++)
    {
        for(int z=0 ; z<edges ; z++)
        {
            cout << v[y][z] << " ";
        }
        cout << endl;
    }
}