/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_SPEC_SYNC_H
#define _UAPI_LINUX_SPEC_SYNC_H
#include <linux/ioctl.h>
#include <linux/types.h>
#define SPEC_FENCE_SIGNAL_ANY 0x1
#define SPEC_FENCE_SIGNAL_ALL 0x2
struct fence_bind_data {
  __u32 out_bind_fd;
  __u64 fds;
};
struct fence_create_data {
  __u32 num_fences;
  __u32 flags;
  __u32 out_bind_fd;
};
#define SPEC_SYNC_MAGIC '>'
#define SPEC_SYNC_IOC_BIND _IOWR(SPEC_SYNC_MAGIC, 3, struct fence_bind_data)
#define SPEC_SYNC_IOC_CREATE_FENCE _IOWR(SPEC_SYNC_MAGIC, 4, struct fence_create_data)
#define SPEC_SYNC_IOC_GET_VER _IOWR(SPEC_SYNC_MAGIC, 5, __u64)
#endif
