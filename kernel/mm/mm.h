//
// Created by 39511 on 2024/2/6.
//

#ifndef OSLABS_MM_H
#define OSLABS_MM_H
#include "alloc.h"
#include "init.h"
#include "page.h"
#include <stdio.h>
int check_memory(){
    for(int i=0;i<PAGE_NUM;i++){
        struct page p=pages[i];
        printf("页号:%d\n",p.id);
        printf("地址范围:%d~%d\n",p.start_address,p.start_address+BYTE_PER_PAGE);
    }
}
#endif //OSLABS_MM_H
