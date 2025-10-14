// Decompiled: eeprog_931ccf109da30ab7

void _DT_INIT(void)

{
    FUN_00008cb0();
    return;
}

void FUN_00008828(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    fprintf(
        stderr, "%s\n[line %d]\n",
        "eeprog 0.7.5, a 24Cxx EEPROM reader/writer\nCopyright (c) 2003 by "
        "Stefano Barbato - All rights reserved.\nUsage: eeprog [-fqxdh] "
        "[-16|-8] [ -r addr[:count] | -w addr ]  /dev/i2c-N  i2c-address\n\n  "
        "Address modes:\n\t-8\t\tUse 8bit address mode for 24c0x...24C16 "
        "[default]\n\t-16\t\tUse 16bit address mode for 24c32...24C256\n  "
        "Actions:\n\t-r addr[:count]\tRead [count] (1 if omitted) bytes from "
        "[addr]\n\t\t\tand print them to the standard output\n\t-w "
        "addr\t\tWrite input (stdin) at address [addr] of the "
        "EEPROM\n\t-h\t\tPrint this help\n  Options:\n\t-x\t\tSet hex output "
        "mode\n\t-d\t\tDummy mode, display what *would* have been "
        "done\n\t-f\t\tDisable warnings and don\'t ask "
        "confirmation\n\t-q\t\tQuiet mode\n\nThe following environment "
        "variables could be set instead of the command\nline "
        "arguments:\n\tEEPROG_DEV\t\tdevice "
        "name(/dev/"
        "i2c-N)\n\tEEPROG_I2C_ADDR\t\ti2c-address\n\n\tExamples\n\t1- read 64 "
        "bytes from the EEPROM at address 0x54 on bus 0 starting\n\t   at "
        "address 123 (decimal)\n\t\teeprog /dev/i2c-0 0x54 -r 123:64\n\t2- "
        "prints the hex codes of the first 32 bytes read from bus 1\n\t   at "
        "address 0x22\n\t\teeprog /dev/i2c-1 0x51 -x -r 0x22:0x20\n\t3- write "
        "the current timestamp at address 0x200 of the EEPROM on\n\t   bus 0 "
        "at address 0x33\n\t\tdate | eeprog /dev/i2c-0 0x33 -w 0x200\n",
        param_1, param_4);
    /* WARNING: Subroutine does not return */
    exit(1);
}

undefined4 FUN_00008858(int param_1, char **param_2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    char *pcVar4;
    char *__nptr;
    ulong uVar5;
    size_t sVar6;
    undefined4 uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int local_a0;
    char *local_9c;
    undefined4 local_98;
    undefined4 local_94;
    undefined1 auStack_90[16];
    stat sStack_80;

    iVar9 = 0;
    iVar10 = 0;
    local_9c = (char *)0x0;
    DAT_00012228 = 0;
    local_a0 = 0;
    iVar8 = 0;
    uVar2 = 0;
LAB_00008890:
    do {
        while (true) {
            while (true) {
                uVar1 = getopt(param_1, param_2, "1:8fr:qhw:xd");
                if (uVar1 == 0xffffffff) {
                    iVar3 = 1 - uVar2;
                    if (1 < uVar2) {
                        iVar3 = 0;
                    }
                    if (iVar8 == 0) {
                        iVar8 = 1;
                    }
                    FUN_00008da8(iVar3, 0xd8);
                    if (param_1 - optind == 1) {
                        iVar3 = __xstat(3, param_2[optind], &sStack_80);
                        if (iVar3 == -1) {
                            pcVar4 = getenv("EEPROG_DEV");
                            __nptr = param_2[optind];
                        } else {
                            pcVar4 = param_2[optind];
                            __nptr = getenv("EEPROG_I2C_ADDR");
                        }
                    } else if (param_1 - optind == 2) {
                        pcVar4 = param_2[optind];
                        __nptr = param_2[optind + 1];
                        optind = optind + 1;
                    } else {
                        if (param_1 != optind) {
                            /* WARNING: Subroutine does not return */
                            FUN_00008828(0xf0);
                        }
                        pcVar4 = getenv("EEPROG_DEV");
                        __nptr = getenv("EEPROG_I2C_ADDR");
                    }
                    FUN_00008da8(pcVar4 == (char *)0x0 || __nptr == (char *)0x0,
                                 0xf2);
                    uVar5 = strtoul(__nptr, (char **)0x0, 0);
                    if (((DAT_00012228 == 0) &&
                         (fprintf(stderr,
                                  "eeprog %s, a 24Cxx EEPROM reader/writer\n",
                                  "0.7.5"),
                          DAT_00012228 == 0)) &&
                        (fwrite("Copyright (c) 2003 by Stefano Barbato - All "
                                "rights reserved.\n",
                                1, 0x3d, stderr),
                         DAT_00012228 == 0)) {
                        if (iVar8 == 1) {
                            uVar7 = 8;
                        } else {
                            uVar7 = 0x10;
                        }
                        fprintf(stderr,
                                "  Bus: %s, Address: 0x%x, Mode: %dbit\n",
                                pcVar4, uVar5, uVar7);
                    }
                    if (iVar10 == 0) {
                        uVar1 = FUN_000090ec(pcVar4, uVar5, iVar8, auStack_90);
                        FUN_00008dbc(
                            uVar1 >> 0x1f,
                            "unable to open eeprom device file (check that the "
                            "file exists and that it\'s readable)",
                            0x100);
                        if (uVar2 == 0x72) {
                            if (iVar9 == 0) {
                                FUN_00008e40();
                            }
                            local_94 = 1;
                            FUN_00008dec(local_9c, &local_98, &local_94);
                            if (DAT_00012228 == 0) {
                                fprintf(stderr,
                                        "  Reading %d bytes from 0x%x\n",
                                        local_94, local_98);
                            }
                            FUN_00008e7c(auStack_90, local_98, local_94,
                                         local_a0);
                        } else {
                            if (uVar2 != 0x77) {
                                /* WARNING: Subroutine does not return */
                                FUN_00008828(0x114);
                            }
                            if (iVar9 == 0) {
                                FUN_00008e40();
                            }
                            FUN_00008dec(local_9c, &local_98, &local_94);
                            if (DAT_00012228 == 0) {
                                fprintf(stderr,
                                        "  Writing stdin starting at address "
                                        "0x%x\n",
                                        local_98);
                            }
                            FUN_00008fa4(auStack_90, local_98);
                        }
                        FUN_0000926c(auStack_90);
                    } else {
                        fwrite("Dummy mode selected, nothing done.\n", 1, 0x23,
                               stderr);
                    }
                    return 0;
                }
                if (uVar1 != 0x66)
                    break;
                iVar9 = iVar9 + 1;
            }
            if (0x66 < (int)uVar1)
                break;
            if (uVar1 == 0x38) {
                FUN_00008dbc(iVar8, "EEPROM type switch (-8 or -16) used twice",
                             0xc3);
                iVar8 = 1;
            } else if (uVar1 == 100) {
                iVar10 = iVar10 + 1;
            } else if (uVar1 == 0x31) {
                if (*optarg == '6') {
                    sVar6 = strlen(optarg);
                    iVar3 = sVar6 - 1;
                    if (iVar3 != 0) {
                        iVar3 = 1;
                    }
                } else {
                    iVar3 = 1;
                }
                FUN_00008da8(iVar3, 0xb8);
                FUN_00008dbc(iVar8, "EEPROM type switch (-8 or -16) used twice",
                             0xb9);
                iVar8 = 2;
            } else {
            LAB_000088d4:
                if (uVar2 != 0) {
                    uVar2 = 1;
                }
                FUN_00008dbc(uVar2, "Both read and write requested", 0xd0);
                local_9c = optarg;
                uVar2 = uVar1;
            }
        }
        if (uVar1 == 0x71) {
            DAT_00012228 = DAT_00012228 + 1;
            goto LAB_00008890;
        }
        if (uVar1 != 0x78) {
            if (uVar1 == 0x68) {
                /* WARNING: Subroutine does not return */
                FUN_00008828(0xcd);
            }
            goto LAB_000088d4;
        }
        local_a0 = local_a0 + 1;
    } while (true);
}

void processEntry entry(undefined4 param_1, undefined4 param_2)

{
    __libc_start_main(FUN_00008858, param_2, &stack0x00000004, FUN_000094fc,
                      &DAT_00009560, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00008cc4) */

void FUN_00008cb0(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00008cec) */
/* WARNING: Removing unreachable block (ram,0x00008cf4) */
/* WARNING: Removing unreachable block (ram,0x00008cf8) */

void FUN_00008cd4(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00012224 != '\0') {
        return;
    }
    FUN_00008cd4();
    DAT_00012224 = 1;
    return;
}

/* WARNING: Removing unreachable block (ram,0x00008d2c) */
/* WARNING: Removing unreachable block (ram,0x00008d34) */
/* WARNING: Removing unreachable block (ram,0x00008d94) */
/* WARNING: Removing unreachable block (ram,0x00008d38) */

void _INIT_0(void)

{
    return;
}

void FUN_00008da8(int param_1, undefined4 param_2)

{
    if (param_1 == 0) {
        return;
    }
    /* WARNING: Subroutine does not return */
    FUN_00008828(param_2);
}

void FUN_00008dbc(int param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    if (param_1 == 0) {
        return;
    }
    fprintf(stderr, "Error at line %d: %s\n", param_3, param_2, param_4);
    /* WARNING: Subroutine does not return */
    exit(1);
}

void FUN_00008dec(char *param_1, ulong *param_2, ulong *param_3)

{
    ulong uVar1;
    char *local_14[2];

    uVar1 = strtoul(param_1, local_14, 0);
    *param_2 = uVar1;
    if (*local_14[0] == ':') {
        local_14[0] = local_14[0] + 1;
        uVar1 = strtoul(local_14[0], (char **)0x0, 0);
        *param_3 = uVar1;
    }
    return;
}

undefined4 FUN_00008e40(void)

{
    fwrite("\n____________________________WARNING____________________________"
           "\nErroneously writing to a system EEPROM (like DIMM SPD "
           "modules)\ncan break your system.  It will NOT boot anymore so "
           "you\'ll not\nbe able to fix it.\n\nReading from 8bit EEPROMs (like "
           "that in your DIMM) without using\nthe -8 switch can also "
           "UNEXPECTEDLY write to them, so be sure to\nuse the -8 command "
           "param when required.\n\nUse -f to disable this warning "
           "message\n\nPress ENTER to continue or hit CTRL-C to exit\n\n",
           1, 0x1d5, stderr);
    _IO_getc(stdin);
    return 1;
}

undefined4 FUN_00008e7c(undefined4 param_1, uint param_2, int param_3,
                        int param_4)

{
    uint uVar1;
    uint __c;

    uVar1 = FUN_000092f0(param_1, param_2 & 0xffff);
    FUN_00008dbc(uVar1 >> 0x1f, "read error", 0x7f);
    if (param_4 == 0) {
        _IO_putc(uVar1, stdout);
    } else {
        printf("\n %.4x|  %.2x ", param_2, uVar1);
    }
    uVar1 = 1;
    while (param_3 = param_3 + -1, param_3 != 0) {
        while (true) {
            __c = FUN_00009298(param_1);
            FUN_00008dbc(__c >> 0x1f, "read error", 0x87);
            if (param_4 == 0)
                break;
            param_2 = param_2 + 1;
            if ((uVar1 & 0xf) == 0) {
                printf("\n %.4x|  ", param_2);
            } else if ((uVar1 & 7) == 0) {
                printf("  ");
            }
            printf("%.2x ", __c);
            param_3 = param_3 + -1;
            uVar1 = uVar1 + 1;
            if (param_3 == 0)
                goto LAB_00008f28;
        }
        _IO_putc(__c, stdout);
    }
LAB_00008f28:
    if (param_4 != 0) {
        puts("\n");
    }
    fflush(stdout);
    return 0;
}

undefined4 FUN_00008fa4(undefined4 param_1, short param_2)

{
    undefined4 uVar1;
    uint uVar2;

    while (true) {
        uVar2 = _IO_getc(stdin);
        if (uVar2 == 0xffffffff)
            break;
        if (DAT_00012228 == 0) {
            fputc(0x2e, stderr);
        }
        fflush(stdout);
        uVar1 = FUN_00009414(param_1, param_2, uVar2 & 0xff);
        param_2 = param_2 + 1;
        FUN_00008dbc(uVar1, "write error", 0xa2);
    }
    if (DAT_00012228 == 0) {
        fwrite("\n\n", 1, 2, stderr);
    }
    return 0;
}

int FUN_0000905c(int param_1, undefined1 *param_2)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    undefined1 local_40;
    undefined1 local_3f;
    undefined4 local_3c;
    undefined1 *local_38;
    undefined1 local_34[40];

    local_3f = *param_2;
    local_34[0] = param_2[1];
    local_40 = 0;
    local_38 = local_34;
    local_3c = 2;
    iVar1 = ioctl(*(int *)(param_1 + 8), 0x720, &local_40);
    __stream = stderr;
    if (iVar1 < 0) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        fprintf(__stream, "Error i2c_write_2b: %s\n", pcVar3);
    }
    usleep(10);
    return iVar1;
}

int FUN_000090ec(char *param_1, undefined4 param_2, undefined4 param_3,
                 undefined4 *param_4)

{
    int iVar1;
    int iVar2;
    char *pcVar3;
    uint local_24[2];

    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    iVar1 = open(param_1, 2);
    if (iVar1 < 1) {
        iVar1 = -1;
    } else {
        iVar2 = ioctl(iVar1, 0x705, local_24);
        if (-1 < iVar2) {
            if ((local_24[0] & 0x20000) == 0) {
                fwrite("\nError: I2C_FUNC_SMBUS_READ_BYTE function is "
                       "required. Program halted.\n\n",
                       1, 0x48, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            if ((local_24[0] & 0x40000) == 0) {
                fwrite("\nError: I2C_FUNC_SMBUS_WRITE_BYTE function is "
                       "required. Program halted.\n\n",
                       1, 0x49, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            if ((local_24[0] & 0x80000) == 0) {
                pcVar3 = "\nError: I2C_FUNC_SMBUS_READ_BYTE_DATA function is "
                         "required. Program halted.\n\n";
            LAB_0000921c:
                fwrite(pcVar3, 1, 0x4d, stderr);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            if ((local_24[0] & 0x100000) == 0) {
                pcVar3 = "\nError: I2C_FUNC_SMBUS_WRITE_BYTE_DATA function is "
                         "required. Program halted.\n\n";
            } else {
                if ((local_24[0] & 0x200000) == 0) {
                    pcVar3 = "\nError: I2C_FUNC_SMBUS_READ_WORD_DATA function "
                             "is required. Program halted.\n\n";
                    goto LAB_0000921c;
                }
                if ((local_24[0] & 0x400000) != 0) {
                    iVar2 = ioctl(iVar1, 0x703, param_2);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    param_4[2] = iVar1;
                    param_4[1] = param_2;
                    *param_4 = param_1;
                    param_4[3] = param_3;
                    return 0;
                }
                pcVar3 = "\nError: I2C_FUNC_SMBUS_WRITE_WORD_DATA function is "
                         "required. Program halted.\n\n";
            }
            fwrite(pcVar3, 1, 0x4e, stderr);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        iVar1 = 1;
    }
    return iVar1;
}

undefined4 FUN_0000926c(undefined4 *param_1)

{
    close(param_1[2]);
    *param_1 = 0;
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    return 0;
}

uint FUN_00009298(int param_1)

{
    int iVar1;
    uint uVar2;
    undefined1 local_38;
    undefined1 local_37;
    undefined4 local_34;
    byte *local_30;
    byte local_2c[36];

    ioctl(*(int *)(param_1 + 8), 0x1261);
    local_38 = 1;
    local_34 = 1;
    local_30 = local_2c;
    local_37 = 0;
    iVar1 = ioctl(*(int *)(param_1 + 8), 0x720, &local_38);
    if (iVar1 == 0) {
        uVar2 = (uint)local_2c[0];
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

uint FUN_000092f0(int param_1, undefined4 param_2)

{
    FILE *__stream;
    uint uVar1;
    int iVar2;
    int *piVar3;
    char *pcVar4;
    undefined1 local_40;
    undefined1 local_3f;
    int local_3c;
    byte *local_38;
    byte local_34;
    undefined1 local_33;

    ioctl(*(int *)(param_1 + 8), 0x1261);
    local_3c = *(int *)(param_1 + 0xc);
    local_3f = (undefined1)param_2;
    if (local_3c == 1) {
        local_40 = 0;
        local_38 = (byte *)0x0;
        uVar1 = ioctl(*(int *)(param_1 + 8), 0x720, &local_40);
        __stream = stderr;
        if ((int)uVar1 < 0) {
            piVar3 = __errno_location();
            pcVar4 = strerror(*piVar3);
            fprintf(__stream, "Error i2c_write_1b: %s\n", pcVar4);
        }
        usleep(10);
    } else {
        if (local_3c != 2) {
            fwrite("ERR: unknown eeprom type\n", 1, 0x19, stderr);
            return 0xffffffff;
        }
        local_34 = (byte)((uint)param_2 >> 8);
        local_33 = local_3f;
        uVar1 = FUN_0000905c(param_1, &local_34);
    }
    if (-1 < (int)uVar1) {
        local_40 = 1;
        local_3c = 1;
        local_38 = &local_34;
        local_3f = 0;
        iVar2 = ioctl(*(int *)(param_1 + 8), 0x720, &local_40);
        if (iVar2 == 0) {
            uVar1 = (uint)local_34;
        } else {
            uVar1 = 0xffffffff;
        }
    }
    return uVar1;
}

int FUN_00009414(int param_1, undefined4 param_2, byte param_3)

{
    FILE *__stream;
    int iVar1;
    int *piVar2;
    char *pcVar3;
    undefined1 local_40;
    byte local_3f;
    undefined4 local_3c;
    ushort *local_38;
    ushort local_34[20];

    if (*(int *)(param_1 + 0xc) == 1) {
        local_40 = (undefined1)param_2;
        local_3f = param_3;
        iVar1 = FUN_0000905c(param_1, &local_40);
    } else if (*(int *)(param_1 + 0xc) == 2) {
        local_34[0] = (ushort)param_2 & 0xff | (ushort)param_3 << 8;
        local_3f = (byte)((uint)param_2 >> 8);
        local_3c = 3;
        local_38 = local_34;
        local_40 = 0;
        iVar1 = ioctl(*(int *)(param_1 + 8), 0x720, &local_40);
        __stream = stderr;
        if (iVar1 < 0) {
            piVar2 = __errno_location();
            pcVar3 = strerror(*piVar2);
            fprintf(__stream, "Error i2c_write_3b: %s\n", pcVar3);
        }
        usleep(10);
    } else {
        iVar1 = -1;
        fwrite("ERR: unknown eeprom type\n", 1, 0x19, stderr);
    }
    return iVar1;
}

/* WARNING: Removing unreachable block (ram,0x00009528) */

void FUN_000094fc(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 *puVar2;

    _DT_INIT();
    puVar2 = (undefined4 *)0x12098;
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
