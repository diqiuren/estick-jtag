/* This file was created automatically by ../../../tools/rlink_make_speed_table/rlink_make_speed_table.pl. */

#include "rlink.h"
#include "st7.h"

static const u8 dtc_64[] = {
	0, 2, 68, 84, 67, 2, 13, 160, 176, 151, 147, 182, 141, 152, 177, 129, 148,
	191, 143, 142, 5, 3, 0, 0, 0, 2, 68, 84, 67, 4, 0, 192, 5, 15, 0, 42, 42,
	42, 73, 0, 88, 0, 160, 189, 0, 0, 0, 0, 106, 9, 1, 8, 22, 100, 111, 119,
	110, 108, 111, 97, 100, 2, 226, 7, 219, 39, 137, 51, 172, 130, 192, 96,
	175, 191, 130, 217, 128, 57, 69, 177, 159, 179, 68, 178, 159, 193, 133,
	153, 176, 159, 130, 132, 135, 164, 134, 51, 129, 60, 223, 9, 98, 128, 177,
	129, 96, 201, 160, 130, 201, 51, 137, 201, 57, 68, 160, 176, 67, 219, 39,
	154, 201, 40, 69, 219, 39, 150, 17, 27, 205, 51, 43, 99, 60, 118, 193,
	96, 201, 160, 130, 24, 205, 51, 43, 99, 218, 156, 47, 60, 105, 193, 96,
	201, 160, 138, 166, 178, 136, 160, 183, 139, 86, 202, 8, 2, 36, 138, 105,
	193, 96, 201, 160, 43, 139, 167, 181, 136, 70, 177, 147, 67, 193, 96, 219,
	39, 131, 161, 176, 130, 195, 53, 131, 178, 10, 66, 176, 151, 60, 97, 58,
	151, 215, 2, 40, 66, 1, 0, 160, 185, 130, 60, 97, 203, 130, 60, 194, 139,
	127, 195, 53, 156, 47, 200, 96, 201, 56, 177, 66, 176, 147, 201, 57, 168,
	66, 160, 38, 155, 160, 176, 139, 171, 182, 136, 167, 183, 96, 201, 59,
	66, 46, 193, 151, 96, 201, 160, 139, 219, 39, 131, 160, 191, 130, 195,
	53, 131, 177, 10, 66, 176, 147, 151, 0, 60, 97, 58, 151, 0, 160, 185, 130,
	60, 97, 203, 8, 2, 36, 139, 124, 193, 151, 96
};

static const u8 dtc_11[] = {
	0, 2, 68, 84, 67, 2, 13, 160, 176, 151, 147, 182, 141, 152, 177, 129, 148,
	188, 143, 142, 5, 3, 0, 0, 0, 2, 68, 84, 67, 4, 0, 192, 5, 15, 0, 42, 42,
	42, 73, 0, 88, 0, 154, 183, 0, 0, 0, 0, 106, 9, 1, 8, 22, 100, 111, 119,
	110, 108, 111, 97, 100, 2, 213, 7, 219, 39, 137, 51, 172, 130, 192, 96,
	175, 191, 130, 217, 128, 57, 69, 177, 159, 179, 68, 178, 159, 193, 133,
	153, 176, 159, 130, 132, 135, 164, 134, 51, 129, 60, 223, 9, 98, 128, 177,
	129, 96, 201, 160, 130, 201, 51, 137, 201, 57, 68, 160, 176, 67, 219, 39,
	154, 201, 40, 69, 219, 39, 150, 17, 27, 205, 51, 43, 99, 60, 118, 193,
	96, 201, 160, 130, 24, 205, 51, 43, 99, 218, 156, 47, 60, 105, 193, 96,
	201, 160, 138, 166, 178, 136, 160, 183, 139, 86, 202, 8, 2, 36, 138, 105,
	193, 96, 201, 160, 43, 139, 167, 181, 136, 70, 177, 147, 67, 193, 96, 219,
	39, 131, 195, 53, 131, 178, 10, 66, 176, 151, 0, 0, 0, 0, 0, 58, 151, 215,
	2, 40, 66, 1, 203, 130, 60, 194, 139, 121, 195, 53, 156, 47, 200, 96, 201,
	56, 177, 66, 176, 147, 201, 57, 168, 66, 160, 38, 155, 160, 176, 139, 171,
	176, 136, 167, 183, 96, 201, 59, 66, 46, 193, 151, 96, 201, 160, 139, 219,
	39, 131, 195, 53, 131, 177, 10, 66, 176, 147, 151, 0, 0, 0, 0, 0, 58, 151,
	203, 8, 2, 36, 139, 117, 193, 151, 96
};

static const u8 dtc_8[] = {
	0, 2, 68, 84, 67, 2, 13, 160, 176, 151, 147, 182, 141, 152, 177, 129, 148,
	187, 143, 142, 5, 3, 0, 0, 0, 2, 68, 84, 67, 4, 0, 192, 5, 15, 0, 42, 42,
	42, 73, 0, 88, 0, 152, 181, 0, 0, 0, 0, 106, 9, 1, 8, 22, 100, 111, 119,
	110, 108, 111, 97, 100, 2, 209, 7, 219, 39, 137, 51, 172, 130, 192, 96,
	175, 191, 130, 217, 128, 57, 69, 177, 159, 179, 68, 178, 159, 193, 133,
	153, 176, 159, 130, 132, 135, 164, 134, 51, 129, 60, 223, 9, 98, 128, 177,
	129, 96, 201, 160, 130, 201, 51, 137, 201, 57, 68, 160, 176, 67, 219, 39,
	154, 201, 40, 69, 219, 39, 150, 17, 27, 205, 51, 43, 99, 60, 118, 193,
	96, 201, 160, 130, 24, 205, 51, 43, 99, 218, 156, 47, 60, 105, 193, 96,
	201, 160, 138, 166, 178, 136, 160, 183, 139, 86, 202, 8, 2, 36, 138, 105,
	193, 96, 201, 160, 43, 139, 167, 181, 136, 70, 177, 147, 67, 193, 96, 219,
	39, 131, 195, 53, 131, 178, 10, 66, 176, 151, 0, 0, 0, 58, 151, 215, 2,
	40, 66, 1, 203, 130, 60, 194, 139, 119, 195, 53, 156, 47, 200, 96, 201,
	56, 177, 66, 176, 147, 201, 57, 168, 66, 160, 38, 155, 160, 176, 139, 170,
	190, 136, 167, 183, 96, 201, 59, 66, 46, 193, 151, 96, 201, 160, 139, 219,
	39, 131, 195, 53, 131, 177, 10, 66, 176, 147, 151, 0, 0, 0, 58, 151, 203,
	8, 2, 36, 139, 115, 193, 151, 96
};

static const u8 dtc_2[] = {
	0, 2, 68, 84, 67, 2, 14, 160, 176, 151, 147, 182, 141, 152, 177, 129, 148,
	186, 143, 185, 142, 5, 3, 0, 0, 0, 2, 68, 84, 67, 4, 0, 192, 5, 15, 0,
	42, 42, 42, 73, 0, 88, 0, 149, 178, 0, 0, 0, 0, 106, 9, 1, 8, 22, 100,
	111, 119, 110, 108, 111, 97, 100, 2, 203, 7, 219, 39, 137, 51, 172, 130,
	192, 96, 175, 191, 130, 217, 128, 57, 69, 177, 159, 179, 68, 178, 159,
	193, 133, 153, 176, 159, 130, 132, 135, 164, 134, 51, 129, 60, 223, 9,
	98, 128, 177, 129, 96, 201, 160, 130, 201, 51, 137, 201, 57, 68, 160, 176,
	67, 219, 39, 154, 201, 40, 69, 219, 39, 150, 17, 27, 205, 51, 43, 99, 60,
	118, 193, 96, 201, 160, 130, 24, 205, 51, 43, 99, 218, 156, 47, 60, 105,
	193, 96, 201, 160, 138, 166, 178, 136, 160, 183, 139, 86, 202, 8, 2, 36,
	138, 105, 193, 96, 201, 160, 43, 139, 167, 181, 136, 70, 177, 147, 67,
	193, 96, 219, 39, 131, 195, 53, 131, 178, 10, 66, 176, 151, 58, 151, 215,
	2, 40, 66, 1, 203, 130, 60, 194, 139, 116, 195, 53, 156, 47, 200, 96, 201,
	56, 177, 66, 176, 147, 201, 57, 168, 66, 160, 38, 155, 160, 176, 139, 170,
	187, 136, 167, 183, 96, 201, 59, 66, 46, 193, 151, 96, 201, 160, 139, 219,
	39, 131, 195, 53, 131, 177, 10, 66, 176, 147, 151, 58, 151, 203, 8, 2,
	36, 139, 112, 193, 151, 96
};

const rlink_speed_table_t rlink_speed_table[] = {{
	dtc_64, sizeof(dtc_64), (ST7_FOSC * 2) / (1000 * 64), 64
}, {
	dtc_11, sizeof(dtc_11), (ST7_FOSC * 2) / (1000 * 11), 11
}, {
	dtc_8, sizeof(dtc_8), (ST7_FOSC * 2) / (1000 * 8), 8
}, {
	dtc_2, sizeof(dtc_2), (ST7_FOSC * 2) / (1000 * 2), 2
}};

const size_t rlink_speed_table_size = sizeof(rlink_speed_table) / sizeof(*rlink_speed_table);

