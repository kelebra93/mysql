/******************************************************
The database buffer pool global types for the directory

(c) 1995 Innobase Oy

Created 11/17/1995 Heikki Tuuri
*******************************************************/

#ifndef buf0types_h
#define buf0types_h

typedef	struct buf_page_struct		buf_page_t;
typedef	struct buf_block_struct		buf_block_t;
typedef struct buf_chunk_struct		buf_chunk_t;
typedef	struct buf_pool_struct		buf_pool_t;

/* The 'type' used of a buffer frame */
typedef	byte	buf_frame_t;

/* Flags for flush types */
enum buf_flush {
	BUF_FLUSH_LRU = 0,
	BUF_FLUSH_SINGLE_PAGE,
	BUF_FLUSH_LIST,
	BUF_FLUSH_N_TYPES		/* index of last element + 1  */
};

/* Flags for io_fix types */
enum buf_io_fix {
	BUF_IO_NONE = 0,		/**< no pending I/O */
	BUF_IO_READ,			/**< read pending */
	BUF_IO_WRITE			/**< write pending */
};

#endif

