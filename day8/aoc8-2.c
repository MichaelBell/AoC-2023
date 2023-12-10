#include "../aoc.h"

#include <stdbool.h>

#if 0
const char* data = "LR\n\
\n\
11A = (11B, XXX)\n\
11B = (XXX, 11Z)\n\
11Z = (11B, XXX)\n\
22A = (22B, XXX)\n\
22B = (22C, 22C)\n\
22C = (22Z, 22Z)\n\
22Z = (22B, 22B)\n\
XXX = (XXX, XXX)\n";
#else
const char* data = "LRRRLRRLRRLRLRRLRRRLLRRLLRRLRRRLRLRRLLRRLRRLRLRRRLRRRLRLRLRLRRRLRRLRRRLRLRRLLLRLRLLRLRRRLRLRRRLRRRLLLRRLRLRRLRRRLLRRLRRLRRLRRRLRRLRRLRRLRLRRLRLRLRLRLRLRRRLRRLRLLLRRRLRLRRRLRRRLLRRLRRRLRRLRRRLRRRLRLRRRLRRLRLLRRLLRLRRLRLRLLRRLLRRLLRRLRRLRRRLRLRRLRLRRRLRRRLLRLRRLLLLRRRLLRLLLRRLRRRLRRRLRRRLRLRRRLRRRLRRRLRLRRRR\n\
\n\
FJT = (XDJ, LQV)\n\
VLP = (BJP, TTH)\n\
NVD = (KTC, TGT)\n\
VCC = (SRV, GMR)\n\
PNM = (SFQ, XMX)\n\
DPD = (HHJ, MGG)\n\
GQA = (BGC, BHR)\n\
VQH = (RCV, VJC)\n\
VHR = (GLQ, GJF)\n\
SQC = (CDT, HKV)\n\
GSV = (PKP, RMP)\n\
JLZ = (KMM, QCG)\n\
THG = (PTL, SXP)\n\
FTC = (VFH, TPL)\n\
JTT = (VQC, QVC)\n\
KQC = (RCR, TRT)\n\
RGP = (DPG, MFQ)\n\
TDP = (XJV, QCR)\n\
PCC = (LRD, XXR)\n\
MRQ = (PPS, KHB)\n\
TTX = (VSJ, XPN)\n\
JNR = (DFB, NSV)\n\
KJK = (PCR, LMT)\n\
JLB = (GXB, HND)\n\
BJN = (KNX, NXQ)\n\
VDV = (XNB, DTB)\n\
TXB = (DXL, PCN)\n\
MJS = (NQK, PDV)\n\
RPV = (BNF, QNS)\n\
CLM = (KLR, QCT)\n\
SXP = (JMV, MGN)\n\
HQG = (LNV, RTX)\n\
RQJ = (HQG, TSJ)\n\
LGD = (PNM, RHG)\n\
XPN = (LGC, CTR)\n\
JJB = (CDH, TXV)\n\
HVZ = (QRH, VHK)\n\
LSV = (FRK, LXV)\n\
RFH = (KMJ, DKH)\n\
FFV = (DJK, MCR)\n\
BMN = (HLV, NMQ)\n\
RBC = (FVH, CXN)\n\
PVK = (HKJ, LGD)\n\
BHK = (MLL, JCP)\n\
VJF = (DCM, SGJ)\n\
XVB = (QBS, MNF)\n\
NRT = (GLL, GLL)\n\
NXL = (CRV, PQB)\n\
TVC = (RKR, PVD)\n\
LDX = (TKH, BHK)\n\
JPG = (DMK, HHQ)\n\
PHV = (JJS, CKP)\n\
NVQ = (RRC, SHR)\n\
KJH = (JKQ, CCR)\n\
LHV = (MVL, LNK)\n\
BBK = (NMH, SQL)\n\
NXP = (PCH, CNJ)\n\
STL = (LMR, HRB)\n\
CFK = (NGC, KFK)\n\
FGC = (VJM, JPG)\n\
SFQ = (CXR, LCT)\n\
KDN = (JPS, QBJ)\n\
PCR = (DSB, TLL)\n\
JKQ = (MRR, JFS)\n\
FNS = (XNB, DTB)\n\
BBP = (LTR, VLP)\n\
MGN = (RKL, RMN)\n\
HCM = (XPC, PHB)\n\
RNJ = (QVC, VQC)\n\
HVT = (FTN, JJQ)\n\
NGP = (JSJ, TKR)\n\
XBL = (BTH, JXS)\n\
AAA = (GFB, FBF)\n\
HXN = (SMM, RVJ)\n\
CMF = (FJT, QMT)\n\
XLR = (HBL, RXC)\n\
NNK = (RCR, TRT)\n\
HNM = (HKN, KBP)\n\
CNN = (JCX, PXH)\n\
VSF = (QFN, HTG)\n\
MQM = (SSQ, QTS)\n\
NBM = (TPD, CVS)\n\
LJB = (SMK, KJK)\n\
VTD = (NGG, NGG)\n\
BCH = (FXM, BPK)\n\
VJM = (DMK, HHQ)\n\
TVX = (HJP, XSP)\n\
TFD = (TSD, TSD)\n\
XDR = (XPS, RDX)\n\
XPD = (VBR, JLN)\n\
TSJ = (RTX, LNV)\n\
NQK = (FVP, NXF)\n\
DCC = (QJL, QFQ)\n\
HKB = (XBH, RXS)\n\
MCR = (RTL, LSC)\n\
GFB = (PND, KRM)\n\
CVM = (JSH, CMP)\n\
QXK = (VTD, XTD)\n\
QFG = (TVX, TCJ)\n\
GQH = (JLB, SFN)\n\
NPB = (PRQ, MLJ)\n\
LRD = (VDV, FNS)\n\
QBJ = (FTV, QNM)\n\
TBB = (FKD, LKP)\n\
HBL = (VMF, DQJ)\n\
HVC = (PQR, BXX)\n\
TQC = (LNK, MVL)\n\
KFQ = (PBK, KPD)\n\
TRH = (SQD, CHT)\n\
TMT = (RSP, SLD)\n\
JBM = (XJV, QCR)\n\
BXX = (NDN, SHC)\n\
JFM = (GVJ, HLH)\n\
PPP = (HGX, JJT)\n\
DXG = (NPK, SBC)\n\
KDQ = (QKD, XRD)\n\
CDH = (XGJ, RGP)\n\
XMX = (CXR, LCT)\n\
PQN = (CKP, JJS)\n\
VDX = (FRP, KJZ)\n\
FRK = (SBT, HCQ)\n\
TDG = (QTM, SVX)\n\
JSD = (HHN, TJM)\n\
JJS = (TTX, MSV)\n\
ZZZ = (FBF, GFB)\n\
XSP = (JXG, CCD)\n\
GXX = (RQX, NGP)\n\
VTG = (QHF, PPP)\n\
BGC = (RQR, PPG)\n\
MQV = (BDT, RMH)\n\
DKH = (PDS, FGF)\n\
XCA = (VHR, HCS)\n\
GTC = (JSM, PTT)\n\
JVV = (LFG, MQV)\n\
TPP = (RBJ, ZZZ)\n\
SRV = (TFV, LBT)\n\
RPC = (FSM, FQF)\n\
CDD = (SQX, QKV)\n\
QHQ = (PVD, RKR)\n\
QCR = (FXJ, LLB)\n\
VDJ = (NMD, BVB)\n\
VLF = (XHR, JRG)\n\
PDS = (NPB, QHS)\n\
TVM = (DQH, XPD)\n\
SJF = (DXL, PCN)\n\
TPD = (VLG, FGC)\n\
SNM = (MHV, FSN)\n\
SGJ = (CDV, BCH)\n\
TPL = (NRT, FNP)\n\
NBF = (DQH, XPD)\n\
GGP = (QND, CHR)\n\
LMR = (KFM, LMM)\n\
HHQ = (KHG, VCF)\n\
XVN = (TGH, FQM)\n\
QTS = (DRH, XDN)\n\
JPM = (JHQ, FGM)\n\
LSB = (HKB, SPH)\n\
NMQ = (BPF, VCP)\n\
QKC = (SKL, RMD)\n\
SXB = (LFG, MQV)\n\
MRM = (SFR, NRD)\n\
GSG = (LFR, TST)\n\
MRR = (CFK, FXG)\n\
RFS = (DDK, LML)\n\
PTL = (MGN, JMV)\n\
NXF = (PPK, MLT)\n\
KSN = (MCK, HGN)\n\
SFR = (NSN, DDP)\n\
RHB = (KDQ, HQD)\n\
SBM = (LGD, HKJ)\n\
BCN = (BJH, DQC)\n\
KTJ = (QBQ, PPC)\n\
NMD = (RHB, GCD)\n\
DFB = (PNP, HVJ)\n\
GHG = (TGH, FQM)\n\
LGC = (RQQ, KFQ)\n\
NTS = (KJK, SMK)\n\
BFM = (JLB, SFN)\n\
HHK = (NFR, XDR)\n\
PCN = (KKC, TQG)\n\
XJV = (LLB, FXJ)\n\
PPC = (NNK, KQC)\n\
DTB = (RFH, FKB)\n\
QNM = (RQJ, RXM)\n\
HGN = (FJJ, HKQ)\n\
PHJ = (HRH, LCF)\n\
CMR = (VQK, TBM)\n\
SXL = (TVV, TCP)\n\
HPT = (XLR, HGK)\n\
XVX = (PPP, QHF)\n\
XRC = (PCC, SFT)\n\
QXB = (HRR, SHN)\n\
JMV = (RKL, RMN)\n\
RTN = (MRN, STL)\n\
JDD = (LDQ, QPB)\n\
JTB = (HHJ, MGG)\n\
MLM = (TVM, NBF)\n\
BJP = (XTT, XTT)\n\
HQN = (TXT, NJF)\n\
XGV = (KHB, PPS)\n\
XDB = (BHQ, XXC)\n\
QVC = (GNB, CSV)\n\
SFT = (LRD, XXR)\n\
MXB = (MCR, DJK)\n\
NQV = (CVM, PBV)\n\
JQM = (TCP, TVV)\n\
LFG = (BDT, RMH)\n\
SMK = (LMT, PCR)\n\
BXJ = (QMR, TVP)\n\
LDD = (RQX, NGP)\n\
RDX = (DFD, DSX)\n\
KNQ = (BNF, QNS)\n\
JLN = (MBF, XLS)\n\
QFM = (CDD, GCT)\n\
RND = (RTR, QPQ)\n\
FLC = (BJN, NBR)\n\
RRC = (CPK, DDC)\n\
RVD = (DCC, NSC)\n\
KQF = (TDG, HPN)\n\
MPN = (MDC, FDF)\n\
HKQ = (XDM, VCC)\n\
PPK = (BTF, NQV)\n\
QHS = (PRQ, MLJ)\n\
HGK = (RXC, HBL)\n\
DNX = (GMG, TBB)\n\
HVJ = (HCD, DXG)\n\
NHX = (RCF, RQF)\n\
KHB = (PQN, PHV)\n\
LNV = (VJF, BKH)\n\
QMT = (XDJ, LQV)\n\
VJK = (TXB, SJF)\n\
PJH = (HLH, GVJ)\n\
QNS = (MPN, BDP)\n\
TVP = (RLR, MQN)\n\
GBR = (HGG, TJG)\n\
BRM = (LXV, FRK)\n\
JFS = (FXG, CFK)\n\
TKR = (TFD, CDS)\n\
NBR = (KNX, NXQ)\n\
KMJ = (PDS, FGF)\n\
LKK = (NBR, BJN)\n\
KPD = (MBK, TTT)\n\
FVH = (FLL, XPM)\n\
DSF = (JNP, HCM)\n\
FCD = (HTC, XSK)\n\
RNP = (MHH, HQS)\n\
XBB = (SQB, SNM)\n\
SDS = (GNX, BBP)\n\
KBP = (XXT, KXJ)\n\
FDF = (GSV, KGV)\n\
CKP = (MSV, TTX)\n\
MST = (QND, CHR)\n\
RMH = (KNP, SQC)\n\
JJQ = (MFN, VKS)\n\
BXF = (RQT, JGF)\n\
TCP = (JBV, QKC)\n\
LTR = (BJP, BJP)\n\
MNT = (XLR, HGK)\n\
NXX = (NMF, MRM)\n\
KFF = (TDG, HPN)\n\
NCC = (THG, MVT)\n\
KGV = (PKP, RMP)\n\
HVH = (NJG, BND)\n\
RKL = (STN, GTF)\n\
CTH = (TST, LFR)\n\
FQF = (NNC, XBB)\n\
LFR = (GTM, FCD)\n\
SLD = (HNM, MQQ)\n\
TTJ = (FFR, FFR)\n\
DQJ = (MNJ, LSB)\n\
RQF = (XRC, FNX)\n\
XHR = (GGJ, KTJ)\n\
HJP = (CCD, JXG)\n\
CTC = (QVL, KSN)\n\
GQM = (TJM, HHN)\n\
TGT = (MCP, MDH)\n\
PBK = (MBK, TTT)\n\
JGF = (MQX, BXJ)\n\
FLL = (NVD, FKG)\n\
TGH = (VVC, LVF)\n\
MQN = (NKD, JNC)\n\
SVX = (XCM, PPX)\n\
MCP = (HVH, SVN)\n\
FSN = (NXL, SGG)\n\
TQG = (GXX, LDD)\n\
HBA = (QCG, KMM)\n\
DMK = (VCF, KHG)\n\
QKD = (FXF, QFG)\n\
MDH = (SVN, HVH)\n\
QTM = (XCM, PPX)\n\
PMP = (HGG, TJG)\n\
JXS = (TSM, LDX)\n\
LDQ = (NXT, DDV)\n\
KNX = (BPX, RND)\n\
KNP = (HKV, CDT)\n\
XCM = (MPQ, HKC)\n\
KMM = (VXM, XSH)\n\
FFR = (QBS, QBS)\n\
PLN = (GRH, QXB)\n\
JFF = (QTS, SSQ)\n\
FVK = (NBM, JCB)\n\
TQN = (DKD, HHV)\n\
HGX = (MSR, GVB)\n\
CSD = (HHK, BFQ)\n\
CNJ = (SLH, NXX)\n\
THD = (XXC, BHQ)\n\
TNL = (XGH, XKN)\n\
MHH = (GGP, MST)\n\
KQD = (DNK, QGR)\n\
TSD = (VHK, QRH)\n\
DSB = (BGV, NFK)\n\
CPN = (TPG, LPH)\n\
KBV = (LPH, TPG)\n\
DTS = (PQR, BXX)\n\
PPX = (MPQ, HKC)\n\
LLP = (LVH, CJH)\n\
PLL = (SJF, TXB)\n\
CVS = (VLG, FGC)\n\
HHJ = (CSD, DQV)\n\
QFQ = (BTT, VBP)\n\
FVP = (PPK, MLT)\n\
TFV = (QBV, GQG)\n\
NPK = (KNQ, RPV)\n\
DVQ = (RNV, FPF)\n\
DSX = (DGJ, RQB)\n\
PBV = (CMP, JSH)\n\
SQX = (JBN, RPD)\n\
VJC = (SBD, HRK)\n\
RLR = (NKD, JNC)\n\
FTN = (MFN, VKS)\n\
TRB = (RRC, SHR)\n\
LVH = (XDB, THD)\n\
NXB = (CMR, VDB)\n\
JSM = (HQJ, GTD)\n\
HHH = (XXF, JJB)\n\
RPD = (JDD, RPL)\n\
XSF = (QXB, GRH)\n\
XPM = (FKG, NVD)\n\
BNR = (CCT, NXD)\n\
HKN = (KXJ, XXT)\n\
KCP = (FFR, XVB)\n\
PHB = (QFM, PPD)\n\
DLC = (PMP, GBR)\n\
GMG = (FKD, LKP)\n\
DQC = (HQP, MLM)\n\
SMM = (SXL, JQM)\n\
SBP = (JRG, XHR)\n\
GCR = (FPF, RNV)\n\
FNX = (PCC, SFT)\n\
PQB = (NKM, CMF)\n\
TJM = (NXB, NPP)\n\
PPS = (PQN, PHV)\n\
BDP = (FDF, MDC)\n\
CXN = (XPM, FLL)\n\
VDB = (TBM, VQK)\n\
SBD = (TDP, JBM)\n\
NXQ = (RND, BPX)\n\
DRH = (HXN, SKC)\n\
VBG = (BCS, GSN)\n\
LSJ = (GNX, BBP)\n\
VCP = (KMQ, RMC)\n\
MVL = (VMG, SCG)\n\
JCB = (TPD, CVS)\n\
MGG = (DQV, CSD)\n\
RXS = (JTT, RNJ)\n\
BTF = (PBV, CVM)\n\
DFD = (DGJ, RQB)\n\
GGJ = (PPC, QBQ)\n\
BPK = (VBT, KQD)\n\
DKD = (CNN, HSD)\n\
SQD = (PHJ, CSL)\n\
PQG = (JFM, PJH)\n\
RMN = (STN, GTF)\n\
RCV = (HRK, SBD)\n\
MBK = (GKQ, MJS)\n\
CXR = (SDS, LSJ)\n\
XSK = (PLV, TQN)\n\
FBR = (BFM, GQH)\n\
GCD = (KDQ, HQD)\n\
PMF = (FGM, JHQ)\n\
XLP = (RFT, BMN)\n\
NSC = (QFQ, QJL)\n\
SHR = (CPK, DDC)\n\
DXL = (TQG, KKC)\n\
TTH = (XTT, TKZ)\n\
CGS = (KSN, QVL)\n\
QHF = (HGX, JJT)\n\
NFR = (XPS, RDX)\n\
CHR = (BBK, FLR)\n\
RPL = (LDQ, QPB)\n\
GTD = (MRJ, KJH)\n\
PNP = (HCD, DXG)\n\
GCT = (QKV, SQX)\n\
SGG = (CRV, PQB)\n\
HNN = (BVB, NMD)\n\
HLK = (CLM, DDL)\n\
GSN = (VDJ, HNN)\n\
KFB = (JRQ, DSF)\n\
XXR = (FNS, VDV)\n\
FJJ = (XDM, VCC)\n\
TCJ = (HJP, XSP)\n\
DJK = (RTL, LSC)\n\
NJF = (FKL, BNB)\n\
BGV = (JSD, GQM)\n\
JSH = (VTG, XVX)\n\
JBV = (RMD, SKL)\n\
RNV = (KBV, CPN)\n\
FKB = (KMJ, DKH)\n\
CDT = (HVC, DTS)\n\
TQT = (TPR, VSF)\n\
FNG = (LKK, FLC)\n\
RBJ = (GFB, FBF)\n\
RTR = (KFB, VHB)\n\
BKH = (SGJ, DCM)\n\
JRG = (GGJ, KTJ)\n\
GTF = (TVC, QHQ)\n\
JXG = (KQF, KFF)\n\
MBF = (GXS, NQR)\n\
GNB = (FLF, MTB)\n\
KFK = (FMH, DLS)\n\
LBT = (GQG, QBV)\n\
CGT = (VSF, TPR)\n\
GVA = (CTG, VQH)\n\
FNP = (GLL, TPP)\n\
RQT = (BXJ, MQX)\n\
CDV = (BPK, FXM)\n\
JCX = (QVX, LKM)\n\
XSH = (SXB, JVV)\n\
HKV = (DTS, HVC)\n\
MRN = (HRB, LMR)\n\
SBX = (CHT, SQD)\n\
FRP = (CTG, VQH)\n\
HHN = (NPP, NXB)\n\
NGG = (SJL, SJL)\n\
BJB = (KRL, JNR)\n\
GNX = (LTR, LTR)\n\
RCR = (KBH, NCC)\n\
NDN = (MQM, JFF)\n\
VXT = (JGF, RQT)\n\
PPG = (BBG, THJ)\n\
CDS = (TSD, HVZ)\n\
VSJ = (LGC, CTR)\n\
NSN = (DNF, TMT)\n\
VRJ = (GBR, PMP)\n\
CDQ = (VLF, SBP)\n\
XDN = (HXN, SKC)\n\
LCF = (FTM, CDQ)\n\
HCQ = (DCF, RTN)\n\
BPF = (KMQ, KMQ)\n\
NNC = (SQB, SNM)\n\
LQV = (SHQ, FTC)\n\
VFH = (NRT, NRT)\n\
VHK = (TMN, FNG)\n\
LPH = (BMT, NHX)\n\
PPD = (GCT, CDD)\n\
BXH = (VTD, XTD)\n\
LMT = (TLL, DSB)\n\
TSM = (TKH, BHK)\n\
KMQ = (NCS, NCS)\n\
FTV = (RXM, RQJ)\n\
XGJ = (MFQ, DPG)\n\
RXM = (TSJ, HQG)\n\
QBV = (SSH, QTB)\n\
TBM = (HHR, FVK)\n\
CCR = (MRR, JFS)\n\
SKL = (GHG, XVN)\n\
HRK = (JBM, TDP)\n\
MFQ = (PQG, PDF)\n\
DNK = (QJX, BGP)\n\
BDL = (GMG, TBB)\n\
MQQ = (HKN, KBP)\n\
RQR = (THJ, BBG)\n\
KFM = (GKN, DFN)\n\
XKN = (HTL, PVS)\n\
PDF = (JFM, PJH)\n\
TTT = (GKQ, MJS)\n\
RHG = (SFQ, XMX)\n\
XTD = (NGG, NRM)\n\
LXV = (SBT, HCQ)\n\
HCD = (NPK, SBC)\n\
TFT = (RFT, BMN)\n\
DDK = (MCS, DFR)\n\
DFR = (SBX, TRH)\n\
BND = (GHM, BDJ)\n\
SFN = (GXB, HND)\n\
HQD = (QKD, XRD)\n\
RMC = (NCS, LLZ)\n\
RQQ = (PBK, KPD)\n\
LKP = (PVK, SBM)\n\
PQR = (SHC, NDN)\n\
DGJ = (TKT, XXV)\n\
CHF = (QCG, KMM)\n\
SCG = (BDL, DNX)\n\
TJG = (HHH, KJG)\n\
PDV = (FVP, NXF)\n\
HGG = (KJG, HHH)\n\
VHB = (JRQ, DSF)\n\
KBH = (THG, MVT)\n\
PVD = (BRM, LSV)\n\
MNJ = (HKB, SPH)\n\
CJH = (THD, XDB)\n\
DCF = (STL, MRN)\n\
XLS = (GXS, NQR)\n\
SBC = (RPV, KNQ)\n\
BTH = (LDX, TSM)\n\
CPV = (JXS, BTH)\n\
DGR = (XLP, TFT)\n\
NFK = (GQM, JSD)\n\
VBP = (THN, BDB)\n\
RTL = (HQN, XQT)\n\
SJL = (FRP, FRP)\n\
XPC = (QFM, PPD)\n\
FXM = (VBT, KQD)\n\
MCK = (FJJ, HKQ)\n\
KRM = (DPD, JTB)\n\
BNF = (MPN, BDP)\n\
SQB = (MHV, FSN)\n\
QKV = (JBN, RPD)\n\
QBQ = (KQC, NNK)\n\
FPF = (CPN, KBV)\n\
SPH = (XBH, RXS)\n\
PLV = (HHV, DKD)\n\
DQV = (BFQ, HHK)\n\
NJQ = (LHV, TQC)\n\
PXH = (LKM, QVX)\n\
TMN = (FLC, LKK)\n\
LVF = (FBR, GTB)\n\
BCS = (VDJ, HNN)\n\
HHR = (JCB, NBM)\n\
HHD = (NXD, CCT)\n\
FGF = (QHS, NPB)\n\
LSC = (XQT, HQN)\n\
HQJ = (MRJ, KJH)\n\
CHT = (PHJ, CSL)\n\
HLH = (DGR, LTS)\n\
NRD = (DDP, NSN)\n\
JBN = (JDD, RPL)\n\
TRT = (KBH, NCC)\n\
HHV = (HSD, CNN)\n\
DDL = (QCT, KLR)\n\
CSV = (MTB, FLF)\n\
SLH = (NMF, MRM)\n\
THJ = (VLR, RNP)\n\
CTG = (VJC, RCV)\n\
MLL = (HVT, TDH)\n\
HLV = (BPF, BPF)\n\
XJS = (DQC, BJH)\n\
RMD = (GHG, XVN)\n\
BGP = (GCR, DVQ)\n\
RCF = (FNX, XRC)\n\
GHM = (XBL, CPV)\n\
DLS = (HPT, MNT)\n\
BDB = (BJB, QHM)\n\
SVN = (BND, NJG)\n\
NSV = (HVJ, PNP)\n\
VQC = (GNB, CSV)\n\
BHR = (PPG, RQR)\n\
CCD = (KFF, KQF)\n\
SBB = (TBJ, HLK)\n\
VVC = (FBR, GTB)\n\
SHQ = (VFH, TPL)\n\
VMF = (MNJ, LSB)\n\
MSV = (XPN, VSJ)\n\
TDH = (JJQ, FTN)\n\
RXC = (DQJ, VMF)\n\
RSP = (MQQ, HNM)\n\
SSH = (GLF, RVD)\n\
LTS = (TFT, XLP)\n\
HTC = (PLV, TQN)\n\
GLF = (NSC, DCC)\n\
BTT = (THN, BDB)\n\
DFN = (RPC, CPJ)\n\
NKM = (QMT, FJT)\n\
RMP = (LLP, GHD)\n\
PRQ = (DLC, VRJ)\n\
TBJ = (CLM, DDL)\n\
CPJ = (FSM, FQF)\n\
LHD = (GSN, BCS)\n\
GLL = (RBJ, RBJ)\n\
TXT = (FKL, BNB)\n\
NCS = (VHR, HCS)\n\
GLQ = (JFN, TNL)\n\
BMT = (RCF, RQF)\n\
JRQ = (HCM, JNP)\n\
FXJ = (VXT, BXF)\n\
GMR = (LBT, TFV)\n\
NMH = (XJS, BCN)\n\
RQX = (JSJ, JSJ)\n\
VXM = (JVV, SXB)\n\
PCH = (SLH, NXX)\n\
TXV = (XGJ, RGP)\n\
XNB = (FKB, RFH)\n\
JPS = (FTV, QNM)\n\
JSJ = (TFD, TFD)\n\
LLZ = (HCS, VHR)\n\
HPN = (QTM, SVX)\n\
DPG = (PQG, PDF)\n\
NKD = (CTC, CGS)\n\
TKZ = (BHR, BGC)\n\
HRB = (KFM, LMM)\n\
TLL = (NFK, BGV)\n\
MPQ = (KDN, DSR)\n\
BVB = (RHB, GCD)\n\
JFN = (XKN, XGH)\n\
QTB = (RVD, GLF)\n\
BFQ = (NFR, XDR)\n\
LCT = (SDS, LSJ)\n\
SQL = (BCN, XJS)\n\
LML = (MCS, DFR)\n\
NMF = (SFR, NRD)\n\
CPK = (BXH, QXK)\n\
JHQ = (RFS, BQS)\n\
QRH = (FNG, TMN)\n\
MLT = (NQV, BTF)\n\
BJH = (HQP, MLM)\n\
XHC = (TBJ, HLK)\n\
VQK = (FVK, HHR)\n\
NXD = (LJB, NTS)\n\
FSM = (NNC, XBB)\n\
KHG = (GTC, RPG)\n\
RTX = (BKH, VJF)\n\
HSD = (PXH, JCX)\n\
PND = (JTB, DPD)\n\
CRV = (NKM, CMF)\n\
FMH = (HPT, MNT)\n\
BPX = (QPQ, RTR)\n\
THN = (BJB, QHM)\n\
XBH = (JTT, RNJ)\n\
GVJ = (LTS, DGR)\n\
KRL = (DFB, NSV)\n\
XPS = (DFD, DSX)\n\
TST = (GTM, FCD)\n\
GKQ = (PDV, NQK)\n\
HKC = (KDN, DSR)\n\
DQH = (VBR, JLN)\n\
GJF = (JFN, TNL)\n\
QBS = (CHF, CHF)\n\
HTL = (NXP, LGP)\n\
MCS = (TRH, SBX)\n\
RKR = (BRM, LSV)\n\
VBR = (MBF, XLS)\n\
FKD = (SBM, PVK)\n\
FXF = (TVX, TCJ)\n\
FBF = (KRM, PND)\n\
QJL = (BTT, VBP)\n\
QJX = (GCR, DVQ)\n\
NGC = (FMH, DLS)\n\
TPG = (BMT, NHX)\n\
GTM = (HTC, XSK)\n\
CTR = (KFQ, RQQ)\n\
NQR = (HHD, BNR)\n\
XGH = (PVS, HTL)\n\
LKM = (VJK, PLL)\n\
SHN = (JPM, PMF)\n\
LMM = (DFN, GKN)\n\
DDV = (SBB, XHC)\n\
GQG = (QTB, SSH)\n\
DDP = (DNF, TMT)\n\
CSL = (HRH, LCF)\n\
LLB = (VXT, BXF)\n\
NPP = (VDB, CMR)\n\
HKJ = (RHG, PNM)\n\
QVL = (HGN, MCK)\n\
TVV = (JBV, QKC)\n\
MVT = (SXP, PTL)\n\
VBT = (DNK, QGR)\n\
XRD = (QFG, FXF)\n\
GTB = (BFM, GQH)\n\
JNP = (XPC, PHB)\n\
KTC = (MDH, MCP)\n\
QVX = (PLL, VJK)\n\
QFN = (TRB, NVQ)\n\
VLR = (HQS, MHH)\n\
BDT = (SQC, KNP)\n\
JCP = (TDH, HVT)\n\
KKC = (GXX, LDD)\n\
BDJ = (CPV, XBL)\n\
GRH = (SHN, HRR)\n\
GXB = (RBC, BTC)\n\
MNF = (CHF, JLZ)\n\
FGM = (RFS, BQS)\n\
RVJ = (SXL, JQM)\n\
FXG = (NGC, KFK)\n\
HND = (RBC, BTC)\n\
NXT = (XHC, SBB)\n\
FKG = (KTC, TGT)\n\
MQX = (QMR, TVP)\n\
JJT = (GVB, MSR)\n\
MHV = (SGG, NXL)\n\
KJG = (JJB, XXF)\n\
SBT = (DCF, RTN)\n\
TPR = (QFN, HTG)\n\
BNB = (XGV, MRQ)\n\
XXT = (VBG, LHD)\n\
PKP = (LLP, GHD)\n\
HCS = (GLQ, GJF)\n\
TKT = (XSF, PLN)\n\
HRR = (PMF, JPM)\n\
BHQ = (CGT, TQT)\n\
FKL = (XGV, MRQ)\n\
HRH = (FTM, CDQ)\n\
QPB = (NXT, DDV)\n\
XDJ = (SHQ, FTC)\n\
PTT = (GTD, HQJ)\n\
MDC = (KGV, GSV)\n\
KXJ = (VBG, LHD)\n\
FLF = (NJQ, MFB)\n\
FTM = (VLF, SBP)\n\
QCT = (FFV, MXB)\n\
HTG = (TRB, NVQ)\n\
TKH = (JCP, MLL)\n\
XXC = (CGT, TQT)\n\
MFN = (TTJ, KCP)\n\
HQS = (MST, GGP)\n\
GKN = (CPJ, RPC)\n\
RQB = (XXV, TKT)\n\
VKS = (TTJ, KCP)\n\
QMR = (RLR, MQN)\n\
XTT = (BGC, BHR)\n\
MRJ = (JKQ, CCR)\n\
SKC = (SMM, RVJ)\n\
PVS = (LGP, NXP)\n\
GXS = (BNR, HHD)\n\
GVB = (GSG, CTH)\n\
FQM = (LVF, VVC)\n\
CMP = (XVX, VTG)\n\
NVA = (VHK, QRH)\n\
CCT = (NTS, LJB)\n\
KJZ = (VQH, CTG)\n\
STN = (TVC, QHQ)\n\
HQP = (TVM, NBF)\n\
DDC = (BXH, QXK)\n\
QGR = (QJX, BGP)\n\
GHD = (CJH, LVH)\n\
MTB = (MFB, NJQ)\n\
SSQ = (DRH, XDN)\n\
QND = (FLR, BBK)\n\
LGP = (CNJ, PCH)\n\
RPG = (JSM, PTT)\n\
XXF = (CDH, TXV)\n\
XDM = (SRV, GMR)\n\
VLG = (JPG, VJM)\n\
NJG = (BDJ, GHM)\n\
VCF = (GTC, RPG)\n\
DSR = (QBJ, JPS)\n\
DNF = (SLD, RSP)\n\
MSR = (GSG, CTH)\n\
BBG = (VLR, RNP)\n\
XXV = (PLN, XSF)\n\
MLJ = (VRJ, DLC)\n\
MFB = (LHV, TQC)\n\
QPQ = (KFB, VHB)\n\
DCM = (CDV, BCH)\n\
NRM = (SJL, VDX)\n\
JNC = (CTC, CGS)\n\
XQT = (TXT, NJF)\n\
FLR = (NMH, SQL)\n\
BQS = (DDK, LML)\n\
BTC = (FVH, CXN)\n\
QHM = (KRL, JNR)\n\
RFT = (HLV, NMQ)\n\
KLR = (FFV, MXB)\n\
SHC = (MQM, JFF)\n\
LNK = (VMG, SCG)\n\
QCG = (VXM, XSH)\n\
VMG = (DNX, BDL)\n";
#endif

typedef struct {
    const char* name;
    uint16_t left;
    uint16_t right;
    int is_end;
} node_t;

#define MAX_NODES 800
node_t nodes[MAX_NODES];
int num_nodes = 0;

typedef struct {
    int cur_node;
    uint64_t steps;
} path_t;

#define MAX_PATHS 10
path_t paths[MAX_PATHS] = {};
int num_paths = 0;

typedef struct {
    int steps;
    int dest_route;
} end_route_t;

#define MAX_TURNS 308
#define MAX_ENDS 6
#define MAX_END_ROUTES (MAX_ENDS * MAX_TURNS)
end_route_t end_routes[MAX_END_ROUTES] = {};
uint8_t node_to_end[MAX_NODES];
uint16_t end_to_node[MAX_ENDS];
int num_ends = 0;
int num_turns = 0;
const char* turns;

int follow_path(int start_step, int* node)
{
    int steps = 0;
    if (start_step >= num_turns) fail();
    const char* turn_ptr = &turns[start_step];

    do {
        const bool left = *turn_ptr++ == 'L';
        if (*turn_ptr == '\n') turn_ptr = turns;

        if (left) {
            *node = nodes[*node].left;
        } else {
            *node = nodes[*node].right;
        }
        steps++;
    } while (!nodes[*node].is_end);

    return steps;
}

void create_end_route(int start_step, int node, end_route_t* route)
{
    if (route->steps != 0) fail();
    route->steps = follow_path(start_step, &node);
    route->dest_route = nodes[node].is_end - 1;
}

int main()
{
    const char* ptr = data;
    turns = ptr;
    ptr = read_word(ptr);
    num_turns = ptr - turns;
    if (num_turns > MAX_TURNS) fail();
    if (*ptr++ != '\n') fail();
    if (*ptr++ != '\n') fail();

    const char* instr_start = ptr;

    while (*ptr) {
        if (num_nodes >= MAX_NODES) fail();

        nodes[num_nodes].name = ptr;
        ptr = read_alphanum(ptr);

        if (*(ptr-1) == 'A') {
            if (num_paths >= MAX_PATHS) fail();
            paths[num_paths++].cur_node = num_nodes;
        }

        if (*(ptr-1) == 'Z') {
            node_to_end[num_nodes] = num_ends;
            end_to_node[num_ends] = num_nodes;
            nodes[num_nodes++].is_end = ++num_ends;
        }
        else nodes[num_nodes++].is_end = 0;

        while (*ptr++ != '\n');
    }

    ptr = instr_start;
    int node_idx = 0;

    while (*ptr) {
        ptr = read_alphanum(ptr);
        if (*ptr++ != ' ') fail();
        if (*ptr++ != '=') fail();
        if (*ptr++ != ' ') fail();
        if (*ptr++ != '(') fail();

        const char* end;
        end = read_alphanum(ptr);
        for (int i = 0; i < num_nodes; ++i) {
            if (check_word(ptr, end, nodes[i].name)) {
                nodes[node_idx].left = i;
                break;
            }
        }
        ptr = end;
        if (*ptr++ != ',') fail();
        if (*ptr++ != ' ') fail();
        end = read_alphanum(ptr);
        for (int i = 0; i < num_nodes; ++i) {
            if (check_word(ptr, end, nodes[i].name)) {
                nodes[node_idx].right = i;
                break;
            }
        }

        //printf("%.3s %hd %hd %s\n", nodes[node_idx].name, nodes[node_idx].left, nodes[node_idx].right, nodes[node_idx].is_end ? "End" : "");

        ++node_idx;
        while (*ptr++ != '\n');
    }

    const char* turn_ptr = turns;

    for (int i = 0; i < num_paths; ++i) {
        paths[i].steps = follow_path(0, &paths[i].cur_node);
        printf("%lu %.3s\n", paths[i].steps, nodes[paths[i].cur_node].name);
        paths[i].cur_node = node_to_end[paths[i].cur_node];
    }

    while (true) {
        uint64_t min_path_steps = 0xFFFFFFFFFFFFFFFFul;
        int min_path;
        uint64_t max_path_steps = 0;
        for (int i = 0; i < num_paths; ++i) {
            if (paths[i].steps < min_path_steps) {
                min_path_steps = paths[i].steps;
                min_path = i;
            }
            if (paths[i].steps > max_path_steps) {
                max_path_steps = paths[i].steps;
            }
        }
        if (min_path_steps == max_path_steps) {
            printf("\n%lu\n", min_path_steps);
            break;
        }

        path_t* path = &paths[min_path];
        min_path_steps %= num_turns;
        //printf("%lu\n", min_path_steps);
        end_route_t* end_route = &end_routes[path->cur_node * num_turns + min_path_steps];
        if (end_route->steps == 0) {
            create_end_route(min_path_steps, end_to_node[path->cur_node], end_route);
            printf("%.3s %d\n", nodes[end_to_node[path->cur_node]].name, end_route->steps);
        }

        path->cur_node = end_route->dest_route;
        path->steps += end_route->steps;
        //printf("%d %d\n", min_path, path->steps);
    }

    return 0;
}