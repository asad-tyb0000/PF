#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // v = vertices
    // edges = number of edges
    // vertices = number of vertices
    // result = to check if the graph is bipartite or not
    int edges;
    int vertices;
    bool result = false;
    int v;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << endl;
    cout << "Enter the number of edges: ";
    cin >> edges;
    int color[edges];
    fill(color,color+edges,-1);
    cout << endl;
    cout << endl;
    for(int x=0 ; x<edges ; x++)
    {
        cout << "Enter the vertices pairs:" << endl;
        cout << "\n Enter 1st vertex: ";
        cin >> v;
        // if the vertex is not colored
        if(color[v-1] == -1)
        {
            // if the vertex is the first vertex
            if(v == 1)
            {
                color[v-1] = 1;
            }
            else                    // if the vertex is not the first vertex
            {
                if(color[v-2] == 1)
                color[v-1] = 0;
                else if(color[v-2] == 0)
                color[v-1] = 1;
            }
            if(v == vertices)                       // if the vertex is the last vertex
            {
               if(color[v-1] == color[v-vertices] || color[v-1] == color[v-2])
                {
                    result = true;
                } 
            }
            else                                        // if the vertex is not the last vertex
            {
                if(color[v-1] == color[v] || color[v-1] == color[v-2])
                {
                    result = true;
                }
            }
        }
        cout << "Enter 2nd vertex: ";
        cin >> v;
        if(color[v-1] == -1)                                // if the vertex is not colored
        {
            if(v == 1)                                      // if the vertex is the first vertex
            {
                color[v-1] = 1;
            }
            else                                            // if the vertex is not the first vertex
            {
                if(color[v-2] == 1)
                color[v-1] = 0;
                else if(color[v-2] == 0)
                color[v-1] = 1;
            }
            if(v == vertices)                               // if the vertex is the last vertex
            {
               if(color[v-1] == color[v-vertices] || color[v-1] == color[v-2])
                {
                    result = true;
                } 
            }
            else                                            // if the vertex is not the last vertex
            {
                if(color[v-1] == color[v] || color[v-1] == color[v-2])
                {
                    result = true;
                }
            }
        }
    }

    cout << endl;
    cout << endl;

    // prints the result

    if(result != true)
    {
        cout << "The graph is BIPARTITE!";
    }
    else
    {
        cout << "The graph is NOT bipartite!";
    }
}








