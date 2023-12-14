#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = "#.##..##.\n\
..#.##.#.\n\
##......#\n\
##......#\n\
..#.##.#.\n\
..##..##.\n\
#.#.##.#.\n\
\n\
#...##..#\n\
#....#..#\n\
..##..###\n\
#####.##.\n\
#####.##.\n\
..##..###\n\
#....#..#\n";
#else
const char* data = ".##.##.##....\n\
#.######.##..\n\
##......###..\n\
...####......\n\
...####...###\n\
..#....#..#..\n\
.#.####.#.###\n\
..#....#..###\n\
.##.##.##....\n\
..######..###\n\
#.##..##.####\n\
#.#.##.#.....\n\
##..##..##.##\n\
.#..##..#....\n\
#.##..##.##..\n\
\n\
.##.#.##.#.\n\
#..##..####\n\
#..##..##.#\n\
.##.#.##.#.\n\
....#.##...\n\
.#.###..##.\n\
...#.##..##\n\
.#....#.###\n\
.#....#.###\n\
\n\
##.#.####.#.####.\n\
#..##.##.##..#..#\n\
..###....###..###\n\
.###.####.###..##\n\
..#........#..##.\n\
#..###..###..#.##\n\
#..###..###..#.##\n\
..#........#...#.\n\
.###.####.###..##\n\
\n\
.....####..\n\
##...####.#\n\
##..#....#.\n\
.....####..\n\
####.####.#\n\
##..#.##.#.\n\
##.###..###\n\
...#......#\n\
..#.######.\n\
##.##.##.##\n\
..#..#..#..\n\
##.#.####.#\n\
####..##..#\n\
\n\
##..##.#.##.#.#\n\
..##..#....#...\n\
#.#...#.#.###.#\n\
####.##..#.#..#\n\
#..#....#..####\n\
##.#.#..#....##\n\
#.#.####.#..###\n\
#.#.####.#..###\n\
##.#.#..#.#..##\n\
##.#.#..#.#..##\n\
#.#.####.#..###\n\
#.#.####.#..###\n\
##.#.#..#....##\n\
\n\
#..##...#.####.##\n\
#..##...#.####.##\n\
....###.#..#.###.\n\
#####..####..#.##\n\
#..#..##...###..#\n\
.##.##..#..###...\n\
.##.#.#.#...#..#.\n\
##.#...#.#.....#.\n\
........######.#.\n\
....#..#....#..##\n\
#######..#.##..#.\n\
#..#...#######..#\n\
....###..###.##.#\n\
\n\
#.#..#.##..##\n\
##.##.##....#\n\
###..##......\n\
###..###.##.#\n\
.######.#..#.\n\
##.##.##....#\n\
#......##..##\n\
\n\
#.#..#.###.....\n\
..####..#..#..#\n\
#......##..####\n\
#..##..#.#.#..#\n\
...##....#.#...\n\
.######...#....\n\
#..##..##.#....\n\
\n\
..##...\n\
..#.#..\n\
..#.#..\n\
..##...\n\
.#..###\n\
##....#\n\
....#..\n\
#..#...\n\
.##....\n\
...#...\n\
.####..\n\
\n\
##..##..###\n\
#.##.######\n\
#.##.######\n\
##..##..###\n\
#######..##\n\
.#####..#.#\n\
.####....#.\n\
\n\
#....#...##\n\
.####......\n\
##.#..#...#\n\
...#.#..###\n\
...#.#..###\n\
##.#..#...#\n\
.####......\n\
#....#...##\n\
.#.##......\n\
..##.#.#..#\n\
..##.#.#..#\n\
.#.##......\n\
#....#...##\n\
.####...#..\n\
##.#..#...#\n\
\n\
##.#...\n\
##.#...\n\
.#.#.##\n\
#.###.#\n\
......#\n\
..#.##.\n\
#.#..##\n\
#.#...#\n\
#.#...#\n\
#.#..##\n\
..#.##.\n\
......#\n\
#.#.#.#\n\
.#.#.##\n\
##.#...\n\
\n\
.#...###.##..\n\
#..#.##..#...\n\
#.#.#..###.#.\n\
.#.#####....#\n\
..##..#..#.##\n\
..##..#..#.##\n\
.#.#####....#\n\
#.#.#..###.#.\n\
#..#.##..#...\n\
.#...###.##..\n\
.#...###..#..\n\
#..#.##..#...\n\
#.#.#..###.#.\n\
.#.#####....#\n\
..##..#..#.##\n\
\n\
#..#.#.##...#.#..\n\
..##....####.##.#\n\
.###.###...#.####\n\
###....#.......#.\n\
.#.#######..#.###\n\
#..#..##..##.#..#\n\
#..#..##..##.#..#\n\
.#.#######..#.###\n\
###....#.......#.\n\
.###.###...#.####\n\
..##....####.##.#\n\
#..#.#.###..#.#..\n\
#..#.#.###..#.#..\n\
..##....####.##.#\n\
.###.###...#.####\n\
\n\
######....##..##.\n\
..#..#####.#.###.\n\
.#####...########\n\
######...########\n\
..#..#####.#.###.\n\
######....##..##.\n\
.##...#.#....#...\n\
##..##.......###.\n\
.###..###.###...#\n\
....#.##.###.##..\n\
..##.#...####...#\n\
..##.#...#.###.#.\n\
#.#...#.#....##.#\n\
##.#.##..#......#\n\
##.#.##.##.##..#.\n\
...#...#.#.###.##\n\
...#...#.#.###.##\n\
\n\
..#.##..#\n\
##.#..###\n\
##..#...#\n\
###.##.##\n\
###.##.##\n\
##..#...#\n\
##.#..###\n\
..#.##..#\n\
.##..##.#\n\
###.###..\n\
#..##....\n\
#.#...#..\n\
..####..#\n\
..####..#\n\
#.#...#..\n\
#..##....\n\
###.###.#\n\
\n\
..#.##.#.##.#..\n\
##..##.#.####.#\n\
.....#...#...#.\n\
.####....######\n\
.####....######\n\
.....#...#...#.\n\
##..##.#.####.#\n\
..#.##.#.##.#..\n\
#..#####.#.#.#.\n\
####..#.###..#.\n\
.....##...##..#\n\
..#.#.###..#...\n\
#...#.##..#...#\n\
.##.##..##.#...\n\
.##.##..##.#...\n\
....#.##..#...#\n\
..#.#.###..#...\n\
\n\
......#..#.\n\
.###.######\n\
###...#..#.\n\
.#.###.##.#\n\
#..##......\n\
##..#.#..#.\n\
##..#.#..#.\n\
#..##......\n\
.#.###.##.#\n\
###...#..#.\n\
.##########\n\
......#..#.\n\
...###....#\n\
..#...####.\n\
.#.#.#.##.#\n\
\n\
#.##..##.##\n\
###.##.####\n\
#..####..#.\n\
#..####..#.\n\
###.##.####\n\
#.##..##.##\n\
.........#.\n\
#...##...##\n\
###.##.###.\n\
....##....#\n\
#..####..#.\n\
\n\
.#.##.....#.##.#.\n\
.##...####.####.#\n\
......###........\n\
.#...##..#......#\n\
.#...#.#.##....##\n\
#.#.#..###......#\n\
.#.##.....######.\n\
.#.##.....######.\n\
#.#.#...##......#\n\
\n\
###..##..\n\
######..#\n\
...##....\n\
##.#.#.##\n\
###..#...\n\
###..#...\n\
##.#.#.##\n\
...##....\n\
###.##..#\n\
\n\
.....#....#.#\n\
.##.#.##.####\n\
#####..###..#\n\
.##.###.#.##.\n\
....#.#.....#\n\
#..#..#....#.\n\
......##.#...\n\
#######..#.##\n\
###.###.####.\n\
####.##...#.#\n\
...........##\n\
....#.#.##.#.\n\
#####.#.##.#.\n\
#####..#.#.#.\n\
#..##..####..\n\
#..##..####..\n\
#####..#.#.#.\n\
\n\
.#.#....#.###.#\n\
####...#..##.##\n\
#.#...#..#...##\n\
#.####..#.#..#.\n\
..#..##.#.#...#\n\
##..#..###.####\n\
##..#..###.####\n\
..#..##.#.#...#\n\
#.####..#.#..#.\n\
#.#......#...##\n\
####...#..##.##\n\
.#.#....#.###.#\n\
.#.#....#.###.#\n\
\n\
##..#..#..#\n\
##.########\n\
###..##..##\n\
..###..###.\n\
##.######.#\n\
##........#\n\
..##.##.##.\n\
....####...\n\
##..####..#\n\
...#....#..\n\
..##.##.##.\n\
\n\
##...##.####.\n\
#...#..##.##.\n\
.##.##.#.#..#\n\
..###..#####.\n\
..###..#####.\n\
.##.##.#.#..#\n\
#...#..##.##.\n\
##...##.####.\n\
##...##.####.\n\
#..##..##.##.\n\
.##.##.#.#..#\n\
\n\
.........#.\n\
##.#.#..###\n\
##.#.#..###\n\
.........#.\n\
#.#.##.#.#.\n\
#.##.#.#..#\n\
.##.##.#.#.\n\
###.###....\n\
#.#.####.##\n\
#.#.####.#.\n\
###.###....\n\
.##.##.#.#.\n\
#.##.#.#..#\n\
#.#.##.#.#.\n\
.........#.\n\
\n\
###....\n\
####.##\n\
###..##\n\
...##..\n\
...####\n\
....#.#\n\
##.#.##\n\
..#..##\n\
....###\n\
\n\
.#..#.###.#\n\
..##....###\n\
#.##.#..#..\n\
##..##.#...\n\
##..##.##.#\n\
##..####.#.\n\
##..####.#.\n\
##..##.#..#\n\
##..##.#...\n\
#.##.#..#..\n\
..##....###\n\
\n\
.##...#\n\
.##....\n\
####...\n\
.##..#.\n\
....#.#\n\
#####..\n\
#..##..\n\
....#.#\n\
.##..#.\n\
\n\
.....###..###\n\
#..#.########\n\
####.#......#\n\
#.###########\n\
#.###########\n\
#.##.#......#\n\
#..#.########\n\
.....###..###\n\
.##.##.####.#\n\
..#....#..#..\n\
..##.#.####.#\n\
#.###........\n\
....#.#....#.\n\
.#######..###\n\
.###.#.####.#\n\
#.#.#...##...\n\
##...#.####.#\n\
\n\
#....##.#.##.\n\
..#.#..#.#..#\n\
..##....#....\n\
###..####.##.\n\
#..##.....##.\n\
.#...#.######\n\
.#...#.######\n\
#..##.....##.\n\
###..###..##.\n\
..##....#....\n\
..#.#..#.#..#\n\
\n\
.##....\n\
##.####\n\
#.#####\n\
#..#..#\n\
.######\n\
...####\n\
...####\n\
###....\n\
.#.####\n\
##.....\n\
#.#####\n\
...####\n\
#..####\n\
...####\n\
#......\n\
\n\
....###.#\n\
#..###...\n\
####.##.#\n\
.....#..#\n\
####...##\n\
#..#..#..\n\
....##...\n\
.....#..#\n\
.##....#.\n\
.##..#...\n\
#####....\n\
.##...#.#\n\
.##......\n\
.##..#...\n\
.##...#.#\n\
#####....\n\
.##..#...\n\
\n\
###.##.##########\n\
...####...#..#...\n\
.#.#..#.#......#.\n\
##..##..########.\n\
#...##...##...#..\n\
###.##.##########\n\
##......###..###.\n\
.##....##......##\n\
..######..####..#\n\
##.####.###..###.\n\
.###..###..##..##\n\
....##...........\n\
##########....###\n\
.#.#..#.#.#..#.#.\n\
.#..##..#.#..#.#.\n\
..##..##...##...#\n\
..#....#........#\n\
\n\
#..#....#..####\n\
....#..#.....#.\n\
##.##..##.##.#.\n\
...######......\n\
#..#....#..#.##\n\
#..#....#..#.##\n\
...######......\n\
##.##..##.##.#.\n\
....#..#.....#.\n\
#..#....#..##.#\n\
..#..##..#....#\n\
#...####...###.\n\
#.#......#.#..#\n\
....#..#....#..\n\
...#.##.#....#.\n\
\n\
##..##..##.\n\
.#..#....#.\n\
######..###\n\
.#..#.##.#.\n\
#.##.####.#\n\
.####....##\n\
#.##.#..#.#\n\
.####....##\n\
.#..#.##.#.\n\
######..###\n\
######..###\n\
######..###\n\
......##...\n\
.##.#....#.\n\
#.##.####.#\n\
\n\
#...#.#.#........\n\
#.#.####.########\n\
####.#.#..##..##.\n\
#.#######.######.\n\
#.###.###.##..##.\n\
#.###.#.#########\n\
##.#.############\n\
.#.....##........\n\
..#.###..########\n\
\n\
#..##.#...#\n\
#...#..###.\n\
##...#.####\n\
.##.##.#.##\n\
.##.##.#.##\n\
##...#.####\n\
#......###.\n\
#..##.#...#\n\
.##..#.#.##\n\
.##..#.#.##\n\
#..##.#...#\n\
\n\
.###.##.##.\n\
#.##..#....\n\
#..#.###..#\n\
#..#.###..#\n\
#.###.#....\n\
.###.##.##.\n\
.#.#####..#\n\
...#.#.....\n\
##.....####\n\
\n\
##..#..#..#\n\
##..#..#..#\n\
...#..#.#..\n\
.#.##..##.#\n\
###......##\n\
#.###..###.\n\
###.####.##\n\
###.#..#.##\n\
#..#.##.#..\n\
##........#\n\
..#.####.#.\n\
..#..##..#.\n\
....#..#...\n\
\n\
###...####....#\n\
..#..#.#.#.##.#\n\
..#..#.#.#.##.#\n\
###.#.####....#\n\
#.#..##........\n\
..##.##########\n\
##..#..#.......\n\
#...#.#.#######\n\
#..###.###.##.#\n\
##..###########\n\
#..#..#.##.##.#\n\
#...###..##..##\n\
.##....#..####.\n\
#.###...#.#..#.\n\
###.....#..##..\n\
\n\
....####.\n\
.#.......\n\
....####.\n\
#........\n\
#........\n\
....####.\n\
.#.......\n\
.#..####.\n\
#.###..##\n\
\n\
.#.##.##.....##..\n\
.######.#..######\n\
#....#..#.##....#\n\
..####.###.##..##\n\
..#..##..#...###.\n\
.##.##.#.....##..\n\
.##.##.#.....##..\n\
\n\
..........#####\n\
.#..##..#..#.##\n\
#..#..##.##.#..\n\
####..####.####\n\
#.##..##.##.###\n\
...#..#...#..##\n\
.#.####.#.#####\n\
...#..#...#.#..\n\
.#......#......\n\
...#..#...#..##\n\
#..####..##..##\n\
\n\
...##.#..\n\
##.#...##\n\
...#..#.#\n\
...#..#.#\n\
##.#..###\n\
...##.#..\n\
..##...##\n\
#####.###\n\
####.##..\n\
..#.#####\n\
####..#.#\n\
....##...\n\
##.###.#.\n\
##..###.#\n\
####.#.##\n\
\n\
..#.#.#\n\
.##.##.\n\
#####..\n\
####.#.\n\
##.#..#\n\
##.#..#\n\
####.#.\n\
\n\
..##..#.##.#.\n\
#.###.######.\n\
##..##.#..#.#\n\
.#.##...##...\n\
..####.####.#\n\
...#.###..###\n\
...#.###..###\n\
#.####.####.#\n\
.#.##...##...\n\
##..##.#..#.#\n\
#.###.######.\n\
\n\
..#####..#.....\n\
.##.#.#......##\n\
.#####.###..###\n\
##......###.#..\n\
###..##.#..#.##\n\
..##.###....#..\n\
.#.##...####...\n\
.#.##...###....\n\
..##.###....#..\n\
###..##.#..#.##\n\
##......###.#..\n\
\n\
.##......##.#....\n\
#####..######....\n\
##.#....#.####..#\n\
..##.##.##..#.##.\n\
..#......#..##..#\n\
#.#..##..#.######\n\
...#....#.....##.\n\
...######...#....\n\
...##..##....#..#\n\
#.###..###.#.....\n\
.#...##...#...##.\n\
#.#.#..#.#.#.....\n\
.#...##...#.##...\n\
##...##...###....\n\
..#.#..#.#....##.\n\
..##.##.##..#####\n\
.##.#..#.##.#.##.\n\
\n\
#....#.#.#..#.#..\n\
..####..#.#######\n\
..####..#.#######\n\
#....#.#.#..#.#..\n\
.#.#####..#####..\n\
#..###.#..#.##..#\n\
#..#.#...###.###.\n\
#.#.##.##....##.#\n\
#.#.#....##...#..\n\
..##.##.......#..\n\
..##.##.......#..\n\
#.#.#....##...#..\n\
###.##.##....##.#\n\
#..#.#...###.###.\n\
#..###.#..#.##..#\n\
\n\
.##......##..\n\
.##..##..##..\n\
#..#.##.#..##\n\
#..######..#.\n\
#..#....#..##\n\
.##.#..#.##..\n\
.##.####.##.#\n\
##.#....#.###\n\
####....#####\n\
\n\
#..#####.\n\
.....#...\n\
#..#..#..\n\
#..#..#..\n\
.....#...\n\
#..#####.\n\
.####....\n\
######.##\n\
#..#.#.##\n\
....##.#.\n\
....##...\n\
####.#..#\n\
#..#.....\n\
######.#.\n\
.##.##..#\n\
\n\
......#\n\
#....##\n\
....#..\n\
##..##.\n\
......#\n\
##..###\n\
......#\n\
..##...\n\
..##..#\n\
#....##\n\
#....##\n\
\n\
.#..####..#..##\n\
..#.#..#.#..###\n\
##..#..#..##...\n\
...#.##.#...###\n\
##..####..#####\n\
.#...##...#.###\n\
.##..##..##.###\n\
..#......#..###\n\
#.#......#.####\n\
############...\n\
#.#.##.#.#.#.##\n\
#..........####\n\
..##.##.##...##\n\
.##.####.##.#..\n\
#..######..#...\n\
\n\
##.###..#.###.###\n\
.###.##......#.##\n\
..#..##..##.##.##\n\
..#..##..##.##.##\n\
.###.##......#.##\n\
##.###..#.###.###\n\
..#.#.#..#..###..\n\
.#.#.#.#.#.#####.\n\
.#.#.#.#.#.#####.\n\
..#.#.#..#..###..\n\
######..#.###.###\n\
.###.##......#.##\n\
..#..##..##.##.##\n\
\n\
##..##..####..#\n\
.#.#.....##....\n\
..##.#.##..##.#\n\
.#..##.##..##.#\n\
.###..#.#..#.#.\n\
##...###....###\n\
#...####....###\n\
#..#..#......#.\n\
...#..#......#.\n\
\n\
#.#..#.#.##\n\
#########..\n\
..####..#..\n\
#......#.##\n\
#......#...\n\
#.####.####\n\
..#..#..###\n\
#########..\n\
..#.....###\n\
.#.##.#.###\n\
#.#..#.##..\n\
\n\
####..##.\n\
####..##.\n\
..###..##\n\
#...#...#\n\
...#.##..\n\
#...#.###\n\
#####...#\n\
..###.#..\n\
..###.#..\n\
#####...#\n\
#...#.###\n\
...#.##..\n\
#...#...#\n\
..###..##\n\
####...#.\n\
\n\
.######....\n\
..#........\n\
###.#.#####\n\
###..#.#..#\n\
##..#.#....\n\
.#.###.#..#\n\
##.####....\n\
#..##..#..#\n\
.#..####..#\n\
....####..#\n\
#..##..#..#\n\
##.####....\n\
.#.###.#..#\n\
##..#.#....\n\
###..#.#..#\n\
###.#.#####\n\
..#........\n\
\n\
#.####.###..###.#\n\
..####..#.......#\n\
#.#..#.###..###.#\n\
..####...#..#...#\n\
########......###\n\
##.##.###....###.\n\
.##..##..#..#..##\n\
..####..#....#..#\n\
#......##.##.##..\n\
###..#####..#####\n\
########.#..#.###\n\
\n\
#.#.#.#\n\
..####.\n\
##.####\n\
#..##.#\n\
#.#..#.\n\
.#.....\n\
####.##\n\
.##.#.#\n\
.#..#.#\n\
..#####\n\
..#####\n\
.#..#.#\n\
.##.#.#\n\
\n\
..#....\n\
...####\n\
..##..#\n\
##.#..#\n\
...#..#\n\
##.....\n\
....##.\n\
.##....\n\
##.....\n\
####..#\n\
###....\n\
\n\
.##.##.##..#..#..\n\
.........#.#..#.#\n\
#...##...##....##\n\
#.#....#.#.#..#.#\n\
#.######.#.####.#\n\
...#..#...######.\n\
##......#########\n\
\n\
..#.###..\n\
....####.\n\
..#.####.\n\
###...##.\n\
.....#.##\n\
#####.##.\n\
###......\n\
#.#.#.##.\n\
##.#.##..\n\
##......#\n\
##.#.##..\n\
..#.#...#\n\
...##...#\n\
...##...#\n\
..#.#...#\n\
\n\
.####.#.####.##\n\
.##...##.#..#.#\n\
#..##.##.###..#\n\
.##........####\n\
#..##..#.#..##.\n\
....##...###...\n\
.##...###...###\n\
.##...###...###\n\
....##...###...\n\
\n\
..#.#..##.#..##\n\
#.#.##.###.##..\n\
#.#####.....#.#\n\
..#....########\n\
.#.#.#.##.#..##\n\
.#.#.#.##.#..##\n\
..#....########\n\
\n\
##.#####..#######\n\
###..#.#...##..##\n\
#....#..#.#......\n\
#.#..#...####..##\n\
....#.###########\n\
.....####..######\n\
.#..###.....#..#.\n\
##.###.#.#.##..##\n\
###.#.##.#.##..##\n\
\n\
#..#..#...##.\n\
#..###...#..#\n\
###.##..#####\n\
.#..#.#......\n\
.####.###.##.\n\
#.##..#.#....\n\
####..#.#....\n\
\n\
#.#..####..#.##\n\
..#...##...#...\n\
#.##########.##\n\
..####..####..#\n\
#####.##.######\n\
.#.##.##.##.#.#\n\
##..######..##.\n\
.#...#####..#.#\n\
.###..##..###.#\n\
#.#.#.##.#.#.##\n\
.#.#..##..#.#..\n\
##..######..##.\n\
.#.##.##.##.#..\n\
.#..#....#..#.#\n\
.#..#....#..#.#\n\
\n\
.#####...\n\
##....#.#\n\
#..#.#.#.\n\
..#.##...\n\
#.#.##...\n\
#..#.#.#.\n\
##....#.#\n\
.#####...\n\
.#.###.#.\n\
...###...\n\
...###...\n\
\n\
##.######.###\n\
####.##.####.\n\
.##.####.##..\n\
###..##...###\n\
#####..#####.\n\
###.####.###.\n\
#...####...#.\n\
##.#.##.#.##.\n\
.#.#.##.#.#..\n\
##.##..##.###\n\
##........###\n\
##........###\n\
##.##..##.###\n\
.#.#.##.#.#..\n\
##.#.##.#.##.\n\
#...####...#.\n\
###.####.###.\n\
\n\
#.##.##..####.#\n\
......##....#..\n\
..##..#...##..#\n\
......#####....\n\
..........#.##.\n\
..##..####.####\n\
.#....##......#\n\
##..##.##..####\n\
.......#####...\n\
##..####..#.#.#\n\
.......#.##.#..\n\
..##....##...#.\n\
.#..#......####\n\
#######.#.##...\n\
#######.#.##...\n\
\n\
#.##.##.#\n\
##..#..#.\n\
.####..##\n\
##..####.\n\
.#..#..#.\n\
#....##..\n\
#.##.##.#\n\
\n\
##.##.#..\n\
##..##.##\n\
###.#....\n\
##.......\n\
##.#..#..\n\
..#.###..\n\
..#######\n\
......#..\n\
###.#....\n\
....#.###\n\
..###..##\n\
.......##\n\
...######\n\
..#....#.\n\
..#..#.##\n\
\n\
##...........\n\
......#..#...\n\
##...........\n\
#..#.#.##.#.#\n\
#..#.#.##.#.#\n\
##...........\n\
......#..#...\n\
##...........\n\
#.#.##.##.##.\n\
.....######..\n\
..###......##\n\
#.##.#....#.#\n\
.##.##.##.##.\n\
.....######..\n\
####.#.##.#.#\n\
#####.####.#.\n\
##.###....###\n\
\n\
#.#..#..#.#\n\
..##.##.###\n\
..##.##.###\n\
#.#..#..#.#\n\
##...#.##.#\n\
###...#.##.\n\
##.###.....\n\
#..#.##.#.#\n\
#....##.#.#\n\
##.###.....\n\
###...#.##.\n\
\n\
####.#.##...#\n\
.##...##.####\n\
#####...#....\n\
.....#.##.###\n\
########.#...\n\
####.#.##.###\n\
....###.####.\n\
.....#.##..#.\n\
######..##.##\n\
\n\
..#.##.#.##\n\
.#....#....\n\
####...##..\n\
####...##..\n\
.#.........\n\
..#.##.#.##\n\
.......##..\n\
###.#.##.##\n\
...#.#.....\n\
\n\
..#..#.####.#\n\
#####.##..###\n\
##.#.##.##.##\n\
..#..###..###\n\
###.###.##.##\n\
..#...##..##.\n\
###.#........\n\
##.#.........\n\
####..#....#.\n\
...#...#..#..\n\
##...##....##\n\
...#..#.##.#.\n\
....#.######.\n\
###.#..#..#..\n\
..#...#....#.\n\
\n\
####.#...\n\
....#....\n\
.##..#.#.\n\
.##..#.#.\n\
....#...#\n\
####.#...\n\
########.\n\
\n\
..####.#.\n\
.#..##...\n\
.#..##...\n\
..####.#.\n\
.###...#.\n\
##.#..#.#\n\
##.#..#..\n\
##.#..#..\n\
##.#..#.#\n\
.###...#.\n\
.#####.#.\n\
\n\
..######.\n\
##.####.#\n\
...####..\n\
##..##..#\n\
####..###\n\
###.##.##\n\
..#.##.#.\n\
##......#\n\
..#.##.#.\n\
...####..\n\
####..###\n\
...#..#..\n\
###.##.##\n\
###.##.##\n\
##.####.#\n\
...###...\n\
###....##\n\
\n\
#..#..#..#.###...\n\
.##....##..####.#\n\
...#..#...##..#..\n\
####..####..#...#\n\
.########..#..#.#\n\
###.##.####...#.#\n\
...####......#..#\n\
##..##..###..#...\n\
.#.#..#.#..#.#...\n\
#........###.##.#\n\
#..#..#..####.###\n\
.##.##.##.#..#.#.\n\
###....###.##..##\n\
###....###.##..##\n\
.##.##.##....#.#.\n\
#..#..#..####.###\n\
#........###.##.#\n\
\n\
####.#.##\n\
#..###.##\n\
#..#.####\n\
.##.##..#\n\
.##...##.\n\
####..#..\n\
....#.##.\n\
#..#..###\n\
####.....\n\
.....#...\n\
.##..##.#\n\
....#.#..\n\
....#.#..\n\
.##..##.#\n\
.....#.#.\n\
####.....\n\
#..#..###\n\
\n\
###.###\n\
##...#.\n\
....#.#\n\
##.#..#\n\
##.#..#\n\
....###\n\
##...#.\n\
###.###\n\
....##.\n\
..#.###\n\
###..##\n\
...###.\n\
###.#..\n\
\n\
###....##\n\
...#..#..\n\
###.##.##\n\
##.####.#\n\
##.#..#.#\n\
...#..#..\n\
###....##\n\
###....##\n\
...#####.\n\
####..###\n\
##.####.#\n\
\n\
.#..##.#.##..###.\n\
.#...##.#.#.#...#\n\
.#...#.#....#.#.#\n\
..#..#####...##.#\n\
..#..#####...##.#\n\
.#...#.#....#.#.#\n\
.#...##.#.#.#...#\n\
.#..##.#.##..###.\n\
##..#.##.#.###..#\n\
#...#..###...###.\n\
..#..#.#.####.###\n\
..##.#.#.##.##...\n\
..##.#.#.##.##...\n\
..#..###.####.###\n\
#...#..###...###.\n\
##..#.##.#.###..#\n\
.#..##.#.##..###.\n\
\n\
##.############.#\n\
###.#.######.#.##\n\
..##.#..##..####.\n\
##.#..#.##.#..#.#\n\
..#####....#####.\n\
##...#..##..#...#\n\
..#.#.#....#.#.#.\n\
...#..#.##.#..#..\n\
..#.##..##..##.#.\n\
........##.......\n\
###..##.##.##..##\n\
##...#.####.#...#\n\
..#.##.####.##.#.\n\
.....#......#....\n\
#####.#....#.####\n\
..#..########..#.\n\
#####.######.####\n\
\n\
.###.#.#....#\n\
..##.#.#....#\n\
#.#.#.##....#\n\
###.#.##....#\n\
.##.###..##..\n\
#.#..#.######\n\
#..###.......\n\
\n\
....##..##...\n\
##..#....#..#\n\
###.######.##\n\
##..##..##..#\n\
######..#####\n\
.....####....\n\
#####....####\n\
#...#....#...\n\
.....#..#....\n\
...#.####.#..\n\
##.#..##..#.#\n\
\n\
..###..####\n\
..#..##.###\n\
.###..#....\n\
.###..#....\n\
..#..##.###\n\
..####.####\n\
#..##.#....\n\
\n\
##.##...#....\n\
###.#.#.##..#\n\
........##.#.\n\
######....##.\n\
#..#.....##..\n\
###.##.#.#..#\n\
##...#..#..#.\n\
##.##..#.#.##\n\
##.##..######\n\
....#..#####.\n\
...#.....###.\n\
...#.....###.\n\
....#..#####.\n\
##.##..######\n\
##.##..#.#.##\n\
\n\
...#...#####.\n\
..##.##..##..\n\
..##.##..##..\n\
...#...#####.\n\
##...#.###..#\n\
###....#.#...\n\
#.###.#..##..\n\
#.##.#..#....\n\
#.##.#..#.#..\n\
\n\
#....###..#.#\n\
#....###..#.#\n\
.####.##.....\n\
.####..##.#..\n\
.#..#..#.###.\n\
..##....#...#\n\
.####.#...#..\n\
#....#.##...#\n\
.........#.##\n\
..##..#..#..#\n\
........#.#..\n\
#.##.#....##.\n\
#....#.##.###\n\
.####..#.##.#\n\
.#..#....##..\n\
#.##.##.....#\n\
#.#..#..###..\n\
\n\
...###.\n\
..#####\n\
...#.##\n\
####.##\n\
##.###.\n\
#.#...#\n\
....##.\n\
##...##\n\
##...##\n\
\n\
..######.\n\
##..##..#\n\
##..##..#\n\
..#....#.\n\
..#.##.#.\n\
###.##.##\n\
..#....#.\n\
....##...\n\
.##....##\n\
##.#..#.#\n\
##.#..#.#\n\
###.##.##\n\
...#..#..\n\
##..##..#\n\
..#.##.#.\n\
...####..\n\
..#....#.\n\
\n\
####.##..####\n\
...#.#.#..#.#\n\
##.###.....#.\n\
##.###.....#.\n\
.....#.#..#.#\n\
####.##..####\n\
###.#...##.#.\n\
\n\
#.#............\n\
###.#..........\n\
...######..####\n\
###.#..#.##.#..\n\
.#....##.##.##.\n\
###...##.##.##.\n\
..#.#....##....\n\
\n\
########.##.#\n\
#.####.#####.\n\
##########.##\n\
######.#.###.\n\
..#..#..##...\n\
#.#..#.#..###\n\
..#..#...###.\n\
...##...###..\n\
#..##..##...#\n\
##.##.###.##.\n\
##.##.###.##.\n\
\n\
###.#####.#\n\
###.#####.#\n\
#..##.####.\n\
####.#...#.\n\
#.....#..##\n\
.##.#..##.#\n\
##.##.#...#\n\
##.##.#...#\n\
.#..#..##.#\n\
#.....#..##\n\
####.#...#.\n";
#endif

int main()
{
    const char* ptr = data;

    int total = 0;
    while (*ptr) {
        const char* start = ptr;

        while (*ptr++ != '\n');
        const int cols = ptr - 1 - start;
        int rows = 0;

        ptr = start;
        uint32_t syms = (1 << cols) - 2;

        while (*ptr && *ptr != '\n') {
            for (int i = 1; i < cols; ++i) {
                if ((syms & (1 << i)) == 0) continue;
                for (int j = 0; j < i && i+j < cols; ++j) {
                    if (ptr[i+j] != ptr[i-j-1]) {
                        syms &= ~(1 << i);
                        break;
                    }
                }
            }
            ++rows;
            ptr += cols + 1;
        }

        int val = 0;
        printf("%04x\n", syms);

        if (!syms) {
            const char* end = ptr;
            ptr = start;
            syms = (1 << rows) - 2;

            for (int k = 0; k < cols; ++k, ++ptr) {
                for (int i = 1; i < rows; ++i) {
                    if ((syms & (1 << i)) == 0) continue;
                    for (int j = 0; j < i && i+j < rows; ++j) {
                        if (ptr[(i+j) * (cols+1)] != ptr[(i-j-1) * (cols+1)]) {
                            syms &= ~(1 << i);
                            break;
                        }
                    }
                }
            }

            ptr = end;

            printf(" %04x\n", syms);
            val = __builtin_ctz(syms) * 100;
        }
        else {
            val = __builtin_ctz(syms);
        }

        printf("\n%d\n", val);
        total += val;

        if (*ptr) ++ptr;
        
    }

    printf("\n%d\n", total);
 
    return 0;
}