// Decompiled: cgminer-api_796158dc7fe215b4

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = FUN_00010be0();
    return iVar1;
}

undefined4 main(int param_1, undefined4 *param_2)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    undefined4 uVar4;
    long lVar5;
    char *pcVar6;
    char *pcVar7;

    if (param_1 < 2) {
    LAB_00010b30:
        pcVar6 = "127.0.0.1";
        pcVar7 = "summary";
        iVar2 = 0xfbc;
        goto LAB_00010b44;
    }
    pcVar6 = (char *)param_2[1];
    if (*pcVar6 == '-') {
        cVar1 = pcVar6[1];
        if (cVar1 == '?') {
            if (pcVar6[2] == '\0')
                goto LAB_00010b68;
        } else if (cVar1 == 'h') {
            if (pcVar6[2] == '\0')
                goto LAB_00010b68;
            goto LAB_00010a40;
        }
        iVar2 = strcmp(pcVar6, "--help");
        if (iVar2 == 0)
            goto LAB_00010b68;
        if ((cVar1 != 'o') || (pcVar6[2] != '\0'))
            goto LAB_00010a58;
        DAT_00022080 = 1;
        if (param_1 == 2)
            goto LAB_00010b30;
        iVar2 = 2;
    } else {
    LAB_00010a40:
        iVar2 = strcmp(pcVar6, "--help");
        if (iVar2 == 0) {
        LAB_00010b68:
            fprintf(stderr, "usAge: %s [command [ip/host [port]]]\n", *param_2);
            return 1;
        }
    LAB_00010a58:
        iVar2 = 1;
    }
    pcVar6 = (char *)FUN_00010c70(param_2[iVar2]);
    pcVar7 = "summary";
    if (*pcVar6 != '\0') {
        pcVar7 = pcVar6;
    }
    if (iVar2 + 1 < param_1) {
        pcVar3 = (char *)FUN_00010c70(param_2[iVar2 + 1]);
        pcVar6 = "127.0.0.1";
        if (*pcVar3 != '\0') {
            pcVar6 = pcVar3;
        }
        if ((iVar2 + 2 < param_1) &&
            (pcVar3 = (char *)FUN_00010c70(param_2[iVar2 + 2]),
             *pcVar3 != '\0')) {
            lVar5 = strtol(pcVar3, (char **)0x0, 10);
            iVar2 = (int)(short)lVar5;
        } else {
            iVar2 = 0xfbc;
        }
    } else {
        iVar2 = 0xfbc;
        pcVar6 = "127.0.0.1";
    }
LAB_00010b44:
    uVar4 = callapi(pcVar7, pcVar6, iVar2);
    return uVar4;
}

void _start(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(main, in_stack_00000000, &stack0x00000004, 0x1120d,
                      0x11249, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00010bf4) */

void FUN_00010be0(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010c18) */
/* WARNING: Removing unreachable block (ram,0x00010c22) */

void FUN_00010c04(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00010c44) */
/* WARNING: Removing unreachable block (ram,0x00010c4e) */

void FUN_00010c28(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_0002207c == '\0') {
        FUN_00010c04();
        DAT_0002207c = '\x01';
    }
    return;
}

byte *FUN_00010c70(byte *param_1)

{
    ushort **ppuVar1;
    byte *pbVar2;
    byte *pbVar3;

    ppuVar1 = __ctype_b_loc();
    do {
        pbVar2 = param_1;
        param_1 = pbVar2 + 1;
    } while (((*ppuVar1)[*pbVar2] & 0x2000) != 0);
    pbVar3 = (byte *)__rawmemchr(pbVar2, (*ppuVar1)[*pbVar2] & 0x2000);
    while (pbVar2 < pbVar3) {
        pbVar3 = pbVar3 + -1;
        if (((*ppuVar1)[*pbVar3] & 0x2000) != 0) {
            *pbVar3 = 0;
        }
    }
    return pbVar2;
}

void display(char *param_1)

{
    char *pcVar1;
    ushort **ppuVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;
    char *pcVar6;
    char *pcVar7;

    if (param_1 != (char *)0x0) {
        do {
            pcVar1 = strchr(param_1, 0x7c);
            if (pcVar1 == (char *)0x0) {
                if (*param_1 == '\0') {
                    return;
                }
                pcVar6 = (char *)0x0;
            LAB_00010d5c:
                iVar5 = 0;
                do {
                    pcVar1 = strchr(param_1, 0x2c);
                    if (pcVar1 == (char *)0x0) {
                        if (*param_1 == '\0')
                            break;
                        pcVar4 = (char *)0x0;
                    LAB_00010d80:
                        pcVar1 = strchr(param_1, 0x3d);
                        if (pcVar1 == (char *)0x0) {
                            if (iVar5 == 0) {
                            LAB_00010e60:
                                printf("[%s%s] =>\n(\n", param_1, "");
                            }
                        LAB_00010e40:
                            printf("   [%d] => %s\n", iVar5, param_1);
                        } else {
                            *pcVar1 = '\0';
                            pcVar7 = pcVar1 + 1;
                            if (iVar5 == 0) {
                                if (pcVar7 == (char *)0x0)
                                    goto LAB_00010e60;
                                ppuVar2 = __ctype_b_loc();
                                pcVar3 = pcVar7;
                                if (((*ppuVar2)[(byte)pcVar1[1]] & 0x800) ==
                                    0) {
                                    pcVar3 = "";
                                }
                                printf("[%s%s] =>\n(\n", param_1, pcVar3);
                            } else if (pcVar7 == (char *)0x0)
                                goto LAB_00010e40;
                            printf("   [%s] => %s\n", param_1, pcVar7);
                        }
                    } else {
                        pcVar4 = pcVar1 + 1;
                        *pcVar1 = '\0';
                        if (*param_1 != '\0')
                            goto LAB_00010d80;
                    }
                    param_1 = pcVar4;
                    iVar5 = iVar5 + 1;
                } while (param_1 != (char *)0x0);
                puts(")");
            } else {
                pcVar6 = pcVar1 + 1;
                *pcVar1 = '\0';
                if (*param_1 != '\0')
                    goto LAB_00010d5c;
            }
            param_1 = pcVar6;
        } while (param_1 != (char *)0x0);
    }
    return;
}

int callapi(char *param_1, char *param_2, uint param_3)

{
    hostent *phVar1;
    int __fd;
    int iVar2;
    size_t sVar3;
    size_t sVar4;
    char *pcVar5;
    ssize_t sVar6;
    int *piVar7;
    char *pcVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    char *__buf;
    undefined4 local_48;
    undefined4 uStack_44;
    undefined4 local_40;
    undefined4 local_3c;
    sockaddr local_38;

    phVar1 = gethostbyname(param_2);
    if (phVar1 == (hostent *)0x0) {
        printf("Couldn\'t get hostname: \'%s\'\n", param_2);
        return 1;
    }
    __fd = socket(2, 1, 0);
    if (__fd == -1) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("Socket initialisation failed: %s\n", pcVar5);
        return 1;
    }
    local_38.sa_data[6] = '\0';
    local_38.sa_data[7] = '\0';
    local_38.sa_data._0_2_ =
        (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 >> 8) & 0xff;
    local_38.sa_data[8] = '\0';
    local_38.sa_data[9] = '\0';
    local_38.sa_data[10] = '\0';
    local_38.sa_data[0xb] = '\0';
    local_38.sa_data[0xc] = '\0';
    local_38.sa_data[0xd] = '\0';
    local_38.sa_family = 2;
    local_38.sa_data._2_2_ = SUB42(*(undefined4 *)*phVar1->h_addr_list, 0);
    local_38.sa_data._4_2_ =
        SUB42((uint) * (undefined4 *)*phVar1->h_addr_list >> 0x10, 0);
    iVar2 = connect(__fd, &local_38, 0x10);
    if (iVar2 < 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("Socket connect failed: %s\n", pcVar5);
        return 1;
    }
    local_48 = 1;
    uStack_44 = 0x3c;
    iVar2 = setsockopt(__fd, 1, 0xd, &local_48, 8);
    if (iVar2 != 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("cgminer-api, setsocket SO_LINGER failed (%s)\n", pcVar5);
        close(__fd);
    }
    local_40 = 10;
    local_3c = 0;
    iVar2 = setsockopt(__fd, 1, 0x15, &local_40, 8);
    if (iVar2 != 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("cgminer-api, setsocket SO_SNDTIMEO failed (%s)\n", pcVar5);
        close(__fd);
    }
    iVar2 = setsockopt(__fd, 1, 0x14, &local_40, 8);
    if (iVar2 != 0) {
        piVar7 = __errno_location();
        pcVar5 = strerror(*piVar7);
        printf("cgminer-api, setsocket SO_RCVTIMEO failed (%s)\n", pcVar5);
        close(__fd);
    }
    sVar3 = strlen(param_1);
    sVar3 = send(__fd, param_1, sVar3, 0);
    if ((int)sVar3 < 1) {
        piVar7 = __errno_location();
        iVar2 = 1;
        pcVar5 = strerror(*piVar7);
        printf("cgminer api send failed: %s\n", pcVar5);
    } else {
        sVar4 = strlen(param_1);
        if (sVar4 == sVar3) {
            pcVar5 = (char *)malloc(0x10000);
            if (pcVar5 == (char *)0x0) {
                printf("cgminer api: OOM (%d)\n", 0x10000);
                return 1;
            }
            iVar11 = 3;
            iVar9 = 0;
            iVar10 = 0xffff;
            while (true) {
                __buf = pcVar5 + iVar9;
                sVar3 = iVar10 + 0x10000;
                sVar6 = recv(__fd, __buf, iVar10 - iVar9, 0);
                iVar9 = iVar9 + sVar6;
                if (sVar6 < 0)
                    break;
                if (sVar6 == 0) {
                    iVar2 = 1;
                    puts("Recv failed: api server close the socket");
                    goto LAB_00011194;
                }
                if (iVar10 != iVar9) {
                    __buf = pcVar5 + iVar9;
                    goto LAB_00011194;
                }
                iVar11 = iVar11 + -1;
                if (iVar11 == 0) {
                    __buf = pcVar5 + iVar10;
                    goto LAB_00011194;
                }
                pcVar5 = (char *)realloc(pcVar5, sVar3);
                iVar10 = iVar10 + 0xffff;
                if (pcVar5 == (char *)0x0) {
                    printf("cgminer realloc: OOM (%d)\n", sVar3);
                    return 1;
                }
            }
            piVar7 = __errno_location();
            iVar2 = 1;
            pcVar8 = strerror(*piVar7);
            printf("Recv failed: %s\n", pcVar8);
        LAB_00011194:
            *__buf = '\0';
            if (DAT_00022080 == 0) {
                display();
            } else {
                puts(pcVar5);
            }
            free(pcVar5);
        }
    }
    close(__fd);
    return iVar2;
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined **ppuVar2;

    _init(param_1);
    iVar1 = 0;
    ppuVar2 = &__DT_INIT_ARRAY;
    do {
        iVar1 = iVar1 + 1;
        (*(code *)*ppuVar2)(param_1, param_2, param_3, *ppuVar2, param_4);
        ppuVar2 = ppuVar2 + 1;
    } while (iVar1 != 1);
    return;
}

void __libc_csu_fini(void)

{
    return;
}

void _fini(void)

{
    return;
}
