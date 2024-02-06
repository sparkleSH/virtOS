//
// Created by 39511 on 2024/2/6.
//
#ifndef OSLABS_INIT_H
#define OSLABS_INIT_H
#include "page.h"

int init_memory(){
    int id=0;
    int temp_address=0;
    for(int i=0;i<PAGE_NUM;i++){
        init_page(id++,temp_address);
        temp_address+=BYTE_PER_PAGE;
    }
}
#endif //OSLABS_INIT_H
