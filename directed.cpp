#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // vertices = number of vertices
    // edge = number of edges
    // direction = towards or away for edges
    // next = to check if the edge is towards or away
    // v1 = vertices
    // in = array to store in degree
    // out = array to store out degree
    int vertices;
    int edge;
    string direction;
    bool next = false;
    int v1;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edge;
    int in[edge];
    fill(in,in+edge,0);
    int out[edge];
    fill(out,out+edge,0);
    cout << "Enter the vertices\n";
    for(int x=0 ; x < edge ; x++)
    {
        cout << "Enter 1st vertex: ";
        cin >> v1;
        cout << "towards or away? :";
        cin >> direction;
        if(direction == "towards")
        {
            in[v1-1]++;
        }
        else
        {
            out[v1-1]++;
            next = true;
        }
        cout << "Enter 2nd vertex: ";
        cin >> v1;
        if(next == true)
        {
            in[v1-1]++;
        }
        else
        {
            out[v1-1]++;
        }
        cout << endl;
    }
    cout << "\n\n";
    // printing in degree and out degree
    for(int i=1 ; i<=vertices ; i++)
    {
        cout << "The in degree of vertex " << i << " is " << in[i-1] << endl;
        cout << "The out degree of vertex " << i << " is " << out[i-1] << endl;
        cout << endl;
    }
}



