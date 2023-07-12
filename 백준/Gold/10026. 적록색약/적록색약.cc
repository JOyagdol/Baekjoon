#include <iostream>

#include <queue>

#include <string>

#include <cstring> //memset

using namespace std;



const int MAX = 100;



typedef struct

{

    int y, x;

}Dir;



Dir moveDir[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };



int N;

string graph[MAX];

bool visited[MAX][MAX];



void BFS(int y, int x, bool colorBlind)

{

    char search = graph[y][x]; 



    queue<pair<int, int>> q;

    q.push(make_pair(y, x));

    visited[y][x] = 1;



    while (!q.empty())

    {

        int curY = q.front().first;

        int curX = q.front().second;

        q.pop();



        for (int i = 0; i < 4; i++)

        {

            int nextY = curY + moveDir[i].y;

            int nextX = curX + moveDir[i].x;



            if (0 <= nextY && nextY < N && 0 <= nextX && nextX < N)

            {

                if (colorBlind == false) 

                {

                    if (graph[nextY][nextX] == search && !visited[nextY][nextX]) 

                    {

                        visited[nextY][nextX] = true;

                        q.push(make_pair(nextY, nextX));

                    }

                }

                else if (colorBlind == true) 
                {

                    if (search == 'R' || search == 'G')

                    {

                        if (!visited[nextY][nextX] && (graph[nextY][nextX] == 'R' || graph[nextY][nextX] == 'G'))

                        {

                            visited[nextY][nextX] = true;

                            q.push(make_pair(nextY, nextX));

                        }

                    }

                    else if (search == 'B')

                    {

                        if (!visited[nextY][nextX] && (graph[nextY][nextX] == search))

                        {

                            visited[nextY][nextX] = true;

                            q.push(make_pair(nextY, nextX));

                        }

                    }

                }

            }

        }

    }

}



int main(void)

{

    cin >> N;



    for (int i = 0; i < N; i++)

        cin >> graph[i];



    int cnt = 0;



    for (int i = 0; i < N; i++)

        for (int j = 0; j < N; j++)

            if (visited[i][j] == false)

            {

                BFS(i, j, false);

                cnt++;

            }

    cout << cnt << " ";



    memset(visited, false, sizeof(visited));

    cnt = 0;

    for (int i = 0; i < N; i++)

        for (int j = 0; j < N; j++)

            if (visited[i][j] == false)

            {

                BFS(i, j, true);

                cnt++;

            }

    cout << cnt << endl;



    return 0;

}