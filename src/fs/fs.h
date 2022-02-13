#ifndef __FS_FS_H
#define __FS_FS_H

#define MAX_FILES_PER_PART 4096 // 每个分区支持最大创建的文件数
#define BITS_PER_SECTOR 4096 // 每个扇区的位数
#define SECTOR_SIZE 512 // 扇区字节大小
#define BLOCK_SIZE SECTOR_SIZE // 块字节大小

/* 文件类型 */
enum file_types {
	FT_UNKNOWN, // 不支持的文件类型
	FT_REGULAR, // 普通文件
	FT_DIRECTORY // 目录文件
};

extern struct partition* cur_part; // 默认情况下操作的是哪个分区
void filesys_init(void);

#endif