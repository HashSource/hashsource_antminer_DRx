// Decompiled: i2cget_59b5f26ed8e7a0cb

void _DT_INIT(void)

{
    FUN_00009264();
    return;
}

void FUN_00008b10(int param_1, int param_2)

{
    char cVar1;
    FILE *pFVar2;
    int *piVar3;
    int iVar4;
    char *pcVar5;
    int iVar6;
    int extraout_r2;
    undefined *puVar7;
    undefined4 uVar8;
    bool bVar9;
    uint uVar10;
    int unaff_r10;
    int iVar11;
    bool bVar12;
    bool bVar13;
    undefined8 uVar14;
    int local_c4;
    char *local_bc;
    uint local_b8;
    undefined1 local_b4;
    undefined1 local_b3;
    int local_b0;
    ushort *local_ac;
    undefined1 auStack_a8[20];
    byte local_94[36];
    ushort local_70[18];
    byte local_4c[40];

    bVar13 = false;
    iVar11 = 0;
    iVar4 = 1;
    bVar9 = false;
    uVar8 = 0;
    iVar6 = param_2;
    if (param_1 < 2)
        goto LAB_00008b94;
    do {
        uVar14 = CONCAT44(iVar4, (undefined4 *)(iVar6 + 4));
        pcVar5 = *(char **)(iVar6 + 4);
        if (*pcVar5 != '-')
            goto LAB_00008b94;
        cVar1 = pcVar5[1];
        if (cVar1 == 'f') {
        LAB_00008b80:
            uVar8 = 1;
        } else {
            if (cVar1 != 'y') {
                if (cVar1 == 'V')
                    goto LAB_00008c28;
                fprintf(stderr, "Error: Unsupported option \"%s\"!\n");
                uVar14 = FUN_0000935c();
                goto LAB_00008b80;
            }
            bVar9 = true;
        }
        while (true) {
            iVar11 = (int)((ulonglong)uVar14 >> 0x20);
            iVar6 = (int)uVar14;
            iVar4 = iVar11 + 1;
            if (iVar4 < param_1)
                break;
        LAB_00008b94:
            if (bVar13) {
                fprintf(stderr, "i2cget version %s\n", "3.1.0");
                /* WARNING: Subroutine does not return */
                exit(0);
            }
            if (param_1 <= iVar11 + 2)
                goto LAB_00008c6c;
            unaff_r10 = FUN_00009b80(*(undefined4 *)(param_2 + iVar4 * 4));
            if (unaff_r10 < 0)
                goto LAB_00008c6c;
            local_c4 =
                FUN_00009468(*(undefined4 *)(param_2 + (iVar11 + 2) * 4));
            if (local_c4 < 0)
                goto LAB_00008c6c;
            iVar6 = iVar11 + 3;
            if (iVar6 < param_1) {
                while ((uVar10 = strtol(*(char **)(param_2 + iVar6 * 4),
                                        &local_bc, 0),
                        *local_bc != '\0' || (0xff < uVar10))) {
                    fwrite("Error: Data address invalid!\n", 1, 0x1d, stderr);
                LAB_00008c6c:
                    FUN_0000935c();
                    iVar6 = extraout_r2;
                }
                iVar6 = 2;
            } else {
                uVar10 = 0xffffffff;
                iVar6 = 1;
            }
            if (param_1 <= iVar11 + 4) {
                bVar13 = false;
            LAB_00008ca8:
                iVar11 = FUN_000094fc(unaff_r10, auStack_a8, 0x14, 0);
                if (iVar11 < 0)
                    goto LAB_00008e00;
                iVar4 = ioctl(iVar11, 0x705, &local_b8);
                pFVar2 = stderr;
                if (iVar4 < 0) {
                    piVar3 = __errno_location();
                    pcVar5 = strerror(*piVar3);
                    fprintf(pFVar2,
                            "Error: Could not get the adapter functionality "
                            "matrix: %s\n",
                            pcVar5);
                    goto LAB_00008e00;
                }
                if (iVar6 == 2) {
                    if ((local_b8 & 0x80000) == 0) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus read byte");
                        goto LAB_00008e00;
                    }
                } else if (iVar6 == 3) {
                    if ((local_b8 & 0x200000) == 0) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus read word");
                        goto LAB_00008e00;
                    }
                } else {
                    if ((local_b8 & 0x20000) == 0) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus receive byte");
                        goto LAB_00008e00;
                    }
                    if ((uVar10 != 0xffffffff) && ((local_b8 & 0x40000) == 0)) {
                        fprintf(stderr,
                                "Error: Adapter does not have %s capability\n",
                                "SMBus send byte");
                        goto LAB_00008e00;
                    }
                }
                if ((bVar13 != false) && ((local_b8 & 9) == 0)) {
                    fwrite("Warning: Adapter does not seem to support PEC\n", 1,
                           0x2e, stderr);
                }
                iVar4 = FUN_00009cc8(iVar11, local_c4, uVar8);
                if (iVar4 != 0)
                    goto LAB_00008e00;
                if (!bVar9) {
                    fwrite("WARNING! This program can confuse your I2C bus, "
                           "cause data loss and worse!\n",
                           1, 0x4b, stderr);
                    bVar9 = bVar13;
                    if (local_c4 - 0x50U < 8) {
                        if (bVar13 != false) {
                            fwrite("STOP! EEPROMs are I2C devices, not SMBus "
                                   "devices. Using PEC\non I2C devices may "
                                   "result in unexpected results, such "
                                   "as\ntrashing the contents of EEPROMs. We "
                                   "can\'t let you do that, sorry.\n",
                                   1, 0xb8, stderr);
                            goto LAB_00009020;
                        }
                        bVar12 = uVar10 == 0;
                        if (-1 < (int)uVar10) {
                            bVar12 = iVar6 == 1;
                        }
                        if (!bVar12)
                            goto LAB_00009064;
                    LAB_00008f7c:
                        fprintf(stderr,
                                "I will read from device file %s, chip address "
                                "0x%02x, ",
                                auStack_a8, local_c4);
                        fprintf(stderr, "data address\n0x%02x", uVar10);
                        if (uVar10 == 0xffffffff) {
                        LAB_000090e8:
                            pcVar5 = "read byte";
                        } else {
                            pcVar5 = "write byte/read byte";
                        }
                    } else {
                        bVar12 = uVar10 == 0;
                        if (-1 < (int)uVar10) {
                            bVar12 = iVar6 == 1;
                        }
                        if (bVar12) {
                            if (bVar13 != false) {
                                fwrite("WARNING! All I2C chips and some SMBus "
                                       "chips will interpret a write\nbyte "
                                       "command with PEC as awrite byte data "
                                       "command, effectively writing a\nvalue "
                                       "into a register!\n",
                                       1, 0xa3, stderr);
                                bVar9 = true;
                            }
                            goto LAB_00008f7c;
                        }
                    LAB_00009064:
                        fprintf(stderr,
                                "I will read from device file %s, chip address "
                                "0x%02x, ",
                                auStack_a8, local_c4);
                        if (uVar10 == 0xffffffff) {
                            fwrite("current data\naddress", 1, 0x14, stderr);
                            if (iVar6 != 1)
                                goto LAB_000090a4;
                            bVar9 = false;
                            goto LAB_000090e8;
                        }
                        fprintf(stderr, "data address\n0x%02x", uVar10);
                        if (iVar6 != 1) {
                        LAB_000090a4:
                            bVar9 = false;
                            pcVar5 = "read word data";
                            if (iVar6 == 2) {
                                pcVar5 = "read byte data";
                            }
                        } else {
                            bVar9 = false;
                            pcVar5 = "write byte/read byte";
                        }
                    }
                    fprintf(stderr, ", using %s.\n", pcVar5);
                    if (bVar13 != false) {
                        fwrite("PEC checking enabled.\n", 1, 0x16, stderr);
                    }
                    puVar7 = &DAT_00009fa8;
                    if (bVar9 != false) {
                        puVar7 = &DAT_00009fa4;
                    }
                    fprintf(stderr, "Continue? [%s] ", puVar7);
                    fflush(stderr);
                    iVar4 = FUN_00009d38(bVar9 ^ 1);
                    if (iVar4 == 0) {
                        fwrite("Aborting on user request.\n", 1, 0x1a, stderr);
                    LAB_00009020:
                        /* WARNING: Subroutine does not return */
                        exit(0);
                    }
                }
                if ((bVar13 != false) && (iVar4 = ioctl(iVar11, 0x708, 1),
                                          pFVar2 = stderr, iVar4 < 0)) {
                    piVar3 = __errno_location();
                    pcVar5 = strerror(*piVar3);
                    fprintf(pFVar2, "Error: Could not set PEC: %s\n", pcVar5);
                    close(iVar11);
                LAB_00008e00:
                    /* WARNING: Subroutine does not return */
                    exit(1);
                }
                local_b3 = (undefined1)uVar10;
                local_b0 = iVar6;
                if (iVar6 == 1) {
                    if (uVar10 != 0xffffffff) {
                        local_b4 = 0;
                        local_ac = (ushort *)0x0;
                        iVar6 = ioctl(iVar11, 0x720, &local_b4);
                        if (iVar6 < 0) {
                            fwrite("Warning - write failed\n", 1, 0x17, stderr);
                        }
                    }
                    local_b4 = 1;
                    local_b0 = 1;
                    local_ac = (ushort *)local_94;
                    local_b3 = 0;
                    iVar6 = ioctl(iVar11, 0x720, &local_b4);
                    if (iVar6 != 0)
                        goto LAB_00009128;
                    close(iVar11);
                    local_4c[0] = local_94[0];
                } else {
                    if (iVar6 == 3) {
                        local_ac = local_70;
                        local_b4 = 1;
                        iVar6 = ioctl(iVar11, 0x720, &local_b4);
                        if (iVar6 != 0)
                            goto LAB_00009128;
                        uVar10 = (uint)local_70[0];
                        close(iVar11);
                        uVar8 = 4;
                        goto LAB_00008da8;
                    }
                    local_b4 = 1;
                    local_ac = (ushort *)local_4c;
                    local_b0 = 2;
                    iVar6 = ioctl(iVar11, 0x720, &local_b4);
                    if (iVar6 != 0) {
                    LAB_00009128:
                        close(iVar11);
                        fwrite("Error: Read failed\n", 1, 0x13, stderr);
                        /* WARNING: Subroutine does not return */
                        exit(2);
                    }
                    close(iVar11);
                }
                uVar10 = (uint)local_4c[0];
                uVar8 = 2;
            LAB_00008da8:
                printf("0x%0*x\n", uVar8, uVar10);
                /* WARNING: Subroutine does not return */
                exit(0);
            }
            pcVar5 = *(char **)(param_2 + (iVar11 + 4) * 4);
            cVar1 = *pcVar5;
            if (cVar1 == 'c') {
                iVar6 = 1;
            LAB_00008e0c:
                bVar13 = pcVar5[1] == 'p';
                goto LAB_00008ca8;
            }
            if (cVar1 == 'w') {
                iVar6 = 3;
                goto LAB_00008e0c;
            }
            if (cVar1 == 'b') {
                iVar6 = 2;
                goto LAB_00008e0c;
            }
            fwrite("Error: Invalid mode!\n", 1, 0x15, stderr);
            uVar14 = FUN_0000935c();
        LAB_00008c28:
            bVar13 = true;
        }
    } while (true);
}

void processEntry entry(undefined4 param_1, undefined4 param_2)

{
    __libc_start_main(FUN_00008b10, param_2, &stack0x00000004, FUN_00009dd8,
                      &DAT_00009e3c, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00009278) */

void FUN_00009264(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x000092a0) */
/* WARNING: Removing unreachable block (ram,0x000092a8) */
/* WARNING: Removing unreachable block (ram,0x000092ac) */

void FUN_00009288(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00012854 != '\0') {
        return;
    }
    FUN_00009288();
    DAT_00012854 = 1;
    return;
}

/* WARNING: Removing unreachable block (ram,0x000092e0) */
/* WARNING: Removing unreachable block (ram,0x000092e8) */
/* WARNING: Removing unreachable block (ram,0x00009348) */
/* WARNING: Removing unreachable block (ram,0x000092ec) */

void _INIT_0(void)

{
    return;
}

void FUN_0000935c(void)

{
    fwrite("Usage: i2cget [-f] [-y] I2CBUS CHIP-ADDRESS [DATA-ADDRESS "
           "[MODE]]\n  I2CBUS is an integer or an I2C bus name\n  ADDRESS is "
           "an integer (0x03 - 0x77)\n  MODE is one of:\n    b (read byte "
           "data, default)\n    w (read word data)\n    c (write byte/read "
           "byte)\n    Append p for SMBus PEC\n",
           1, 0x113, stderr);
    /* WARNING: Subroutine does not return */
    exit(1);
}

int FUN_00009388(char *param_1)

{
    char *pcVar1;
    size_t sVar2;
    char *pcVar3;
    char *pcVar4;
    int iVar5;

    sVar2 = strlen(param_1);
    iVar5 = sVar2 - 1;
    if ((-1 < iVar5) && (param_1[iVar5] == ' ' || param_1[iVar5] == '\n')) {
        pcVar1 = param_1 + (sVar2 - 2);
        pcVar4 = param_1 + iVar5;
        do {
            pcVar3 = pcVar1;
            iVar5 = iVar5 + -1;
            *pcVar4 = '\0';
            if (iVar5 == -1)
                break;
            pcVar1 = pcVar3 + -1;
            pcVar4 = pcVar3;
        } while (*pcVar3 == ' ' || *pcVar3 == '\n');
    }
    return iVar5 + 2;
}

void FUN_000093ec(void *param_1)

{
    void *pvVar1;
    void *__ptr;

    __ptr = *(void **)((int)param_1 + 4);
    pvVar1 = param_1;
    while (__ptr != (void *)0x0) {
        free(__ptr);
        __ptr = *(void **)((int)pvVar1 + 0x14);
        pvVar1 = (void *)((int)pvVar1 + 0x10);
    }
    free(param_1);
    return;
}

void *FUN_00009424(void *param_1, int param_2)

{
    void *pvVar1;

    pvVar1 = realloc(param_1, (param_2 + 8) * 0x10);
    if (pvVar1 == (void *)0x0) {
        FUN_000093ec(param_1);
    } else {
        memset((void *)((int)pvVar1 + param_2 * 0x10), 0, 0x80);
    }
    return pvVar1;
}

long FUN_00009468(char *param_1)

{
    long lVar1;
    char *local_c;

    lVar1 = strtol(param_1, &local_c, 0);
    if ((*local_c == '\0') && (*param_1 != '\0')) {
        if (0x74 < lVar1 - 3U) {
            fwrite("Error: Chip address out of range (0x03-0x77)!\n", 1, 0x2e,
                   stderr);
            lVar1 = -2;
        }
    } else {
        fwrite("Error: Chip address is not a number!\n", 1, 0x25, stderr);
        lVar1 = -1;
    }
    return lVar1;
}

uint FUN_000094fc(undefined4 param_1, char *param_2, size_t param_3,
                  uint param_4)

{
    FILE *__stream;
    uint uVar1;
    int *piVar2;
    char *pcVar3;
    uint uVar4;

    snprintf(param_2, param_3, "/dev/i2c/%d", param_1);
    param_2[param_3 - 1] = '\0';
    uVar1 = open(param_2, 2);
    if ((int)uVar1 < 0) {
        piVar2 = __errno_location();
        if (*piVar2 == 2 || *piVar2 == 0x14) {
            sprintf(param_2, "/dev/i2c-%d", param_1);
            uVar1 = open(param_2, 2);
        }
        __stream = stderr;
        uVar4 = 1 - param_4;
        if (1 < param_4) {
            uVar4 = 0;
        }
        if ((uVar4 & uVar1 >> 0x1f) != 0) {
            if (*piVar2 == 2) {
                pcVar3 = strerror(2);
                fprintf(__stream,
                        "Error: Could not open file `/dev/i2c-%d\' or "
                        "`/dev/i2c/%d\': %s\n",
                        param_1, param_1, pcVar3);
            } else {
                pcVar3 = strerror(*piVar2);
                fprintf(__stream, "Error: Could not open file `%s\': %s\n",
                        param_2, pcVar3);
                if (*piVar2 == 0xd) {
                    fwrite("Run as root?\n", 1, 0xd, stderr);
                }
            }
        }
    }
    return uVar1;
}

void *FUN_0000962c(void)

{
    FILE *pFVar1;
    int iVar2;
    char *pcVar3;
    int iVar4;
    char *pcVar5;
    int iVar6;
    char *__dest;
    char *pcVar7;
    int iVar8;
    size_t sVar9;
    DIR *__dirp;
    dirent *pdVar10;
    DIR *__dirp_00;
    undefined *puVar11;
    uint uVar12;
    uint uVar13;
    void *local_3d0;
    undefined4 local_3bc;
    uint local_3b8;
    undefined1 auStack_3b4[20];
    char acStack_3a0[120];
    char acStack_328[256];
    char acStack_228[4];
    char acStack_224[4];
    char acStack_220[4];
    char acStack_21c[244];
    char acStack_128[260];

    local_3d0 = calloc(8, 0x10);
    if (local_3d0 != (void *)0x0) {
        pFVar1 = fopen("/proc/bus/i2c", "r");
        if (pFVar1 == (FILE *)0x0) {
            pFVar1 = fopen("/proc/mounts", "r");
            if (pFVar1 != (FILE *)0x0) {
                do {
                    pcVar7 = fgets(acStack_128, 0xff, pFVar1);
                    if (pcVar7 == (char *)0x0) {
                        fclose(pFVar1);
                        return local_3d0;
                    }
                    __isoc99_sscanf(acStack_128, "%*[^ ] %[^ ] %[^ ] %*s\n",
                                    acStack_228, acStack_328);
                    iVar8 = strcasecmp(acStack_328, "sysfs");
                } while (iVar8 != 0);
                fclose(pFVar1);
                sVar9 = strlen(acStack_228);
                builtin_strncpy(acStack_228 + sVar9, "/cla", 4);
                (acStack_21c + sVar9)[0] = 'e';
                (acStack_21c + sVar9)[1] = 'v';
                builtin_strncpy(acStack_224 + sVar9, "ss/i", 4);
                builtin_strncpy(acStack_220 + sVar9, "2c-d", 4);
                acStack_21c[sVar9 + 2] = '\0';
                __dirp = opendir(acStack_228);
                if (__dirp != (DIR *)0x0) {
                    uVar12 = 0;
                LAB_0000988c:
                    pdVar10 = readdir(__dirp);
                    if (pdVar10 != (dirent *)0x0) {
                        while (true) {
                            if ((pdVar10->d_name[0] == '.') &&
                                ((pdVar10->d_name[1] == '\0' ||
                                  ((pdVar10->d_name[1] == '.' &&
                                    (pdVar10->d_name[2] == '\0'))))))
                                goto LAB_0000988c;
                            pcVar7 = pdVar10->d_name;
                            sprintf(acStack_128, "%s/%s/name", acStack_228,
                                    pcVar7);
                            pFVar1 = fopen(acStack_128, "r");
                            if (pFVar1 == (FILE *)0x0) {
                                sprintf(acStack_128, "%s/%s/device/name",
                                        acStack_228, pcVar7);
                                pFVar1 = fopen(acStack_128, "r");
                                if (pFVar1 == (FILE *)0x0) {
                                    sprintf(acStack_128, "%s/%s/device",
                                            acStack_228, pcVar7);
                                    __dirp_00 = opendir(acStack_128);
                                    if (__dirp_00 == (DIR *)0x0)
                                        goto LAB_0000988c;
                                    do {
                                        do {
                                            pdVar10 = readdir(__dirp_00);
                                            if (pdVar10 == (dirent *)0x0)
                                                goto LAB_0000988c;
                                        } while (
                                            ((pdVar10->d_name[0] == '.') &&
                                             ((pdVar10->d_name[1] == '\0' ||
                                               ((pdVar10->d_name[1] == '.' &&
                                                 (pdVar10->d_name[2] ==
                                                  '\0')))))) ||
                                            (iVar8 = strncmp(pdVar10->d_name,
                                                             "i2c-", 4),
                                             iVar8 != 0));
                                        sprintf(acStack_128,
                                                "%s/%s/device/%s/name",
                                                acStack_228, pcVar7,
                                                pdVar10->d_name);
                                        pFVar1 = fopen(acStack_128, "r");
                                    } while (pFVar1 == (FILE *)0x0);
                                }
                            }
                            pcVar3 = fgets(acStack_3a0, 0x78, pFVar1);
                            fclose(pFVar1);
                            if (pcVar3 == (char *)0x0)
                                break;
                            pcVar3 = strchr(acStack_3a0, 10);
                            if (pcVar3 != (char *)0x0) {
                                *pcVar3 = '\0';
                            }
                            iVar8 =
                                __isoc99_sscanf(pcVar7, "i2c-%d", &local_3bc);
                            if (iVar8 == 0)
                                goto LAB_0000988c;
                            iVar8 = strncmp(acStack_3a0, "ISA ", 4);
                            if (iVar8 == 0) {
                                iVar8 = 1;
                            } else {
                                iVar2 = FUN_000094fc(local_3bc, auStack_3b4,
                                                     0x14, 1);
                                if (iVar2 < 0) {
                                    iVar8 = 4;
                                } else {
                                    iVar8 = ioctl(iVar2, 0x705, &local_3b8);
                                    if (iVar8 < 0) {
                                        iVar8 = 4;
                                    } else if ((local_3b8 & 1) == 0) {
                                        if ((local_3b8 & 0x7e0000) == 0) {
                                            iVar8 = 0;
                                        } else {
                                            iVar8 = 3;
                                        }
                                    } else {
                                        iVar8 = 2;
                                    }
                                    close(iVar2);
                                }
                            }
                            uVar13 = uVar12 + 1;
                            if (((uVar13 & 7) == 0) &&
                                (local_3d0 =
                                     (void *)FUN_00009424(local_3d0, uVar13),
                                 local_3d0 == (void *)0x0)) {
                                return (void *)0x0;
                            }
                            *(undefined4 *)((int)local_3d0 + uVar12 * 0x10) =
                                local_3bc;
                            iVar2 = __strdup(acStack_3a0);
                            *(int *)((int)local_3d0 + uVar12 * 0x10 + 4) =
                                iVar2;
                            if (iVar2 == 0) {
                                FUN_000093ec(local_3d0);
                                return (void *)0x0;
                            }
                            puVar11 = (&PTR_s_Dummy_bus_0000a3bc)[iVar8 * 2];
                            *(undefined **)((int)local_3d0 + uVar12 * 0x10 +
                                            8) =
                                (&PTR_s_dummy_0000a3b8)[iVar8 * 2];
                            *(undefined **)((int)local_3d0 + uVar12 * 0x10 +
                                            0xc) = puVar11;
                            pdVar10 = readdir(__dirp);
                            uVar12 = uVar13;
                            if (pdVar10 == (dirent *)0x0)
                                goto LAB_000099b8;
                        }
                        fprintf(stderr, "%s: read error\n", acStack_128);
                        goto LAB_0000988c;
                    }
                LAB_000099b8:
                    closedir(__dirp);
                }
            }
        } else {
            uVar12 = 0;
            iVar8 = 0;
            while (true) {
                uVar12 = uVar12 + 1;
                pcVar7 = fgets(acStack_3a0, 0x78, pFVar1);
                if (pcVar7 == (char *)0x0)
                    break;
                pcVar7 = strrchr(acStack_3a0, 9);
                *pcVar7 = '\0';
                iVar2 = FUN_00009388(pcVar7 + 1);
                pcVar3 = strrchr(acStack_3a0, 9);
                *pcVar3 = '\0';
                iVar4 = FUN_00009388(pcVar3 + 1);
                pcVar5 = strrchr(acStack_3a0, 9);
                *pcVar5 = '\0';
                iVar6 = FUN_00009388(pcVar5 + 1);
                __isoc99_sscanf(acStack_3a0, "i2c-%d", &local_3bc);
                if (((uVar12 & 7) == 0) &&
                    (local_3d0 = (void *)FUN_00009424(local_3d0, uVar12),
                     local_3d0 == (void *)0x0)) {
                    return (void *)0x0;
                }
                __dest = (char *)malloc(iVar4 + iVar6 + iVar2);
                if (__dest == (char *)0x0) {
                    FUN_000093ec(local_3d0);
                    return (void *)0x0;
                }
                *(undefined4 *)((int)local_3d0 + iVar8) = local_3bc;
                pcVar3 = strcpy(__dest, pcVar3 + 1);
                *(char **)((int)local_3d0 + iVar8 + 4) = pcVar3;
                pcVar3 = strcpy(__dest + iVar4, pcVar5 + 1);
                *(char **)((int)local_3d0 + iVar8 + 8) = pcVar3;
                pcVar7 = strcpy(__dest + iVar4 + iVar6, pcVar7 + 1);
                *(char **)((int)local_3d0 + iVar8 + 0xc) = pcVar7;
                iVar8 = iVar8 + 0x10;
            }
            fclose(pFVar1);
        }
    }
    return local_3d0;
}

ulong FUN_00009b80(char *param_1)

{
    ulong uVar1;
    ulong *puVar2;
    char *__s1;
    int iVar3;
    ulong *puVar4;
    char *local_1c;

    uVar1 = strtoul(param_1, &local_1c, 0);
    if ((*local_1c == '\0') && (*param_1 != '\0')) {
        if (uVar1 < 0x100000) {
            return uVar1;
        }
        fwrite("Error: I2C bus out of range!\n", 1, 0x1d, stderr);
        return 0xfffffffe;
    }
    puVar2 = (ulong *)FUN_0000962c();
    if (puVar2 == (ulong *)0x0) {
        fwrite("Error: Out of memory!\n", 1, 0x16, stderr);
        return 0xfffffffd;
    }
    __s1 = (char *)puVar2[1];
    if (__s1 != (char *)0x0) {
        uVar1 = 0xffffffff;
        puVar4 = puVar2;
        do {
            iVar3 = strcmp(__s1, param_1);
            if (iVar3 == 0) {
                if (-1 < (int)uVar1) {
                    uVar1 = 0xfffffffc;
                    fwrite("Error: I2C bus name is not unique!\n", 1, 0x23,
                           stderr);
                    goto LAB_00009c28;
                }
                uVar1 = *puVar4;
            }
            __s1 = (char *)puVar4[5];
            puVar4 = puVar4 + 4;
        } while (__s1 != (char *)0x0);
        if (uVar1 != 0xffffffff)
            goto LAB_00009c28;
    }
    uVar1 = 0xffffffff;
    fwrite("Error: I2C bus name doesn\'t match any bus present!\n", 1, 0x33,
           stderr);
LAB_00009c28:
    FUN_000093ec(puVar2);
    return uVar1;
}

int FUN_00009cc8(int param_1, undefined4 param_2, int param_3)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    ulong __request;

    __request = 0x703;
    if (param_3 != 0) {
        __request = 0x706;
    }
    iVar1 = ioctl(param_1, __request, param_2);
    __stream = stderr;
    if (-1 < iVar1) {
        return 0;
    }
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    fprintf(__stream, "Error: Could not set address to 0x%02x: %s\n", param_2,
            pcVar3);
    return -*piVar2;
}

undefined4 FUN_00009d38(undefined4 param_1)

{
    char *pcVar1;
    uint uVar2;
    byte local_14[8];

    pcVar1 = fgets((char *)local_14, 2, stdin);
    if (pcVar1 == (char *)0x0) {
        return 0;
    }
    if (local_14[0] == 0x59) {
    LAB_00009dc4:
        param_1 = 1;
        goto LAB_00009d90;
    }
    if (local_14[0] < 0x5a) {
        if (local_14[0] == 0x4e) {
        LAB_00009dcc:
            param_1 = 0;
            goto LAB_00009d90;
        }
    } else {
        if (local_14[0] == 0x6e)
            goto LAB_00009dcc;
        if (local_14[0] == 0x79)
            goto LAB_00009dc4;
    }
    if (local_14[0] == 10) {
        return param_1;
    }
LAB_00009d90:
    do {
        uVar2 = fgetc(stdin);
        if (uVar2 == 0xffffffff) {
            return 0;
        }
        local_14[0] = (byte)uVar2;
    } while ((uVar2 & 0xff) != 10);
    return param_1;
}

/* WARNING: Removing unreachable block (ram,0x00009e04) */

void FUN_00009dd8(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 *puVar2;

    _DT_INIT();
    puVar2 = (undefined4 *)0x126a0;
    iVar1 = 0;
    do {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
        (*(code *)*puVar2)(param_1, param_2, param_3, (code *)*puVar2, param_4);
    } while (iVar1 != 1);
    return;
}

void _DT_FINI(void)

{
    return;
}
