#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

class Node {
    public:
        int data;
        vector<int> edges;
        Node(int data) {
            this->data = data;
        }
};

class Graph {
    public:
        Graph(int n) {
            for (int i = 0; i < n; i++) {
                Node n(i);
                this->nodes.push_back(n);
            }
        }
    
        void add_edge(int u, int v) {
            nodes[u].edges.push_back(v);
            nodes[v].edges.push_back(u);
        }
    
        vector<int> shortest_reach(int start) {

            vector<int> v;
            map<int, int> m;
            for (int i = 0; i < this->nodes.size(); i++) {
                if (i == start) {
                    continue;
                }

                int goal = i;

                bool checked[100000] = {0};
                checked[start] = true;
                m[start] = 0;

                int distance = -1;

                int edges = this->nodes[start].edges.size();

                std::queue<Node> q;
                q.push(this->nodes[start]);
                while (!q.empty()) {
                    Node n = q.front();
                    q.pop();

                    if (n.data == goal) {
                        distance = m[n.data];
                        break;
                    }

                    for (int j = 0; j < n.edges.size(); j++) {
                        if (checked[n.edges[j]] == true) {
                            continue;
                        }

                        checked[n.edges[j]] = true;
                        m[n.edges[j]] = m[n.data] + 6;
                        q.push(this->nodes[n.edges[j]]);
                    }
                }
                v.push_back(distance);
            }

            return v;
        }

    private:
        vector<Node> nodes;
        

};

int main() {
    int queries;
    cin >> queries;
        
    for (int t = 0; t < queries; t++) {
      
		int n, m;
        cin >> n;
        // Create a graph of size n where each edge weight is 6: 
        Graph graph(n);
        cin >> m;
        // read and set edges
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            // add each edge to the graph
            graph.add_edge(u, v);
        }
		int startId;
        cin >> startId;
        startId--;
        // Find shortest reach from node s
        vector<int> distances = graph.shortest_reach(startId);

        for (int i = 0; i < distances.size() - 1; i++) {
            cout << distances[i] << " ";
        }
        cout << distances[distances.size() - 1] << endl;
    }
    
    return 0;
}
