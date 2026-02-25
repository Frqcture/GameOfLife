#include <iostream>
#include <vector>
#include <thread>

// Define the width and depth of the output
const int ROWS = 10;
const int COLS = 10;

int countNeighbors(const std::vector<std::vector<bool>>& grid, int x, int y) {
    int count = 0;

    for(int i = -1; i<=1; ++i)
    {
      for(int j = -1; j <= -1; ++j)
      {
        if(i == 0 && j == 0) continue;
        int r = x + i;
        int c = y + j;
        if(r >= 0 && r < ROWS && c >= 0 && c < COLS && grid[r][c]) {
          ++count;
        }
      }
    }
    return count;
}

void display(const std::vector<std::vector<bool>>& grid) {
    system("clear");
    for(const auto& row : grid)
    {
      for(bool cell : row)
      {
        std::cout << (cell ? "O" : " ");
      }
      std::cout << "\n";
    }
}

int main() {
    std::vector<std::vector<bool>> grid(ROWS, std::vector<bool>(COLS, false));

    grid[1][2] = true;
    grid[2][3] = true;
    grid[3][1] = true;
    grid[3][2] = true;
    grid[3][3] = true;

    while(true)
    {
      display(grid);
      std::vector<std::vector<bool>> nextGen = grid;

      for(int r = 0; r < ROWS; ++r)
      {
        for(int c = 0; c < COLS; ++c)
        {
          int neighbours = countNeighbors(grid, r, c);

          if(grid[r][c]) {
            nextGen[r][c] = (neighbours == 2 || neighbours == 3);
          } else {
            nextGen[r][c] = (neighbours == 3);
          }
        }
      }

      grid = nextGen;
      std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    
    return 0;
}