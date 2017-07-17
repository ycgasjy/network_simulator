#ifndef REDUCTION_TREE_H
#define REDUCTION_TREE_H
#include "flit.h"
class reduction_tree{
public:
    int N_fan_in;
    int our_dir;
    int mode;
    int level_num;
    int l4_N = 1; //default to be 1
    int l4_W;
    int l3_N;
    int l3_W;
    int l2_N;
    int l2_W;
    int l1_N;
    int l1_W;
    flit** flit_in;
    flit* in_latch;
    bool* in_avail;
    bool out_avail_latch;
    bool* out_avail;
    
    flit out;
    flit* in_slot;
 
    N_to_1_reductor* l1_reductors;//will allocated by l1_N slots after init
    N_to_1_reductor* l2_reductors;//will allocated by l2_N slots after init
    N_to_1_reductor* l3_reductors;//will allocated by l3_N slots after init
    N_to_1_reductor l4_reductor;
    
    void reduction_tree_init(int N_Fan_in, int Out_dir, int Level_num, int Mode, int L1_N, int L2_N, int L3_N, flit** In_list, bool* Out_avail);
    void consume();
    void produce();
    void free();
};



#endif
