#ifndef _MEMORY_H
#define _MEMORY_H

/* Type of malloc requests */
enum lc_memTypes {
    LC_MEMTYPE_GFS = 0,
    LC_MEMTYPE_DIRENT = 1,
    LC_MEMTYPE_ICACHE = 2,
    LC_MEMTYPE_INODE = 3,
    LC_MEMTYPE_SYMLINK = 4,
    LC_MEMTYPE_PCACHE = 5,
    LC_MEMTYPE_ILOCK = 6,
    LC_MEMTYPE_BMAP = 7,
    LC_MEMTYPE_EXTENT = 8,
    LC_MEMTYPE_BLOCK = 9,
    LC_MEMTYPE_PAGE = 10,
    LC_MEMTYPE_DATA = 11,
    LC_MEMTYPE_DPAGEHASH = 12,
    LC_MEMTYPE_XATTR = 13,
    LC_MEMTYPE_XATTRNAME = 14,
    LC_MEMTYPE_XATTRVALUE = 15,
    LC_MEMTYPE_XATTRBUF = 16,
    LC_MEMTYPE_XATTRINODE = 17,
    LC_MEMTYPE_STATS = 18,
    LC_MEMTYPE_MAX = 19,
};

#endif