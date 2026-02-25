# GameOfLife

This is a programmed version of Conway's Game of Life in C++.

## How it Works in Detail

- **Grid Size**: The simulation runs on a fixed 10x10 grid.
- **Initial State**: The grid is initialized with a classic "Glider" pattern.
- **Simulation Rules**: It calculates the next generation based on the standard rules:
  - Any live cell with two or three live neighbors survives.
  - Any dead cell with exactly three live neighbors becomes a live cell.
  - All other live cells die in the next generation, and all other dead cells stay dead.
- **Rendering**: The grid is printed directly to the console. Live cells are represented by the `O` character, and dead cells are represented by empty spaces. The console is cleared between frames to create an animation effect.
- **Timing**: The simulation updates infinitely, pausing for 1000 milliseconds (1 second) between each generation.
