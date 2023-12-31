#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = ".|...\\....\n\
|.-.\\.....\n\
.....|-...\n\
........|.\n\
..........\n\
.........\\\n\
..../.\\\\..\n\
.-.-/..|..\n\
.|....-|.\\\n\
..//.|....\n";
#else
const char* data = "\\.-/...-\\......../.|......|.........../..-..................|....-.\\............................../...........\n\
..........-.............\\...\\.........|..\\.......................-..........-.......\\.../.......-/............\n\
........|.............-.....|..|........................\\.\\.../../.....-........................\\.............\n\
....../\\.....................|........|.....-...........-..\\......./-.............................-........./.\n\
.\\..\\.............-........|.......|...|..............................-..-......-......|......................\n\
..........|/...\\.............\\............../-......\\.../........................./............./.../......../\n\
..............\\......./..-...............|...........\\...|............|...........-..-............|...........\n\
..........-...............|..././...........................................|...........-.../.-.|.....|.......\n\
.........-...|..................-...........\\.-...................../.../........................|/......./...\n\
.................................-.././...................|\\..............|.........../.......................\n\
.............../......-.................\\....--.....-............................./.|./.................|.....\n\
..../....|...|..................../....\\...|............|...../.././../--......\\.\\....|.......-............\\./\n\
......\\....-...|......\\...........-......./..................../.....-..............\\.............|......./...\n\
............|.\\...................|.........................|........\\............................./.\\.......|\n\
............../...............................|.........../.................\\-.................../........../.\n\
.|....|...........|..................|......./|\\\\.|\\.-...\\..../.........//........|............../...........|\n\
........................|.....--......|.............-..................\\...../..../.......-....|...\\..........\n\
...............\\........-........../...-|............\\......./.\\...........-|................/.-..............\n\
..../....|.\\.............|......|...............................................|.................\\...........\n\
.\\...\\......./.....|.\\....|..................-../|-......................|.................-..|......\\........\n\
.../.........................................\\.....././....................|.......-........-......\\....|.....\n\
.................\\./\\..-../......../...\\................................-......-..\\...........................\n\
.......--..-........\\/........./........../...............\\..............\\...-........-......-../.........|...\n\
.|...............-........./..............\\..\\......................|......./..|..............-.......|.|.....\n\
........./............\\............|........\\...|...\\........-.......................|...................\\....\n\
..................-\\......../.................\\.......\\.....|...........|..|-........\\.............|.......\\\\.\n\
...|.........../.......|...../...|...\\........\\\\...................................-............-../...../....\n\
......./....................|.........../...-................-....................\\.......|...................\n\
\\....\\.......................-.|.\\...../..-...................|......................-..................../...\n\
......|........-|...-/.|........................./.....|.....\\.........-........-......-.............././.....\n\
......|.............-.\\...............................\\..|....\\..............|./..|./...\\......./..........|\\|\n\
......././.\\...................-...-............/...................|/..........-\\./.................|........\n\
.........|..........|\\../.........\\..............-.........\\................../\\./.............-..............\n\
...\\.......................\\..................................\\...........................................|...\n\
...|........\\..........|....|..../..|.........-\\.................-...-..\\.\\.........\\............|....|...//..\n\
.././.....|.....-..........|.................\\.........\\........./......-...-.\\.\\.....................\\.......\n\
......./....\\........\\\\..\\...|...../.................|.......|.\\.....\\............................../\\....\\...\n\
.........\\......../.\\............|...............................................................|/...........\n\
.\\.....-\\-.........|.........|....|...........-....\\.....|................\\...............-............./.....\n\
.....-..............................-.....-..........-..................../..../........................|.....\n\
...........\\...........-/....................-.....-............/........|........-/.........--./........-..\\\\\n\
.|................................................|..................-.......|.............|\\/................\n\
.|.................-.-..........|.........................../..../....../.....\\...../......./.................\n\
........./..../..|..........\\..................\\....................................................../.......\n\
.........\\............|.../......../........|......................../..../...|.\\...\\......................|..\n\
........./................\\.............\\........|....................\\./......|.........-....../...../.......\n\
..../.....|...../........-...................|............/.....||...............-....-.-.....................\n\
\\./...\\.|...|.............|.......\\....../|...\\\\/.|.../....-.........\\\\|..|....-........\\............-.......|\n\
......\\-..............|.....\\.....|...\\..............................|.....................\\......-.....|.....\n\
......\\.-..........-..|......................................-..../......................../........\\.......|.\n\
/...................-...\\.........--.............................\\...........\\................|......./.......\n\
.................-......-..../..\\.............-./|......-....\\...........-...................\\.....|........-.\n\
|........--.............\\...-....|.......|.\\............|...../\\...........\\/../............................-.\n\
...|./-..\\.|...........\\........../..............................\\......-.......-.....|..........-........./..\n\
.......-|..................-..........|..-............................../.............|..|.||.................\n\
....-......................\\....\\..................\\......./............./..-........|..............-....|....\n\
-..........-.........-.../|........--.............-................|..../|.................|..................\n\
...\\......./..\\..\\......./|.....|-.............-............................\\..\\......\\...-..\\...............\\\n\
./......................|..........\\...........|.|.......\\..........\\......................................\\..\n\
................|...............-.../....\\......./.\\........-..............................|...-....-.........\n\
..\\.......................\\..../..|.-.........-.............\\.......|../.|.|..|........|..............-.......\n\
...........\\................\\..........................\\.....................\\........|.......................\n\
..........|....\\.......\\...........|...../......................................./...\\.../........../.........\n\
./...............\\...........|..-....-./..\\...\\...\\../...............-\\............\\....\\............-........\n\
././............|................|........../...\\...../.............-....-.............\\......................\n\
....-.|..................../.............................-...............................|....................\n\
..-......|....-.........-...\\......\\.........||....-.\\............................-...|..............|........\n\
........\\...........\\.-.......\\.../.........\\.../.....|.................../..|..|....\\..../..-................\n\
..........-..................\\..|...|.|..\\......................./...........-......./.............|..\\...../.\n\
.\\......|\\.|..\\.......|\\.-.......-........../........../..........\\.........../.........|.....................\n\
./..........|..................//.|......|........-...\\...//............-.../..............|.......-....-.....\n\
...............\\......\\........|.-................\\......-...................|.............-............-.-...\n\
...........................\\/...........\\../..\\....................\\...........|.............-..........-.....\n\
.............../........\\|.........\\..........-......../............-..........|........|/....................\n\
....\\................-..................././........|.....|...........................-..|....................\n\
\\-............-.......\\......\\.................../.......-.../............/....-..\\.......|................|..\n\
.........................../....../.|...\\/...\\........-|.|.......\\..-........-............................../.\n\
.................\\.....................|..........|.............|......|/.\\..........................-........\n\
....\\../................................|.......-......|.................-......................|...-.../.....\n\
....-.........|..../|..............................-|...............................-..-......\\.....-.........\n\
./\\...............|.|..............-./..|........./...................................................\\.......\n\
..............-....\\..|....../.....\\.............\\..............................-...-..../.....|..............\n\
........-.........|..............................................-....\\--...........|\\...................../..\n\
................/.|.................-....|......./............-...................../.-./\\................|...\n\
................|............................../..-./.....|..-........................./.....|..............-.\n\
....../........../.......|...|.....\\........./.............|..................................|.|.............\n\
....................................................||.....|................/......-....../....../............\n\
.........../.....\\...................|...........\\../....................................../.............../..\n\
./.|............../.............................\\..|....\\-............./......................................\n\
.........\\................../-.....|...........\\................|...../..................................|....\n\
..|...../.....|...............\\.....-.................................|/............-..|..-...|......-........\n\
....|....-..............|.......|............./\\-...........\\//.........|...........\\...../..............--...\n\
.............-........\\|...........................-....../....||............/......./....................../.\n\
|..................-......\\.........-.......|..............................\\.|/..................\\......\\.-...\n\
....../.......................|........|..|.\\...........|.........\\................\\\\..................\\.../..\n\
...........-....|...........||...-.......|.|....-.....\\\\-................|.........../..................\\/....\n\
................|.-.................|-./..-..|.........-..............-.........-../........................-.\n\
.....................-.....................................|.........\\......||./................|.............\n\
............/...-............|......./......................................../..........................-....\n\
..../.......\\.-............|..........|....-...........\\.-.................................\\./...|............\n\
...........|.-........|.|....-...........\\......-...-..........|.\\.|.|.....\\....\\............../..............\n\
......\\...\\....../....\\......\\.|......................./.......................\\.................../..../\\....\n\
...../.|...............|.../\\.........................................-...........|./........................|\n\
.........................-.-.......\\./..........|.........|/.......-......................-...-..|\\|........\\.\n\
..................|......-..................|..........\\..-../........................-......\\...\\............\n\
..|...............\\.............../.........-./............../.../..../.|\\......\\..../-.....|....-.........|..\n\
...-..-..............--...|...................................................|.-.../.../.....\\.....\\.........\n\
.\\./.../..............././.........\\.........|..\\..........\\.................\\..|.....-......-................\n\
......-...................|../....................|...............|.............|/..\\.......|........\\......|.\n\
......\\/.....|................./..................................|.......|./........|.............-...-......\n";
#endif

#define MAX_COLS 111
#define MAX_ROWS 110

uint8_t grid[MAX_ROWS*MAX_COLS] = {};
int rows;
int cols;

#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3

const char* move(const char* ptr, int dir) {
    switch (dir)
    {
    case UP:
        ptr -= cols;
        break;
    
    case RIGHT:
        ptr += 1;
        break;
    
    case DOWN:
        ptr += cols;
        break;
    
    case LEFT:
        ptr -= 1;
        break;
    
    default:
        fail();
        break;
    }

    if (ptr < data) return NULL;
    if (ptr - data >= (rows*cols)) return NULL;
    if (*ptr == '\n') return NULL;

    return ptr;
}

void beam(const char* ptr, int dir)
{
    //printf("*");
    while (ptr) {
        //printf("%c", *ptr);
        int dir2 = -1;
        if (grid[ptr - data] & (1 << dir)) break;
        grid[ptr - data] |= (1 << dir);
        switch(*ptr) {
            case '.': break;
            case '/': dir ^= 1; break;
            case '\\': dir ^= 3; break;
            case '|': if (dir & 1) { dir = UP; dir2 = DOWN; }; break;
            case '-': if ((dir & 1) == 0) { dir = LEFT; dir2 = RIGHT; }; break;
            default: fail();
        }
        if (dir2 != -1) beam(move(ptr, dir2), dir2);
        ptr = move(ptr, dir);
    }
    //printf("\n");
}

int main()
{
    const char* ptr = data;
    int dir = RIGHT;

    while (*ptr++ != '\n');
    cols = ptr - data;

    rows = 1;
    while (*ptr) {
        while (*ptr++ != '\n');
        ++rows;
    }
    printf("%d %d\n", cols, rows);

    int total = 0;

    beam(data, RIGHT);

    for (int i = 0; i < rows*cols; ++i) {
        if (grid[i]) {
            printf("#");
            ++total;
        }
        else {
            printf(".");
        }
        if (i % cols == cols - 1) printf("\n");
    }

    printf("\n%d\n", total);
 
    return 0;
}