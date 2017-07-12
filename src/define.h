#ifndef DEFINE_H
#define DEFINE_H

#define FLIT_SIZE 128
#define PHIT_SIZE 256
#define IN_Q_SIZE 512
#define VC_SIZE 16
#define VC_NUM 9
#define XSIZE 4
#define YSIZE 4
#define ZSIZE 4
#define XW 3
#define YW 3
#define ZW 3
#define DSTW 9
#define DIR_INJECT 0
#define DIR_XPOS 1
#define DIR_YPOS 2
#define DIR_ZPOS 3
#define DIR_XNEG 4
#define DIR_YNEG 5
#define DIR_ZNEG 6
#define LINKDELAY 50 
/* packet format
* head flit
|FLIT type (3 bits)| VC class (1 bit) | dst z (3 bits) | dst y (3 bits) | dst x (3 bits) | priority field (4 bits) | src z (3 bits)| src y (3 bits)| src x (3 bits)| packet id (16 bits)| payload (66 bits)|
body flit
|FLIT type (3 bits)| payload|
tail flit
|FLIT type (3 bits)| payload|
*/

#define HEADER_LEN 3
#define ROUTE_LEN  3
#define HEAD_FLIT 0
#define BODY_FLIT 3
#define TAIL_FLIT 2
#define SINGLE_FLIT 3
#define CREDIT_FLIT 4


#define VC_CLASS_POS  FLIT_SIZE - HEADER_LEN - 1
#define PORT_NUM  6
#define DST_ZPOS  VC_CLASS_POS - 1
#define DST_YPOS  DST_ZPOS - ZW
#define DST_XPOS  DST_YPOS - YW
#define CMP_POS  DST_XPOS - XW
#define CMP_LEN 4


#define ERR_NO_ERROR  0
#define ERR_FLIT_WRONG 1
#define ERR_FLIT_MISSING 2
#define ERR_FLIT_TIMEOUT 3
#define ERR_PCKT_TIMEOUT 4
#define ERR_PCKT_WRONG 5

#endif