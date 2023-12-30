#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // v1 = vertices
    // vertices = number of vertices
    // edges = number of edges
    // v = array to store data of vertices 
    int v1;
    int vertices;
    int edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    int v[vertices];
    fill(v, v+vertices , 0);
    cout << endl;
    cout << "Enter the number of edges: ";
    cin >> edges;
    for(int x=0 ; x < edges ; x++)
    {
        cout << "Enter the vertices: " << endl;
        cout << "\nEnter 1st vertex: ";
        cin >> v1;
        v[v1-1]++;
        cout << "Enter 2nd vertex: ";
        cin >> v1;
        v[v1-1]++;
        cout << "\n\n" << endl;
    }
    // printing degree
    for(int i=1 ; i<=vertices ; i++)
    {
        cout << "The degree of vetrex " << i << " is: " << v[i-1] << endl;
    }
}


