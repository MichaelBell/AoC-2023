#include <uart.h>
#define printf uart_printf

#include <stdbool.h>

#if 0
const char* data = "467..114..\n\
...*......\n\
..35..633.\n\
......#...\n\
617*......\n\
.....+.58.\n\
..592.....\n\
......755.\n\
...$.*....\n\
.664.598..\n";

#else
const char* data = "...788.............................54.........501...........555.........270.................................521......893....................\n\
..../..*963........................*..860......................*....53...../.....................52.................&....347........428*522.\n\
............*......41..481+.......462....$..187......678.......420....-....................&115.+...........................+...............\n\
............707....&.........562...........*..........*.....................438....................&877..660....199..145.........71.........\n\
.....210................356..*.........977.68.........38.......835.622.332.....*300.....131.422..............89..*.....+..........$.........\n\
..............14..312......+..926.....*.......529..*............*...*....*.............*......%...310.......*...835..................885....\n\
...416../467..........................423.....*...143...132..955...356...124.........588..947....*.....512......................134&.*......\n\
.....................*688...=....../..........194..............................................148........*815.......................785....\n\
..673/.....957...............103..104............................../..&.....888......408*703.....................@......896..4..526.........\n\
.......628....*..62.......15.....................885.............649.720.............................93........703..........#..*............\n\
...*....*....222..*.........*795..........%...+...#.....54.310.....................622....916.......=......./.........../.......493......956\n\
418..*..57........125...141.........965..382..177.......*.....-.......390.....801....*.....&...659....406....912........614.448.............\n\
....926...................*.#.........%.................517......*......%........%.301............$........*.......694......$......&........\n\
..............$476....167....208..866...............86........818.200........588.......@....%.............534.....................324.......\n\
...571.977...............*...........*551...................................%.....992..172...849.................578........814.............\n\
......*........176.....705...../406...........42....226.........58....................................*621..........*......*....#54.........\n\
........194.....&....................905.567...*...............*..........287...........303.........82.......600.....642....672.............\n\
.........*...................*726......*....*.714...............341..530..+......415.../...............544....@.............................\n\
..795.429...........$.....615........582.240.......*153...#.........-............&.........313..........*...........#.......*...............\n\
..............443....471.......770..............651.....649.....&........*211..............*......548.235..........2.......898..............\n\
..........916..@..*...............*......966.................869......843......*........744..410..+..................777*....../...728......\n\
..976........*.....699.......763...893...*...462.......608*..................23.227.....................411.793..........984.683......*..985\n\
....*.2*....787........258......*.......878.........................923..............................*.....*........................674.....\n\
.241....966...........%.........804...............589....554...307.+....#.505..........&....332...449.190......780........*322..........-540\n\
.................126.....837.@.........701.......%.......&......&.....581....*371.......753..-....................$....426.....=............\n\
...........%.....*.......&....264.......*...................127....................562.......................379*...........786...#.-.......\n\
....376...596......................%...511.551.........868....*....................&............224..............992............817.309.....\n\
.......-...............374....-..164........*............./..627...340..274..710...................*.......347..............................\n\
...535..........195.......#..278............495....................$.......*....@.....805.570......724.....#.........98.....................\n\
...*...579*65.......................400*...........849......764@.........180..........&....+..576.............573...*.......................\n\
...................648.162...../733.....462...........*.................................&......#....484..10$....*...............981.........\n\
....712.....495.....*...$..........................932...............278..478.%728.....798.............*.......483.717@....593.....&........\n\
...........*.....738.......................474...........772..877*98....*.-.............................556................*................\n\
...870@..587.676............................*.......569..*............454.................=....832.249........369..264.........298*543......\n\
.............*....246.608*.305............227......*....429.....57..........889...745......648....*..........*.....*....................502.\n\
............901.....*......*......................55..............*704.264*...&........................543...234....859..$.............#....\n\
..................693....661.....*641.................909.....800.......................779.811....789.*.................90...954$..........\n\
637.....60....................607.........112........*..........@.89.....................#.....*...*....601....227..................32......\n\
...#......+....132........410........%.....-..795*....702..........%..........495.............285.438.............*711..........346...*332..\n\
......237................&......925..366..........340.........658......+..282.....532...................252.............195....@............\n\
.13......*95...879............................................*......169..@.........%.....782....%..%..-......202.973...............765.....\n\
................*......601.......864.....942.=195.=284........6.................351..../.#....618..409...........*...................*..965.\n\
......673...../..862.....&.........*.....................................381.........777..................644............612.......852......\n\
.......*....823...............211+..228......292*....418..290............*.................................*...-89..........................\n\
...363..526.....77..../413................$......208...............*....80.......835/.........-...*......458..........5*214.................\n\
..................*.&......206..........13.......................35..........338......%.......529..79..........718............&.............\n\
........#..840..710..112..*....308...........&...618......................%.........130...917..................*......739..221.........106..\n\
.....205...................417....*.....891..634....@.........241.........21..............*.........465......524...8...............*48......\n\
.265...........*33.....431.......770.......*...........923.......%...........*.......449...61......*..............*.........$...409.........\n\
.....403....202....226...&.............798..713....321................=...337..........*.........128.....826...=.33........655.......843....\n\
...................*............943..................*....449..576.835.............$...945................@..506.................88....*....\n\
........143...-.636...920......*...............=...580.......@...*.....729.........839...........................347...................608..\n\
........@...847.......*........167.546......485.................453....................365.905.643=.........692....*.........795............\n\
...................997.....919..........586..........374..............................*.....*.........529..*......34....660...&........573..\n\
..752...853......*............$...407*..............*...................928.......641.988..201...+......*........................$...+.=....\n\
....*......-..289.857.................403..........992......-.....206..&....../....*.............328.....28.........$..........957.552......\n\
.....155................506.761..............................902..+........202...578..*.............................700.................351.\n\
.........................*...../...............909%......737..........*267...........907....981..........273............887.&...............\n\
.135.945...............649..........319.......................413..797......468...............@................$.733.....*...155.904........\n\
........*510..508..964......*248...@.....68...........285.......*.......289....*.626+............76....#.....873.........723......*..800....\n\
.............*....&.......51.........244..*...754.....*....#.607........*....148.....................800...@...................895.....*....\n\
..863$....831..........................*.913.*.......326.215.............882...........774..................252....................#...929..\n\
................9..........438.......652........239.............................111...*......39.........497......./519.............743......\n\
..746.369...486.*....308......*...........736...*................495...............*...20.../............=..................%...........#...\n\
.....*......*....786....*..224.......5.........205...397..........+.........456....833.........523*.............638......292....399..855....\n\
...........135.........383...../...%..&.................*....335...........*.......................669.684*.......+............&.........980\n\
...............974*185........680.987.........114.......117.&......755....596.../450.............-.........571.....................818..*...\n\
..395.....................................823*......645...........*....#..............1...172...405....................*.....766....-..815..\n\
.....*....769.998........762.325*440.976.........................507..833.........604*...................282......$.926.668.#...............\n\
.....280.*.....*..75...................#......314.....666.................533..........789.......863............138...........494*955.......\n\
.........77.......*.....907....732..............-.....*...224............*....283$......*.............................................348...\n\
.................161.......*.......................106.......@...&........339............634..513.......729..68..........890.746............\n\
............................551............-...368......&......21.................520............*.......#.....*........*.....+..4..........\n\
..................*548....&.........843..290.....=......532.......................*.....190.393.404.........240..535..830...................\n\
......721$...............982..........*.............811..........................276......#..........753*...................715.202..375....\n\
..334..............................111..969.971........*..................199...............207......................792.......*.......*....\n\
......793-..640...........=...............@....+..763..591....542......................747...*...............220....@.............#....598..\n\
...........$..........&....723....72.652.........*..............#.....120...............*.....659.......%.....*...@...........435..41.......\n\
....*875..........22..958.........*.............480.....................*............876..............44.....608...305..593...-.............\n\
...........526...#...........329.208...@544..................885*751....756.74...........$139.=.........................*.........557....248\n\
950..570.....$.........&.......*...................=.......$..................$........-.......173..&801.........504..215...................\n\
........*.......924....658......41....142*........31..937...189.....100...........&....447.840.............................804..654.....%...\n\
.747......481...*..........849&...........836...........#............*...........447.-.....*..........862.....108....343.....*.-....41..91..\n\
...........*....783...........................................865..41.................154..520....367*.......*......*.....578........#......\n\
852...43....759.......516..66.....*....422.........978.93-...*.........@425.579..27..................../..751..326.347...................173\n\
.....*................*...*....204.627..$...........*..........57.287..............*........$755....356..........-.....77...................\n\
..428..342...$335........296......................971..............%......294.968.721.546......................$...........630..............\n\
................................649...........624..........-835.......-...%.....$........*........384.........18..131............545.654....\n\
....36.114..106.............853....@.........=.....737...........*....517...414.....784...607.........411........*...........=..............\n\
226*....*...*..........508.....*....................*.........303................../....-........................887..173....349.179....343.\n\
.....903.....473..............190.-702.734..........24..............734+................198.....191*402..810..........@.....................\n\
.........712.....405......967.................257............822...........664...........................*....+.$...........441.............\n\
....608...*.......*.........#..........796....*...../........................*................800.....747...939.356.45..325.........899.....\n\
......*..707.......629........570..358....*.66.....56......302...............804....+...290*...*....................*...$.......756..&..815.\n\
.....697......................-....*....357....878.........*......@...931/.......*.511.......................958..169.......772*.......+....\n\
...........777..369..............257.............@.567...334....785............171.........-....292...635...*......................@........\n\
347*..........*..*../........962....................................................968#...763..%....&....561.....136...327*777....159.708..\n\
....192....739..831.888.......*....304...................................715.........................................-......................\n\
...........................658...%.*....................71....762.......*.....&605...509.401...543..970..........761........382.............\n\
.....948.502...520&............188.689...................*......*........538............*.........#........947..@...........*.....530*......\n\
........*.................................309+.172*744....481.29....@........-716...........................................227.......56....\n\
...........*.....930.347&........................................111..6.......................578*..........&.188.......304.................\n\
......151...88...*.........697.........111-...546*.....663*249...........482*7..........327.......423....513...*........../.880.............\n\
...../.........309........*....-985.........%....................619...=...................*.................335.....808....*............141\n\
........740............414............624..10.720*395........91...../..520......164......318...........397..........*.......560.............\n\
........*..........27.................*.................736....*.+.............*....../...................@......344............361.....336.\n\
.333..271..25.............958*839...991.................*.........82..........624.....286...........663.*...535...........383*.....=........\n\
....*......-..........368.........=....................945....693....692..........769...............-...153...*...$811........277........981\n\
...667...................*.........687....235.................*.....*......210.......*.834.....$.............73...........&.......71........\n\
............-.....129....647.300..........................%....568...611..........262...*......742...............-213..754.....73.*....208..\n\
..9.......19....................=.129........719$.....795..82...........................375...................................*....235.+....\n\
...*...............................*...348............*.............260...638........................479........165....151...846.-..........\n\
..257.524.......695.......787...403...*.......336......63....788......%......*.162..%.......................854*.......*.........492........\n\
.........*377...../......$..........852...681....*............/.........923.......=.198..996.718.....809............443...............415...\n\
....267..............%.......................*...533......617...724........#...$...........&...&.......@.......700...........%418.....*.....\n\
145*............401..447.....634....&..819....9................*.......362.....241.....102..............................412.........929.14..\n\
.........642/...*.............*....324....*....................394...#....+.........................661...................*.773.........*...\n\
.....165........600.........492............253.918.......537.......140..+........*...................*.................773..*.....=.....433.\n\
.....%.....10...................................*..83......$...........241.......576........*417....969...........852&.....848.821..........\n\
.........../...153...........25*317......628.578....*....*.........*17...................227........................................995.....\n\
.....889*.........*.459..697............*........304......852...788....630....720*594............$...............910.801..296...939....*....\n\
223......235...607....*.*....802..249...233...............................$..............177/.734........828........*............/......830.\n\
....................439..944..*...*...*...............=..482..&...............839....................349...*...$........./...........$......\n\
..................%...........326....3.66..........628....*...350......544-...........763*.......83.......142..792....974....#....663.......\n\
...$...*....729.916...........................916......221................................689...............................456.........62..\n\
..621..436....*......#520..808........670....$......*..........121=...............780.........*844..........=..........827%......338...*....\n\
.............24............*............*........601.346...621......531.....452......*.....659.......-297..697..468................*.936....\n\
........265............905..64.&...589..960..................*.......*..........62..19.........152................*.......+.....243......962\n\
...........*..220......*.......757.#..............-270..697..588....461..263......*.......@373....*........464...244...688..............*...\n\
.........272..........993.536..............................*............&......961....=..........490..198.....*................181.....236..\n\
......$....................*..406......................*....238..94..74............349......723............646..328............*............\n\
.......139......./...........*..........624.........996.784.....*...-.........61.............+........*........*............981...557..66...\n\
..............313...776*....228...........*...749...........246.579...240.230..*.=611..........*....917..................+.......*..........\n\
.703..730.........................*961.764.......*......979*.........*....*...........=.....558.906...........58.875$..559.*274.549..819....\n\
...*..*.......637..............853............821.............65*676.47...272..=213....45.................321*..............................\n\
.661...964..............540.......................=....-.955............+...........$...........143.907..................1...10.............\n\
...........660...........*..........109$.......415..353.....*...........572......878....77.........*.....................$.....*131..182/...\n\
...........*.....963.....395..............871*............$..994...336.................................319.....88.620.......................\n\
.......&...625......*.........7*121...........494......=...8......*....@..............................*..........*......998*973.......$.....\n\
....691............614...795..........152............120...........238..496...........................477..........................994......\n";
#endif

const char* rows[256];
int num_rows = 0;
int row_len;

void fail() {
    printf("Error\n");
    while(1);
}

const char* read_num(const char* ptr, int* num) {
    *num = 0;
    while (*ptr >= '0' && *ptr <= '9') {
        *num *= 10;
        *num += *ptr++ - '0';
    }

    return ptr;
}

int gear_ratio(int row, int col) {
    int min_i = row == 0 ? 0 : row - 1;
    int max_i = row == num_rows - 1 ? row : row + 1;
    int min_j = col == 0 ? 0 : col - 1;
    int max_j = col == row_len - 1 ? col : col + 1;

    int num = -1;
    for (int i = min_i; i <= max_i; ++i) {
        for (int j = min_j; j <= max_j; ++j) {
            if (rows[i][j] >= '0' && rows[i][j] <= '9') {
                const char* ptr = &rows[i][j];
                while (*(ptr-1) >= '0' && *(ptr-1) <= '9') --ptr;
                int x;
                ptr = read_num(ptr, &x);
                if (num > -1) {
                    return num * x;
                }
                else {
                    num = x;
                    j += ptr - &rows[i][j];
                }
            }
        }
    }

    return 0;
}

int main()
{
    const char* ptr = data;

    rows[num_rows++] = ptr;
    while (*ptr) {
        if (*ptr++ == '\n') {
            rows[num_rows++] = ptr;
        }
    }

    num_rows--;
    row_len = rows[1] - rows[0] - 1;
    printf("%d %d\n", num_rows, row_len);
    int sum = 0;

    for (int i = 0; i < num_rows; ++i) {
        ptr = rows[i];
        while (*ptr != '\n') {
            if (*ptr == '*') {
                sum += gear_ratio(i, ptr - rows[i]);
                ++ptr;
            }
            else {
                ++ptr;
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
