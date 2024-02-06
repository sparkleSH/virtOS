//
// Created by 39511 on 2024/2/6.
//
#include "../stimulate/hardware/memory.h"
#ifndef OSLABS_PAGE_H
#define OSLABS_PAGE_H
#define BYTE_PER_PAGE 128
#define PAGE_NUM MEMORY_SIZE/BYTE_PER_PAGE
struct page{
    int id;
    int start_address;
    int end_address;
};
struct page pages[];
struct page init_page(int id, int start_address){
    struct page p;
    p.id=id;
    p.start_address=start_address;
    p.end_address=start_address+BYTE_PER_PAGE-1;
    pages[id]=p;
}
#endif //OSLABS_PAGE_H
