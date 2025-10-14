// Decompiled: eeprom_e95e35428c10f8b6

void _DT_INIT(void)

{
    FUN_00008ef8();
    return;
}

void FUN_0000868c(int param_1, char **param_2)

{
    int iVar1;
    int __fd;
    int iVar2;
    ssize_t sVar3;
    char *pcVar4;
    char *pcVar5;
    int iVar6;
    uint uVar7;
    char *__file;
    uint uVar8;
    uint uVar9;
    int local_140;
    int local_130;
    undefined4 local_12c;
    char local_128[260];

    iVar6 = 0;
    uVar7 = 0;
    local_12c = 8;
    local_130 = 0x50;
    pcVar5 = "/dev/i2c-0";
    __file = (char *)0x0;
    while (iVar1 = getopt(param_1, param_2, "d:a:p:wyf:h"), -1 < iVar1) {
        switch (iVar1) {
        case 0x61:
            iVar1 = __isoc99_sscanf(optarg, &DAT_00009678, &local_130);
            if (iVar1 != 1) {
                fprintf(stderr,
                        "Cannot parse \'%s\' as addrs., example: 0xa0\n",
                        optarg);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            break;
        case 100:
            pcVar5 = optarg;
            break;
        case 0x66:
            __file = optarg;
            break;
        case 0x68:
            fprintf(stderr,
                    "%s [-d dev] [-a adr] [-p pgs] [-w] [-y] [-f file]\n",
                    *param_2);
            fwrite("\tdev: device, e.g. /dev/i2c-0    (def)\n", 1, 0x27,
                   stderr);
            fwrite("\tadr: base address of eeprom, eg 0xA0 (def)\n", 1, 0x2c,
                   stderr);
            fwrite("\tpgs: number of pages to read, eg 8 (def)\n", 1, 0x2a,
                   stderr);
            fwrite("\t-w : write to eeprom (default is reading!)\n", 1, 0x2c,
                   stderr);
            fwrite(
                "\t-y : suppress warning when writing (default is to warn!)\n",
                1, 0x3a, stderr);
            fwrite("\t-f file: copy eeprom contents to/from file\n", 1, 0x2c,
                   stderr);
            fwrite("\t         (default for read is test only; for write is "
                   "all zeros)\n",
                   1, 0x42, stderr);
            fwrite("Note on pages/addresses:\n", 1, 0x19, stderr);
            fwrite("\teeproms with more than 256 byte appear as if they\n", 1,
                   0x33, stderr);
            fwrite("\twere several eeproms with consecutive addresses on the "
                   "bus\n",
                   1, 0x3c, stderr);
            fwrite(
                "\tso we might as well address several separate eeproms with\n",
                1, 0x3b, stderr);
            fwrite("\tincreasing addresses....\n\n", 1, 0x1b, stderr);
            /* WARNING: Subroutine does not return */
            exit(1);
        case 0x70:
            iVar1 = __isoc99_sscanf(optarg, &DAT_000096ac, &local_12c);
            if (iVar1 != 1) {
                fprintf(stderr,
                        "Cannot parse \'%s\' as number of pages, example: 8\n",
                        optarg);
                /* WARNING: Subroutine does not return */
                exit(1);
            }
            break;
        case 0x77:
            uVar7 = uVar7 + 1;
            break;
        case 0x79:
            iVar6 = iVar6 + 1;
        }
    }
    fprintf(stderr, "base-address of eeproms       : 0x%02x\n", local_130);
    iVar1 = local_130 + -1 + local_12c;
    fprintf(stderr, "number of pages to read       : %d (0x%02x .. 0x%02x)\n",
            local_12c, local_130, iVar1);
    if (__file == (char *)0x0) {
        local_140 = -1;
    } else {
        if (uVar7 == 0) {
            local_140 = open(__file, 0x41, 0x1b6);
        } else {
            local_140 = open(__file, 0);
        }
        if (local_140 < 0) {
            pcVar5 = "Could not open data-file %s for reading or writing\n";
        LAB_00008ba8:
            fprintf(stderr, pcVar5, __file);
            perror(__file);
        LAB_00008aec:
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        pcVar4 = "reading";
        if (uVar7 == 0) {
            pcVar4 = "writing";
        }
        fprintf(stderr, "file opened for %7s       : %s\n", pcVar4, __file,
                iVar1);
        fprintf(stderr, "            on filedescriptor : %d\n", local_140);
    }
    __fd = open(pcVar5, 2);
    if (__fd < 0) {
        fprintf(stderr, "Could not open i2c at %s\n", pcVar5);
        perror(pcVar5);
        /* WARNING: Subroutine does not return */
        exit(1);
    }
    uVar8 = uVar7;
    if (uVar7 != 0) {
        uVar8 = 1;
    }
    fprintf(stderr, "i2c-devicenode is             : %s\n", pcVar5, &stderr,
            iVar1);
    fprintf(stderr, "            on filedescriptor : %d\n\n", __fd);
    if (iVar6 == 0) {
        uVar9 = uVar8 & 1;
    } else {
        uVar9 = 0;
    }
    if (uVar9 != 0) {
        fwrite("**WARNING**\n", 1, 0xc, stderr);
        fwrite(" - \tYou have chosen to WRITE to this eeprom.\n", 1, 0x2d,
               stderr);
        fwrite("\tMake sure that this tiny chip is *NOT* vital to the\n", 1,
               0x35, stderr);
        fwrite("\toperation of your computer as you can easily corrupt\n", 1,
               0x36, stderr);
        fwrite("\tthe configuration memory of your SDRAM-memory-module,\n", 1,
               0x37, stderr);
        fwrite(
            "\tyour IBM ThinkPad or whatnot...! Fixing these errors can be\n",
            1, 0x3d, stderr);
        fwrite("\ta time-consuming and very costly process!\n\n", 1, 0x2c,
               stderr);
        fwrite("Things to consider:\n", 1, 0x14, stderr);
        fwrite(
            " - \tYou can have more than one i2c-bus, check in /proc/bus/i2c\n",
            1, 0x3f, stderr);
        fwrite("\tand specify the correct one with -d\n", 1, 0x25, stderr);
        fprintf(stderr, "\tright now you have chosen to use \'%s\'\n", pcVar5);
        fwrite(
            " - \tA eeprom can occupy several i2c-addresses (one per page)\n",
            1, 0x3d, stderr);
        fwrite("\tso please make sure that there is no vital eeprom in your "
               "computer\n",
               1, 0x44, stderr);
        fprintf(stderr, "\tsitting at addresses between 0x%02x and 0x%02x\n",
                local_130, local_130 + -1 + local_12c);
        fwrite("Enter \'yes\' to continue:", 1, 0x18, stderr);
        fflush(stderr);
        pcVar5 = fgets(local_128, 4, stdin);
        if (pcVar5 == (char *)0x0) {
            fwrite("\nCould not read confirmation from stdin!\n", 1, 0x29,
                   stderr);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
        iVar6 = strncmp(local_128, "yes", 3);
        if (iVar6 != 0) {
            fwrite("\n** ABORTING WRITE! **, you did not answer \'yes\'\n", 1,
                   0x31, stderr);
            /* WARNING: Subroutine does not return */
            exit(1);
        }
    }
    iVar6 = 0;
    do {
        if (local_12c <= iVar6) {
            if (local_140 != -1) {
                close(local_140);
            }
            close(__fd);
            /* WARNING: Subroutine does not return */
            exit(0);
        }
        if (uVar8 == 0) {
            iVar1 = 0;
            do {
                iVar2 = FUN_0000914c(__fd, iVar6 + local_130, iVar1,
                                     local_128 + iVar1, 8);
                if (iVar2 < 0)
                    goto LAB_00008aec;
                iVar1 = iVar1 + 8;
            } while (iVar1 != 0x100);
        } else {
            if (local_140 == -1) {
                pcVar5 = (char *)((int)&local_12c + 3);
                do {
                    pcVar5 = pcVar5 + 1;
                    *pcVar5 = '\0';
                } while (pcVar5 != local_128 + 0xff);
            } else {
                uVar9 = read(local_140, local_128, 0x100);
                if ((int)uVar9 < 0) {
                    pcVar5 = "Cannot read from file \'%s\'\n";
                    goto LAB_00008ba8;
                }
                if ((uVar9 != 0x100) && (fprintf(stderr,
                                                 "File \'%s\' is too small, "
                                                 "padding eeprom with zeroes\n",
                                                 __file),
                                         uVar9 < 0x100)) {
                    pcVar5 = local_128 + (uVar9 - 1);
                    do {
                        pcVar5 = pcVar5 + 1;
                        *pcVar5 = '\0';
                    } while (pcVar5 != local_128 + 0xff);
                }
            }
            iVar1 = 0;
            do {
                iVar2 = FUN_00008ff0(__fd, iVar6 + local_130, iVar1,
                                     local_128 + iVar1, 8);
                if (iVar2 < 0)
                    goto LAB_00008aec;
                iVar1 = iVar1 + 8;
            } while (iVar1 != 0x100);
        }
        if ((uVar7 == 0 && -1 < local_140) &&
            (sVar3 = write(local_140, local_128, 0x100), sVar3 != 0x100)) {
            pcVar5 = "Cannot write to file \'%s\'\n";
            goto LAB_00008ba8;
        }
        iVar6 = iVar6 + 1;
    } while (true);
}

void processEntry entry(undefined4 param_1, undefined4 param_2)

{
    __libc_start_main(FUN_0000868c, param_2, &stack0x00000004, FUN_00009248,
                      &DAT_000092ac, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00008f0c) */

void FUN_00008ef8(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00008f34) */
/* WARNING: Removing unreachable block (ram,0x00008f3c) */
/* WARNING: Removing unreachable block (ram,0x00008f40) */

void FUN_00008f1c(void)

{
    return;
}

void _FINI_0(void)

{
    if (DAT_00011d4c != '\0') {
        return;
    }
    FUN_00008f1c();
    DAT_00011d4c = 1;
    return;
}

/* WARNING: Removing unreachable block (ram,0x00008f74) */
/* WARNING: Removing unreachable block (ram,0x00008f7c) */
/* WARNING: Removing unreachable block (ram,0x00008fdc) */
/* WARNING: Removing unreachable block (ram,0x00008f80) */

void _INIT_0(void)

{
    return;
}

undefined4 FUN_00008ff0(int param_1, undefined4 param_2, int param_3,
                        int param_4, byte param_5)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined1 *puVar4;
    undefined1 *puVar5;
    undefined2 *local_40;
    undefined4 local_3c;
    undefined1 local_38[12];
    undefined2 local_2c;
    undefined2 local_2a;
    short local_28;
    undefined1 *local_24;

    uVar3 = (uint)param_5;
    if (uVar3 < 9) {
        if (uVar3 + param_3 < 0x101) {
            local_38[0] = (undefined1)param_3;
            if (uVar3 != 0) {
                puVar5 = (undefined1 *)(param_4 + -1);
                puVar4 = local_38;
                do {
                    puVar5 = puVar5 + 1;
                    puVar4 = puVar4 + 1;
                    *puVar4 = *puVar5;
                } while (puVar4 != local_38 + uVar3);
            }
            local_40 = &local_2c;
            local_2c = (undefined2)param_2;
            local_3c = 1;
            local_28 = param_5 + 1;
            local_2a = 0;
            local_24 = local_38;
            iVar1 = ioctl(param_1, 0x707, &local_40);
            if (iVar1 < 0) {
                perror("ioctl()");
                fprintf(stderr, "ioctl returned %d\n", iVar1);
                uVar2 = 0xffffffff;
            } else if (uVar3 == 0) {
                fprintf(
                    stderr,
                    "Positioned pointer in eeprom at 0x%02x to offset %08x\n",
                    param_2, param_3);
                uVar2 = 0;
            } else {
                fprintf(stderr,
                        "Wrote %d bytes to eeprom at 0x%02x, offset %08x\n",
                        uVar3, param_2, param_3);
                uVar2 = 0;
            }
        } else {
            fprintf(stderr, "Sorry, len(%d)+offset(%d) > 256 (page boundary)\n",
                    uVar3, param_3);
            uVar2 = 0xffffffff;
        }
    } else {
        fwrite("I can only write MAX_BYTES bytes at a time!\n", 1, 0x2c,
               stderr);
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 FUN_0000914c(int param_1, undefined4 param_2, undefined4 param_3,
                        undefined4 param_4, byte param_5)

{
    int iVar1;
    undefined4 uVar2;
    undefined2 *local_34;
    undefined4 local_30;
    undefined2 local_2c;
    undefined2 local_2a;
    ushort local_28;
    undefined4 local_24;

    if (param_5 < 9) {
        uVar2 = 0;
        iVar1 = FUN_00008ff0();
        if (iVar1 < 0) {
            uVar2 = 0xffffffff;
        } else {
            local_34 = &local_2c;
            local_2c = (undefined2)param_2;
            local_28 = (ushort)param_5;
            local_30 = 1;
            local_2a = 1;
            local_24 = param_4;
            iVar1 = ioctl(param_1, 0x707, &local_34, 1, uVar2);
            if (iVar1 < 0) {
                perror("ioctl()");
                fprintf(stderr, "ioctl returned %d\n", iVar1);
                uVar2 = 0xffffffff;
            } else {
                fprintf(stderr,
                        "Read %d bytes from eeprom at 0x%02x, offset %08x\n",
                        (uint)param_5, param_2, param_3);
                uVar2 = 0;
            }
        }
    } else {
        fwrite("I can only write MAX_BYTES bytes at a time!\n", 1, 0x2c,
               stderr);
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

/* WARNING: Removing unreachable block (ram,0x00009274) */

void FUN_00009248(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                  undefined4 param_4)

{
    int iVar1;
    undefined4 *puVar2;

    _DT_INIT();
    puVar2 = (undefined4 *)0x11be0;
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
