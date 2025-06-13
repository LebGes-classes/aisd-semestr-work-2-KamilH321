#include <iostream>
using namespace std;

int main() {
    int degree = 3;
    int graph[degree][degree] = {
        {0, 5, -1},
        {4, 0, -1},
        {6, 3, 0}};

    for (int i = 0; i < degree; i++) {
        for (int x = 0; x < degree; x++) {
            for (int y = 0; y < degree; y++) {
                if (graph[x][i] != -1 && graph[i][y] != -1 && graph[x][y] != -1) {
                    graph[x][y] = min(graph[x][y], graph[x][i] + graph[i][y]);
                } else if (graph[x][y] == -1 && graph[x][i] != -1 && graph[i][y] != -1) {
                    graph[x][y] = graph[x][i] + graph[i][y];
                }
            }
        }
    }

    for (int i = 0; i < degree; i++) {
        for (int j = 0; j < degree; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
