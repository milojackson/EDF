/*
***************************************************************************
*
* Author: Teunis van Beelen
*
* Copyright (C) 2010, 2011, 2012, 2013, 2014, 2015, 2016, 2017 Teunis van Beelen
*
* Email: teuniz@gmail.com
*
***************************************************************************
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
***************************************************************************
*/


#ifndef EDFPLUS_ANNOT_LIST_II_H
#define EDFPLUS_ANNOT_LIST_II_H


#include <stdlib.h>
#include <string.h>


#define MAX_ANNOTATION_LEN_II   512


#ifdef __cplusplus
extern "C" {
#endif

struct annotationblock_ii{
        int file_num;
        long long onset;
        char duration[16];
        char annotation[MAX_ANNOTATION_LEN_II + 1];
        int modified;
        int x_pos;
        int selected;
        int jump;
        int hided;
        int hided_in_list;
        unsigned int ident;
       };

struct annotation_list_ii{
        struct annotationblock_ii *items;
        int sz;
        int mem_sz;
};


int edfplus_annotation_ii_add_item(struct annotation_list_ii *, struct annotationblock_ii);
int edfplus_annotation_ii_size(struct annotation_list_ii *);
void edfplus_annotation_ii_empty_list(struct annotation_list_ii *);
void edfplus_annotation_ii_remove_item(struct annotation_list_ii *, int);
int edfplus_annotation_ii_get_item(struct annotation_list_ii *, struct annotationblock_ii *, int);
void edfplus_annotation_ii_sort(struct annotation_list_ii *);
struct annotation_list_ii * edfplus_annotation_ii_copy_list(struct annotation_list_ii *);

// int edfplus_annotation_ii_get_tal_timestamp_digit_cnt(struct edfhdrblock *);
// int edfplus_annotation_ii_get_tal_timestamp_decimal_cnt(struct edfhdrblock *);
// int edfplus_annotation_ii_get_max_annotation_strlen(struct annotation_list_ii *);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif




