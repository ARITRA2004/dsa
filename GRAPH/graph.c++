#include <iostream>
using namespace std;

class Graph_matrix{
    private:
        int no_of_nodes;
        int e_no;
        int **adj;
    public:
        void createGraph(int,int);
        void PrintGraphMatrix();
};

void Graph_matrix::PrintGraphMatrix(){

    for(int i=0;i<no_of_nodes;i++){
        for(int j=0;j<no_of_nodes;j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

}
void Graph_matrix::createGraph(int nodes,int eno){

    int connectionEdge1,connectionEdge2;
    no_of_nodes = nodes;
    e_no = eno;

    adj = new int*[no_of_nodes];
    for(int i=0;i<no_of_nodes;i++){
        adj[i] = new int[no_of_nodes];
    }
    for(int i=0;i<no_of_nodes;i++){
        for(int j=0;j<no_of_nodes;j++){
            adj[i][j] = 0;
        }
    }
    for(int i=1;i<=e_no;i++){
        cout << "Enter nodes number that are connection with each other : ";
        cin >> connectionEdge1 >> connectionEdge2;

        adj[connectionEdge1][connectionEdge2] = 1;
        adj[connectionEdge1][connectionEdge2] = 1;
    }
}

/*        0   1   2
       0 [ 0 , 0 , 1]
       1 [ 1 , 0 , 1]
       2 [ 0 , 1 , 1]


*/

int main(){
    Graph_matrix G;

    G.createGraph(3,2);
    G.PrintGraphMatrix();

    return 0;
}