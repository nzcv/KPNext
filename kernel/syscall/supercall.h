#ifndef _KP_SUPERCALL_H_
#define _KP_SUPERCALL_H_

#define __NR_supercall 0xff
#define __NR_supercall_seccomp 0x115

#define SUPERCALL_HELLO 0x1000
#define SUPERCALL_GET_KERNEL_VERSION 0x1001
#define SUPERCALL_GET_KP_VERSION 0x1002
#define SUPERCALL_LOAD_KPM 0x1003
#define SUPERCALL_UNLOAD_KPM 0x1004
#define SUPERCALL_SU 0x1005
#define SUPERCALL_GRANT_SU 0x1006
#define SUPERCALL_REVOKE_SU 0x1007

#define SUPERCALL_TEST 0x10FF
#define SUPERCALL_MAX 0x1100

#define SUPERCALL_RES_SUCCEED 0
#define SUPERCALL_RES_FAILED 1
#define SUPERCALL_RES_NOT_IMPL 2

long supercall(const char *key, long cmd, long arg2, long arg3, long arg4, long arg5);
int supercall_init();

#endif
