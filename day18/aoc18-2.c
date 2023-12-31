#include "../aoc.h"

#include <stdbool.h>
#include <stdlib.h>

#if 0
const char* data = "R 6 (#70c710)\n\
D 5 (#0dc571)\n\
L 2 (#5713f0)\n\
D 2 (#d2c081)\n\
R 2 (#59c680)\n\
D 2 (#411b91)\n\
L 5 (#8ceee2)\n\
U 2 (#caa173)\n\
L 1 (#1b58a2)\n\
U 2 (#caa171)\n\
R 2 (#7807d2)\n\
U 3 (#a77fa3)\n\
L 2 (#015232)\n\
U 2 (#7a21e3)\n";
#else
const char* data = "R 4 (#2dbea0)\n\
U 7 (#771413)\n\
R 5 (#991f00)\n\
U 4 (#0db993)\n\
R 3 (#1c6ab0)\n\
D 11 (#67d2f3)\n\
R 4 (#778c30)\n\
U 3 (#7535c3)\n\
R 2 (#2afd02)\n\
U 3 (#84a633)\n\
R 5 (#7d6492)\n\
U 7 (#236953)\n\
R 4 (#4598b2)\n\
U 5 (#5c4bc3)\n\
R 7 (#2f17b2)\n\
U 4 (#76bf51)\n\
R 5 (#701390)\n\
U 8 (#388c61)\n\
L 5 (#701392)\n\
D 5 (#550f91)\n\
L 6 (#3dc292)\n\
U 5 (#43af93)\n\
L 8 (#311ed2)\n\
U 5 (#574df3)\n\
R 9 (#21efb2)\n\
U 4 (#912163)\n\
R 2 (#8a10e2)\n\
D 4 (#83a213)\n\
R 8 (#7a0f52)\n\
U 6 (#2f5653)\n\
L 3 (#17f722)\n\
U 3 (#53bf23)\n\
L 10 (#012322)\n\
U 2 (#48b7b1)\n\
L 4 (#42cc22)\n\
U 4 (#85b173)\n\
R 7 (#430832)\n\
U 2 (#85b171)\n\
R 11 (#41d692)\n\
U 3 (#48b7b3)\n\
R 7 (#009022)\n\
U 10 (#546063)\n\
L 4 (#272ba2)\n\
U 9 (#666b83)\n\
L 4 (#3bd310)\n\
U 7 (#86d473)\n\
L 5 (#669640)\n\
U 2 (#498c81)\n\
L 6 (#053490)\n\
D 5 (#790f51)\n\
R 5 (#6e8fe0)\n\
D 6 (#3c33a3)\n\
L 5 (#1a8e20)\n\
D 7 (#866833)\n\
L 6 (#69f7e0)\n\
U 10 (#9e4e83)\n\
L 4 (#66bb50)\n\
D 11 (#15bda1)\n\
L 7 (#4ab050)\n\
D 11 (#023e41)\n\
R 7 (#5da0c0)\n\
D 3 (#659ca1)\n\
L 3 (#1bb4e2)\n\
D 6 (#58efe3)\n\
L 2 (#644bd2)\n\
D 3 (#58efe1)\n\
L 3 (#4f9712)\n\
U 2 (#605551)\n\
L 10 (#1d55e0)\n\
U 4 (#592e11)\n\
L 3 (#87e710)\n\
D 10 (#592e13)\n\
L 7 (#2a5ad0)\n\
U 10 (#104021)\n\
L 8 (#1ca4d0)\n\
D 6 (#1c7af1)\n\
L 7 (#8c8c30)\n\
D 4 (#0eb613)\n\
L 6 (#913b20)\n\
U 4 (#033803)\n\
L 3 (#30fd00)\n\
D 4 (#8be0c3)\n\
L 3 (#839f00)\n\
D 4 (#6cda13)\n\
R 9 (#0aa6e0)\n\
D 2 (#749731)\n\
R 9 (#165730)\n\
D 5 (#b08bc1)\n\
L 4 (#19b980)\n\
D 3 (#4d9383)\n\
L 8 (#805ee0)\n\
D 2 (#24e933)\n\
L 6 (#4b0bb0)\n\
D 3 (#23c683)\n\
L 4 (#1584b0)\n\
D 3 (#5fc993)\n\
L 6 (#2a8012)\n\
D 5 (#02b643)\n\
L 9 (#af69b2)\n\
U 4 (#02b641)\n\
L 2 (#070582)\n\
U 8 (#374643)\n\
L 7 (#3c22b2)\n\
U 5 (#1d4c33)\n\
L 2 (#6f1172)\n\
U 6 (#1221e1)\n\
L 6 (#7319e2)\n\
U 5 (#1221e3)\n\
L 4 (#2937b2)\n\
U 4 (#70a653)\n\
L 8 (#51c192)\n\
U 5 (#94c223)\n\
L 4 (#7064f0)\n\
U 9 (#6040a3)\n\
L 3 (#7064f2)\n\
U 6 (#3e8783)\n\
L 6 (#629342)\n\
U 2 (#26e081)\n\
L 10 (#1bdbb2)\n\
U 7 (#90ec41)\n\
L 3 (#1754d2)\n\
U 6 (#49f921)\n\
L 11 (#2b2a02)\n\
U 3 (#32de91)\n\
L 3 (#2b2a00)\n\
U 4 (#6f8c21)\n\
L 14 (#0d4282)\n\
U 3 (#6c9983)\n\
R 9 (#9020d2)\n\
U 3 (#6cf751)\n\
R 7 (#850c32)\n\
U 5 (#6cf753)\n\
R 2 (#370ab2)\n\
U 3 (#6c9981)\n\
R 9 (#131dd2)\n\
U 5 (#98b9e3)\n\
R 3 (#266402)\n\
U 6 (#1580a3)\n\
R 8 (#5ccf92)\n\
U 4 (#5f3883)\n\
R 8 (#4d14e2)\n\
U 3 (#13e193)\n\
R 5 (#679462)\n\
U 10 (#576a43)\n\
R 6 (#009950)\n\
U 8 (#17dd83)\n\
R 4 (#63f5f0)\n\
U 3 (#280e23)\n\
R 5 (#062230)\n\
U 2 (#9558c3)\n\
R 5 (#2ecc50)\n\
U 7 (#5bec91)\n\
R 6 (#684080)\n\
D 12 (#ac9351)\n\
R 5 (#445d50)\n\
D 13 (#305861)\n\
R 3 (#264ce0)\n\
D 5 (#9b3013)\n\
R 11 (#3f1d42)\n\
D 7 (#1b09f3)\n\
R 3 (#3f1d40)\n\
U 5 (#829e43)\n\
R 3 (#37f240)\n\
U 5 (#320d13)\n\
R 6 (#2f42d0)\n\
U 4 (#1e0583)\n\
R 5 (#8c1210)\n\
U 5 (#68c3f3)\n\
R 9 (#1eab80)\n\
U 9 (#1cd573)\n\
R 3 (#a58342)\n\
U 7 (#27ab93)\n\
R 6 (#2c8af2)\n\
U 7 (#5401e3)\n\
R 3 (#94dbe2)\n\
U 4 (#2f3553)\n\
R 5 (#2764e2)\n\
U 7 (#a9a313)\n\
L 9 (#644720)\n\
U 6 (#6e5501)\n\
L 5 (#72a8a0)\n\
U 6 (#58f9d3)\n\
L 6 (#1dc690)\n\
D 6 (#155b33)\n\
L 4 (#9998a0)\n\
U 3 (#42aae3)\n\
L 10 (#919510)\n\
U 7 (#5c42a3)\n\
R 3 (#409970)\n\
U 4 (#6e6001)\n\
R 3 (#78d530)\n\
U 3 (#741881)\n\
R 8 (#4a62c0)\n\
U 7 (#698ee1)\n\
R 6 (#28dd90)\n\
D 8 (#1c4631)\n\
R 7 (#317370)\n\
D 2 (#a7fb31)\n\
R 4 (#0c31b0)\n\
D 4 (#a78f73)\n\
R 3 (#261040)\n\
U 9 (#3049f3)\n\
R 3 (#623ac0)\n\
U 3 (#7dd4e3)\n\
R 4 (#70d6f0)\n\
D 10 (#05d8e3)\n\
R 7 (#485d50)\n\
D 9 (#83adc1)\n\
R 4 (#42d970)\n\
D 4 (#28f2c3)\n\
R 8 (#12be40)\n\
D 10 (#8b8881)\n\
R 6 (#4eeb80)\n\
D 2 (#7543a1)\n\
R 7 (#20b000)\n\
D 6 (#b74541)\n\
R 2 (#234710)\n\
D 5 (#3fdf61)\n\
R 3 (#711bd0)\n\
D 4 (#241a11)\n\
R 6 (#9281f0)\n\
D 6 (#2e3a21)\n\
R 7 (#810170)\n\
D 8 (#673c21)\n\
R 2 (#157b50)\n\
D 4 (#4fd5e1)\n\
R 4 (#390440)\n\
D 6 (#599881)\n\
R 6 (#1d71d0)\n\
D 9 (#991d81)\n\
R 6 (#217ac0)\n\
D 3 (#395ab1)\n\
R 4 (#6dfea0)\n\
U 8 (#560f21)\n\
R 7 (#869760)\n\
U 4 (#797f23)\n\
R 7 (#4b0e30)\n\
U 10 (#1f54e3)\n\
R 3 (#4b0e32)\n\
U 3 (#8fb353)\n\
R 4 (#2db020)\n\
U 9 (#42ffa1)\n\
L 6 (#2377e0)\n\
U 9 (#41fc51)\n\
L 2 (#6fe090)\n\
U 4 (#6535f1)\n\
L 3 (#389170)\n\
U 5 (#0f7b51)\n\
L 8 (#2a3200)\n\
U 2 (#0eecb1)\n\
L 3 (#af12b0)\n\
U 7 (#286713)\n\
R 4 (#0d6c40)\n\
U 8 (#277651)\n\
R 2 (#3568a0)\n\
U 6 (#689c31)\n\
R 10 (#384100)\n\
U 6 (#44f061)\n\
R 6 (#5960f0)\n\
U 8 (#a3a751)\n\
R 4 (#542c80)\n\
U 5 (#8f4353)\n\
R 11 (#82cfa0)\n\
D 3 (#8abc43)\n\
R 2 (#82cfa2)\n\
D 8 (#5eaaa3)\n\
R 2 (#a37510)\n\
D 8 (#286711)\n\
R 7 (#4355f0)\n\
D 6 (#1e42b1)\n\
R 5 (#5f3f22)\n\
D 4 (#2f03c1)\n\
R 6 (#26af60)\n\
D 4 (#1168f1)\n\
R 7 (#8090f0)\n\
U 3 (#6a1771)\n\
R 5 (#3347f0)\n\
U 5 (#41de51)\n\
R 9 (#686562)\n\
U 4 (#722151)\n\
R 4 (#2ea082)\n\
U 6 (#722153)\n\
R 4 (#438262)\n\
D 14 (#45f231)\n\
R 2 (#282b32)\n\
D 4 (#6e0cf1)\n\
R 4 (#524462)\n\
D 9 (#44ce21)\n\
L 3 (#562272)\n\
D 11 (#1a8bc1)\n\
L 7 (#36c770)\n\
D 5 (#5f9801)\n\
L 3 (#96fd60)\n\
U 7 (#4d42d1)\n\
L 7 (#96fd62)\n\
U 9 (#41df01)\n\
L 6 (#36c772)\n\
D 3 (#404551)\n\
L 8 (#08ca82)\n\
D 7 (#2a19c1)\n\
L 2 (#358392)\n\
D 10 (#6b7ac1)\n\
R 3 (#353c92)\n\
D 5 (#6b7ac3)\n\
R 4 (#63bbb2)\n\
D 10 (#5b84f3)\n\
R 7 (#3b2112)\n\
D 4 (#0c7863)\n\
R 3 (#a9dc20)\n\
D 11 (#38fd13)\n\
R 6 (#2efda0)\n\
U 9 (#3c8d83)\n\
R 9 (#708832)\n\
U 7 (#0e81a3)\n\
L 6 (#685192)\n\
U 2 (#63c483)\n\
L 3 (#134732)\n\
U 12 (#583333)\n\
R 4 (#922732)\n\
D 9 (#7cf091)\n\
R 4 (#8e4842)\n\
D 2 (#3b7ae1)\n\
R 5 (#4a0de0)\n\
D 9 (#3e45d1)\n\
R 7 (#62da10)\n\
U 10 (#2c5061)\n\
R 5 (#2a5742)\n\
U 2 (#4521f1)\n\
R 3 (#8290b2)\n\
U 4 (#3fdda1)\n\
L 2 (#3eadc2)\n\
U 7 (#7a01c1)\n\
L 6 (#12f1d0)\n\
U 7 (#3bc561)\n\
R 5 (#4322c0)\n\
U 5 (#51d0c1)\n\
R 7 (#618d00)\n\
U 4 (#4dc971)\n\
L 8 (#42ce90)\n\
U 2 (#2d66a1)\n\
L 4 (#5e2bf0)\n\
U 14 (#057df1)\n\
R 4 (#00fb80)\n\
U 5 (#6af571)\n\
R 6 (#07a410)\n\
U 3 (#3c1ee1)\n\
R 2 (#32f0f0)\n\
U 11 (#03ddc1)\n\
R 4 (#484e32)\n\
D 11 (#3bc131)\n\
R 2 (#154652)\n\
D 3 (#b77fd1)\n\
R 3 (#4a1ac2)\n\
D 4 (#135613)\n\
R 5 (#36a092)\n\
D 5 (#ab8143)\n\
L 13 (#021482)\n\
D 5 (#3469b3)\n\
L 3 (#5e8c32)\n\
D 4 (#3e42a1)\n\
R 7 (#86bcf2)\n\
U 6 (#5ddf73)\n\
R 5 (#164fa2)\n\
D 6 (#33fcc3)\n\
R 4 (#aee5e2)\n\
D 4 (#33fcc1)\n\
L 5 (#35c742)\n\
D 12 (#5ddf71)\n\
R 4 (#60be02)\n\
D 3 (#3e42a3)\n\
R 9 (#4a1df2)\n\
U 8 (#824c83)\n\
L 4 (#942f82)\n\
U 5 (#824c81)\n\
R 5 (#0458c2)\n\
U 6 (#533f91)\n\
L 5 (#576bd0)\n\
U 6 (#175183)\n\
R 4 (#128280)\n\
U 3 (#175181)\n\
R 9 (#62e7f0)\n\
U 5 (#4de9e1)\n\
R 5 (#3ac090)\n\
D 5 (#6899c1)\n\
R 5 (#606550)\n\
D 9 (#6899c3)\n\
R 9 (#405a40)\n\
D 2 (#27a6a1)\n\
R 4 (#1e2620)\n\
D 5 (#5919c1)\n\
R 4 (#4fc360)\n\
U 8 (#74c2d1)\n\
R 6 (#4c81f2)\n\
D 4 (#65b0e1)\n\
R 4 (#22f362)\n\
D 12 (#496fc1)\n\
R 6 (#7a8152)\n\
U 3 (#5b71a1)\n\
R 6 (#2c6cc2)\n\
U 3 (#7e8be3)\n\
R 4 (#1d9842)\n\
U 7 (#89ce03)\n\
L 10 (#59bda2)\n\
U 3 (#023863)\n\
R 4 (#7e99c2)\n\
U 5 (#0758f1)\n\
L 3 (#09ece2)\n\
U 10 (#30fb21)\n\
L 8 (#471bd0)\n\
D 4 (#58ab01)\n\
L 2 (#471bd2)\n\
D 6 (#387a31)\n\
L 7 (#0c1ff2)\n\
U 8 (#116623)\n\
R 4 (#721752)\n\
U 7 (#9fe473)\n\
R 7 (#28d322)\n\
U 4 (#359c13)\n\
R 2 (#0e0c22)\n\
U 6 (#085061)\n\
R 12 (#63e0e2)\n\
D 5 (#b3e741)\n\
R 5 (#4612f2)\n\
D 3 (#1948e1)\n\
R 3 (#23fe72)\n\
D 3 (#116621)\n\
R 5 (#1814b2)\n\
D 9 (#5171c1)\n\
R 3 (#148182)\n\
U 9 (#453cf1)\n\
R 7 (#4afe40)\n\
D 4 (#3b5fb1)\n\
R 3 (#9cbb00)\n\
D 7 (#63d411)\n\
R 7 (#017970)\n\
D 4 (#3020d1)\n\
R 3 (#131310)\n\
D 6 (#197ac1)\n\
R 7 (#3e1090)\n\
D 8 (#679641)\n\
L 7 (#630702)\n\
D 10 (#62dc11)\n\
R 5 (#7bf202)\n\
D 5 (#242911)\n\
L 7 (#4cd470)\n\
D 8 (#76a031)\n\
L 3 (#6d3460)\n\
D 10 (#76a033)\n\
L 2 (#24f030)\n\
D 10 (#59a2e1)\n\
L 8 (#317750)\n\
D 2 (#5af153)\n\
L 4 (#6047b0)\n\
D 7 (#31bd23)\n\
L 11 (#62d9f0)\n\
D 6 (#13e781)\n\
L 5 (#90e050)\n\
D 11 (#13e783)\n\
L 3 (#5e0080)\n\
D 7 (#45c443)\n\
L 4 (#96cc12)\n\
D 3 (#00a151)\n\
L 2 (#87a1b2)\n\
D 9 (#00a153)\n\
L 6 (#334d02)\n\
D 5 (#4ee7e3)\n\
L 2 (#6cd090)\n\
D 10 (#405e73)\n\
L 4 (#514540)\n\
U 4 (#391461)\n\
L 3 (#6ff4a0)\n\
U 7 (#217213)\n\
L 7 (#67c592)\n\
U 4 (#4453e3)\n\
L 2 (#03e282)\n\
U 6 (#81c463)\n\
L 7 (#6ba810)\n\
U 7 (#6da1f3)\n\
L 9 (#a21980)\n\
U 5 (#29a6a1)\n\
L 4 (#22f180)\n\
U 7 (#6c8c21)\n\
L 6 (#371212)\n\
U 5 (#13a9b1)\n\
L 3 (#8bac52)\n\
D 6 (#084a91)\n\
L 5 (#500bd0)\n\
D 10 (#637be1)\n\
L 8 (#434e90)\n\
D 4 (#2a8011)\n\
R 3 (#2f6400)\n\
D 4 (#150951)\n\
R 4 (#4478e0)\n\
D 9 (#0afe21)\n\
R 6 (#08c250)\n\
D 2 (#b821f1)\n\
R 5 (#08c252)\n\
D 3 (#174461)\n\
L 6 (#372d02)\n\
D 5 (#7a0601)\n\
L 2 (#6f3752)\n\
D 2 (#17c891)\n\
L 10 (#236a02)\n\
D 3 (#17c893)\n\
L 5 (#87fe42)\n\
D 3 (#7a0603)\n\
R 2 (#27abf2)\n\
D 10 (#843cc1)\n\
R 5 (#5d38c2)\n\
D 5 (#02fce1)\n\
R 8 (#0fead2)\n\
D 7 (#8321d1)\n\
R 6 (#0fead0)\n\
D 5 (#4c9a81)\n\
R 5 (#2363e2)\n\
D 6 (#4e0821)\n\
L 10 (#369e92)\n\
D 4 (#40e7e3)\n\
L 9 (#6159a2)\n\
D 6 (#257ff1)\n\
L 7 (#5120a2)\n\
D 7 (#8d2261)\n\
L 6 (#66afe2)\n\
D 2 (#613283)\n\
L 6 (#0a8e52)\n\
D 7 (#516fd3)\n\
L 8 (#5a9cb2)\n\
D 6 (#2eb203)\n\
L 3 (#224c30)\n\
U 15 (#7df713)\n\
L 2 (#224c32)\n\
U 5 (#0f67a3)\n\
L 8 (#239eb2)\n\
D 9 (#23c8c3)\n\
R 6 (#30fc22)\n\
D 6 (#08a811)\n\
L 6 (#392a42)\n\
D 5 (#4f78d1)\n\
L 7 (#65ee62)\n\
D 7 (#4e3ea1)\n\
L 3 (#183cf2)\n\
D 5 (#67fa21)\n\
L 3 (#743c22)\n\
D 8 (#5a3161)\n\
L 3 (#77ded2)\n\
D 3 (#91f671)\n\
L 9 (#06c862)\n\
D 3 (#034a71)\n\
L 6 (#0051d2)\n\
D 7 (#5f7e11)\n\
L 6 (#3bbe82)\n\
D 5 (#4e2051)\n\
L 3 (#703282)\n\
D 7 (#55a831)\n\
L 11 (#6722d2)\n\
D 3 (#927f03)\n\
L 7 (#496570)\n\
D 4 (#090683)\n\
L 10 (#28b120)\n\
D 5 (#a86aa3)\n\
L 8 (#28b122)\n\
D 8 (#1608e3)\n\
L 5 (#496572)\n\
D 13 (#98bfd3)\n\
R 4 (#087c02)\n\
U 2 (#133d71)\n\
R 4 (#2dc4c2)\n\
U 11 (#433e51)\n\
R 6 (#2a9990)\n\
U 5 (#465031)\n\
R 6 (#2a9992)\n\
D 10 (#6138e1)\n\
R 3 (#43ecd2)\n\
D 8 (#525613)\n\
R 7 (#568082)\n\
D 4 (#38a9c3)\n\
L 4 (#816912)\n\
D 4 (#3524d3)\n\
L 11 (#050512)\n\
D 3 (#14e663)\n\
R 6 (#7eb6d0)\n\
D 9 (#735743)\n\
R 2 (#154b80)\n\
D 3 (#278d53)\n\
R 7 (#48ec50)\n\
D 4 (#6f0473)\n\
L 8 (#00d392)\n\
D 5 (#4a75e1)\n\
L 7 (#320322)\n\
D 3 (#144501)\n\
L 5 (#8c2db2)\n\
U 8 (#144503)\n\
L 10 (#463122)\n\
U 5 (#32a6b1)\n\
L 6 (#258b30)\n\
U 5 (#880b81)\n\
R 12 (#13e0c2)\n\
U 4 (#3f3e61)\n\
R 4 (#7047f2)\n\
U 5 (#519041)\n\
L 4 (#81d622)\n\
U 4 (#100251)\n\
L 7 (#29e330)\n\
D 6 (#0c1811)\n\
L 3 (#ab8d80)\n\
U 7 (#0c1813)\n\
L 4 (#308e20)\n\
U 6 (#2a2161)\n\
L 5 (#258b32)\n\
U 6 (#136f11)\n\
L 9 (#5843f2)\n\
U 5 (#175f81)\n\
L 3 (#643e12)\n\
U 7 (#5739b1)\n\
L 3 (#6b3102)\n\
U 3 (#a48961)\n\
R 7 (#342652)\n\
U 2 (#605c83)\n\
R 12 (#034b90)\n\
U 3 (#6c7f23)\n\
R 5 (#034b92)\n\
U 4 (#2ee773)\n\
L 4 (#1c9582)\n\
U 4 (#2fdd61)\n\
L 3 (#562392)\n\
U 8 (#2825c1)\n\
L 4 (#112402)\n\
U 6 (#4c03c1)\n\
L 8 (#485412)\n\
D 4 (#4ce6d3)\n\
L 2 (#6cd332)\n\
D 14 (#4ce6d1)\n\
L 3 (#070f52)\n\
U 3 (#61ece3)\n\
L 5 (#045ee2)\n\
U 3 (#123ca3)\n\
L 7 (#3f36c2)\n\
U 10 (#a9aca3)\n\
L 4 (#709942)\n\
U 2 (#6c2da3)\n\
L 4 (#304322)\n\
D 4 (#05f8a3)\n\
L 6 (#5054e2)\n\
D 4 (#b5c263)\n\
L 10 (#50c322)\n\
U 5 (#593113)\n\
L 3 (#4b0a12)\n\
U 3 (#5475a3)\n\
L 5 (#8bd8c2)\n\
U 9 (#1e9373)\n\
L 3 (#1752b2)\n\
U 4 (#74e433)\n\
L 3 (#1bb2b2)\n\
U 7 (#446ae3)\n\
L 8 (#729ce0)\n\
U 10 (#466cb1)\n\
L 2 (#6efdd0)\n\
D 10 (#466cb3)\n\
L 9 (#11f210)\n\
U 6 (#141693)\n\
L 8 (#52f450)\n\
U 7 (#7a3e33)\n\
R 8 (#3fa620)\n\
U 7 (#1ee3e3)\n\
R 11 (#4fe1a0)\n\
D 7 (#1e21e3)\n\
R 7 (#868012)\n\
D 6 (#917853)\n\
R 3 (#868010)\n\
D 4 (#5064f3)\n\
R 8 (#603410)\n\
U 4 (#1a07e3)\n\
R 7 (#370950)\n\
U 6 (#764a93)\n\
R 5 (#6ed900)\n\
D 4 (#64b8c3)\n\
R 5 (#9bfd10)\n\
D 14 (#38b1c3)\n\
R 3 (#1229b0)\n\
D 9 (#52db43)\n\
R 8 (#1ccf60)\n\
U 8 (#629983)\n\
R 5 (#10d560)\n\
U 2 (#26f753)\n\
R 9 (#72db50)\n\
U 4 (#11ca51)\n\
L 10 (#01afd0)\n\
U 5 (#412043)\n\
L 4 (#11b470)\n\
U 4 (#4165a3)\n\
R 3 (#a04090)\n\
U 4 (#4165a1)\n\
R 9 (#0b6860)\n\
U 9 (#412041)\n\
L 3 (#0670d0)\n\
U 9 (#11ca53)\n\
L 3 (#11d720)\n\
U 4 (#26f751)\n\
L 11 (#28d6a0)\n\
D 4 (#629981)\n\
L 9 (#1c3f30)\n\
D 9 (#2577b3)\n\
L 4 (#a6a900)\n\
U 3 (#5206f3)\n\
L 4 (#a6a902)\n\
D 3 (#5cfad3)\n\
L 6 (#4e2420)\n\
D 9 (#007143)\n\
L 5 (#397670)\n\
U 5 (#0b5db3)\n\
L 3 (#61c920)\n\
U 7 (#50d8b3)\n\
L 5 (#2192c2)\n\
U 7 (#6c1ab3)\n";
#endif

typedef struct {
    int x;
    int y1;
    int y2;
} line_t;

#define MAX_LINES 500
line_t lines[MAX_LINES];
int num_lines = 0;

int compare_lines(const line_t* a, const line_t* b) {
    return a->x - b->x;
}

line_t sections[MAX_LINES];
int num_sections = 0;

int64_t total = 0;

void add_section(line_t* line) {
    if (line->y1 <= line->y2) fail();
    sections[num_sections++] = *line;

#if 0
    printf("Add\n");
    for (int i = 0; i < num_sections; ++i) {
        printf("%d %d %d\n", sections[i].y1, sections[i].y2, sections[i].x);
    }
#endif
}

void remove_section(line_t* line) {
    if (line->y1 > line->y2) fail();
    for (int i = 0; i < num_sections; ) {
        if (sections[i].y2 <= line->y2 && sections[i].y1 >= line->y1) {
            // Overlaps - add in the area of the overlapping rectangle
            total += (int64_t)(min(sections[i].y1, line->y2) - max(sections[i].y2, line->y1) + 1) * (int64_t)(line->x - sections[i].x + 1);

            if (sections[i].y1 > line->y2) {
                // There is a section remaining below the line
                sections[num_sections].x = sections[i].x;
                sections[num_sections].y1 = sections[i].y1;
                sections[num_sections++].y2 = line->y2 + 1;
            }

            if (sections[i].y2 < line->y1) {
                // There is a section remaining above the line
                sections[num_sections].x = sections[i].x;
                sections[num_sections].y1 = line->y1 - 1;
                sections[num_sections++].y2 = sections[i].y2;
            }

            // Remove existsing section
            for (int j = i+1; j < num_sections; ++j) {
                sections[j-1] = sections[j];
            }
            num_sections--;
        }
        else {
            ++i;
        }
    }

#if 0
    printf("Remove %ld\n", total);
    for (int i = 0; i < num_sections; ++i) {
        printf("%d %d %d\n", sections[i].y1, sections[i].y2, sections[i].x);
    }
#endif
}

int main()
{
    const char* ptr = data;

    int x = 0;
    int y = 0;

    char last_dir = '0';
    while (*ptr) {
        int dist = 0;
        #if 1
        while (*ptr++ != '#');

        for (int i = 0; i < 5; ++i, ++ptr) {
            dist <<= 4;
            if (*ptr >= '0' && *ptr <= '9') dist += *ptr - '0';
            else dist += *ptr - 'a' + 10;
        }
        //printf("%d\n", dist);

        switch(*ptr) {
            case '3': {  // Up
                lines[num_lines].x = x;
                lines[num_lines].y1 = y - (last_dir == '0' ? 1 : 0);
                y -= dist; 
                lines[num_lines++].y2 = y + 1;
                break;
            }
            case '2': { // Left
                if (last_dir == '1') lines[num_lines-1].y2++;
                x -= dist; 
                break;
            }
            case '1': { // Down
                lines[num_lines].x = x;
                lines[num_lines].y1 = y + (last_dir == '2' ? 1 : 0);
                y += dist; 
                lines[num_lines++].y2 = y - 1;
                break;
            }
            case '0': { // Right
                if (last_dir == '3') lines[num_lines-1].y2--;
                x += dist; 
                break;
            }
            default: fail();
        }
        last_dir = *ptr;
        #else
        const char* end = read_num(ptr+2, &dist);
        switch(*ptr) {
            case 'U': {  // Up
                lines[num_lines].x = x;
                lines[num_lines].y1 = y - (last_dir == 'R' ? 1 : 0);
                y -= dist; 
                lines[num_lines++].y2 = y + 1;
                break;
            }
            case 'L': { // Left
                if (last_dir == 'D') lines[num_lines-1].y2++;
                x -= dist; 
                break;
            }
            case 'D': { // Down
                lines[num_lines].x = x;
                lines[num_lines].y1 = y + (last_dir == 'L' ? 1 : 0);
                y += dist; 
                lines[num_lines++].y2 = y - 1;
                break;
            }
            case 'R': { // Right
                if (last_dir == 'U') lines[num_lines-1].y2--;
                x += dist; 
                break;
            }
            default: fail();
        }
        last_dir = *ptr;
        ptr = end;
        #endif
        while (*ptr++ != '\n');
    }
    lines[num_lines-1].y2--;

    qsort(lines, num_lines, sizeof(line_t), compare_lines);

    for (int i = 0; i < num_lines; ++i) {
        //printf("%d %d %d\n", lines[i].y1, lines[i].y2, lines[i].x);
        if (lines[i].y1 > lines[i].y2) add_section(&lines[i]);
        else remove_section(&lines[i]);
        //printf("\n");
    }

    printf("\n%lld\n", total);

    return 0;
}
