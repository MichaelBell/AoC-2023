#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = "px{a<2006:qkq,m>2090:A,rfg}\n\
pv{a>1716:R,A}\n\
lnx{m>1548:A,A}\n\
rfg{s<537:gd,x>2440:R,A}\n\
qs{s>3448:A,lnx}\n\
qkq{x<1416:A,crn}\n\
crn{x>2662:A,R}\n\
in{s<1351:px,qqz}\n\
qqz{s>2770:qs,m<1801:hdj,R}\n\
gd{a>3333:R,R}\n\
hdj{m>838:A,pv}\n\
\n\
{x=787,m=2655,a=1222,s=2876}\n\
{x=1679,m=44,a=2067,s=496}\n\
{x=2036,m=264,a=79,s=2244}\n\
{x=2461,m=1339,a=466,s=291}\n\
{x=2127,m=1623,a=2188,s=1013}\n";
#else
const char* data = "qdg{a>3896:kg,s>540:tjk,s>478:A,A}\n\
gzl{m<1268:A,s>979:vc,zqk}\n\
mvd{s>1872:A,x>3724:A,vp}\n\
fcg{a>1544:R,s<557:A,s>957:A,A}\n\
gmb{x<809:A,x>1490:A,a>109:A,A}\n\
hdh{x<839:R,a>1530:mg,mkb}\n\
sm{a<59:R,m>1921:R,s>578:A,A}\n\
lz{m<530:R,R}\n\
vkm{x>541:sn,a<3531:R,x>322:tl,R}\n\
srr{x>2868:R,A}\n\
fh{m>3795:A,m>3694:A,s<1294:R,R}\n\
ztk{s>1791:A,m<1364:R,a>3383:fx,A}\n\
vcp{a<3090:thl,a>3580:czh,mhk}\n\
czh{s<1457:gc,x<1505:gl,x>2388:sg,gp}\n\
kp{s>2499:btp,zqd}\n\
hh{x>2791:A,x>2466:A,A}\n\
pr{x<1973:dnz,a<3949:nn,pfl}\n\
qkr{x<1069:qb,qsd}\n\
xt{a<2960:R,s<1141:A,x>914:R,A}\n\
hp{s<3544:A,R}\n\
snn{s<2457:zxm,R}\n\
qb{x<627:A,a<1470:A,x>831:hr,hpn}\n\
zhv{x<1751:R,s<1348:A,s>1361:A,A}\n\
qcr{s>2370:A,R}\n\
pkq{m>3170:R,R}\n\
jk{s<705:A,a>2489:A,R}\n\
gb{m<2661:R,A}\n\
pdd{x<658:R,R}\n\
nfr{a>1692:kpf,x>722:nsm,tpx}\n\
lll{s<560:vqp,ssp}\n\
hr{m<1766:R,A}\n\
rl{x<1745:trn,s<2332:A,jgh}\n\
ztc{x<2474:fj,s<1068:R,A}\n\
fnt{m>2570:A,a>1708:cm,a<1661:A,A}\n\
lh{a<3688:rvd,x>1270:jcx,x>1144:qcr,psr}\n\
lqq{m<1390:vl,A}\n\
mkb{s>3551:A,R}\n\
zk{s>614:A,x>3124:A,a>3003:A,R}\n\
ffh{m>3626:A,x<1925:R,R}\n\
xrq{x>1344:A,a<280:R,m<360:R,R}\n\
zcx{x<2337:nhn,a>384:dx,s<628:dq,td}\n\
gmd{x>3241:hpq,a<3743:nfs,a<3800:nv,cq}\n\
zvb{a>617:R,a>572:chk,ph}\n\
dfh{s<3154:A,x<3731:R,a>1581:ttv,jmt}\n\
gh{x>1901:A,R}\n\
mvh{x>3546:A,s<685:A,R}\n\
kg{a<3951:R,A}\n\
nqm{x<960:tdl,a>3785:mhl,m>2700:kph,lh}\n\
gf{m>1794:fn,x<2038:rl,x<2196:vhc,ktb}\n\
btp{s<3352:ssg,x>1553:mm,m<1975:pf,msd}\n\
czz{x>1788:R,A}\n\
hpq{a>3672:A,A}\n\
fsz{a<307:shz,a>588:nxd,st}\n\
tf{a<1501:nbj,m<1908:jfr,x<3238:rxs,kj}\n\
kfz{s>1112:A,lvp}\n\
zt{s>1451:R,s>1379:xht,a>462:zhv,R}\n\
mmb{x<662:lfz,cxb}\n\
ldh{x<3242:R,R}\n\
grt{a>560:R,s>305:A,a>365:R,R}\n\
gjs{x<1556:A,x>2869:R,R}\n\
kz{m>773:R,m<694:R,R}\n\
mmv{a>2908:R,a<2890:R,a<2900:R,A}\n\
cl{s>2605:A,s<2166:R,R}\n\
vxt{m<3583:R,m<3756:R,A}\n\
lq{m<705:gjs,s<983:cp,s<1374:ksz,vfm}\n\
zht{m<3617:R,A}\n\
gfn{x>850:A,a>1487:zns,a<1404:R,A}\n\
cj{x>1979:R,m<995:A,nqt}\n\
jt{a<2336:A,a<2552:R,R}\n\
psr{m<2138:A,a<3746:A,R}\n\
flb{m<1118:R,s<2797:szr,x<584:R,vxl}\n\
jbb{m>2557:A,s<2147:R,m<1296:A,R}\n\
mmz{a<166:A,m<3330:A,A}\n\
td{m>528:zph,mhr}\n\
lmt{x>1383:A,a>3769:A,A}\n\
st{m>2913:A,R}\n\
fxs{m>1823:km,m>623:krv,pgn}\n\
kpf{a>1709:A,a<1701:A,R}\n\
pkx{s<3455:nl,a<894:A,R}\n\
lr{m>3552:qc,m<3355:cc,pj}\n\
zfx{s<2696:R,A}\n\
skk{s>1154:R,R}\n\
km{a<1830:lmz,a<1964:ch,R}\n\
mhl{s>2540:A,a<3884:srq,s>1934:A,rds}\n\
hq{s<1312:gfn,hg}\n\
mhr{x<3405:A,m<254:pdn,R}\n\
npj{x>3322:R,R}\n\
sg{a<3842:nzh,sd}\n\
dqx{m<239:R,A}\n\
zr{a>851:cgs,A}\n\
tlm{s>3676:R,x<878:brg,vsm}\n\
hst{x<2559:A,s>363:R,A}\n\
lc{s>1852:A,R}\n\
bqq{x>1066:fsf,x>610:nnz,hdv}\n\
kph{x>1169:A,s>2487:nnv,m<3448:A,R}\n\
zgc{a>1558:A,x>3608:sfv,R}\n\
sj{s<2157:hq,s>3139:xm,qkr}\n\
dq{x>3258:ltx,kpp}\n\
dpc{m<3225:R,m<3722:R,x<1715:A,A}\n\
qxp{s>1092:R,R}\n\
kdl{a>1965:xj,xk}\n\
ch{x<2766:A,x<3456:R,x>3672:A,R}\n\
nzh{m>2465:gmd,x>3169:srv,zs}\n\
xd{x<1228:lpx,x<1429:R,A}\n\
gl{m<1794:bdn,nqm}\n\
csn{m>1773:R,a<1142:A,R}\n\
kbj{s<2930:A,R}\n\
xmt{a>266:hcb,x<2147:R,nc}\n\
pvt{a>1613:A,m>359:A,a>1598:R,R}\n\
ljd{m<470:A,A}\n\
tg{x>298:R,s>927:R,x<140:R,A}\n\
cfp{m>1471:R,s>3153:A,m<516:A,A}\n\
bfg{a<3975:R,m<3044:R,A}\n\
xhs{a>1107:qn,m>426:A,m>157:A,stb}\n\
ssp{s<803:vkt,m<3159:pxp,x>2245:tj,fz}\n\
spj{s<2285:A,R}\n\
sgm{m<2781:A,x<1052:dm,R}\n\
gjk{s<646:vkf,m<2932:szp,m>3057:xnl,hkh}\n\
hzc{m>930:R,R}\n\
pfl{x>2116:A,A}\n\
xnk{x<421:A,x<696:R,A}\n\
dl{m>1471:gqn,xjh}\n\
tl{s>1656:R,a>3559:A,R}\n\
vvb{s>2261:R,R}\n\
ttv{a<1613:A,a<1623:R,A}\n\
ddt{x>3345:A,R}\n\
brg{a<1456:A,x>525:A,R}\n\
ssg{s<2935:cs,xb}\n\
px{s>2926:R,R}\n\
bjj{m>875:A,x<2388:A,a>1560:R,A}\n\
jvc{x<2165:R,x>2274:R,x>2211:R,A}\n\
khz{x<254:R,A}\n\
qd{m>2081:R,m<1273:A,A}\n\
srv{a<3694:R,nx}\n\
hcn{x>1979:R,a>3055:A,a<3032:R,A}\n\
mlq{m>2945:A,R}\n\
gqn{a<3177:R,kd}\n\
mb{x>2340:khn,s<632:pcn,a<531:pqm,R}\n\
vz{a<3254:A,m>2111:R,m<1228:tg,gmr}\n\
qsh{a>3516:sjt,s<1806:A,m>2549:fml,gqv}\n\
mh{x<520:A,R}\n\
cg{s>903:A,R}\n\
cls{x<572:A,a>874:fhn,A}\n\
vkt{x<1526:R,x<3037:A,s>698:rhv,A}\n\
qh{x<1112:pdd,a>1056:A,mx}\n\
khn{m>1683:R,R}\n\
jtg{a<362:A,a>413:A,A}\n\
tpx{x<455:R,m>2065:A,A}\n\
zqd{s<2044:tfn,s<2247:hdf,flm}\n\
kvm{m>3480:A,s<3620:A,R}\n\
vsm{s<3325:R,a>1444:A,x<1338:R,A}\n\
hl{m<3229:A,A}\n\
cb{s>1825:A,x>2840:R,s>1640:R,R}\n\
cd{s>889:rf,ghm}\n\
nbs{m>1525:R,x>2977:A,R}\n\
jv{x>666:rnm,a<3434:htp,s<2082:bh,R}\n\
vkf{s>336:R,x<1336:R,A}\n\
vxl{m<1386:R,R}\n\
llk{a>1544:A,A}\n\
vj{s>1374:A,a>3033:vdc,m>2684:zk,R}\n\
vlv{s<287:lzx,x>1685:zht,xn}\n\
ph{a>545:A,a<516:R,m>262:A,R}\n\
sd{m<2201:cv,lmh}\n\
sc{m<833:R,R}\n\
vl{s<2172:A,x<3066:A,x<3530:A,A}\n\
xnh{m<671:R,a>266:R,A}\n\
vr{s>1110:ckb,s>806:A,A}\n\
bgl{a>2783:A,a<2771:R,R}\n\
csq{a<3716:A,A}\n\
nf{a>3884:R,R}\n\
dzv{x<1216:R,s>435:R,sq}\n\
nk{m>3277:pzz,x>3415:mvd,x>3039:qt,srr}\n\
qm{a<2532:R,A}\n\
qk{m>1458:R,m>762:A,A}\n\
jvz{a<2864:dv,a<2925:qjg,ddt}\n\
bkz{a>3856:R,m<2902:A,a<3715:A,R}\n\
hj{a<228:czq,m>1831:R,lb}\n\
hbl{m>3744:R,A}\n\
shz{s>1282:R,m>2858:xtg,s<1132:hcq,R}\n\
jfr{s<2642:vdx,a<1581:gxb,tlz}\n\
vnb{a>3295:nh,m>970:R,R}\n\
mfg{m<3239:gjk,s>686:vxf,vlv}\n\
lzx{m>3552:R,m>3392:gcq,A}\n\
crf{s<1148:R,bz}\n\
pks{x>1580:A,a>493:R,a>230:A,R}\n\
lm{m<888:A,m>1424:pv,jvc}\n\
ltx{x>3725:nj,m>388:tc,rcp}\n\
gmz{s>526:jhb,x<1479:thn,bhb}\n\
bdn{a>3810:flb,a>3680:mlp,jf}\n\
msv{x>1658:A,m<3399:R,a<592:R,R}\n\
srq{a>3822:R,x<1250:A,m<3223:R,R}\n\
cf{a>3181:R,R}\n\
lmh{x<2951:R,s>2719:R,vvb}\n\
pgn{a<1879:rhr,x>2964:dxr,m<344:jkz,ljd}\n\
fmm{x<1264:R,a>3156:R,R}\n\
rf{a>523:A,s<1242:R,R}\n\
kq{x>1882:R,R}\n\
pm{a<465:R,m<3694:hnc,m>3816:R,R}\n\
nv{x>2750:R,s>2595:A,s>2037:R,R}\n\
bmb{x<1389:A,m<1638:R,R}\n\
stb{a<1009:A,x<854:R,R}\n\
zj{s<1284:A,A}\n\
gcs{m<3562:mmz,kkn}\n\
sxg{m>1526:R,A}\n\
sn{x>889:A,x>769:R,m>2027:R,A}\n\
qvm{s<1337:rr,s>2931:fc,x>1754:jt,zh}\n\
hpn{s<2511:R,R}\n\
hkn{a>2967:vj,s>1378:nkl,s>603:jvz,lvd}\n\
ll{a<2547:jk,a>2624:ttl,A}\n\
qfd{m>3298:R,x>2017:R,a<3828:R,R}\n\
jfp{m>2899:A,s<2166:A,a>2436:A,R}\n\
xj{s>2120:cfp,A}\n\
gd{a>632:ldl,tdg}\n\
pcn{m<1546:A,x>1253:R,A}\n\
dx{s>656:fq,s>331:gd,x>3172:sf,hv}\n\
xgf{s>890:A,s<559:bhd,a<1416:jc,A}\n\
dm{a>2923:A,s>1340:R,R}\n\
xhv{a>2829:A,x>2770:A,A}\n\
nhn{m>404:cd,a>498:zvb,x<905:rk,zkf}\n\
qc{x>1532:fh,x<640:R,vvj}\n\
chk{s<556:A,a<589:A,A}\n\
qn{m<580:A,s>182:A,R}\n\
zxm{m<2637:R,A}\n\
hdv{a<1798:R,R}\n\
xtt{a>3840:R,m>3305:R,x<570:R,A}\n\
zc{m<2975:R,s>1315:A,s>1205:R,R}\n\
rnm{m>1407:R,m>749:A,R}\n\
pmr{a<2467:R,R}\n\
vqp{m>3399:pm,m<3046:qzt,cfb}\n\
dg{x<1128:vkm,x>1519:sjn,x<1381:ccb,qsh}\n\
rr{a<2507:R,R}\n\
nnv{m<3547:R,A}\n\
xnl{x>2643:R,s>1132:mhf,pkq}\n\
nl{s<3397:A,a>827:A,A}\n\
nn{a<3936:A,R}\n\
qsd{a>1448:A,a>1405:qd,a<1376:bn,mv}\n\
cfb{a>260:grt,rrr}\n\
nbj{s>1938:js,x<3227:lkh,xgf}\n\
ctf{a>2868:R,x<2217:lz,A}\n\
gp{a<3836:gf,a>3927:kxf,x<1861:jl,gsv}\n\
pxp{s<860:pks,a>389:R,gk}\n\
vt{x>3144:kmx,m>1087:xhv,A}\n\
mr{m>1876:zlg,s<1909:kfz,lpb}\n\
cdr{s<3245:A,s>3283:A,A}\n\
qjg{s<904:R,A}\n\
rk{a>261:kjg,dqx}\n\
fvt{a<565:R,R}\n\
zn{x<3601:A,x>3785:A,R}\n\
sjn{x<1774:R,mzh}\n\
lpx{s>3591:A,A}\n\
kl{a>744:mfg,s>938:rd,lll}\n\
in{a>2109:vcp,nlb}\n\
jqk{m<1618:rp,a>3744:R,a>3652:A,R}\n\
dn{x>3357:A,m>1085:bgl,m<428:R,vx}\n\
gk{a>143:A,A}\n\
qdt{s>2577:R,R}\n\
mx{s<1030:R,s>1210:R,x<1498:R,A}\n\
fbc{m<1459:R,A}\n\
nq{s<3163:R,R}\n\
sfv{a>1532:R,s<1392:A,R}\n\
vp{a>2517:R,x<3595:A,R}\n\
dr{s<2481:R,R}\n\
trn{x<1663:A,x>1701:R,a>3705:R,A}\n\
hz{a<193:A,a>357:R,x>419:A,A}\n\
tfn{x>1470:tdz,s>1837:dc,cls}\n\
rp{s<1247:A,A}\n\
cq{a<3822:A,m>3331:A,x<2698:R,A}\n\
kmx{a<2840:A,s<871:R,A}\n\
lvh{s>3146:fl,s>2549:gb,m<2163:kq,jzz}\n\
tjf{s>3580:R,m<969:bd,a<378:gvd,qmp}\n\
smq{a>2937:A,x<557:A,sbr}\n\
fn{s<3006:R,a>3696:R,hp}\n\
jm{x>2403:xcb,R}\n\
tdl{m>3102:hfl,a>3838:R,m<2320:A,csq}\n\
kf{a>3253:mr,dl}\n\
rhv{x>3458:R,a>489:R,m<3072:R,R}\n\
vsr{x<2152:gmb,a<109:sm,s>714:R,rtm}\n\
rq{x>771:jbb,m>1626:R,a<3250:rxm,R}\n\
nkl{a<2833:bbm,s<2359:bt,x<3256:A,A}\n\
bbm{a<2779:R,A}\n\
jgh{a>3666:A,R}\n\
rmr{s>1583:zcr,a<2701:fp,a>2855:lq,cn}\n\
gvb{s<3036:A,s>3512:A,a>1761:knl,A}\n\
jc{s>731:A,a>1389:R,R}\n\
ktb{a>3701:sc,A}\n\
bs{x<1296:A,x>1870:R,s>1252:R,R}\n\
tjg{s<152:R,R}\n\
xcb{x<2488:R,s>1614:R,R}\n\
gmr{s<837:A,A}\n\
tdg{x<3221:R,A}\n\
nrk{m<1592:A,a<876:R,R}\n\
hfl{x>472:A,m<3449:A,s>2782:A,A}\n\
fz{m<3538:A,R}\n\
cjp{s<1572:A,s>1577:A,A}\n\
cp{a>2941:R,x>1350:nbs,m>1179:A,R}\n\
hcq{x<2133:A,R}\n\
bc{s<2648:R,a>3738:A,m<651:A,R}\n\
thl{m<1971:rmr,rfm}\n\
pv{a<3874:R,a<3897:R,a<3916:R,R}\n\
gsv{s>2955:nf,m>2104:mc,lm}\n\
cjj{x<2974:A,R}\n\
zh{a>2411:R,s>2017:R,x>1603:A,R}\n\
cxb{x<980:rq,m>2634:jq,a<3209:tp,vnb}\n\
tn{a>3678:A,x>3579:A,s<363:A,R}\n\
np{x>2364:R,mjk}\n\
bhd{x<3712:A,x>3816:A,R}\n\
sx{x>3007:tn,x>2586:A,a>3697:ppb,A}\n\
mld{a<1908:A,x>1026:A,A}\n\
dvh{s<1790:A,m>2391:R,R}\n\
vxf{x>1980:qrs,qh}\n\
tp{s>2484:rdn,s<1600:xv,a<3130:A,fmm}\n\
blt{s>581:hh,x>2883:zn,a<2727:R,hst}\n\
sq{a>3747:A,s>160:A,A}\n\
mc{m<3220:qq,A}\n\
dc{a>506:R,s>1935:R,a>282:jtg,A}\n\
mqn{s<982:mb,a<543:lln,x<1784:zj,zvs}\n\
nx{m<1350:A,s<2994:R,s>3466:A,R}\n\
rxm{x>702:R,A}\n\
dnz{s<2734:A,m>1724:A,x<1743:A,R}\n\
lln{x<2592:bs,s>1222:A,x>3139:R,A}\n\
htp{s<2223:A,A}\n\
qnv{x>1110:R,A}\n\
nts{a<1737:nfr,a>1781:bqq,gvb}\n\
kjg{s>727:A,A}\n\
qhn{a<2683:gs,x>857:sgm,s<2204:smq,hvk}\n\
kkn{x>2484:A,x>1526:R,s<1203:R,A}\n\
mv{a<1387:A,a>1396:R,R}\n\
dxr{s<2547:A,m<239:R,A}\n\
bz{m<1172:R,x<1295:A,A}\n\
pz{a>1750:qfh,s<1134:mtc,fnt}\n\
pgd{s<2978:R,m<761:A,a<3791:A,A}\n\
zph{a>143:dt,A}\n\
kjd{x<2552:A,m>975:pmr,m>591:kz,nq}\n\
zkf{x>1684:vv,m<148:R,m>283:xrq,A}\n\
fhn{a<1083:A,a>1174:A,A}\n\
zs{m<1284:bc,a<3720:xvr,A}\n\
rcp{a<215:A,s<295:R,x<3424:A,A}\n\
xmp{s>298:A,R}\n\
gcq{s<184:R,m<3474:A,R}\n\
thn{m<974:xhs,xzz}\n\
zvs{s>1186:A,x<2678:R,A}\n\
zb{x<587:A,a>1113:R,A}\n\
lf{x>2395:R,s<3117:R,a>2855:mmv,A}\n\
pcb{m<1631:cj,s>373:qdg,np}\n\
nsm{a<1665:R,a>1683:R,m<2415:R,R}\n\
msd{x<766:zd,a<857:xd,x>1084:bgg,mlq}\n\
gc{m>2602:prd,s>712:nt,a>3842:pcb,qz}\n\
pb{m<3227:A,A}\n\
qrs{x>2813:R,R}\n\
vdc{a>3064:R,a<3052:R,A}\n\
zd{a<459:hz,m<2919:R,x<396:kvm,R}\n\
rrr{m>3225:A,x>1941:R,R}\n\
cpg{s>2251:mn,a>3868:R,x>1654:sct,R}\n\
qq{s<2087:A,x<2128:R,R}\n\
nqt{m>1360:A,s<259:R,A}\n\
lff{x>3051:A,R}\n\
hvk{a<2893:kbj,a<2975:R,R}\n\
cn{x<2156:dp,a<2756:blt,a<2815:dn,vt}\n\
jcx{m<2249:R,R}\n\
qz{x>2042:sx,dzv}\n\
dv{m>2906:R,A}\n\
xvr{m<1712:R,m<2199:R,a>3630:A,R}\n\
vvj{a>626:A,m>3772:R,R}\n\
slm{m>2544:A,a<561:lhg,x>2768:R,R}\n\
fnh{x>282:R,s>2545:R,R}\n\
vdx{x>2982:llk,s>1644:bjj,m>760:tjr,fcg}\n\
dvr{x>983:A,R}\n\
vc{x<1716:A,x>2600:R,R}\n\
rfm{x<1338:qhn,x<2547:bp,a>2742:hkn,nk}\n\
qdp{a<1172:A,x>625:R,A}\n\
kxf{a<3962:pr,a>3985:lvh,tq}\n\
mn{a<3892:R,s>2616:A,R}\n\
stn{m<380:R,R}\n\
xk{s<1573:A,mld}\n\
szp{s<1089:A,A}\n\
rxs{x>2590:cjj,jm}\n\
fsf{s>3134:R,m<1763:R,x>1531:A,R}\n\
qt{x<3213:R,m>2684:zgb,dr}\n\
jqh{m<1985:csn,x>2319:lff,a<1137:mhd,A}\n\
mjk{a<3930:A,R}\n\
mts{x<2623:A,m<2901:R,A}\n\
ccb{s<1850:A,a>3517:R,a>3494:A,R}\n\
gxb{s<3410:R,R}\n\
kx{s>2771:R,A}\n\
rd{m<3188:fsz,a<390:gcs,a<508:vf,lr}\n\
bt{x>3490:R,A}\n\
ldp{x>1916:fxs,a>1827:kdl,s<2119:pz,nts}\n\
vtg{a>584:A,A}\n\
ppb{x>2299:R,a<3758:R,x>2175:A,A}\n\
xb{s<3080:R,cdr}\n\
fq{m>586:vtg,x<2915:vpt,x>3365:R,R}\n\
nh{m<1043:R,m>1679:A,A}\n\
fml{x<1449:A,a<3496:R,R}\n\
zns{m>1400:R,x>490:A,s<772:A,R}\n\
gqr{a<3481:R,x>2644:xf,R}\n\
sbr{x>681:R,a>2850:R,A}\n\
tj{m<3462:A,s<854:ht,a<439:cg,hbl}\n\
vhc{a>3741:pgd,x<2121:kbd,R}\n\
rvd{m>2131:R,A}\n\
mhf{a<1023:R,A}\n\
ghm{s<547:A,x<1433:A,R}\n\
gpk{x>736:A,m>1085:A,s>2929:R,A}\n\
hcb{x>1982:R,A}\n\
qfh{m>2590:pb,R}\n\
jf{a<3619:R,gpk}\n\
prd{s>884:txm,x<1386:xtt,s>320:bf,qjq}\n\
gvd{a>189:R,s<3441:A,x>689:R,R}\n\
ckb{a<1150:A,x<2820:A,a>1220:A,A}\n\
jl{s<3142:cpg,fk}\n\
vpt{a>647:A,s<967:A,m<233:R,R}\n\
xjh{s>1442:cf,R}\n\
pzz{a<2323:R,s<1766:R,zfx}\n\
jmt{a>1538:R,a>1520:A,R}\n\
zqk{a>2305:R,x<1647:A,R}\n\
jhb{x<1923:dvr,vr}\n\
hkz{x>1692:R,m>2936:R,R}\n\
qjq{m<3081:mts,x<2588:A,vxt}\n\
tc{s>363:R,x>3451:R,A}\n\
txm{m<3425:lmt,a>3859:qzk,s>1229:ffh,xlt}\n\
vf{s>1325:zt,a<459:qxp,ztc}\n\
cjc{a<3486:R,R}\n\
xzz{m<1968:R,zb}\n\
fk{s<3595:R,a>3880:R,m>2234:dpc,qk}\n\
vv{m>259:A,A}\n\
dt{x>2999:R,R}\n\
qx{x<1251:R,x<1426:A,A}\n\
mg{a<1580:R,m<3092:R,R}\n\
pqm{m>1841:R,x>1285:R,R}\n\
mjc{s>2706:R,a>1090:A,m<3463:R,R}\n\
pc{x>3414:A,R}\n\
pj{m<3474:msv,R}\n\
bp{a<2758:qvm,ls}\n\
mzh{s>2401:R,A}\n\
lvd{x<3054:R,pc}\n\
nlb{a>1341:hds,s>1531:kp,m<2594:sbd,kl}\n\
fp{a<2421:gzl,m>1241:xs,ll}\n\
xht{x<2044:R,a<457:R,s>1422:R,R}\n\
bn{x<1502:A,m>1464:A,s<2516:R,A}\n\
czq{m>1778:A,m<852:R,a>108:R,R}\n\
kgf{x>2766:A,s<3039:A,x<2332:R,R}\n\
rtp{m<1323:A,A}\n\
fl{m>1551:A,m>603:A,R}\n\
zbz{m>743:qdt,kx}\n\
hx{x<2647:R,A}\n\
kj{s>2373:dfh,zgc}\n\
lpb{a<3291:A,ktl}\n\
vx{x>2870:R,A}\n\
kd{x>2985:R,A}\n\
hdf{x>1397:lqq,x>838:nrk,m>1599:pvl,xnk}\n\
mm{m<1647:hzc,s>3570:slm,pkx}\n\
nc{m<1563:A,A}\n\
ztp{s>561:A,A}\n\
fc{m<2662:A,s<3421:A,x<1851:R,A}\n\
xlt{x>2359:A,s<1077:R,R}\n\
bh{m<2423:A,m<3235:R,s<1041:A,R}\n\
phm{a<332:R,s<2714:A,x<1986:R,A}\n\
hnc{m>3552:A,s<291:R,R}\n\
ck{s<1817:gqr,cjc}\n\
qzt{s<351:A,x>1743:R,R}\n\
mhk{a>3356:sgc,x<1442:mmb,kf}\n\
qxd{a<319:kjt,mqn}\n\
rdn{s<3250:R,s>3686:R,a<3137:R,A}\n\
ldl{x<3386:R,s<503:R,s<559:R,R}\n\
nxd{a>642:A,x>2020:R,m<2832:kjk,R}\n\
xs{m>1501:ztp,x<2285:qnv,m<1392:rtp,qm}\n\
lfh{a<3181:R,x<317:qfn,mh}\n\
nfs{m>3081:R,s>3075:R,R}\n\
qzk{s>1170:R,a>3922:R,s<1013:R,A}\n\
kjk{a>615:A,A}\n\
zgb{s>2356:R,A}\n\
xtg{m<3019:A,x<2070:R,A}\n\
gs{x>465:jfp,m<2818:khz,x>159:fnh,A}\n\
xv{m<1340:A,R}\n\
hg{x>1111:dvh,A}\n\
tlz{m<678:pvt,R}\n\
pf{a<616:tjf,bvk}\n\
rds{a<3934:R,s>1706:R,A}\n\
zlg{a<3293:A,spj}\n\
fj{m<3682:A,R}\n\
kb{m>837:R,s<3541:A,a>3755:R,R}\n\
gx{m<3654:R,A}\n\
xx{m<2874:R,s<3493:R,A}\n\
nt{x<2262:crf,s<1134:jr,jqk}\n\
rtm{x>3117:R,a<145:A,R}\n\
hv{m<375:R,A}\n\
gqv{a>3495:R,a<3483:A,R}\n\
tjk{m<2047:A,a<3868:R,R}\n\
qmp{m<1491:A,A}\n\
lvp{s<583:R,A}\n\
xm{m>1862:hdh,tlm}\n\
lb{s<2443:A,s>2475:R,R}\n\
cs{a<875:phm,m<2630:R,x<1434:mjc,R}\n\
ttl{a<2664:A,R}\n\
mhd{s<335:R,m>2228:R,R}\n\
jr{s<887:npj,a<3860:A,A}\n\
jkz{s<1554:R,a<2018:A,m>124:R,R}\n\
sbd{a>849:gmz,m<1017:zcx,qxd}\n\
flm{x>1515:sxg,s<2410:zr,a<519:hj,snn}\n\
xn{s<502:R,A}\n\
mtc{m>2603:A,A}\n\
sct{m<1975:A,x<1764:A,R}\n\
sjt{x<1458:A,A}\n\
dp{s>781:A,A}\n\
ht{s<827:A,m>3792:R,a>249:A,R}\n\
vfm{s<1503:fbc,a<2999:A,s<1550:hcn,cjp}\n\
pvl{s<2160:hb,a<550:R,s<2214:R,bx}\n\
xf{m<2649:A,R}\n\
lfz{s>2444:lfh,vz}\n\
kjt{a>191:xmt,vsr}\n\
bvk{a<1012:A,m<692:qdp,x<828:A,A}\n\
zx{a>3417:jv,x>905:bmb,ztk}\n\
lhg{x<2971:A,R}\n\
bhb{m<1459:hx,jqh}\n\
pdn{a<142:R,a>245:A,m<162:R,R}\n\
cgs{x>1008:R,x>659:R,a>1042:A,R}\n\
ktl{x<3130:A,A}\n\
hkh{s>1119:zc,A}\n\
fx{m<2849:A,R}\n\
js{a<1401:R,m<2305:A,a>1458:kgf,A}\n\
ksz{x>1432:R,x<597:R,xt}\n\
tq{m<2066:kh,x>1854:bfg,a>3974:R,hkz}\n\
rhr{m>411:A,R}\n\
bf{x<2951:qfd,m>3214:mvh,bkz}\n\
kpp{a>202:xnh,xmp}\n\
tdz{a<613:A,m<1521:R,m>3019:R,cb}\n\
cm{a<1725:R,x>1263:A,m<1064:A,R}\n\
lkh{m>2307:hl,s>828:A,m>1005:A,stn}\n\
tjr{s>787:R,R}\n\
kbd{a>3682:R,x>2067:A,A}\n\
bd{m>336:R,s<3461:A,x<628:A,A}\n\
hb{x>555:A,x>283:R,a>865:A,R}\n\
knl{m<1464:R,m>2404:R,x>1065:R,R}\n\
krv{a>1949:ldh,A}\n\
sf{m>414:fvt,tjg}\n\
szr{m>1415:A,R}\n\
cc{a>595:R,a<555:R,m<3273:skk,A}\n\
bgg{s>3682:qx,x<1313:A,xx}\n\
ls{m>3309:czz,gh}\n\
zcr{a<2752:kjd,a>2951:zbz,m>913:lf,ctf}\n\
hds{a>1629:ldp,x>2034:tf,sj}\n\
nj{s<220:R,A}\n\
kh{a>3975:R,a<3967:A,A}\n\
jzz{s>2039:R,m>2936:R,s<1719:R,R}\n\
sgc{x>1922:ck,a<3467:zx,dg}\n\
bx{a<816:R,x<546:R,x<735:A,R}\n\
lmz{x>2952:A,a<1706:A,R}\n\
mlp{x>608:R,s>2626:kb,x<385:R,lc}\n\
nnz{s>2964:R,R}\n\
cv{a>3915:R,x<3153:cl,px}\n\
qfn{s<3186:R,A}\n\
jq{m>3243:gx,R}\n\
\n\
{x=331,m=147,a=1060,s=2496}\n\
{x=213,m=1052,a=2303,s=924}\n\
{x=926,m=3270,a=388,s=103}\n\
{x=661,m=2284,a=821,s=1473}\n\
{x=1721,m=420,a=129,s=1038}\n\
{x=979,m=1211,a=90,s=2527}\n\
{x=1587,m=29,a=902,s=1225}\n\
{x=262,m=196,a=529,s=1416}\n\
{x=465,m=864,a=420,s=354}\n\
{x=1523,m=3,a=459,s=730}\n\
{x=734,m=1664,a=401,s=1583}\n\
{x=275,m=36,a=3408,s=1106}\n\
{x=832,m=639,a=989,s=280}\n\
{x=86,m=1327,a=156,s=275}\n\
{x=1837,m=1693,a=112,s=425}\n\
{x=249,m=498,a=2132,s=949}\n\
{x=1417,m=343,a=68,s=1482}\n\
{x=735,m=344,a=36,s=2572}\n\
{x=2528,m=933,a=12,s=2714}\n\
{x=258,m=1163,a=3036,s=618}\n\
{x=888,m=794,a=3331,s=64}\n\
{x=2447,m=2496,a=2160,s=1699}\n\
{x=5,m=92,a=1301,s=2059}\n\
{x=373,m=361,a=74,s=1225}\n\
{x=667,m=320,a=2059,s=1704}\n\
{x=426,m=1546,a=997,s=3}\n\
{x=1853,m=2468,a=788,s=2870}\n\
{x=48,m=1736,a=85,s=1186}\n\
{x=16,m=39,a=12,s=34}\n\
{x=2103,m=328,a=589,s=525}\n\
{x=2431,m=199,a=173,s=22}\n\
{x=465,m=850,a=284,s=47}\n\
{x=449,m=687,a=447,s=328}\n\
{x=1199,m=261,a=1981,s=247}\n\
{x=1372,m=2700,a=378,s=348}\n\
{x=1846,m=1319,a=1476,s=129}\n\
{x=268,m=330,a=2422,s=1169}\n\
{x=152,m=827,a=1067,s=421}\n\
{x=368,m=1213,a=1676,s=37}\n\
{x=202,m=843,a=617,s=1443}\n\
{x=126,m=848,a=798,s=728}\n\
{x=270,m=653,a=1522,s=1920}\n\
{x=847,m=2881,a=246,s=229}\n\
{x=104,m=696,a=241,s=243}\n\
{x=205,m=1148,a=593,s=1053}\n\
{x=875,m=3045,a=796,s=3295}\n\
{x=714,m=299,a=252,s=1061}\n\
{x=400,m=2262,a=405,s=1089}\n\
{x=603,m=115,a=90,s=210}\n\
{x=183,m=814,a=1313,s=1173}\n\
{x=3264,m=996,a=1050,s=2615}\n\
{x=1002,m=1180,a=108,s=12}\n\
{x=365,m=422,a=281,s=750}\n\
{x=2685,m=387,a=124,s=1873}\n\
{x=715,m=1319,a=1447,s=297}\n\
{x=651,m=2515,a=2214,s=2330}\n\
{x=2092,m=2133,a=741,s=925}\n\
{x=470,m=1434,a=1519,s=1630}\n\
{x=2270,m=2552,a=854,s=38}\n\
{x=406,m=577,a=24,s=66}\n\
{x=91,m=281,a=881,s=1279}\n\
{x=8,m=394,a=1341,s=343}\n\
{x=819,m=195,a=801,s=1395}\n\
{x=787,m=1458,a=414,s=302}\n\
{x=163,m=3523,a=1403,s=624}\n\
{x=435,m=1768,a=446,s=2575}\n\
{x=54,m=1228,a=456,s=602}\n\
{x=2123,m=600,a=3065,s=346}\n\
{x=2377,m=463,a=374,s=1842}\n\
{x=438,m=242,a=850,s=97}\n\
{x=1488,m=986,a=177,s=2693}\n\
{x=2152,m=1794,a=999,s=85}\n\
{x=559,m=631,a=1304,s=1876}\n\
{x=682,m=386,a=799,s=1443}\n\
{x=1614,m=58,a=1267,s=2171}\n\
{x=692,m=667,a=19,s=55}\n\
{x=7,m=1898,a=181,s=4}\n\
{x=503,m=21,a=336,s=104}\n\
{x=122,m=25,a=1224,s=2443}\n\
{x=1491,m=2578,a=1097,s=1140}\n\
{x=216,m=484,a=506,s=1229}\n\
{x=1633,m=2731,a=2475,s=1446}\n\
{x=2642,m=652,a=69,s=2916}\n\
{x=35,m=44,a=1073,s=239}\n\
{x=43,m=675,a=190,s=1010}\n\
{x=1449,m=3268,a=937,s=248}\n\
{x=1702,m=1062,a=3277,s=2834}\n\
{x=100,m=526,a=729,s=552}\n\
{x=211,m=3868,a=927,s=1189}\n\
{x=598,m=938,a=1888,s=2460}\n\
{x=369,m=3413,a=135,s=1201}\n\
{x=842,m=2597,a=1389,s=1361}\n\
{x=453,m=19,a=1529,s=302}\n\
{x=945,m=664,a=961,s=2884}\n\
{x=1358,m=1292,a=3217,s=1144}\n\
{x=1235,m=8,a=450,s=1121}\n\
{x=2448,m=1922,a=2421,s=133}\n\
{x=890,m=617,a=1108,s=1041}\n\
{x=1426,m=133,a=1714,s=109}\n\
{x=1668,m=68,a=1533,s=291}\n\
{x=1770,m=1114,a=315,s=292}\n\
{x=270,m=426,a=753,s=1331}\n\
{x=134,m=157,a=928,s=828}\n\
{x=505,m=203,a=767,s=2189}\n\
{x=1090,m=85,a=183,s=162}\n\
{x=348,m=1133,a=1235,s=861}\n\
{x=285,m=931,a=481,s=2}\n\
{x=1329,m=2438,a=527,s=133}\n\
{x=579,m=546,a=2583,s=355}\n\
{x=1269,m=2111,a=308,s=682}\n\
{x=3769,m=875,a=1827,s=794}\n\
{x=57,m=232,a=627,s=436}\n\
{x=350,m=1658,a=1508,s=96}\n\
{x=1351,m=1794,a=139,s=575}\n\
{x=1642,m=1829,a=607,s=298}\n\
{x=36,m=291,a=1458,s=613}\n\
{x=3321,m=385,a=837,s=1083}\n\
{x=306,m=565,a=1974,s=774}\n\
{x=210,m=33,a=989,s=504}\n\
{x=1119,m=1332,a=125,s=1884}\n\
{x=927,m=2761,a=702,s=1671}\n\
{x=19,m=475,a=741,s=2936}\n\
{x=239,m=1711,a=2489,s=1749}\n\
{x=24,m=3109,a=379,s=1106}\n\
{x=145,m=787,a=2142,s=1437}\n\
{x=1455,m=826,a=199,s=635}\n\
{x=2061,m=791,a=2550,s=195}\n\
{x=443,m=1094,a=565,s=1180}\n\
{x=1475,m=79,a=1253,s=7}\n\
{x=1808,m=641,a=32,s=1230}\n\
{x=1192,m=235,a=2179,s=993}\n\
{x=2194,m=1318,a=541,s=2111}\n\
{x=1830,m=3434,a=434,s=193}\n\
{x=523,m=981,a=39,s=1996}\n\
{x=1012,m=546,a=86,s=88}\n\
{x=1141,m=66,a=2979,s=1790}\n\
{x=14,m=659,a=1290,s=1204}\n\
{x=2285,m=76,a=1077,s=1495}\n\
{x=11,m=496,a=994,s=11}\n\
{x=182,m=567,a=90,s=278}\n\
{x=973,m=1938,a=1231,s=136}\n\
{x=1268,m=252,a=1892,s=457}\n\
{x=1914,m=791,a=704,s=551}\n\
{x=2241,m=8,a=315,s=119}\n\
{x=228,m=53,a=416,s=971}\n\
{x=299,m=2378,a=166,s=975}\n\
{x=702,m=1229,a=1482,s=445}\n\
{x=1418,m=2816,a=3145,s=135}\n\
{x=298,m=382,a=912,s=1311}\n\
{x=601,m=563,a=954,s=90}\n\
{x=2152,m=683,a=922,s=681}\n\
{x=200,m=1190,a=61,s=1069}\n\
{x=714,m=22,a=413,s=1150}\n\
{x=524,m=1450,a=808,s=994}\n\
{x=432,m=76,a=2194,s=1267}\n\
{x=145,m=227,a=453,s=2393}\n\
{x=267,m=355,a=681,s=1050}\n\
{x=2088,m=3514,a=2760,s=924}\n\
{x=1003,m=508,a=25,s=732}\n\
{x=1558,m=1229,a=448,s=2079}\n\
{x=1405,m=2090,a=160,s=1242}\n\
{x=460,m=267,a=406,s=2154}\n\
{x=615,m=311,a=1557,s=2855}\n\
{x=6,m=856,a=615,s=2067}\n\
{x=1096,m=1381,a=143,s=851}\n\
{x=2678,m=420,a=773,s=458}\n\
{x=564,m=2174,a=980,s=41}\n\
{x=649,m=2402,a=769,s=1813}\n\
{x=882,m=679,a=1686,s=475}\n\
{x=7,m=208,a=861,s=3390}\n\
{x=1612,m=598,a=1602,s=947}\n\
{x=1221,m=1209,a=292,s=1390}\n\
{x=475,m=1234,a=982,s=667}\n\
{x=41,m=1407,a=117,s=2913}\n\
{x=2935,m=465,a=250,s=736}\n\
{x=1950,m=1251,a=1489,s=619}\n\
{x=312,m=2153,a=1610,s=1076}\n\
{x=348,m=2053,a=518,s=43}\n\
{x=991,m=2614,a=1301,s=799}\n\
{x=1129,m=2899,a=2560,s=1889}\n\
{x=427,m=260,a=408,s=2}\n\
{x=1333,m=33,a=43,s=1948}\n\
{x=596,m=477,a=1819,s=2788}\n\
{x=972,m=1118,a=2401,s=354}\n\
{x=2991,m=2658,a=127,s=2118}\n\
{x=799,m=642,a=557,s=301}\n\
{x=692,m=1197,a=1590,s=1491}\n\
{x=848,m=303,a=228,s=732}\n\
{x=525,m=152,a=590,s=366}\n\
{x=446,m=952,a=919,s=841}\n\
{x=39,m=3190,a=656,s=179}\n\
{x=1685,m=430,a=239,s=3}\n\
{x=310,m=778,a=452,s=605}\n\
{x=69,m=890,a=4,s=143}\n\
{x=2089,m=125,a=1382,s=1480}\n\
{x=1279,m=717,a=209,s=1458}\n\
{x=1091,m=51,a=100,s=1488}\n\
{x=822,m=34,a=1002,s=819}\n\
{x=2761,m=2020,a=2022,s=33}\n\
{x=2927,m=900,a=112,s=880}\n";
#endif

#define ACCEPT -1
#define REJECT -2
#define UNKNOWN -3

typedef struct {
    char category;
    uint8_t lt;
    uint16_t threshold;
    int16_t destination;
} rule_t;

#define MAX_RULES 3200
rule_t rules[MAX_RULES];
int num_rules = 0;

typedef struct {
    char name_suffix[2];
    int16_t destination;
} workflow_idx_t;

#define MAX_WORKFLOWS 50
workflow_idx_t workflow_lookup[26*MAX_WORKFLOWS];
int num_workflows[26] = {};

typedef struct {
    int16_t minx, maxx;
    int16_t minm, maxm;
    int16_t mina, maxa;
    int16_t mins, maxs;
} range_t;

range_t range;

int64_t count_combs(int idx) {
    if (idx == ACCEPT) {
        return (int64_t)(range.maxx - range.minx + 1) *
                (int64_t)(range.maxm - range.minm + 1) *
                (int64_t)(range.maxa - range.mina + 1) *
                (int64_t)(range.maxs - range.mins + 1);
    }
    else if (idx == REJECT) {
        return 0;
    }
    if (idx < 0 || idx >= num_rules) fail();

    if (rules[idx].category == 0) {
        return count_combs(rules[idx].destination);
    }

    int16_t* min_ptr;
    int16_t* max_ptr;
    switch (rules[idx].category) {
        case 'x': min_ptr = &range.minx; max_ptr = &range.maxx; break;
        case 'm': min_ptr = &range.minm; max_ptr = &range.maxm; break;
        case 'a': min_ptr = &range.mina; max_ptr = &range.maxa; break;
        case 's': min_ptr = &range.mins; max_ptr = &range.maxs; break;
        default: fail();
    }
    if (rules[idx].lt) {
        if (*max_ptr < rules[idx].threshold) {
            // Rule applies to whole range
            return count_combs(rules[idx].destination);
        }
        else if (*min_ptr >= rules[idx].threshold) {
            // Rule applies to none of the range
            return count_combs(idx+1);
        }
        
        int16_t old_min = *min_ptr;
        int16_t old_max = *max_ptr;
        *max_ptr = rules[idx].threshold - 1;
        int64_t combs = count_combs(rules[idx].destination);
        *min_ptr = rules[idx].threshold;
        *max_ptr = old_max;
        combs += count_combs(idx+1);
        *min_ptr = old_min;
        return combs;
    }
    else {
        if (*min_ptr > rules[idx].threshold) {
            // Rule applies to whole range
            return count_combs(rules[idx].destination);
        }
        else if (*max_ptr <= rules[idx].threshold) {
            // Rule applies to none of the range
            return count_combs(idx+1);
        }
        
        int16_t old_min = *min_ptr;
        int16_t old_max = *max_ptr;
        *min_ptr = rules[idx].threshold + 1;
        int64_t combs = count_combs(rules[idx].destination);
        *max_ptr = rules[idx].threshold;
        *min_ptr = old_min;
        combs += count_combs(idx+1);
        *max_ptr = old_max;
        return combs;
    }
}

int main()
{
    const char* ptr = data;

    int16_t start_rule = UNKNOWN;

    while (*ptr != '\n') {
        const char* end = read_word(ptr);

        {
            // Populate workflow name -> rule idx map
            int lookup_idx = *ptr - 'a';
            if (num_workflows[lookup_idx] == MAX_WORKFLOWS) fail();
            workflow_idx_t* wlookup = &workflow_lookup[lookup_idx*MAX_WORKFLOWS + num_workflows[lookup_idx]++];
            wlookup->name_suffix[0] = *(ptr+1);
            if (end > ptr+2) wlookup->name_suffix[1] = *(ptr+2);
            else wlookup->name_suffix[1] = 0;
            wlookup->destination = num_rules;

            if (*ptr == 'i' && *(ptr+1) == 'n' && (*(ptr+2) < 'a' || *(ptr+2) > 'z')) {
                start_rule = num_rules;
            }
        }
        
        if (*end != '{') fail();
        ptr = end+1;

        while (true) {
            if (num_rules == MAX_RULES) fail();

            rule_t* rule = &rules[num_rules++];
            if (*ptr == 'A') {
                rule->destination = ACCEPT;
                rule->category = 0;
                break;
            }
            if (*ptr == 'R') {
                rule->destination = REJECT;
                rule->category = 0;
                break;
            }
            if (*(ptr+1) != '>' && *(ptr+1) != '<') {
                rule->destination = ptr - data;
                rule->category = 0;
                break;
            }

            // Conditional rule
            rule->category = *ptr++;
            if (*ptr++ == '<') rule->lt = 1; 
            else rule->lt = 0;
            int threshold;
            ptr = read_num(ptr, &threshold);
            rule->threshold = threshold;

            if (*ptr++ != ':') fail();

            if (*ptr == 'A') {
                rule->destination = ACCEPT;
                ++ptr;
            }
            else if (*ptr == 'R') {
                rule->destination = REJECT;
                ++ptr;
            }
            else {
                // For now set destination to the offset of the workflow name in the original data
                rule->destination = ptr - data;
                ptr = read_word(ptr);
            }
            if (*ptr++ != ',') fail();
        }
        ptr = read_word(ptr);
        if (*ptr++ != '}') fail();
        if (*ptr++ != '\n') fail();
    }

    // Now pass through the rules using the workflow lookup to remap the destinations
    for (int i = 0; i < num_rules; ++i) {
        if (rules[i].destination > 0) {
            const char* name = data + rules[i].destination;
            int lookup_idx = *name - 'a';
            workflow_idx_t* workflows = &workflow_lookup[lookup_idx*MAX_WORKFLOWS];
            int j;
            for (j = 0; j < num_workflows[lookup_idx]; ++j) {
                if (name[1] == workflows[j].name_suffix[0] &&
                    ((name[2] == workflows[j].name_suffix[1]) || ((name[2] < 'a' || name[2] > 'z') && workflows[j].name_suffix[1] == 0)))
                {
                    rules[i].destination = workflows[j].destination;
                    break;
                }
            }
            if (j == num_workflows[lookup_idx]) fail();
        }
    }

    if (start_rule == UNKNOWN) fail();

    range.minx =    1; range.minm =    1; range.mina =    1; range.mins =    1;
    range.maxx = 4000; range.maxm = 4000; range.maxa = 4000; range.maxs = 4000;

    int64_t total = count_combs(start_rule);
    
    printf("\n%lld\n", total);

    return 0;
}
