#include <iostream>

using namespace std;

#define N 4
int path[N][N] ={0};
bool is_safe(int x, int y, int m[N][N])
{

    if ( x >= 0 && x < N && y >= 0 && y < N && ( m[x][y] == 1 && path[x][y] != 1))
        return true;

    return false;
}

bool solve(int m[N][N], int x, int y, int sol[N][N])
{
    if ( x == N-1 && y == N-1 )
    {
        path[x][y] = 1;
        return true;
    }

    if ( is_safe(x,y,m) )
    {
        path[x][y] = 1;
        sol[x][y] = 1;

        if ( solve( m, x+1, y, sol ) )
            return true;

        if ( solve( m, x, y+1, sol ) )
            return true;

        if ( solve( m, x-1, y, sol ) )
            return true;

        if ( solve( m, x, y-1, sol ) )
            return true;

        path[x][y] = 0;

        return false;
    }

    return false;

}


void solve_maze(int m[N][N])
{
    int sol[N][N]={0};

    bool sol_exist = solve(m,0,0,sol);

    if ( sol_exist )
        cout << "Solution exists." << endl;
    else
        cout << "Solution doesn't exists." << endl;
}


int main()
{
    int maze[N][N]  =  { {1, 0, 0, 0},
                         {1, 1, 1, 1},
                         {0, 1, 1, 0},
                         {1, 0, 1, 1}
    };

    solve_maze(maze);
    return 0;
}
