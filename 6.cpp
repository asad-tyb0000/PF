#include <iostream>
using namespace std;
int main()
{
    // vertices = number of vertices
    // edges = number of edges
    // v1 = 1st vertices
    // v2 = 2nd vertices
    // e = edges
    int vertices;
    int v1,v2;
    int e;
    int edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << endl;
    cout << "Enter the number of edges: ";
    cin >> edges;
    cout << endl;
    int arr[vertices][edges];
    int edgeCheck[edges] = {0};
    for(int i = 0; i < vertices; i++)
    {
        for(int j = 0; j < edges; j++)
        {
            arr[i][j] = 0;
        }
    }
    for(int x=0 ; x<edges ; x++)
    {
        while(true) {
            cout << "Enter the vertices pairs:" << endl;
            cout << "Enter 1st vertex: ";
            cin >> v1;
            cout << "Enter 2nd vertex: ";
            cin >> v2;
            cout << "Enter the associated edge: ";
            cin >> e;

            // if the edge has already been entered
            if(edgeCheck[e-1] == 0) 
            {
                edgeCheck[e-1]++;
                break;
            }
            else 
            {
                cout << "Edge " << e << " has already been entered. Please enter a different edge.\n";
            }
        }

        // storing the data in the array

        arr[v1-1][e-1]++;
        arr[v2-1][e-1]++;
        cout << "\n\n" << endl;
    }

    // printing the array

    for(int y=0 ; y<vertices ; y++)
    {
        for(int z=0 ; z<edges ; z++)
        {
            cout << arr[y][z] << " ";
        }
        cout << endl;
    }
}








