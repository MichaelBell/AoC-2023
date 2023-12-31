#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = "O....#....\n\
O.OO#....#\n\
.....##...\n\
OO.#O....O\n\
.O.....O#.\n\
O.#..O.#.#\n\
..O..#O..O\n\
.......O..\n\
#....###..\n\
#OO..#....\n";
#else
const char* data = ".O#O..##...#O#.#.......##.....O..#.O##.O#......O.........#....O.O..........#...O...#O.#.OO...OO.....\n\
..............O.#OO..#.#..O..#O..OOO...O......O......O.....O.##.#O.#.O...#....O.#O.O......#OO.O....#\n\
O.#.O.#..O..OO.#O.#.#.O.......O#.O#..#..#..#......O#..O.#...#O..O.........................#..O..#.##\n\
....OO..O......OO...O.O.#...###.#.OO.#.OO.#O.....O#....#..#....O....##.O....#O...O...#.#.O#.#O.O#...\n\
......O#...O..........#..#O...O...O...#.#.#.......O....#....#O....O..O#..O.#..O##..O..#....#..O.O#..\n\
....O...O..O.#...O.O.....#..#....O.O.##O.#..O......OO..#......O.#O.#O..#.###...#O#..........O....OO#\n\
#......#.O....#O.#.#O.#.#.O......O##O.##O#.#.......OO.#......O.##.O.###.#......#..###.....O.O.OOO#..\n\
.#.#.#........#........O..O.O#O.O.O#OO....O#.O..O.....O.O....O#O.O##....#...O#.......#.#O...#..#O..O\n\
.O.#.O.#...O...O#.OO.........#...O#O..OO..O#..O.O.O#..O#...O...OO#O...#..O...OO...OO.O#.....#....#..\n\
...#...#............OO##O#...O.#O##O..#.#....#.O.O.O#...O.O..O.O.###..#.O.##.#O....##....#.......O.O\n\
.#O....OO..OO....O.O.....#.....#...OO.O..#..#.#.OOO...#.O.#...OOO........#....OO#OOO...............O\n\
.OO.#....O.#O.OO..#.OO.........O.#.O......#O......O#...###.#OO.#.#..........O.#O.#O..O#..#..#.O..OOO\n\
#.......O.....#.#.##.#.#.#.....O....#.#..O#OO.OO..O#..O......OO#.O..#...OOO#.O..........O.OO.#..O#.O\n\
....OO....O#OO...O#O#..O#.O.....O.O......#O.#O#......#.....#O.......#.#O....OO......##..##O#O.#..#..\n\
..#...OO.O.#.#..OO...OO........##........O...OO...O....#.O...OO..O.O.OO.O.#....OOO..#..#.O#.OO..O.#O\n\
#.#.#.#O..OOO..OOO..O#O.O..O..#O..OO....O#....O#..O.O...O#.....#.#..OO...#...O##O.#O.O.O#..OO.......\n\
#..O....O....OO..O.....O....O....#O..........#O.O.O#..#...O...##.#.O.#O..#.O.##..OO.O..O..#...O.#..O\n\
......#..O.#......O.....O#.OO#O.#.O.O.....O...#..O.#OO.......O....O........O.O.#.O.....O#.....##....\n\
.#...#O..#.O...O#O...O.#..#.#OO...O.O.#O..###..O..OOO...O..#..O.O..O.#...OO.OO.#.O....#....#O.#...#O\n\
.#OOOO..............#O##OO.....#O#.......O...##...O....O#O.......OOO.#O#OO.#......OOOOOO...##..O..#.\n\
O....OO.OO.O.#.O#.#.O..OO......OO#..#O..#.#O.O..#OO.#.....#.O...O........OO..O#......OOOO..O.OO...O.\n\
...OO.##.O.....O...#.O.OOO..O.....O#......#O#O#...#....O..#O...OOO#..O.#.O....O#.....#...O.O##O...#O\n\
..O........#..###O...O##....O..#.O.##..O.O...O##O.O..O...#O..#OOO###O.O###O#O...#.#......O.OOO.#..O#\n\
....O...O...#.##....#...OO.#O#O...O###..O...O..OO.O.O..#OO.O#.O...O#O.#..#.......#..O.##O.##.OO...#O\n\
OO.#...O..O...OO.##..........OO.......#O#O.OO.#O.....O..OO...#O#O...##.O..##O.O.O.OO.OO.#.#O#O...O.#\n\
......O##.#.#..O#........O....O............O##..#...#..#..#O......O...#...#O..O......#.#..O...O...O#\n\
O.#..#.#..#..##..#........O#..#O.O....#..O...OOO......#......OO...O.O.#O..#........O....#....O#..#O.\n\
.......OO.....O......#....OO.O.#O.O....O#..#...O.O.......#...OO.....#.......#...O..#...##.#.O.#..O#.\n\
O###.........O........O.O..O..O...O#.#....#.OOO..O.O.#..O..##....O....O..#O.O..#........O.#O...O...O\n\
#..........##....O.#O..#....OO..#...O.O.O..O..OO#..##..#O.OO..O.#..OO.........#.O....O..O...........\n\
....#...#.....#..OO.O.##...OOO##O..#........OO..O.#.......#.OO#..O....O##.#.O.#.O.###....#..##O..#O#\n\
..#..........O........#....OO.....O...#.##.#.....#....O..##..............O........#....#..O#...O.O#O\n\
O...OO.O.......O....O...#...OO#O.....O.O....O#O.......#.#..O.....O...#.....#.#....#O..OOOOO.O...O.O.\n\
#...O....O.#........#OO.O..O##.#.........O#.O##...#O#..O...#O.#..#...#O..#......O..........O....OO#O\n\
O.....#O.........O#.O#..OO#...#O.O.....O.#..#....#.O..O..O..O#....O......O.O...O#O......#.O...#..O#O\n\
#......O.....O#.O.#OO...........O.O...O#..O...OO.O###O...#O.....#..O...OO.O#.....#O.O.#....#..O..#..\n\
....#.##..O..O.....OO#....O.........OOO###..O.OO.O..O.##.O.OO..#.#O..#..#.#.##......#...##....#.O..O\n\
.......OO..........O..OO.#..#O.OO#.........O..O#.O..O.#O.O.#......O.....O#....OO..O...O....O..O#OO..\n\
.O.OO.#OO#......O#O#OO...O#O....##OO.....O#........O....O..O.O..O..O..#....O....OO#..O....OO####O..O\n\
.....O.O#.#.#.O#.OO.#...O#..OOO....O#O...OO......O.##.OO.......O.O....#...O....O....O..#..#..O.#O...\n\
...O...O.......O...#.O...O...O....#...OO##..#.O....O.....#.#..O....O.O.....#..OOO....OO..#.###....#.\n\
....#.O....##....O.#.......O#..###.##O.O.O.......#O#.#O.....O...O.#.O..#.#.....O#.O#......O#O..#O...\n\
.#.O....O...#.#...O#.....#......O.O.......#....OO....O...O#....O.#......#.##OO...#..#O#...O#.O.##..O\n\
O.#.#.....O....O....O.O...O..O.#....O....#O.......#.........#.......O.OO.....O.#.OO.#.#.O.OO..O.....\n\
##..#..O.#...O......#..#.O.O..O...O..#.....##.#...#.O.O##.O....#OOOOOO....##....##.#O#..........#.O.\n\
.#..#...O.O.O........OO.O..OOO....O#..##..#O..OO.........OO.........#....#.O#..O#..#.#..#O..O.O#....\n\
..#..OO##..#.....O..##......O..OOO.#.....O.#..#O....#O#O.....#.O..OO.#...O..#...#O...#.........#....\n\
.........#..O....OO..#OO..O.........#..#O..O..OO....O..##..#O..O.O.O...#O##OOO#.........O.......#...\n\
...#...OO.....#.O..#........#.#...O.O....OOO.O#O....###..#.#.......#.O......O..#O....###.O##.#..OO.#\n\
..##O#.#.........OO#O#..OO..O..##.O.O.O.O...O#..OO...#..O...O.O.#.O...#.O.O#....##...O.....#...O..O.\n\
..#O..#..OOO....#.......#O.....#...O#..O##OOO#.#.....O#O..#O...#....#O.O#......#.OO..#.#.O.......O.#\n\
O.O.....#O.#.OOOOOO..###..O.......O.#.O.OO...#..O..##.##.#..O..O..O...#O.....OO....O...O..#...#O....\n\
..O.OO....#.O..O..#.#OO..#.O.......O.OO#....O..O...O#...O...O#...O...#.#O...#..OO....#.O........O...\n\
.#....#.O#.#....O#O#.##.....O.#.....O..OO....O..O.#.....#OO##.O..O..O..O.......#...OO..#.O.......O..\n\
O...O#.#O.#.#.#..O..O......#.O..OO..#.O##.#.....#O#.....#O#.....#...#.#O....O.O.....#.......#....#..\n\
#.O...O.O.....O.O..O...O#O...OO#..##.....O.......#....O..#...O....#..O..OO#.....O..O.O...#....O..O#.\n\
O..O....O..O##..#....OO.#OO........#O.........O............O.#..#O.O.O##..#.###O..O...O#...#..#.....\n\
O.......O........O...O...O.###.#.#OO.O.#.#.O.#O.OO....O..O.###....O.O.#.#O..OO##.O.#O#....#.....#...\n\
..O..O#..OOO..O##O....O#.O.O.O#.#.O.##..O.....#.#..#O...O..O...O....#.......O.O......O#..O.#....#OO.\n\
.#..O..##....O#.......#....O#..O.###.O.#..O...#OO...O#.....O.O....O#...O#...##O...O..O..#....O.O.O..\n\
.O.......O#O...OO...O...#.OO#OO#.#O..#OO..#O.#OO....#..#...O#O.OO#...OOO..O..OO..#..#.....O.....#...\n\
..O..##.##..O#.O..#.O.O.......#O.....OO..OO#.....O#.O.OOO....O...#..O#O#.#OO...#....#...O...........\n\
.O.#.#...O.O.O.O.#.#O.O..#.OOOOOO.#.OO..#..###..#.#...#.O.O............OOO#O#.O..O....#...O...#.....\n\
..#..OO..#O.....#.##..O...O.OO........#...OO..#...O....O..O....#O.........O...#.O.....O.#...O.....#.\n\
#O..#..#O.O#.O...O...O....#O#O.#O#OO...O#.O........O#....#.....#O#...O..O..#O..OOO##.#...O#...#..O..\n\
.....#O....O.OOO....#..#O......O.#..O.##.O.O.O...OO.O#...O..OO..#.#........##.....#............O.O..\n\
.O..O..#.O#.OO.O#.....O.O..#O..O.O.....#...OO...O#.##O........#.O.........O#...OOO...#O###...O..#...\n\
OO.#O....O.....#...#.O...O...O..#....O#....##....O.OOO.O...#.OO.O...O.O#O.....#.......O........O..O.\n\
..O#O........O.O..O..#.##......#..#.OO......#.....#.O...#.#.OO#O.#..O....O#.O#..O.#..O#...O.O...O#..\n\
O##..O.#..#...###.###O##....#OOO..O.#.O....O.OO#O...O..O.........O##....OO.O....#....OO...O.........\n\
OOO..O.#.O.O.O...#.##..#.##.#...O#O..O.#.....#..O.#....O..O....O.....O...O..#.O.##.O#..O.....O...O..\n\
#.###.OO.....O..O..O...O.O#..#....####..#.......#.#.....O#O...O..O##O.#..#OOO.O#...O..O....#O.#....#\n\
.O#O.....O.#.#..OO....#.....#......#.....O.............O#..O..OOO#O#.OO#..O...O##..O.##O#...O#O.#..#\n\
.#...#.O.#..O..#.....OO..#O#....#.O.#.#..O#...#...#..OO#....O#..##O.............O...O..#O..O..O.#O..\n\
.....##OO.O..#..O#...O...O.#.#.##.O....OOO.#O..O.O.O##....O.O.#.O...OO.O...###O#.O.OO#..O....O......\n\
.O#O..#.O...#.#O...O##....O..#....O.O#.OO#O#O..O...O.#...O.O.O...O#..OO.O....#..#...OO..O.O.......#.\n\
O.O........OO...#.##..O........O....OO...O#..O.#OO.....O...O.O.......O....#O#O..O.OO............O..#\n\
...#O...#O.O...O.##..O....OO#.##.....#...O....O.....#O..OO.#.O...O.....OO...#OO#......#O##O..O....OO\n\
..#...O#.O..O.....#.....#...#..#..O....O...#......#..#..O#OO.....#O...O...#......O.#.###..#....O..#.\n\
.O.....#O.O......O#.O..O.##.O...O#OO..........O..###..#....O....O.....#..O#.O.....###......#..###..O\n\
.O..#.....#..##.##.O......O..O.O...O.O.......#.O..#....#.....O.#.O............OO#...O##...O.O#.O....\n\
.#.O.O#.#.#O.O..#....O.O..#.....#.#OO.O...##.OO..O.O......##.......O.O###.O..O.....#..OO#...#....#..\n\
....#.#...#...#.OO..#..........OO......O#..#O##...OO.#..O.#..O.O.OO.....O#O.#..####.OO...#.O..#O..O.\n\
O.O..O..OOOO....O..O.#.........O....O.#O.#O...O.#....#..O.#..OO.O.#.O#...#....##..#...........#.O#.O\n\
.......O....#OOO.#.O.......#O#O....#.....OOO.#..#OO#..O.#O##O.O........O.#.O.OOO.....O......#.#....O\n\
..O.....OO.#.#.O.....O##....O...OO......##..O#O.#O.O..#O.#.#....O...O.#.#..O.#.#OO..##....O......O..\n\
..O#.#O.O.O..#...#O....O#O...O.........#.O...O#..O###O.....O..#.O....O#OO...O..O....OO#..#...#.....O\n\
.O.#....OO..O.O...O....#..........OO.##OO##OOO.##OOO..O...#...##....O..O#...O.#O..#.#O.O.....O.##.#.\n\
....OO#O.........OO.#.O.O.O.#O.O.##..............OO..........O...O.......O..O##.O..#..#...O........O\n\
O.....#.....O#.#..#.O...O....##O#O.#.##...#..#........O#...#....##.O...#..O......O..OO#....OO.....#.\n\
...O...#.#O.#..O...........O.O###.O.O...#..#O..O.OO..O..##O..#..#O#.O.OO.#O......O.O....#O.#..O...O#\n\
..O......#...##.#..OOO....#..#.#.OOO....#.#OO#.#O.#.O.#...#.O.OOO.#...#..O..O..#..#.O....O##..O..#..\n\
.##..OO...#...#O#.O.....O#...#....O...............#..O#.#.#..OO.#..O.O#.O.....#OO.O.#.O..##...#.O#.O\n\
..#.O.#...O..##.O#.O....O.O.O#O#.OO....#...#.O.......O#...#O........O.O.O.O.OO.#O........O..OO.O#...\n\
...#..#OO#...#..#OO.#..#.O.#..OO..O.O....O##..#...OO..O....O#O...#....#...#O#.........O#OO.O...O.#..\n\
.O#OOO..#....O..#.O..#..OO##..OOO#O#O#O..#.O#.#......#.........##O..O...O#.....O.......###O#O.....OO\n\
O..OO....O.#..O#.#O#....O.O...##O...#O#O#...O.O...O.O#O.......#..#...OO...#O.#...O#...#.........O##.\n\
...O.#O.#...O............#...O......##.......O..##O.O.OO.O.O....#O#..#O...#........OO.O..##.O.#.#O.#\n\
OO..O...#.....O..#OO..OO..#....#....O.O.#O.O.#O.OO...#..#OO..O#OO#.OO.....O...OO.O.O.....OO.#OO...O#\n\
.#...O...O.#OOO....O#...O.OO.##O...##.##.....O.O..#.....#O......O#...###O.#OO.#O.O.O...#.....#.OOO..\n";
#endif

#define MAX_COL 100
#define MAX_ROW 100
char arena[MAX_COL * MAX_ROW];

#define MAX_CYCLE_LEN 10000
int cycle[MAX_CYCLE_LEN];

int rows, cols;

void spin()
{
    // North
    for (int y = 0; y < rows; ++y) {
        for (int x = 0; x < cols; ++x) {
            if (arena[x+y*cols] == 'O') {
                arena[x+y*cols] = '.';
                int oy = y;
                while (oy > 0 && arena[x+cols*(oy-1)] == '.') --oy;
                arena[x+oy*cols] = 'O';
            }
        }
    }

    // West
    for (int x = 0; x < cols; ++x) {
        for (int y = 0; y < rows; ++y) {
            if (arena[x+y*cols] == 'O') {
                arena[x+y*cols] = '.';
                int ox = x;
                while (ox > 0 && arena[(ox-1)+cols*y] == '.') --ox;
                arena[ox+y*cols] = 'O';
            }
        }
    }

    // South
    for (int y = rows-1; y >= 0; --y) {
        for (int x = 0; x < cols; ++x) {
            if (arena[x+y*cols] == 'O') {
                arena[x+y*cols] = '.';
                int oy = y;
                while (oy < rows-1 && arena[x+cols*(oy+1)] == '.') ++oy;
                arena[x+oy*cols] = 'O';
            }
        }
    }

    // East
    for (int x = cols-1; x >= 0; --x) {
        for (int y = 0; y < rows; ++y) {
            if (arena[x+y*cols] == 'O') {
                arena[x+y*cols] = '.';
                int ox = x;
                while (ox < cols-1 && arena[(ox+1)+cols*y] == '.') ++ox;
                arena[ox+y*cols] = 'O';
            }
        }
    }
}

int main()
{
    const char* ptr = data;

    int total = 0;

    const char* start = ptr;
    while (*ptr++ != '\n');
    cols = ptr - 1 - start;
    ptr = start;

    int x = 0;
    int y = 0;
    while (*ptr) {
        if (*ptr == '\n') {
            x = 0;
            ++y;
            ++ptr;
            continue;
        }

        if (*ptr == 'O') {
            arena[x+cols*y] = '.';
            int oy = y;
            while (oy > 0 && arena[x+cols*(oy-1)] == '.') --oy;
            arena[x+cols*oy] = 'O';
        }
        else {
            arena[x+cols*y] = *ptr;
        }
        ++ptr;
        ++x;
    }
    rows = y;

    const int INITIAL_CYCLES = 150;
    for (int i = 0; i < INITIAL_CYCLES; ++i) {
        spin();
        printf(" %d\n", i);
    }

    for (int i = 0; i < MAX_CYCLE_LEN; ++i) {
        spin();

        total = 0;
        for (int i = 0; i < y; ++i) {
            //printf("%.*s\n", cols, &arena[i*cols]);

            int load = y-i;
            for (int j = 0; j < cols; ++j) {
                if (arena[i*cols + j] == 'O') total += load;
            }
        }    

        printf(" %d %d\n", i, total);
        cycle[i] = total;

        if ((i & 31) == 31) {
            for (int cycle_len = 10; cycle_len < (i >> 1); ++cycle_len) {
                bool is_cycle = true;
                for (int j = i - cycle_len; j >= i - cycle_len*2; --j) {
                    if (cycle[j] != cycle[j + cycle_len]) {
                        is_cycle = false;
                        break;
                    }
                }
                if (is_cycle) {
                    int cycle_start = i - cycle_len;
                    printf("%d %d\n", cycle_len, cycle_start);
                    printf("%d\n", cycle[cycle_start + ((1000000000 - 1 - INITIAL_CYCLES - cycle_start) % cycle_len)]);
                    return 0;
                }
            }
        }
    }
 
    return 0;
}
