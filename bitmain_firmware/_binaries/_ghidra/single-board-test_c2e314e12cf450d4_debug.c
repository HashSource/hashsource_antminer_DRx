// Decompiled: single-board-test_c2e314e12cf450d4_debug

int _init(EVP_PKEY_CTX *ctx)

{
    int iVar1;

    iVar1 = call_gmon_start(ctx);
    return iVar1;
}

void _start(undefined4 param_1)

{
    undefined4 in_stack_00000000;

    __libc_start_main(0x9049, in_stack_00000000, &stack0x00000004, 0x28205,
                      0x28249, param_1);
    /* WARNING: Subroutine does not return */
    abort();
}

/* WARNING: Removing unreachable block (ram,0x00008fb6) */

void call_gmon_start(void)

{
    __gmon_start__();
    return;
}

/* WARNING: Removing unreachable block (ram,0x00008fce) */
/* WARNING: Removing unreachable block (ram,0x00008fd4) */

void deregister_tm_clones(void)

{
    return;
}

/* WARNING: Removing unreachable block (ram,0x00008ff8) */
/* WARNING: Removing unreachable block (ram,0x00008ffe) */

void register_tm_clones(void)

{
    return;
}

void __do_global_dtors_aux(void)

{
    if (completed_8605 == '\0') {
        deregister_tm_clones();
        completed_8605 = '\x01';
    }
    return;
}

/* WARNING: Removing unreachable block (ram,0x00009034) */

void frame_dummy(void)

{
    register_tm_clones();
    return;
}

int main(void)

{
    char local_4c[64];
    int local_c;

    memset(local_4c, 0, 0x40);
    local_c = cgpu_init();
    if ((-1 < local_c) && (local_c = configMiner(), -1 < local_c)) {
        display_arguments();
        puts("press key to test!");
        do {
            while (local_c = read_key(local_4c), Conf._108_4_ == 1) {
                if ((0 < local_c) && (local_4c[0] == '\x01')) {
                    if (Conf._116_4_ == 0x6ba) {
                        singleAsicTest_BM1722();
                    } else if (Conf._116_4_ == 0x6bd) {
                        singleAsicTest_BM1725();
                    } else {
                        printf("Single ASIC test: Can\'t find ASIC type!!! "
                               "AsicType = %d\n",
                               Conf._116_4_);
                    }
                }
            }
            if (((0 < local_c) && (local_4c[0] == '\x01')) ||
                ((pattern_test_time < gHowManyVoltageLevel &&
                  (pattern_test_time != 0)))) {
                if (gHashBoard_BBD12601 == '\0') {
                    if (gHashBoard_BBD25601 == '\0') {
                        printf(
                            "%s: Please config HashBoard name in Config.ini\n",
                            &__FUNCTION___7462);
                    } else {
                        singleBoardTest_BBD25601();
                    }
                } else {
                    singleBoardTest_BBD12601();
                }
            }
            if (gHowManyVoltageLevel <= pattern_test_time) {
                pattern_test_time = 0;
            }
        } while (true);
    }
    return local_c;
}

void get_BM1722_asic_register(undefined1 param_1, undefined1 param_2,
                              undefined1 param_3, char param_4)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_c = 0;
    local_10 = 0x42;
    local_f = 5;
    if (param_4 != '\0') {
        local_10 = 0x52;
    }
    local_e = param_2;
    local_d = param_3;
    local_c = CRC5(&local_10, 0x20);
    dcr_uart_send(param_1, &local_10, 5);
    return;
}

void set_BM1722_asic_register(undefined1 param_1, undefined1 param_2,
                              undefined1 param_3, char param_4,
                              undefined4 param_5)

{
    undefined1 local_14;
    undefined1 local_13;
    undefined1 local_12;
    undefined1 local_11;
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_c = 0;
    local_14 = 0x41;
    local_13 = 9;
    if (param_4 != '\0') {
        local_14 = 0x51;
    }
    local_10 = (undefined1)((uint)param_5 >> 0x18);
    local_f = (undefined1)((uint)param_5 >> 0x10);
    local_e = (undefined1)((uint)param_5 >> 8);
    local_d = (undefined1)param_5;
    local_12 = param_2;
    local_11 = param_3;
    local_c = CRC5(&local_14, 0x40);
    dcr_uart_send(param_1, &local_14, 9);
    return;
}

void set_BM1722_freq(float param_1, undefined1 param_2, undefined1 param_3,
                     undefined1 param_4)

{
    float local_18;
    byte local_11;
    uint local_10;
    undefined4 local_c;

    local_10 = 0;
    local_11 = 0;
    local_c = 0;
    local_18 = 0.0;
    printf("\n--- %s: freq = %f\n", "set_BM1722_freq",
           SUB84((double)param_1, 0),
           (int)((ulonglong)(double)param_1 >> 0x20));
    local_c = get_pllparam_divider(param_1, &local_10, &local_11, &local_18);
    local_10 = local_10 | 0xc0000000;
    local_11 = local_11 - 1;
    printf("\n%s: pll_param = %08x, divider = %02x, pll_freq = %f\n",
           "set_BM1722_freq", local_10, (uint)local_11, (double)local_18);
    set_BM1722_asic_register(param_2, param_3, 0xc, param_4, local_10);
    usleep(1000);
    set_BM1722_asic_register(param_2, param_3, 0x70, param_4, local_11);
    usleep(1000);
    set_BM1722_asic_register(param_2, param_3, 0xc, param_4, local_10);
    return;
}

void BM1722_chain_inactive(undefined1 param_1)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_10 = 0;
    local_f = 0;
    local_e = 0;
    local_d = 0;
    local_c = 0;
    printf("\n--- %s\n", "BM1722_chain_inactive");
    local_10 = 0x53;
    local_f = 5;
    local_e = 0;
    local_d = 0;
    local_c = CRC5(&local_10, 0x20);
    dcr_uart_send(param_1, &local_10, 5);
    usleep(5000);
    return;
}

void BM1722_set_address(undefined1 param_1, undefined1 param_2)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_c = 0;
    local_10 = 0x40;
    local_f = 5;
    local_d = 0;
    local_e = param_2;
    local_c = CRC5(&local_10, 0x20);
    dcr_uart_send(param_1, &local_10, 5);
    return;
}

void BM1722_set_address_all(byte param_1)

{
    uint uVar1;
    uint local_10;
    uint local_c;

    local_c = 0;
    printf("\n--- %s: Chain : %d\n", "BM1722_set_address_all", (uint)param_1);
    BM1722_chain_inactive(param_1);
    for (local_10 = 0;
         uVar1 = __udivsi3(0x100, gChain_Asic_Interval), local_10 < uVar1;
         local_10 = local_10 + 1) {
        BM1722_set_address(param_1, local_c & 0xff);
        local_c = local_c + gChain_Asic_Interval;
        usleep(5000);
    }
    return;
}

void BM1722_open_core(byte param_1)

{
    undefined1 local_cc;
    undefined1 local_cb;
    undefined1 auStack_ca[180];
    undefined1 local_16;
    undefined1 local_15;
    undefined2 local_12;
    uint local_10;
    uint local_c;

    local_c = 0;
    memset(&local_cc, 0, 0xb8);
    local_cc = 0xff;
    printf("\n--- %s: Chain : %d\n", "BM1722_open_core", (uint)param_1);
    *(undefined1 *)((int)&gIsOpenCoreEnd + (uint)param_1) = 0;
    *(undefined1 *)((int)&gIsOpeningCore + (uint)param_1) = 1;
    local_cc = 0x20;
    local_cb = 0;
    memset(auStack_ca, 0, 0xb4);
    local_12 = CRC16(&local_cc, 0xb6);
    local_16 = (undefined1)((ushort)local_12 >> 8);
    local_15 = (undefined1)local_12;
    for (local_c = 0; local_c < (uint)Conf._112_4_; local_c = local_c + 1) {
        if (local_c < 0x20) {
            if (local_c == 0) {
                local_10 = 0;
            }
            local_10 = local_10 << 1 | 1;
            set_BM1722_asic_register(param_1, 0, 0x50, 1, local_10);
        } else if ((local_c < 0x40) && (0x1f < local_c)) {
            if (local_c == 0x20) {
                local_10 = 0;
            }
            local_10 = local_10 << 1 | 1;
            set_BM1722_asic_register(param_1, 0, 0x54, 1, local_10);
        } else if ((local_c < 0x60) && (0x3f < local_c)) {
            if (local_c == 0x40) {
                local_10 = 0;
            }
            local_10 = local_10 << 1 | 1;
            set_BM1722_asic_register(param_1, 0, 0x58, 1, local_10);
        } else if ((local_c < 0x80) && (0x5f < local_c)) {
            if (local_c == 0x60) {
                local_10 = 0;
            }
            local_10 = local_10 << 1 | 1;
            set_BM1722_asic_register(param_1, 0, 0x5c, 1, local_10);
        }
        dcr_uart_send(param_1, &local_cc, 0xb8);
        usleep(Conf._196_4_);
    }
    uart_flush_rx(param_1);
    *(undefined1 *)((int)&gIsOpeningCore + (uint)param_1) = 0;
    *(undefined1 *)((int)&gIsOpenCoreEnd + (uint)param_1) = 1;
    return;
}

uint check_BM1722_asic_reg(byte param_1, undefined1 param_2, char param_3,
                           undefined1 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined4 local_28;
    undefined2 local_24;
    undefined1 local_22;
    uint local_20;
    uint local_1c;
    uint local_18;
    uint local_14;

    local_28 = 0;
    local_24 = 0;
    local_22 = 0;
    local_14 = 0;
    local_20 = 0;
    local_18 = 0;
    local_1c = 0x80000000;
    clear_register_value_buf();
    get_BM1722_asic_register(param_1, param_2, param_3, param_4);
    if (param_3 == '\0') {
        cgpu[param_1 + 0x1004b8] = 0;
    }
    while (local_14 < 3) {
        usleep(50000);
        pthread_mutex_lock((pthread_mutex_t *)reg_mutex);
        local_20 = *(uint *)(reg_value_buf + 8);
        pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
        if (local_20 == 0) {
            local_14 = local_14 + 1;
        } else {
            local_14 = 0;
            for (local_18 = 0; local_18 < local_20; local_18 = local_18 + 1) {
                pthread_mutex_lock((pthread_mutex_t *)reg_mutex);
                if (param_1 ==
                    *(byte *)(reg_value_buf + *(int *)(reg_value_buf + 4) * 10 +
                              0x19)) {
                    memset(&local_28, 0, 7);
                    puVar3 =
                        (undefined4 *)(reg_value_buf +
                                       *(int *)(reg_value_buf + 4) * 10 + 0x10);
                    local_28 = *puVar3;
                    local_24 = *(undefined2 *)(puVar3 + 1);
                    local_22 = *(undefined1 *)((int)puVar3 + 6);
                    uVar1 = CRC5(&local_28, 0x33);
                    if (uVar1 ==
                        *(byte *)(reg_value_buf +
                                  *(int *)(reg_value_buf + 4) * 10 + 0x18)) {
                        if (param_3 == '\0') {
                            cgpu[param_1 + 0x1004b8] =
                                cgpu[param_1 + 0x1004b8] + '\x01';
                        }
                        local_1c =
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x13) |
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x10)
                                << 0x18 |
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x11)
                                << 0x10 |
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x12)
                                << 8;
                        *(int *)(reg_value_buf + 4) =
                            *(int *)(reg_value_buf + 4) + 1;
                        *(int *)(reg_value_buf + 8) =
                            *(int *)(reg_value_buf + 8) + -1;
                        if (*(int *)(reg_value_buf + 4) == 0x201) {
                            *(undefined4 *)(reg_value_buf + 4) = 0;
                        }
                        pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
                    } else {
                        *(int *)(reg_value_buf + 4) =
                            *(int *)(reg_value_buf + 4) + 1;
                        *(int *)(reg_value_buf + 8) =
                            *(int *)(reg_value_buf + 8) + -1;
                        if (*(int *)(reg_value_buf + 4) == 0x201) {
                            *(undefined4 *)(reg_value_buf + 4) = 0;
                        }
                        uVar2 = CRC5(&local_28, 0x33);
                        printf("%s: crc is 0x%x, but it should be 0x%x\n",
                               "check_BM1722_asic_reg", uVar2,
                               (uint) *
                                   (byte *)(reg_value_buf +
                                            *(int *)(reg_value_buf + 4) * 10 +
                                            0x18));
                        pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
                    }
                } else {
                    *(int *)(reg_value_buf + 4) =
                        *(int *)(reg_value_buf + 4) + 1;
                    *(int *)(reg_value_buf + 8) =
                        *(int *)(reg_value_buf + 8) + -1;
                    if (*(int *)(reg_value_buf + 4) == 0x201) {
                        *(undefined4 *)(reg_value_buf + 4) = 0;
                    }
                    printf("%s: the return data is from chain%d, but it should "
                           "be from chain%d\n",
                           "check_BM1722_asic_reg",
                           (uint) * (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x19),
                           (uint)param_1);
                    pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
                }
            }
        }
    }
    local_14 = 0;
    if (param_3 == '\0') {
        if ((uint)cgpu._1049788_4_ < (uint)(byte)cgpu[param_1 + 0x1004b8]) {
            cgpu._1049788_4_ = ZEXT14((byte)cgpu[param_1 + 0x1004b8]);
        }
        printf("%s: chain J%d has %d ASIC\n", "check_BM1722_asic_reg",
               param_1 + 1, (uint)(byte)cgpu[param_1 + 0x1004b8]);
    }
    clear_register_value_buf();
    return local_1c;
}

void singleAsicTest_BM1722(void)

{
    char local_2c[16];
    int local_1c;
    undefined4 local_18;
    undefined4 local_14;

    local_14 = 0;
    local_18 = 0;
    local_1c = 0x1e240;
    builtin_strncpy(local_2c, "                ", 0x10);
    printf("\nBegin %s test\n", "singleAsicTest_BM1722");
    system("date");
    putchar(10);
    reset_global_arg();
    chain_reset(gChain);
    fan_control(0x32);
    pthread_create((pthread_t *)(cgpu + 0x80008), (pthread_attr_t *)0x0,
                   (__start_routine *)0xe135,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    *(undefined1 *)((int)&start_receive + (uint)gChain) = 1;
    pthread_create((pthread_t *)(cgpu + 0x80004), (pthread_attr_t *)0x0,
                   (__start_routine *)0xebc5,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    set_baud(gChain, 0x1a);
    puts("\n--- check asic number");
    check_BM1722_asic_reg(gChain, 0, 0, 1);
    printf("\n--- check chain: asicNum = %d\n",
           (uint)(byte)cgpu[gChain + 0x1004b8]);
    if ((uint)(byte)cgpu[gChain + 0x1004b8] == Conf._108_4_) {
        calculate_timeout_and_baud();
        set_baud(gChain, Conf._260_4_ & 0xff);
        set_BM1722_freq((float)(uint)Conf._68_4_, gChain, 0, 1);
        BM1722_set_address_all(gChain);
        check_BM1722_asic_reg(gChain, 0, 0, 1);
        if (Conf[0xfc] == '\x01') {
            if (pattern_test_time == '\0') {
                get_temperature_offset_value_from_asic_chain(gChain);
                set_default_temperature_offset_value_chain(gChain);
            } else {
                set_default_temperature_offset_value_chain(gChain);
            }
        }
        pthread_create((pthread_t *)(cgpu + 0x80010), (pthread_attr_t *)0x0,
                       (__start_routine *)0xf349,
                       (void *)((int)&chain_info + (uint)gChain * 2));
        set_BM1725_asic_register(gChain, 0, 0x14, 1, 0x26);
        BM1722_open_core(gChain);
        puts("\nBegin send test pattern");
        system("date");
        putchar(10);
        while (*(char *)((int)&gStartTest + (uint)gChain) != '\x01') {
            if ((uint)Conf._216_4_ <=
                *(uint *)(time_counter + (uint)gChain * 4)) {
                pthread_cancel(cgpu._524304_4_);
                pthread_cancel(cgpu._524292_4_);
                pthread_cancel(cgpu._524296_4_);
                puts("Can\'t open core, change to next voltage and freq");
                write_lcd(0, "Can\'t open core ", 0x10);
                write_lcd_no_memset(1, "change  to  next", 0x10);
                write_lcd_no_memset(2, "voltage and freq", 0x10);
                pattern_test_time = pattern_test_time + '\x01';
                return;
            }
            usleep(10000);
        }
        pthread_create((pthread_t *)(cgpu + 0x80000), (pthread_attr_t *)0x0,
                       (__start_routine *)0xef59,
                       (void *)((int)&chain_info + (uint)gChain * 2));
        local_1c = pthread_join(cgpu._524288_4_, (void **)0x0);
        local_1c = pthread_join(cgpu._524292_4_, (void **)0x0);
        pthread_cancel(cgpu._524296_4_);
        pthread_cancel(cgpu._524304_4_);
        local_18 = single_asic_get_result(gChain);
        single_asic_print_lcd(gChain, local_18);
        fan_control(0);
    } else {
        pthread_cancel(cgpu._524292_4_);
        pthread_cancel(cgpu._524296_4_);
        sprintf(local_2c + 7, "%d", (uint)(byte)cgpu[gChain + 0x1004b8]);
        write_lcd(0, "   Only have    ", 0x10);
        write_lcd_no_memset(1, local_2c, 0x10);
        write_lcd_no_memset(2, "      ASIC      ", 0x10);
        printf("\n\n%s: Only have %d ASIC\n", "singleAsicTest_BM1722",
               (uint)(byte)cgpu[gChain + 0x1004b8]);
    }
    return;
}

void singleBoardTest_BBD12601(void)

{
    char local_2c[16];
    int local_1c;
    uint local_18;
    undefined4 local_14;

    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    builtin_strncpy(local_2c, "                ", 0x10);
    printf("\nBegin %s test\n", "singleBoardTest_BBD12601");
    system("date");
    putchar(10);
    reset_global_arg();
    chain_reset(gChain);
    pthread_create((pthread_t *)(cgpu + 0x80008), (pthread_attr_t *)0x0,
                   (__start_routine *)0xe135,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    chain_reset_low(gChain);
    usleep(300000);
    reset_PIC16F1704_pic(gChain, 0);
    jump_from_loader_to_app_PIC16F1704(gChain, 0);
    set_voltage(gChain, 0, 0);
    enable_PIC16F1704_dc_dc(gChain, 0, 1);
    pthread_create((pthread_t *)(cgpu + 0x8000c), (pthread_attr_t *)0x0,
                   (__start_routine *)0x14089,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    usleep(100);
    chain_reset_high(gChain);
    usleep(300000);
    fan_control(0x32);
    set_baud(gChain, 0x1a);
    *(undefined1 *)((int)&start_receive + (uint)gChain) = 1;
    pthread_create((pthread_t *)(cgpu + 0x80004), (pthread_attr_t *)0x0,
                   (__start_routine *)0xebc5,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    usleep(5000);
    puts("\n--- BBD25601 check asic number");
    check_BM1722_asic_reg(gChain, 0, 0, 1);
    printf("\n--- check chain: J%d has asicNum = %d\n", (uint)gChain,
           (uint)(byte)cgpu[gChain + 0x1004b8]);
    if ((uint)(byte)cgpu[gChain + 0x1004b8] == Conf._108_4_) {
        chain_reset(gChain);
        uart_flush(gChain);
        uart_set_baud(gChain, 0x1a);
        puts("\n--- double check asic number");
        check_BM1722_asic_reg(gChain, 0, 0, 1);
        printf("\n--- check chain: J%d has asicNum = %d\n", (uint)gChain,
               (uint)(byte)cgpu[gChain + 0x1004b8]);
        if ((uint)(byte)cgpu[gChain + 0x1004b8] == Conf._108_4_) {
            calculate_timeout_and_baud();
            set_baud(gChain, Conf._260_4_ & 0xff);
            set_BM1722_freq((float)(uint)Conf._68_4_, gChain, 0, 1);
            BM1722_set_address_all(gChain);
            if (Conf[0xfc] == '\x01') {
                if (pattern_test_time == 0) {
                    get_temperature_offset_value_from_asic_chain(gChain);
                    set_default_temperature_offset_value_chain(gChain);
                } else {
                    set_default_temperature_offset_value_chain(gChain);
                }
            }
            pthread_create((pthread_t *)(cgpu + 0x80010), (pthread_attr_t *)0x0,
                           (__start_routine *)0xf349,
                           (void *)((int)&chain_info + (uint)gChain * 2));
            set_BM1722_asic_register(gChain, 0, 0x14, 1, 0x26);
            BM1722_open_core(gChain);
            puts("\nBegin send test pattern");
            *(undefined1 *)((int)&gStartTest + (uint)gChain) = 1;
            while (*(char *)((int)&gStartTest + (uint)gChain) != '\x01') {
                if ((uint)Conf._216_4_ <=
                    *(uint *)(time_counter + (uint)gChain * 4)) {
                    pthread_cancel(cgpu._524304_4_);
                    pthread_cancel(cgpu._524292_4_);
                    pthread_cancel(cgpu._524296_4_);
                    pthread_cancel(cgpu._524300_4_);
                    puts("Can\'t open core, change to next voltage and freq");
                    write_lcd(0, "Can\'t open core ", 0x10);
                    write_lcd_no_memset(1, "change    to    next", 0x10);
                    write_lcd_no_memset(2, "voltage and freq", 0x10);
                    pattern_test_time = pattern_test_time + 1;
                    enable_PIC16F1704_dc_dc(gChain, 0, 0);
                    return;
                }
                usleep(10000);
            }
            pthread_create((pthread_t *)(cgpu + 0x80000), (pthread_attr_t *)0x0,
                           (__start_routine *)0xef59,
                           (void *)((int)&chain_info + (uint)gChain * 2));
            local_1c = pthread_join(cgpu._524288_4_, (void **)0x0);
            local_1c = pthread_join(cgpu._524292_4_, (void **)0x0);
            pthread_cancel(cgpu._524296_4_);
            pthread_cancel(cgpu._524304_4_);
            local_18 = single_board_get_result(gChain);
            single_board_print_lcd(local_18);
            if ((local_18 == 7) && (Conf[0xe0] != '\0')) {
                set_voltage(gChain, 0, 1);
            }
            if (((local_18 & 1) != 0) ||
                (gHowManyVoltageLevel <= pattern_test_time)) {
                enable_PIC16F1704_dc_dc(gChain, 0, 0);
            }
            pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
            pthread_cancel(cgpu._524300_4_);
            pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
            fan_control(0);
        } else {
            pthread_cancel(cgpu._524292_4_);
            pthread_cancel(cgpu._524296_4_);
            pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
            pthread_cancel(cgpu._524300_4_);
            pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
            sprintf(local_2c + 7, "%d", (uint)(byte)cgpu[gChain + 0x1004b8]);
            write_lcd(0, "   Only have    ", 0x10);
            write_lcd_no_memset(1, local_2c, 0x10);
            write_lcd_no_memset(2, "      ASIC      ", 0x10);
            printf("\n\n---%s: Only have %d ASIC\n", "singleBoardTest_BBD12601",
                   (uint)(byte)cgpu[gChain + 0x1004b8]);
            sleep(Conf._264_4_);
            enable_PIC16F1704_dc_dc(gChain, 0, 0);
        }
    } else {
        pthread_cancel(cgpu._524292_4_);
        pthread_cancel(cgpu._524296_4_);
        pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
        pthread_cancel(cgpu._524300_4_);
        pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
        sprintf(local_2c + 7, "%d", (uint)(byte)cgpu[gChain + 0x1004b8]);
        write_lcd(0, "   Only have    ", 0x10);
        write_lcd_no_memset(1, local_2c, 0x10);
        write_lcd_no_memset(2, "      ASIC      ", 0x10);
        printf("\n\n---%s: Only have %d ASIC\n", "singleBoardTest_BBD12601",
               (uint)(byte)cgpu[gChain + 0x1004b8]);
        sleep(Conf._264_4_);
        enable_PIC16F1704_dc_dc(gChain, 0, 0);
    }
    return;
}

void get_BM1725_asic_register(undefined1 param_1, undefined1 param_2,
                              undefined1 param_3, char param_4)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_c = 0;
    local_10 = 0x42;
    local_f = 5;
    if (param_4 != '\0') {
        local_10 = 0x52;
    }
    local_e = param_2;
    local_d = param_3;
    local_c = CRC5(&local_10, 0x20);
    dcr_uart_send(param_1, &local_10, 5);
    return;
}

void set_BM1725_asic_register(undefined1 param_1, undefined1 param_2,
                              undefined1 param_3, char param_4,
                              undefined4 param_5)

{
    undefined1 local_14;
    undefined1 local_13;
    undefined1 local_12;
    undefined1 local_11;
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_c = 0;
    local_14 = 0x41;
    local_13 = 9;
    if (param_4 != '\0') {
        local_14 = 0x51;
    }
    local_10 = (undefined1)((uint)param_5 >> 0x18);
    local_f = (undefined1)((uint)param_5 >> 0x10);
    local_e = (undefined1)((uint)param_5 >> 8);
    local_d = (undefined1)param_5;
    local_12 = param_2;
    local_11 = param_3;
    local_c = CRC5(&local_14, 0x40);
    dcr_uart_send(param_1, &local_14, 9);
    return;
}

void BM1725_set_address(undefined1 param_1, undefined1 param_2)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_c = 0;
    local_10 = 0x40;
    local_f = 5;
    local_d = 0;
    local_e = param_2;
    local_c = CRC5(&local_10, 0x20);
    dcr_uart_send(param_1, &local_10, 5);
    return;
}

void BM1725_chain_inactive(undefined1 param_1)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;

    local_10 = 0;
    local_f = 0;
    local_e = 0;
    local_d = 0;
    local_c = 0;
    printf("\n--- %s\n", "BM1725_chain_inactive");
    local_10 = 0x53;
    local_f = 5;
    local_e = 0;
    local_d = 0;
    local_c = CRC5(&local_10, 0x20);
    dcr_uart_send(param_1, &local_10, 5);
    usleep(5000);
    return;
}

void BM1725_set_address_all(byte param_1)

{
    byte local_a;
    char local_9;

    local_9 = '\0';
    printf("\n--- %s: Chain : %d\n", "BM1725_set_address_all", (uint)param_1);
    BM1725_chain_inactive(param_1);
    for (local_a = 0; (uint)local_a < (uint)Conf._108_4_;
         local_a = local_a + 1) {
        BM1725_set_address(param_1, local_9);
        local_9 = (char)gChain_Asic_Interval + local_9;
        usleep(5000);
    }
    return;
}

void set_BM1725_freq(float param_1, undefined1 param_2, undefined1 param_3,
                     undefined1 param_4)

{
    float local_18;
    byte local_11;
    uint local_10;
    undefined4 local_c;

    local_10 = 0;
    local_11 = 0;
    local_c = 0;
    local_18 = 0.0;
    printf("\n%s: freq = %f\n", "set_BM1725_freq", SUB84((double)param_1, 0),
           (int)((ulonglong)(double)param_1 >> 0x20));
    local_c = get_pllparam_divider(param_1, &local_10, &local_11, &local_18);
    local_10 = local_10 | 0xc0000000;
    local_11 = local_11 - 1;
    printf("\n%s: pll_param = %08x, divider = %02x, pll_freq = %f\n",
           "set_BM1725_freq", local_10, (uint)local_11, (double)local_18);
    set_BM1725_asic_register(param_2, param_3, 0xc, param_4, local_10);
    usleep(1000);
    set_BM1725_asic_register(param_2, param_3, 0x70, param_4, local_11);
    usleep(1000);
    set_BM1725_asic_register(param_2, param_3, 0xc, param_4, local_10);
    return;
}

void BM1725_open_core(byte param_1)

{
    undefined1 local_cc;
    undefined1 local_cb;
    undefined1 auStack_ca[180];
    undefined1 local_16;
    undefined1 local_15;
    uint local_14;
    undefined2 local_e;
    uint local_c;

    local_c = 0;
    memset(&local_cc, 0, 0xb8);
    local_cc = 0xff;
    printf("\n--- %s: Chain : %d\n", "BM1725_open_core", (uint)param_1);
    *(undefined1 *)((int)&gIsOpenCoreEnd + (uint)param_1) = 0;
    *(undefined1 *)((int)&gIsOpeningCore + (uint)param_1) = 1;
    local_cc = 0x20;
    local_cb = 0x80;
    memset(auStack_ca, 0, 0xb4);
    local_e = CRC16(&local_cc, 0xb6);
    local_16 = (undefined1)((ushort)local_e >> 8);
    local_15 = (undefined1)local_e;
    for (local_c = 0; local_c < 0x114; local_c = local_c + 1) {
        local_14 = local_c << 0x10 | 0x8201;
        set_BM1725_asic_register(param_1, 0, 0x24, 1, local_14);
        usleep(100);
        dcr_uart_send(param_1, &local_cc, 0xb8);
        usleep(Conf._196_4_);
    }
    uart_flush_rx(param_1);
    *(undefined1 *)((int)&gIsOpeningCore + (uint)param_1) = 0;
    *(undefined1 *)((int)&gIsOpenCoreEnd + (uint)param_1) = 1;
    return;
}

uint check_BM1725_asic_reg(byte param_1, undefined1 param_2, char param_3,
                           undefined1 param_4)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 *puVar3;
    undefined4 local_38;
    undefined4 local_34;
    uint local_30;
    uint local_2c;
    uint local_28;
    uint local_24;

    local_38 = 0;
    local_34 = 0;
    local_24 = 0;
    local_30 = 0;
    local_28 = 0;
    local_2c = 0x80000000;
    clear_register_value_buf();
    get_BM1725_asic_register(param_1, param_2, param_3, param_4);
    if (param_3 == '\0') {
        cgpu[param_1 + 0x1004b8] = 0;
    }
    while (local_24 < 3) {
        usleep(50000);
        pthread_mutex_lock((pthread_mutex_t *)reg_mutex);
        local_30 = *(uint *)(reg_value_buf + 8);
        pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
        if (local_30 == 0) {
            local_24 = local_24 + 1;
        } else {
            local_24 = 0;
            for (local_28 = 0; local_28 < local_30; local_28 = local_28 + 1) {
                pthread_mutex_lock((pthread_mutex_t *)reg_mutex);
                if (param_1 ==
                    *(byte *)(reg_value_buf + *(int *)(reg_value_buf + 4) * 10 +
                              0x19)) {
                    memset(&local_38, 0, 8);
                    puVar3 =
                        (undefined4 *)(reg_value_buf +
                                       *(int *)(reg_value_buf + 4) * 10 + 0x10);
                    local_38 = *puVar3;
                    local_34 = puVar3[1];
                    uVar1 = CRC5(&local_38, 0x3b);
                    if (uVar1 ==
                        *(byte *)(reg_value_buf +
                                  *(int *)(reg_value_buf + 4) * 10 + 0x18)) {
                        if (param_3 == '\0') {
                            cgpu[param_1 + 0x1004b8] =
                                cgpu[param_1 + 0x1004b8] + '\x01';
                            printf(
                                "%s: the asic num is %d, the asic address is "
                                "0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x "
                                "0x%02x 0x%02x\n",
                                "check_BM1725_asic_reg",
                                (uint)(byte)cgpu[param_1 + 0x1004b8],
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x10),
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x11),
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x12),
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x13),
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x14),
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x15),
                                (uint) *
                                    (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x16),
                                (uint) *
                                    (byte *)(*(int *)(reg_value_buf + 4) * 10 +
                                             reg_value_buf + 0x17));
                        }
                        local_2c =
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x13) |
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x10)
                                << 0x18 |
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x11)
                                << 0x10 |
                            (uint) * (byte *)(reg_value_buf +
                                              *(int *)(reg_value_buf + 4) * 10 +
                                              0x12)
                                << 8;
                        *(int *)(reg_value_buf + 4) =
                            *(int *)(reg_value_buf + 4) + 1;
                        *(int *)(reg_value_buf + 8) =
                            *(int *)(reg_value_buf + 8) + -1;
                        if (*(int *)(reg_value_buf + 4) == 0x201) {
                            *(undefined4 *)(reg_value_buf + 4) = 0;
                        }
                        pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
                    } else {
                        *(int *)(reg_value_buf + 4) =
                            *(int *)(reg_value_buf + 4) + 1;
                        *(int *)(reg_value_buf + 8) =
                            *(int *)(reg_value_buf + 8) + -1;
                        if (*(int *)(reg_value_buf + 4) == 0x201) {
                            *(undefined4 *)(reg_value_buf + 4) = 0;
                        }
                        uVar2 = CRC5(&local_38, 0x3b);
                        printf("%s: crc is 0x%x, but it should be 0x%x\n",
                               "check_BM1725_asic_reg", uVar2,
                               (uint) *
                                   (byte *)(reg_value_buf +
                                            *(int *)(reg_value_buf + 4) * 10 +
                                            0x18));
                        pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
                    }
                } else {
                    *(int *)(reg_value_buf + 4) =
                        *(int *)(reg_value_buf + 4) + 1;
                    *(int *)(reg_value_buf + 8) =
                        *(int *)(reg_value_buf + 8) + -1;
                    if (*(int *)(reg_value_buf + 4) == 0x201) {
                        *(undefined4 *)(reg_value_buf + 4) = 0;
                    }
                    printf("%s: the return data is from chain%d, but it should "
                           "be from chain%d\n",
                           "check_BM1725_asic_reg",
                           (uint) * (byte *)(reg_value_buf +
                                             *(int *)(reg_value_buf + 4) * 10 +
                                             0x19),
                           (uint)param_1);
                    pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
                }
            }
        }
    }
    local_24 = 0;
    if (param_3 == '\0') {
        if ((uint)cgpu._1049788_4_ < (uint)(byte)cgpu[param_1 + 0x1004b8]) {
            cgpu._1049788_4_ = ZEXT14((byte)cgpu[param_1 + 0x1004b8]);
        }
        printf("%s: chain J%d has %d ASIC\n", "check_BM1725_asic_reg",
               param_1 + 1, (uint)(byte)cgpu[param_1 + 0x1004b8]);
    }
    clear_register_value_buf();
    return local_2c;
}

void singleAsicTest_BM1725(void)

{
    char local_2c[16];
    int local_1c;
    undefined4 local_18;
    undefined4 local_14;

    local_14 = 0;
    local_18 = 0;
    local_1c = 0x1e240;
    builtin_strncpy(local_2c, "                ", 0x10);
    printf("\nBegin %s test\n", "singleAsicTest_BM1725");
    system("date");
    putchar(10);
    reset_global_arg();
    chain_reset(gChain);
    fan_control(0x32);
    pthread_create((pthread_t *)(cgpu + 0x80008), (pthread_attr_t *)0x0,
                   (__start_routine *)0xe135,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    *(undefined1 *)((int)&start_receive + (uint)gChain) = 1;
    pthread_create((pthread_t *)(cgpu + 0x80004), (pthread_attr_t *)0x0,
                   (__start_routine *)0xebc5,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    set_baud(gChain, 0x1a);
    puts("\n--- check asic number");
    check_BM1725_asic_reg(gChain, 0, 0, 1);
    printf("\n--- check chain: asicNum = %d\n",
           (uint)(byte)cgpu[gChain + 0x1004b8]);
    if ((uint)(byte)cgpu[gChain + 0x1004b8] == Conf._108_4_) {
        calculate_timeout_and_baud();
        set_baud(gChain, Conf._260_4_ & 0xff);
        set_BM1725_freq((float)(uint)Conf._68_4_, gChain, 0, 1);
        BM1725_set_address_all(gChain);
        check_BM1725_asic_reg(gChain, 0, 0, 1);
        if (Conf[0xfc] == '\x01') {
            set_BM1725_asic_register(gChain, 0, 0x40, 0, 1);
            if (pattern_test_time == '\0') {
                get_temperature_offset_value_from_asic_chain(gChain);
                set_default_temperature_offset_value_chain(gChain);
            } else {
                set_default_temperature_offset_value_chain(gChain);
            }
        }
        pthread_create((pthread_t *)(cgpu + 0x80010), (pthread_attr_t *)0x0,
                       (__start_routine *)0xf349,
                       (void *)((int)&chain_info + (uint)gChain * 2));
        set_BM1725_asic_register(gChain, 0, 0x14, 1, 0x26);
        BM1725_open_core(gChain);
        puts("\nBegin send test pattern");
        system("date");
        putchar(10);
        while (*(char *)((int)&gStartTest + (uint)gChain) != '\x01') {
            if ((uint)Conf._216_4_ <=
                *(uint *)(time_counter + (uint)gChain * 4)) {
                pthread_cancel(cgpu._524304_4_);
                pthread_cancel(cgpu._524292_4_);
                pthread_cancel(cgpu._524296_4_);
                puts("Can\'t open core, change to next voltage and freq");
                write_lcd(0, "Can\'t open core ", 0x10);
                write_lcd_no_memset(1, "change  to  next", 0x10);
                write_lcd_no_memset(2, "voltage and freq", 0x10);
                pattern_test_time = pattern_test_time + '\x01';
                return;
            }
            usleep(10000);
        }
        pthread_create((pthread_t *)(cgpu + 0x80000), (pthread_attr_t *)0x0,
                       (__start_routine *)0xef59,
                       (void *)((int)&chain_info + (uint)gChain * 2));
        local_1c = pthread_join(cgpu._524288_4_, (void **)0x0);
        local_1c = pthread_join(cgpu._524292_4_, (void **)0x0);
        pthread_cancel(cgpu._524296_4_);
        pthread_cancel(cgpu._524304_4_);
        local_18 = single_asic_get_result(gChain);
        single_asic_print_lcd(gChain, local_18);
        fan_control(0);
    } else {
        pthread_cancel(cgpu._524292_4_);
        pthread_cancel(cgpu._524296_4_);
        sprintf(local_2c + 7, "%d", (uint)(byte)cgpu[gChain + 0x1004b8]);
        write_lcd(0, "   Only have    ", 0x10);
        write_lcd_no_memset(1, local_2c, 0x10);
        write_lcd_no_memset(2, "      ASIC      ", 0x10);
        printf("\n\n%s: Only have %d ASIC\n", "singleAsicTest_BM1725",
               (uint)(byte)cgpu[gChain + 0x1004b8]);
    }
    return;
}

void singleBoardTest_BBD25601(void)

{
    char local_2c[16];
    int local_1c;
    uint local_18;
    undefined4 local_14;

    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    builtin_strncpy(local_2c, "                ", 0x10);
    printf("\nBegin %s test\n", "singleBoardTest_BBD25601");
    system("date");
    putchar(10);
    reset_global_arg();
    chain_reset(gChain);
    pthread_create((pthread_t *)(cgpu + 0x80008), (pthread_attr_t *)0x0,
                   (__start_routine *)0xe135,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    chain_reset_low(gChain);
    usleep(300000);
    power_init();
    reset_PIC16F1704_pic(gChain, 0);
    jump_from_loader_to_app_PIC16F1704(gChain, 0);
    pthread_create((pthread_t *)(cgpu + 0x8000c), (pthread_attr_t *)0x0,
                   (__start_routine *)0x14089,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    usleep(100);
    set_voltage(gChain, 0xff, 0);
    enable_PIC16F1704_dc_dc(gChain, 0, 1);
    chain_reset_high(gChain);
    usleep(300000);
    fan_control(0x50);
    set_baud(gChain, 0x1a);
    *(undefined1 *)((int)&start_receive + (uint)gChain) = 1;
    pthread_create((pthread_t *)(cgpu + 0x80004), (pthread_attr_t *)0x0,
                   (__start_routine *)0xebc5,
                   (void *)((int)&chain_info + (uint)gChain * 2));
    usleep(5000);
    puts("\n--- BBD25601 check asic number");
    check_BM1725_asic_reg(gChain, 0, 0, 1);
    printf("\n--- check chain: J%d has asicNum = %d\n", (uint)gChain,
           (uint)(byte)cgpu[gChain + 0x1004b8]);
    if ((uint)(byte)cgpu[gChain + 0x1004b8] == Conf._108_4_) {
        chain_reset(gChain);
        uart_flush(gChain);
        uart_set_baud(gChain, 0x1a);
        puts("\n--- double check asic number");
        check_BM1725_asic_reg(gChain, 0, 0, 1);
        printf("\n--- check chain: J%d has asicNum = %d\n", (uint)gChain,
               (uint)(byte)cgpu[gChain + 0x1004b8]);
        if ((uint)(byte)cgpu[gChain + 0x1004b8] == Conf._108_4_) {
            calculate_timeout_and_baud();
            set_baud(gChain, Conf._260_4_ & 0xff);
            set_BM1725_freq((float)(uint)Conf._68_4_, gChain, 0, 1);
            BM1725_set_address_all(gChain);
            check_BM1725_asic_reg(gChain, 0, 0, 1);
            if (Conf[0xfc] == '\x01') {
                if (pattern_test_time == 0) {
                    get_temperature_offset_value_from_asic_chain(gChain);
                    set_default_temperature_offset_value_chain(gChain);
                } else {
                    set_default_temperature_offset_value_chain(gChain);
                }
            }
            pthread_create((pthread_t *)(cgpu + 0x80010), (pthread_attr_t *)0x0,
                           (__start_routine *)0xf349,
                           (void *)((int)&chain_info + (uint)gChain * 2));
            set_BM1725_asic_register(gChain, 0, 0x14, 1, 0x26);
            BM1725_open_core(gChain);
            puts("\nBegin send test pattern");
            while (*(char *)((int)&gStartTest + (uint)gChain) != '\x01') {
                if ((uint)Conf._216_4_ <=
                    *(uint *)(time_counter + (uint)gChain * 4)) {
                    pthread_cancel(cgpu._524304_4_);
                    pthread_cancel(cgpu._524292_4_);
                    pthread_cancel(cgpu._524296_4_);
                    pthread_cancel(cgpu._524300_4_);
                    puts("Can\'t open core, change to next voltage and freq");
                    write_lcd(0, "Can\'t open core ", 0x10);
                    write_lcd_no_memset(1, "change  to  next", 0x10);
                    write_lcd_no_memset(2, "voltage and freq", 0x10);
                    pattern_test_time = pattern_test_time + 1;
                    enable_PIC16F1704_dc_dc(gChain, 0, 0);
                    power_off();
                    return;
                }
                usleep(10000);
            }
            pthread_create((pthread_t *)(cgpu + 0x80000), (pthread_attr_t *)0x0,
                           (__start_routine *)0xef59,
                           (void *)((int)&chain_info + (uint)gChain * 2));
            local_1c = pthread_join(cgpu._524288_4_, (void **)0x0);
            local_1c = pthread_join(cgpu._524292_4_, (void **)0x0);
            pthread_cancel(cgpu._524296_4_);
            pthread_cancel(cgpu._524304_4_);
            local_18 = single_board_get_result(gChain);
            if ((local_18 == 7) && (g_test_epprom = save_voltage_info_to_eeprom(
                                        Conf._68_4_, Conf._156_4_),
                                    g_test_epprom != '\x01')) {
                g_test_epprom =
                    save_voltage_info_to_eeprom(Conf._68_4_, Conf._156_4_);
            }
            single_board_print_lcd(local_18);
            if (((local_18 & 1) != 0) ||
                (gHowManyVoltageLevel <= pattern_test_time)) {
                enable_PIC16F1704_dc_dc(gChain, 0, 0);
                power_off();
                fan_control(0);
                printf("power off %d\n", (uint)pattern_test_time);
            }
            pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
            pthread_cancel(cgpu._524300_4_);
            pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
        } else {
            pthread_cancel(cgpu._524292_4_);
            pthread_cancel(cgpu._524296_4_);
            pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
            pthread_cancel(cgpu._524300_4_);
            pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
            sprintf(local_2c + 7, "%d", (uint)(byte)cgpu[gChain + 0x1004b8]);
            write_lcd(0, "   Only have    ", 0x10);
            write_lcd_no_memset(1, local_2c, 0x10);
            write_lcd_no_memset(2, "      ASIC      ", 0x10);
            printf("\n\n---%s: Only have %d ASIC\n", "singleBoardTest_BBD25601",
                   (uint)(byte)cgpu[gChain + 0x1004b8]);
            sleep(Conf._264_4_);
            enable_PIC16F1704_dc_dc(gChain, 0, 0);
            power_off();
        }
    } else {
        pthread_cancel(cgpu._524292_4_);
        pthread_cancel(cgpu._524296_4_);
        pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
        pthread_cancel(cgpu._524300_4_);
        pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
        sprintf(local_2c + 7, "%d", (uint)(byte)cgpu[gChain + 0x1004b8]);
        write_lcd(0, "   Only have    ", 0x10);
        write_lcd_no_memset(1, local_2c, 0x10);
        write_lcd_no_memset(2, "      ASIC      ", 0x10);
        printf("\n\n---%s: Only have %d ASIC\n", "singleBoardTest_BBD25601",
               (uint)(byte)cgpu[gChain + 0x1004b8]);
        sleep(Conf._264_4_);
        enable_PIC16F1704_dc_dc(gChain, 0, 0);
        power_off();
    }
    return;
}

undefined4 calculate_asic_number(uint param_1)

{
    undefined4 local_c;

    if (param_1 == 1) {
        local_c = 1;
    } else if (param_1 == 2) {
        local_c = 2;
    } else if ((param_1 < 3) || (4 < param_1)) {
        if ((param_1 < 5) || (8 < param_1)) {
            if ((param_1 < 9) || (0x10 < param_1)) {
                if ((param_1 < 0x11) || (0x20 < param_1)) {
                    if ((param_1 < 0x21) || (0x40 < param_1)) {
                        if ((param_1 < 0x41) || (0x80 < param_1)) {
                            printf("actual_asic_number = %d, but it is error\n",
                                   param_1);
                            local_c = 0xffffffff;
                        } else {
                            local_c = 0x80;
                        }
                    } else {
                        local_c = 0x40;
                    }
                } else {
                    local_c = 0x20;
                }
            } else {
                local_c = 0x10;
            }
        } else {
            local_c = 8;
        }
    } else {
        local_c = 4;
    }
    return local_c;
}

char *read_config(void)

{
    char *pcVar1;
    undefined4 uVar2;
    char local_41c;
    char local_41b;
    FILE *local_1c;
    undefined4 local_18;
    char *local_14;
    int local_10;
    char *local_c;

    local_14 = Conf;
    memset(&local_41c, 0, 0x400);
    local_18 = 0;
    local_1c = fopen("/media/card/Config.ini", "r");
    do {
        while (true) {
            do {
                pcVar1 = fgets(&local_41c, 0x3ff, local_1c);
                if (pcVar1 == (char *)0x0) {
                    if (*(int *)(local_14 + 0x6c) == 1) {
                        gChain_Asic_Interval = 0x100;
                        if (*(int *)(local_14 + 0x74) == 0x6ba) {
                            strcpy(cgpu + 0x80020, BM1722_WorkDataPathPrefix);
                            strcpy(cgpu + 0x80060, DCR_WorkDataFilePrefix);
                            local_14[0x70] = 'x';
                            local_14[0x71] = '\0';
                            local_14[0x72] = '\0';
                            local_14[0x73] = '\0';
                            pcVar1 = local_14;
                        } else {
                            pcVar1 = (char *)0x6bd;
                            if (*(int *)(local_14 + 0x74) == 0x6bd) {
                                strcpy(cgpu + 0x80020,
                                       BM1725_WorkDataPathPrefix);
                                strcpy(cgpu + 0x80060, DCR_WorkDataFilePrefix);
                                local_14[0x70] = '\x14';
                                local_14[0x71] = '\x01';
                                local_14[0x72] = '\0';
                                local_14[0x73] = '\0';
                                pcVar1 = local_14;
                            }
                        }
                    } else if ((gHashBoard_BBD12601 != '\0') ||
                               (pcVar1 = (char *)(uint)gHashBoard_BBD25601,
                                pcVar1 != (char *)0x0)) {
                        if (*(int *)(local_14 + 0x74) == 0x6ba) {
                            strcpy(cgpu + 0x80020, BM1722_WorkDataPathPrefix);
                            strcpy(cgpu + 0x80060, DCR_WorkDataFilePrefix);
                            local_14[0x70] = 'x';
                            local_14[0x71] = '\0';
                            local_14[0x72] = '\0';
                            local_14[0x73] = '\0';
                            local_14[0x74] = -0x46;
                            local_14[0x75] = '\x06';
                            local_14[0x76] = '\0';
                            local_14[0x77] = '\0';
                            uVar2 = calculate_asic_number(Conf._108_4_);
                            gChain_Asic_Interval = __aeabi_idiv(0x100, uVar2);
                            pcVar1 = (char *)&gChain_Asic_Interval;
                        } else {
                            pcVar1 = (char *)0x6bd;
                            if (*(int *)(local_14 + 0x74) == 0x6bd) {
                                strcpy(cgpu + 0x80020,
                                       BM1725_WorkDataPathPrefix);
                                strcpy(cgpu + 0x80060, DCR_WorkDataFilePrefix);
                                local_14[0x70] = '\x14';
                                local_14[0x71] = '\x01';
                                local_14[0x72] = '\0';
                                local_14[0x73] = '\0';
                                local_14[0x74] = -0x43;
                                local_14[0x75] = '\x06';
                                local_14[0x76] = '\0';
                                local_14[0x77] = '\0';
                                uVar2 = calculate_asic_number(Conf._108_4_);
                                gChain_Asic_Interval =
                                    __aeabi_idiv(0x100, uVar2);
                                pcVar1 = (char *)&gChain_Asic_Interval;
                            }
                        }
                    }
                    return pcVar1;
                }
            } while ((local_41c == '#') || (local_41b == '#'));
            local_c = strstr(&local_41c, "Name=");
            if (local_c != (char *)0x0)
                break;
            local_c = strstr(&local_41c, "pattern_number=");
            if (local_c == (char *)0x0) {
                local_c = strstr(&local_41c, "AsicNum=");
                if (local_c == (char *)0x0) {
                    local_c = strstr(&local_41c, "AsicType=");
                    if (local_c == (char *)0x0) {
                        local_c = strstr(&local_41c, "Timeout=");
                        if (local_c == (char *)0x0) {
                            local_c = strstr(&local_41c, "Freq1=");
                            if (local_c == (char *)0x0) {
                                local_c = strstr(&local_41c, "Freq2=");
                                if (local_c == (char *)0x0) {
                                    local_c = strstr(&local_41c, "Freq3=");
                                    if (local_c == (char *)0x0) {
                                        local_c = strstr(&local_41c, "Freq4=");
                                        if (local_c == (char *)0x0) {
                                            local_c =
                                                strstr(&local_41c, "Freq5=");
                                            if (local_c == (char *)0x0) {
                                                local_c = strstr(&local_41c,
                                                                 "Freq6=");
                                                if (local_c == (char *)0x0) {
                                                    local_c = strstr(&local_41c,
                                                                     "Freq7=");
                                                    if (local_c ==
                                                        (char *)0x0) {
                                                        local_c =
                                                            strstr(&local_41c,
                                                                   "Freq8=");
                                                        if (local_c ==
                                                            (char *)0x0) {
                                                            local_c = strstr(
                                                                &local_41c,
                                                                "Freq9=");
                                                            if (local_c ==
                                                                (char *)0x0) {
                                                                local_c = strstr(
                                                                    &local_41c,
                                                                    "Voltage1"
                                                                    "=");
                                                                if (local_c ==
                                                                    (char
                                                                         *)0x0) {
                                                                    local_c = strstr(
                                                                        &local_41c,
                                                                        "Voltag"
                                                                        "e2=");
                                                                    if (local_c ==
                                                                        (char
                                                                             *)0x0) {
                                                                        local_c = strstr(
                                                                            &local_41c,
                                                                            "Vo"
                                                                            "lt"
                                                                            "ag"
                                                                            "e3"
                                                                            "=");
                                                                        if (local_c ==
                                                                            (char
                                                                                 *)0x0) {
                                                                            local_c = strstr(
                                                                                &local_41c,
                                                                                "Voltage4=");
                                                                            if (local_c ==
                                                                                (char
                                                                                     *)0x0) {
                                                                                local_c = strstr(
                                                                                    &local_41c,
                                                                                    "Voltage5=");
                                                                                if (local_c ==
                                                                                    (char
                                                                                         *)0x0) {
                                                                                    local_c = strstr(
                                                                                        &local_41c,
                                                                                        "Voltage6=");
                                                                                    if (local_c ==
                                                                                        (char
                                                                                             *)0x0) {
                                                                                        local_c = strstr(
                                                                                            &local_41c,
                                                                                            "Voltage7=");
                                                                                        if (local_c ==
                                                                                            (char
                                                                                                 *)0x0) {
                                                                                            local_c = strstr(
                                                                                                &local_41c,
                                                                                                "Voltage8=");
                                                                                            if (local_c ==
                                                                                                (char
                                                                                                     *)0x0) {
                                                                                                local_c = strstr(
                                                                                                    &local_41c,
                                                                                                    "Voltage9=");
                                                                                                if (local_c ==
                                                                                                    (char
                                                                                                         *)0x0) {
                                                                                                    local_c = strstr(
                                                                                                        &local_41c,
                                                                                                        "OpenCoreGap=");
                                                                                                    if (local_c ==
                                                                                                        (char
                                                                                                             *)0x0) {
                                                                                                        local_c = strstr(
                                                                                                            &local_41c,
                                                                                                            "CheckTemp=");
                                                                                                        if (local_c ==
                                                                                                            (char
                                                                                                                 *)0x0) {
                                                                                                            local_c = strstr(
                                                                                                                &local_41c,
                                                                                                                "sensor_model=");
                                                                                                            if (local_c ==
                                                                                                                (char
                                                                                                                     *)0x0) {
                                                                                                                local_c = strstr(
                                                                                                                    &local_41c,
                                                                                                                    "remote_local_gap=");
                                                                                                                if (local_c ==
                                                                                                                    (char
                                                                                                                         *)0x0) {
                                                                                                                    local_c = strstr(
                                                                                                                        &local_41c,
                                                                                                                        "TempSensor1=");
                                                                                                                    if (local_c ==
                                                                                                                        (char
                                                                                                                             *)0x0) {
                                                                                                                        local_c = strstr(
                                                                                                                            &local_41c,
                                                                                                                            "TempSensor2=");
                                                                                                                        if (local_c ==
                                                                                                                            (char
                                                                                                                                 *)0x0) {
                                                                                                                            local_c = strstr(
                                                                                                                                &local_41c,
                                                                                                                                "TempSensor3=");
                                                                                                                            if (local_c ==
                                                                                                                                (char
                                                                                                                                     *)0x0) {
                                                                                                                                local_c = strstr(
                                                                                                                                    &local_41c,
                                                                                                                                    "StartSensor=");
                                                                                                                                if (local_c ==
                                                                                                                                    (char
                                                                                                                                         *)0x0) {
                                                                                                                                    local_c = strstr(
                                                                                                                                        &local_41c,
                                                                                                                                        "StartTemp=");
                                                                                                                                    if (local_c ==
                                                                                                                                        (char
                                                                                                                                             *)0x0) {
                                                                                                                                        local_c = strstr(
                                                                                                                                            &local_41c,
                                                                                                                                            "TargetTemp=");
                                                                                                                                        if (local_c ==
                                                                                                                                            (char
                                                                                                                                                 *)0x0) {
                                                                                                                                            local_c = strstr(
                                                                                                                                                &local_41c,
                                                                                                                                                "add_voltage_after_test_ok=");
                                                                                                                                            if (local_c ==
                                                                                                                                                (char
                                                                                                                                                     *)0x0) {
                                                                                                                                                local_c = strstr(
                                                                                                                                                    &local_41c,
                                                                                                                                                    "add_voltage_value=");
                                                                                                                                                if (local_c ==
                                                                                                                                                    (char
                                                                                                                                                         *)0x0) {
                                                                                                                                                    local_c = strstr(
                                                                                                                                                        &local_41c,
                                                                                                                                                        "AlarmTemp=");
                                                                                                                                                    if (local_c ==
                                                                                                                                                        (char
                                                                                                                                                             *)0x0) {
                                                                                                                                                        local_c = strstr(
                                                                                                                                                            &local_41c,
                                                                                                                                                            "HeatingUpTime=");
                                                                                                                                                        if (local_c ==
                                                                                                                                                            (char
                                                                                                                                                                 *)0x0) {
                                                                                                                                                            local_c = strstr(
                                                                                                                                                                &local_41c,
                                                                                                                                                                "MaxTempGap=");
                                                                                                                                                            if (local_c ==
                                                                                                                                                                (char
                                                                                                                                                                     *)0x0) {
                                                                                                                                                                local_c = strstr(
                                                                                                                                                                    &local_41c,
                                                                                                                                                                    "Invalid_Asic_Num=");
                                                                                                                                                                if (local_c ==
                                                                                                                                                                    (char
                                                                                                                                                                         *)0x0) {
                                                                                                                                                                    local_c = strstr(
                                                                                                                                                                        &local_41c,
                                                                                                                                                                        "Invalid_Core_Num=");
                                                                                                                                                                    if (local_c ==
                                                                                                                                                                        (char
                                                                                                                                                                             *)0x0) {
                                                                                                                                                                        local_c = strstr(
                                                                                                                                                                            &local_41c,

                                                                                                                                                                            "Least_nonce_per_core=");
                                                                                                                                                                        if (local_c ==
                                                                                                                                                                            (char
                                                                                                                                                                                 *)0x0) {
                                                                                                                                                                            local_c = strstr(
                                                                                                                                                                                &local_41c,
                                                                                                                                                                                "Most_lost_nonce_total=");
                                                                                                                                                                            if (local_c ==
                                                                                                                                                                                (char
                                                                                                                                                                                     *)0x0) {
                                                                                                                                                                                local_c = strstr(
                                                                                                                                                                                    &local_41c,
                                                                                                                                                                                    "Most_HW_Num=");
                                                                                                                                                                                if (local_c ==
                                                                                                                                                                                    (char
                                                                                                                                                                                         *)0x0) {
                                                                                                                                                                                    local_c = strstr(
                                                                                                                                                                                        &local_41c,
                                                                                                                                                                                        "close_power_delay=");
                                                                                                                                                                                    if (local_c !=
                                                                                                                                                                                        (char
                                                                                                                                                                                             *)0x0) {
                                                                                                                                                                                        local_c =
                                                                                                                                                                                            local_c +
                                                                                                                                                                                            0x12;
                                                                                                                                                                                        __isoc99_sscanf(
                                                                                                                                                                                            local_c,
                                                                                                                                                                                            &DAT_00028ab0,
                                                                                                                                                                                            local_14 +
                                                                                                                                                                                                0x108);
                                                                                                                                                                                    }
                                                                                                                                                                                } else {
                                                                                                                                                                                    local_c =
                                                                                                                                                                                        local_c +
                                                                                                                                                                                        0xc;
                                                                                                                                                                                    __isoc99_sscanf(
                                                                                                                                                                                        local_c,
                                                                                                                                                                                        &DAT_00028ab0,
                                                                                                                                                                                        local_14 +
                                                                                                                                                                                            0xf8);
                                                                                                                                                                                }
                                                                                                                                                                            } else {
                                                                                                                                                                                local_c =
                                                                                                                                                                                    local_c +
                                                                                                                                                                                    0x16;
                                                                                                                                                                                __isoc99_sscanf(
                                                                                                                                                                                    local_c,
                                                                                                                                                                                    &DAT_00028ab0,
                                                                                                                                                                                    local_14 +
                                                                                                                                                                                        0xf4);
                                                                                                                                                                            }
                                                                                                                                                                        } else {
                                                                                                                                                                            local_c =
                                                                                                                                                                                local_c +
                                                                                                                                                                                0x15;
                                                                                                                                                                            __isoc99_sscanf(
                                                                                                                                                                                local_c,
                                                                                                                                                                                &DAT_00028ab0,
                                                                                                                                                                                local_14 +
                                                                                                                                                                                    0xf0);
                                                                                                                                                                        }
                                                                                                                                                                    } else {
                                                                                                                                                                        local_c =
                                                                                                                                                                            local_c +
                                                                                                                                                                            0x11;
                                                                                                                                                                        __isoc99_sscanf(
                                                                                                                                                                            local_c,
                                                                                                                                                                            &DAT_00028ab0,
                                                                                                                                                                            local_14 +
                                                                                                                                                                                0xec);
                                                                                                                                                                    }
                                                                                                                                                                } else {
                                                                                                                                                                    local_c =
                                                                                                                                                                        local_c +
                                                                                                                                                                        0x11;
                                                                                                                                                                    __isoc99_sscanf(
                                                                                                                                                                        local_c,
                                                                                                                                                                        &DAT_00028ab0,
                                                                                                                                                                        local_14 +
                                                                                                                                                                            0xe8);
                                                                                                                                                                }
                                                                                                                                                            } else {
                                                                                                                                                                local_c =
                                                                                                                                                                    local_c +
                                                                                                                                                                    0xb;
                                                                                                                                                                __isoc99_sscanf(
                                                                                                                                                                    local_c,
                                                                                                                                                                    &DAT_00028ab0,
                                                                                                                                                                    local_14 +
                                                                                                                                                                        0xdc);
                                                                                                                                                            }
                                                                                                                                                        } else {
                                                                                                                                                            local_c =
                                                                                                                                                                local_c +
                                                                                                                                                                0xe;
                                                                                                                                                            __isoc99_sscanf(
                                                                                                                                                                local_c,
                                                                                                                                                                &DAT_00028ab0,
                                                                                                                                                                local_14 +
                                                                                                                                                                    0xd8);
                                                                                                                                                        }
                                                                                                                                                    } else {
                                                                                                                                                        local_c =
                                                                                                                                                            local_c +
                                                                                                                                                            10;
                                                                                                                                                        __isoc99_sscanf(
                                                                                                                                                            local_c,
                                                                                                                                                            &DAT_00028ab0,
                                                                                                                                                            local_14 +
                                                                                                                                                                0xd6);
                                                                                                                                                    }
                                                                                                                                                } else {
                                                                                                                                                    local_c =
                                                                                                                                                        local_c +
                                                                                                                                                        0x12;
                                                                                                                                                    __isoc99_sscanf(
                                                                                                                                                        local_c,
                                                                                                                                                        &DAT_00028ab0,
                                                                                                                                                        local_14 +
                                                                                                                                                            0xe4);
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                local_c =
                                                                                                                                                    local_c +
                                                                                                                                                    0x1a;
                                                                                                                                                __isoc99_sscanf(
                                                                                                                                                    local_c,
                                                                                                                                                    &DAT_00028ab0,
                                                                                                                                                    local_14 +
                                                                                                                                                        0xe0);
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            local_c =
                                                                                                                                                local_c +
                                                                                                                                                0xb;
                                                                                                                                            __isoc99_sscanf(
                                                                                                                                                local_c,
                                                                                                                                                &DAT_00028ab0,
                                                                                                                                                local_14 +
                                                                                                                                                    0xd5);
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        local_c =
                                                                                                                                            local_c +
                                                                                                                                            10;
                                                                                                                                        __isoc99_sscanf(
                                                                                                                                            local_c,
                                                                                                                                            &DAT_00028ab0,
                                                                                                                                            local_14 +
                                                                                                                                                0xd4);
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    local_c =
                                                                                                                                        local_c +
                                                                                                                                        0xc;
                                                                                                                                    __isoc99_sscanf(
                                                                                                                                        local_c,
                                                                                                                                        &DAT_00028ab0,
                                                                                                                                        local_14 +
                                                                                                                                            0xd3);
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                local_c =
                                                                                                                                    local_c +
                                                                                                                                    0xc;
                                                                                                                                __isoc99_sscanf(
                                                                                                                                    local_c,
                                                                                                                                    &DAT_00028bb8,
                                                                                                                                    local_14 +
                                                                                                                                        0xd2);
                                                                                                                                if (local_14
                                                                                                                                        [0xd2] !=
                                                                                                                                    '\0') {
                                                                                                                                    gSensor_number =
                                                                                                                                        gSensor_number +
                                                                                                                                        1;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            local_c =
                                                                                                                                local_c +
                                                                                                                                0xc;
                                                                                                                            __isoc99_sscanf(
                                                                                                                                local_c,
                                                                                                                                &DAT_00028bb8,
                                                                                                                                local_14 +
                                                                                                                                    0xd1);
                                                                                                                            if (local_14
                                                                                                                                    [0xd1] !=
                                                                                                                                '\0') {
                                                                                                                                gSensor_number =
                                                                                                                                    gSensor_number +
                                                                                                                                    1;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        local_c =
                                                                                                                            local_c +
                                                                                                                            0xc;
                                                                                                                        __isoc99_sscanf(
                                                                                                                            local_c,
                                                                                                                            &DAT_00028bb8,
                                                                                                                            local_14 +
                                                                                                                                0xd0);
                                                                                                                        if (local_14
                                                                                                                                [0xd0] !=
                                                                                                                            '\0') {
                                                                                                                            gSensor_number =
                                                                                                                                gSensor_number +
                                                                                                                                1;
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    local_c =
                                                                                                                        local_c +
                                                                                                                        0x11;
                                                                                                                    __isoc99_sscanf(
                                                                                                                        local_c,
                                                                                                                        &DAT_00028bb8,
                                                                                                                        local_14 +
                                                                                                                            0x100);
                                                                                                                }
                                                                                                            } else {
                                                                                                                local_c =
                                                                                                                    local_c +
                                                                                                                    0xd;
                                                                                                                __isoc99_sscanf(
                                                                                                                    local_c,
                                                                                                                    &DAT_00028bb8,
                                                                                                                    local_14 +
                                                                                                                        0xfc);
                                                                                                            }
                                                                                                        } else {
                                                                                                            local_c =
                                                                                                                local_c +
                                                                                                                10;
                                                                                                            __isoc99_sscanf(
                                                                                                                local_c,
                                                                                                                &DAT_00028ab0,
                                                                                                                local_14 +
                                                                                                                    0xcc);
                                                                                                        }
                                                                                                    } else {
                                                                                                        local_c =
                                                                                                            local_c +
                                                                                                            0xc;
                                                                                                        __isoc99_sscanf(
                                                                                                            local_c,
                                                                                                            &DAT_00028ab0,
                                                                                                            local_14 +
                                                                                                                0xc4);
                                                                                                    }
                                                                                                } else {
                                                                                                    local_c =
                                                                                                        local_c +
                                                                                                        9;
                                                                                                    __isoc99_sscanf(
                                                                                                        local_c,
                                                                                                        &DAT_00028ab0,
                                                                                                        local_14 +
                                                                                                            0xc0);
                                                                                                    if (*(int *)(local_14 +
                                                                                                                 0xc0) !=
                                                                                                        0) {
                                                                                                        gHowManyVoltageLevel =
                                                                                                            gHowManyVoltageLevel +
                                                                                                            '\x01';
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                local_c =
                                                                                                    local_c +
                                                                                                    9;
                                                                                                __isoc99_sscanf(
                                                                                                    local_c,
                                                                                                    &DAT_00028ab0,
                                                                                                    local_14 +
                                                                                                        0xbc);
                                                                                                if (*(int *)(local_14 +
                                                                                                             0xbc) !=
                                                                                                    0) {
                                                                                                    gHowManyVoltageLevel =
                                                                                                        gHowManyVoltageLevel +
                                                                                                        '\x01';
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            local_c =
                                                                                                local_c +
                                                                                                9;
                                                                                            __isoc99_sscanf(
                                                                                                local_c,
                                                                                                &DAT_00028ab0,
                                                                                                local_14 +
                                                                                                    0xb8);
                                                                                            if (*(int *)(local_14 +
                                                                                                         0xb8) !=
                                                                                                0) {
                                                                                                gHowManyVoltageLevel =
                                                                                                    gHowManyVoltageLevel +
                                                                                                    '\x01';
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        local_c =
                                                                                            local_c +
                                                                                            9;
                                                                                        __isoc99_sscanf(
                                                                                            local_c,
                                                                                            &DAT_00028ab0,
                                                                                            local_14 +
                                                                                                0xb4);
                                                                                        if (*(int *)(local_14 +
                                                                                                     0xb4) !=
                                                                                            0) {
                                                                                            gHowManyVoltageLevel =
                                                                                                gHowManyVoltageLevel +
                                                                                                '\x01';
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    local_c =
                                                                                        local_c +
                                                                                        9;
                                                                                    __isoc99_sscanf(
                                                                                        local_c,
                                                                                        &DAT_00028ab0,
                                                                                        local_14 +
                                                                                            0xb0);
                                                                                    if (*(int *)(local_14 +
                                                                                                 0xb0) !=
                                                                                        0) {
                                                                                        gHowManyVoltageLevel =
                                                                                            gHowManyVoltageLevel +
                                                                                            '\x01';
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                local_c =
                                                                                    local_c +
                                                                                    9;
                                                                                __isoc99_sscanf(
                                                                                    local_c,
                                                                                    &DAT_00028ab0,
                                                                                    local_14 +
                                                                                        0xac);
                                                                                if (*(int *)(local_14 +
                                                                                             0xac) !=
                                                                                    0) {
                                                                                    gHowManyVoltageLevel =
                                                                                        gHowManyVoltageLevel +
                                                                                        '\x01';
                                                                                }
                                                                            }
                                                                        } else {
                                                                            local_c =
                                                                                local_c +
                                                                                9;
                                                                            __isoc99_sscanf(
                                                                                local_c,
                                                                                &DAT_00028ab0,
                                                                                local_14 +
                                                                                    0xa8);
                                                                            if (*(int *)(local_14 +
                                                                                         0xa8) !=
                                                                                0) {
                                                                                gHowManyVoltageLevel =
                                                                                    gHowManyVoltageLevel +
                                                                                    '\x01';
                                                                            }
                                                                        }
                                                                    } else {
                                                                        local_c =
                                                                            local_c +
                                                                            9;
                                                                        __isoc99_sscanf(
                                                                            local_c,
                                                                            &DAT_00028ab0,
                                                                            local_14 +
                                                                                0xa4);
                                                                        if (*(int *)(local_14 +
                                                                                     0xa4) !=
                                                                            0) {
                                                                            gHowManyVoltageLevel =
                                                                                gHowManyVoltageLevel +
                                                                                '\x01';
                                                                        }
                                                                    }
                                                                } else {
                                                                    local_c =
                                                                        local_c +
                                                                        9;
                                                                    __isoc99_sscanf(
                                                                        local_c,
                                                                        &DAT_00028ab0,
                                                                        local_14 +
                                                                            0xa0);
                                                                    if (*(int *)(local_14 +
                                                                                 0xa0) !=
                                                                        0) {
                                                                        gHowManyVoltageLevel =
                                                                            gHowManyVoltageLevel +
                                                                            '\x01';
                                                                    }
                                                                }
                                                            } else {
                                                                local_c =
                                                                    local_c + 6;
                                                                __isoc99_sscanf(
                                                                    local_c,
                                                                    &DAT_00028ab0,
                                                                    local_14 +
                                                                        0x68);
                                                            }
                                                        } else {
                                                            local_c =
                                                                local_c + 6;
                                                            __isoc99_sscanf(
                                                                local_c,
                                                                &DAT_00028ab0,
                                                                local_14 + 100);
                                                        }
                                                    } else {
                                                        local_c = local_c + 6;
                                                        __isoc99_sscanf(
                                                            local_c,
                                                            &DAT_00028ab0,
                                                            local_14 + 0x60);
                                                    }
                                                } else {
                                                    local_c = local_c + 6;
                                                    __isoc99_sscanf(
                                                        local_c, &DAT_00028ab0,
                                                        local_14 + 0x5c);
                                                }
                                            } else {
                                                local_c = local_c + 6;
                                                __isoc99_sscanf(
                                                    local_c, &DAT_00028ab0,
                                                    local_14 + 0x58);
                                            }
                                        } else {
                                            local_c = local_c + 6;
                                            __isoc99_sscanf(local_c,
                                                            &DAT_00028ab0,
                                                            local_14 + 0x54);
                                        }
                                    } else {
                                        local_c = local_c + 6;
                                        __isoc99_sscanf(local_c, &DAT_00028ab0,
                                                        local_14 + 0x50);
                                    }
                                } else {
                                    local_c = local_c + 6;
                                    __isoc99_sscanf(local_c, &DAT_00028ab0,
                                                    local_14 + 0x4c);
                                }
                            } else {
                                local_c = local_c + 6;
                                __isoc99_sscanf(local_c, &DAT_00028ab0,
                                                local_14 + 0x48);
                            }
                        } else {
                            local_c = local_c + 8;
                            __isoc99_sscanf(local_c, &DAT_00028ab0,
                                            local_14 + 200);
                        }
                    } else {
                        local_c = local_c + 9;
                        __isoc99_sscanf(local_c, &DAT_00028ab0,
                                        local_14 + 0x74);
                    }
                } else {
                    local_c = local_c + 8;
                    __isoc99_sscanf(local_c, &DAT_00028ab0, local_14 + 0x6c);
                }
            } else {
                local_c = local_c + 0xf;
                __isoc99_sscanf(local_c, &DAT_00028ab0, local_14 + 0x40);
            }
        }
        local_c = local_c + 5;
        for (local_10 = 0; local_10 < 0x40; local_10 = local_10 + 1) {
            local_14[local_10] = *local_c;
            local_c = local_c + 1;
            if ((*local_c == '\n') || (*local_c == '\r'))
                break;
        }
        local_10 = local_10 + 1;
        gName_len = local_10;
        local_14[local_10] = '\0';
        gHashBoard_BBD12601 = '\0';
        gHashBoard_BBD25601 = 0;
        if ((((*local_14 == 'B') && (local_14[1] == 'B')) &&
             (local_14[2] == 'D')) &&
            (((local_14[3] == '1' && (local_14[4] == '2')) &&
              ((local_14[5] == '6' &&
                ((local_14[6] == '0' && (local_14[7] == '1')))))))) {
            gHashBoard_BBD12601 = '\x01';
            printf("\n---%s: gHashBoard_BBD12601\n\n", "read_config");
        } else if ((*local_14 == 'B') &&
                   (((((local_14[1] == 'B' && (local_14[2] == 'D')) &&
                       (local_14[3] == '2')) &&
                      ((local_14[4] == '5' && (local_14[5] == '6')))) &&
                     ((local_14[6] == '0' && (local_14[7] == '1')))))) {
            gHashBoard_BBD25601 = 1;
            printf("\n---%s: gHashBoard_BBD25601\n\n", "read_config");
        }
    } while (true);
}

byte CRC5(byte *param_1, byte param_2)

{
    byte bVar1;
    bool bVar2;
    byte *local_24;
    undefined4 local_1c;
    undefined4 local_14;
    byte local_10;
    byte local_c;
    char local_b;
    byte local_a;
    byte local_9;

    local_14 = 0x1010101;
    local_10 = 1;
    local_a = 0x80;
    local_b = '\0';
    local_9 = 0;
    local_24 = param_1;
    while (true) {
        bVar1 = local_14._3_1_;
        if (param_2 <= local_9)
            break;
        bVar2 = (local_a & *local_24) != 0;
        local_1c =
            CONCAT13(local_14._2_1_,
                     CONCAT12(bVar2 ^ local_10 ^ local_14._1_1_,
                              CONCAT11((char)local_14, bVar2 ^ local_10)));
        local_a = local_a >> 1;
        local_b = local_b + '\x01';
        if (local_b == '\b') {
            local_a = 0x80;
            local_b = '\0';
            local_24 = local_24 + 1;
        }
        local_14 = local_1c;
        local_10 = bVar1;
        local_9 = local_9 + 1;
    }
    local_c = 0;
    if (local_10 != 0) {
        local_c = 0x10;
    }
    if (local_14._3_1_ != 0) {
        local_c = local_c | 8;
    }
    if (local_14._2_1_ != '\0') {
        local_c = local_c | 4;
    }
    if (local_14._1_1_ != 0) {
        local_c = local_c | 2;
    }
    if ((char)local_14 != '\0') {
        local_c = local_c | 1;
    }
    return local_c;
}

ushort crc_itu_t_byte(ushort param_1, byte param_2)

{
    return *(ushort *)(crc_itu_t_table +
                       ((uint)param_2 ^ (uint)(param_1 >> 8)) * 2) ^
           param_1 << 8;
}

undefined2 CRC16(undefined1 *param_1, int param_2)

{
    undefined1 uVar1;
    char cVar2;
    int iVar3;
    int local_18;
    undefined1 *local_14;
    undefined2 local_a;

    local_a = 0xffff;
    local_18 = param_2;
    local_14 = param_1;
    while (true) {
        iVar3 = local_18;
        if (local_18 == 0) {
            iVar3 = 0;
        }
        cVar2 = (char)iVar3;
        if (local_18 != 0) {
            cVar2 = '\x01';
        }
        local_18 = local_18 + -1;
        if (cVar2 == '\0')
            break;
        uVar1 = *local_14;
        local_14 = local_14 + 1;
        local_a = crc_itu_t_byte(local_a, uVar1);
    }
    return local_a;
}

void InitElapsedTime(void)

{
    gettimeofday((timeval *)&start_time, (__timezone_ptr_t)0x0);
    return;
}

void PrintElapsedTime(undefined4 param_1)

{
    gettimeofday((timeval *)&end_time, (__timezone_ptr_t)0x0);
    diff_time._0_4_ = (int)end_time - (int)start_time;
    diff_time._4_4_ = end_time._4_4_ - start_time._4_4_;
    if (diff_time._4_4_ < 0) {
        diff_time._0_4_ = (int)diff_time + -1;
        diff_time._4_4_ = diff_time._4_4_ + 1000000;
    }
    printf("Timestamp %s : %d sec\n", param_1, (int)diff_time);
    return;
}

undefined4 cgpu_init(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;

    printf("\n%s\n", "cgpu_init", param_3, 0, 0);
    memset(cgpu, 0, 0x1004c4);
    iVar1 = check_chain();
    if (iVar1 != 0) {
        printf("!!! %s: check chain error\n", "cgpu_init");
    }
    iVar2 = open_key();
    if (iVar2 < 1) {
        printf("!!! %s: open start key error\n", "cgpu_init");
        close_key();
        uVar3 = 0xffffffff;
    } else {
        iVar2 = open_i2c();
        if (iVar2 < 1) {
            printf("!!! %s: open i2c error\n", "cgpu_init");
            close_i2c();
            close_key();
            uVar3 = 0xffffffff;
        } else {
            memset(lcd_output, 0x20, 0x40);
            write_lcd(0, lcd_output, 0x40);
            if (iVar1 != 0) {
                printf("no hashboard %d\n", 1);
                write_lcd(0, "No Hashboard", 0x10);
            }
            uVar3 = 0;
        }
    }
    return uVar3;
}

void malloc_register_buf(void)

{
    reg_value_buf = malloc(0x1410);
    if (reg_value_buf == (void *)0x0) {
        printf("%s: malloc reg_value_buf failed\n", "malloc_register_buf");
    } else {
        memset(reg_value_buf, 0, 0x1410);
    }
    return;
}

undefined4 configMiner(void)

{
    int iVar1;
    undefined4 uVar2;

    read_config();
    iVar1 = get_works();
    if (iVar1 < 0) {
        uVar2 = 0xfffffff2;
    } else {
        malloc_register_buf();
        uVar2 = 0;
    }
    return uVar2;
}

void display_arguments(void)

{
    undefined1 auStack_48[16];
    char acStack_38[16];
    char acStack_28[16];
    char acStack_18[16];

    memset(auStack_48, 0, 0x40);
    memset(auStack_48, 0x20, 0x40);
    memcpy(auStack_48, Conf, gName_len);
    sprintf(acStack_38, "IC:%2d P:%2d", Conf._108_4_, Conf._64_4_);
    sprintf(acStack_28, "FREQ: %d  CORE:%d", Conf._72_4_, Conf._112_4_);
    sprintf(acStack_18, "Voltage: %d", Conf._160_4_);
    write_lcd(0, auStack_48, 0x40);
    return;
}

void clear_register_value_buf(void)

{
    pthread_mutex_lock((pthread_mutex_t *)reg_mutex);
    *reg_value_buf = 0;
    reg_value_buf[1] = 0;
    reg_value_buf[2] = 0;
    reg_value_buf[3] = 0;
    pthread_mutex_unlock((pthread_mutex_t *)reg_mutex);
    memset(reg_value_buf + 4, 0, 0x1400);
    return;
}

undefined4 calculate_core_number(uint param_1)

{
    undefined4 local_c;

    if (param_1 == 1) {
        local_c = 1;
    } else if (param_1 == 2) {
        local_c = 2;
    } else if ((param_1 < 3) || (4 < param_1)) {
        if ((param_1 < 5) || (8 < param_1)) {
            if ((param_1 < 9) || (0x10 < param_1)) {
                if ((param_1 < 0x11) || (0x20 < param_1)) {
                    if ((param_1 < 0x21) || (0x40 < param_1)) {
                        if ((param_1 < 0x41) || (0x80 < param_1)) {
                            if ((param_1 < 0x81) || (0x100 < param_1)) {
                                if ((param_1 < 0x101) || (0x200 < param_1)) {
                                    printf("%s: actual_core_number = %d, but "
                                           "it is error\n",
                                           "calculate_core_number", param_1);
                                    local_c = 0xffffffff;
                                } else {
                                    local_c = 0x200;
                                }
                            } else {
                                local_c = 0x100;
                            }
                        } else {
                            local_c = 0x80;
                        }
                    } else {
                        local_c = 0x40;
                    }
                } else {
                    local_c = 0x20;
                }
            } else {
                local_c = 0x10;
            }
        } else {
            local_c = 8;
        }
    } else {
        local_c = 4;
    }
    return local_c;
}

int calculate_how_many_nonce_per_asic_get(byte param_1, byte param_2,
                                          uint param_3)

{
    uint local_10;
    int local_c;

    local_c = 0;
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
        local_c = local_c +
                  *(int *)(gAsic_Core_Nonce_Num +
                           (((uint)param_1 * 0x100 + (uint)param_2) * 0x200 +
                            local_10) *
                               4);
    }
    return local_c;
}

void display_level_result_on_lcd(void)

{
    char local_14[8];
    uint local_c;

    builtin_strncpy(local_14, "     ", 5);
    sprintf(local_14, "%2d", pattern_test_time + 1);
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        lcd_buffer[local_c + 10] = local_14[local_c];
    }
    write_lcd(0, lcd_buffer, 0x10);
    printf("Level: %d\n\n", pattern_test_time + 1);
    return;
}

void reset_global_arg(void)

{
    int iVar1;
    uint local_18;
    uint local_14;
    uint local_10;
    uint local_c;

    printf("\n--- %s\n", "reset_global_arg");
    memset(lcd_output, 0x20, 0x40);
    write_lcd(0, lcd_output, 0x40);
    memset(gReceive_Nonce_Num, 0, 0x10);
    memset(gValid_Nonce_Num, 0, 0x10);
    memset(gHw_Nonce_Num, 0, 0x10);
    memset(reg_value_buf, 0, 0x1410);
    memset(gWorks_For_Hw_Check, 0, 0x7f8);
    pthread_mutex_init((pthread_mutex_t *)reg_mutex,
                       (pthread_mutexattr_t *)0x0);
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        *(undefined4 *)(time_counter + local_c * 4) = 0;
        *(undefined1 *)((int)&gWork_Num_For_Hw_Check + local_c) = 0;
        *(undefined1 *)((int)&gIsOpenCoreEnd + local_c) = 0;
        *(undefined1 *)((int)&gStartTest + local_c) = 0;
        if (pattern_test_time == '\0') {
            *(undefined1 *)((int)&gT1_offset_value + local_c) = 0;
            *(undefined1 *)((int)&gT2_offset_value + local_c) = 0;
            *(undefined1 *)((int)&gT3_offset_value + local_c) = 0;
        }
        *(undefined1 *)((int)&Sensor1_OK + local_c) = 1;
        *(undefined1 *)((int)&Sensor2_OK + local_c) = 1;
        *(undefined1 *)((int)&Sensor3_OK + local_c) = 1;
        *(undefined4 *)(Sensor1_temp + local_c * 4) = 0;
        *(undefined4 *)(Sensor2_temp + local_c * 4) = 0;
        *(undefined4 *)(Sensor3_temp + local_c * 4) = 0;
        *(undefined4 *)(last_Sensor1_temp + local_c * 4) = 0;
        *(undefined4 *)(last_Sensor2_temp + local_c * 4) = 0;
        *(undefined4 *)(last_Sensor3_temp + local_c * 4) = 0;
        *(undefined4 *)(highest_temp + local_c * 4) = 0;
        *(undefined4 *)(lowest_temp + local_c * 4) = 0;
        *(undefined4 *)(gGlobalHighestTemp + local_c * 4) = 0;
        *(undefined4 *)(temp_change + local_c * 4) = 0;
        *(undefined1 *)((int)&gHigherThanAlarmTemp + local_c) = 0;
        *(undefined1 *)((int)&gHigherThanMaxTempGap + local_c) = 0;
        *(undefined4 *)(gMaxTempGap_value + local_c * 4) = 0;
        *(undefined1 *)((int)&gIsReadTemp + local_c) = 1;
        *(undefined1 *)((int)&gReadingTemp + local_c) = 0;
        *(undefined1 *)((int)&gNotReadOutTemp + local_c) = 0;
        pthread_mutex_init((pthread_mutex_t *)(HW_check_mutex + local_c * 0x18),
                           (pthread_mutexattr_t *)0x0);
        cgpu[local_c + 0x1004b8] = 0;
        *(undefined4 *)(gRepeated_Nonce_Id + local_c * 4) = 0;
        *(undefined4 *)(gValid_Nonce_Num + local_c * 4) = 0;
        *(undefined4 *)(gSend_Work_Num + local_c * 4) = 0;
        for (local_10 = 0; local_10 < (uint)Conf._108_4_;
             local_10 = local_10 + 1) {
            iVar1 = *(int *)(cgpu + (local_10 + 0x20028) * 4);
            for (local_14 = 0; local_14 < (uint)Conf._112_4_;
                 local_14 = local_14 + 1) {
                *(undefined4 *)(gAsic_Core_Nonce_Num +
                                ((local_c * 0x100 + local_10) * 0x200 +
                                 local_14) *
                                    4) = 0;
                for (local_18 = 0; local_18 < (uint)Conf._64_4_;
                     local_18 = local_18 + 1) {
                    *(undefined4 *)(iVar1 +
                                    (local_14 * Conf._64_4_ + local_18) * 0xcc +
                                    (local_c + 0x2e) * 4 + 4) = 0;
                }
            }
        }
    }
    clear_register_value_buf();
    return;
}

void rev(int param_1, char param_2)

{
    undefined1 uVar1;
    undefined1 local_a;
    undefined1 local_9;

    local_a = param_2 - 1;
    for (local_9 = 0; local_9 < local_a; local_9 = local_9 + 1) {
        uVar1 = *(undefined1 *)(param_1 + (uint)local_9);
        *(undefined1 *)(param_1 + (uint)local_9) =
            *(undefined1 *)(param_1 + (uint)local_a);
        *(undefined1 *)(param_1 + (uint)local_a) = uVar1;
        local_a = local_a - 1;
    }
    return;
}

char target_to_dcrdiff(int param_1)

{
    uint local_14;
    int local_10;
    char local_9;

    local_9 = '\0';
    local_10 = 7;
    do {
        if (local_10 < 0) {
            return local_9;
        }
        for (local_14 = 0x1f; -1 < (int)local_14; local_14 = local_14 - 1) {
            if ((*(uint *)(param_1 + local_10 * 4) >> (local_14 & 0xff) & 1) !=
                0) {
                return local_9;
            }
            local_9 = local_9 + '\x01';
        }
        local_10 = local_10 + -1;
    } while (true);
}

void decred_hash_simple(undefined4 param_1, undefined4 param_2)

{
    undefined1 auStack_84[124];

    sph_blake256_init(auStack_84);
    sph_blake256(auStack_84, param_2, 0xb4);
    sph_blake256_close(auStack_84, param_1);
    return;
}

undefined4 check_hw(int param_1, undefined4 param_2, undefined1 param_3,
                    char param_4)

{
    undefined4 uVar1;
    undefined1 auStack_e4[32];
    undefined1 auStack_c4[140];
    undefined1 local_38;
    undefined1 local_37;
    undefined1 local_36;
    undefined1 local_35;
    undefined1 local_34;
    byte local_d;
    uint local_c;

    local_c = 0;
    memset(auStack_c4, 0, 0xb4);
    memset(auStack_c4, 0, 0xb4);
    memcpy(auStack_c4, (void *)(param_1 + 8), 0xb4);
    local_38 = (undefined1)param_2;
    local_37 = (undefined1)((uint)param_2 >> 8);
    local_36 = (undefined1)((uint)param_2 >> 0x10);
    local_35 = (undefined1)((uint)param_2 >> 0x18);
    if (Conf._116_4_ == 0x6bd) {
        local_34 = param_3;
    }
    decred_hash_simple(auStack_e4, auStack_c4);
    local_d = target_to_dcrdiff(auStack_e4);
    if (local_d < 0x26) {
        if (param_4 != '\0') {
            printf("\n%s: Got a HW!\n", "check_hw");
            printf("\tdata=");
            for (local_c = 0; local_c < 0xb4; local_c = local_c + 1) {
                printf("%02x", (uint) * (byte *)(param_1 + local_c + 8));
            }
            printf("\treturn nonce=0x%08x, but it should be nonce=0x%08x\n",
                   param_2, *(undefined4 *)(param_1 + 4));
        }
        uVar1 = 1;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

void calculate_timeout_and_baud(void)

{
    undefined4 local_c;

    local_c = 0;
    printf("\n%s\n", "calculate_timeout_and_baud");
    calculate_core_number(Conf._112_4_);
    switch (pattern_test_time) {
    case 0:
        local_c = Conf._72_4_;
        break;
    case 1:
        local_c = Conf._76_4_;
        break;
    case 2:
        local_c = Conf._80_4_;
        break;
    case 3:
        local_c = Conf._84_4_;
        break;
    case 4:
        local_c = Conf._88_4_;
        break;
    case 5:
        local_c = Conf._92_4_;
        break;
    case 6:
        local_c = Conf._96_4_;
        break;
    case 7:
        local_c = Conf._100_4_;
        break;
    case 8:
        local_c = Conf._104_4_;
        break;
    default:
        printf("%s: pattern_test_time = %d, error!!! \n",
               "calculate_timeout_and_baud", (uint)pattern_test_time);
    }
    Conf._68_4_ = local_c;
    Conf._260_4_ = 0;
    return;
}

void show_status_func(byte *param_1)

{
    byte bVar1;

    bVar1 = *param_1;
    *(undefined4 *)(time_counter + (uint)bVar1 * 4) = 0;
    do {
        memset(lcd_output, 0x20, 0x40);
        sprintf(lcd_output, "   time %ds",
                *(undefined4 *)(time_counter + (uint)bVar1 * 4));
        sprintf(lcd_output + 0x10, "   nonce=%d",
                *(undefined4 *)(gValid_Nonce_Num + (uint)bVar1 * 4));
        sprintf(lcd_output + 0x20, "   HW=%d",
                *(undefined4 *)(gHw_Nonce_Num + (uint)bVar1 * 4));
        if ((*(char *)((int)&gIsReadTemp + (uint)bVar1) != '\0') &&
            (*(char *)((int)&gIsOpenCoreEnd + (uint)bVar1) != '\0')) {
            sprintf(lcd_output + 0x30, "   temp %d `C",
                    *(undefined4 *)(highest_temp + (uint)bVar1 * 4));
        }
        write_lcd(0, lcd_output, 0x40);
        usleep(1000000);
        *(int *)(time_counter + (uint)bVar1 * 4) =
            *(int *)(time_counter + (uint)bVar1 * 4) + 1;
    } while (true);
}

void set_voltage(undefined1 param_1, undefined1 param_2, char param_3)

{
    byte bVar1;
    uint local_14;
    undefined8 local_10;

    local_10 = 0.0;
    switch (pattern_test_time) {
    case 0:
        local_14 = Conf._160_4_;
        break;
    case 1:
        local_14 = Conf._164_4_;
        break;
    case 2:
        local_14 = Conf._168_4_;
        break;
    case 3:
        local_14 = Conf._172_4_;
        break;
    case 4:
        local_14 = Conf._176_4_;
        break;
    case 5:
        local_14 = Conf._180_4_;
        break;
    case 6:
        local_14 = Conf._184_4_;
        break;
    case 7:
        local_14 = Conf._188_4_;
        break;
    case 8:
        local_14 = Conf._192_4_;
        break;
    default:
        local_14 = Conf._160_4_;
        printf("\n--- %s: Can\'t find voltage%d\n", (uint)pattern_test_time);
    }
    Conf._156_4_ = local_14;
    if (param_3 != '\0') {
        local_14 = local_14 + Conf._228_4_;
    }
    if (Conf._116_4_ == 0x6ba) {
        local_10 = 1438.749 - ((double)local_14 * 129.4922) / 100.0;
    } else if (Conf._116_4_ == 0x6bd) {
        local_10 = 1582.352941 - ((double)local_14 * 166.666667) / 100.0;
    }
    if (255.0 < local_10) {
        local_10 = 255.0;
    }
    if ((int)((uint)(local_10 < 0.0) << 0x1f) < 0) {
        local_10 = 0.0;
    }
    bVar1 = (0.0 < local_10) * (char)(longlong)local_10;
    printf(
        "\n--- %s: real voltage = %d, temp_voltage = %.6f, Pic_Voltage = %d\n",
        "set_voltage", local_14, local_10._4_4_, (undefined4)local_10,
        local_10._4_4_, (uint)bVar1);
    if (Conf._116_4_ == 0x6ba) {
        set_PIC16F1704_voltage(param_1, param_2, bVar1);
    } else if (Conf._116_4_ == 0x6bd) {
        power_set_voltage(bVar1);
    }
    usleep(100000);
    return;
}

void set_baud(byte param_1, byte param_2)

{
    printf("\n--- %s: Chain : %d, baud = %d\n", "set_baud", (uint)param_1,
           (uint)param_2);
    if (Conf._116_4_ == 0x6ba) {
        set_BM1722_asic_register(param_1, 0, 0x1c, 1,
                                 (uint)param_2 << 8 | 0x7002001);
    } else if (Conf._116_4_ == 0x6bd) {
        set_BM1725_asic_register(param_1, 0, 0x1c, 1,
                                 (uint)param_2 << 8 | 0x7002001);
    }
    usleep(50000);
    uart_set_baud(param_1, param_2);
    return;
}

bool is_nonce_or_reg_value(char param_1)

{
    return param_1 < '\0';
}

undefined4 check_nonce(byte param_1, byte *param_2)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    int local_28;
    int local_24;
    int local_20;
    uint local_1c;
    uint local_18;
    uint local_14;

    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    if (Conf._116_4_ == 0x6ba) {
        local_20 = *(int *)param_2;
        local_14 = __udivsi3(param_2[3], gChain_Asic_Interval);
        local_18 = *param_2 & 0x7f;
        local_1c = param_2[5] & 0x7f;
    } else if (Conf._116_4_ == 0x6bd) {
        local_20 = *(int *)param_2;
        local_14 = __udivsi3(param_2[4], gChain_Asic_Interval);
        local_18 = (uint)param_2[3] | (param_2[2] & 1) << 8;
        local_1c = param_2[6] & 0x7f;
    }
    if (local_14 < (uint)Conf._108_4_) {
        if (local_18 < (uint)Conf._112_4_) {
            if (local_1c < (uint)Conf._64_4_) {
                iVar2 = *(int *)(cgpu + (local_14 + 0x20028) * 4) +
                        (local_18 * Conf._64_4_ + local_1c) * 0xcc;
                iVar3 = *(int *)(iVar2 + 4);
                *(int *)(gReceive_Nonce_Num + (uint)param_1 * 4) =
                    *(int *)(gReceive_Nonce_Num + (uint)param_1 * 4) + 1;
                if (local_20 == iVar3) {
                    if (*(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) == 0) {
                        *(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) =
                            *(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) + 1;
                        *(int *)(gValid_Nonce_Num + (uint)param_1 * 4) =
                            *(int *)(gValid_Nonce_Num + (uint)param_1 * 4) + 1;
                        *(int *)(gAsic_Core_Nonce_Num +
                                 (((uint)param_1 * 0x100 + local_14) * 0x200 +
                                  local_18) *
                                     4) =
                            *(int *)(gAsic_Core_Nonce_Num +
                                     (((uint)param_1 * 0x100 + local_14) *
                                          0x200 +
                                      local_18) *
                                         4) +
                            1;
                    } else {
                        *(int *)(gRepeated_Nonce_Id + (uint)param_1 * 4) =
                            *(int *)(gRepeated_Nonce_Id + (uint)param_1 * 4) +
                            1;
                        *(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) =
                            *(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) + 1;
                    }
                } else {
                    pthread_mutex_lock(
                        (pthread_mutex_t *)(HW_check_mutex +
                                            (uint)param_1 * 0x18));
                    local_28 = 0;
                    while (
                        (local_28 < (int)(uint) *
                                        (byte *)((int)&gWork_Num_For_Hw_Check +
                                                 (uint)param_1) &&
                         (local_24 = check_hw(gWorks_For_Hw_Check +
                                                  (uint)param_1 * 0x7f8 +
                                                  local_28 * 0xcc,
                                              local_20, param_2[4], 0),
                          local_24 != 0))) {
                        local_28 = local_28 + 1;
                    }
                    pthread_mutex_unlock(
                        (pthread_mutex_t *)(HW_check_mutex +
                                            (uint)param_1 * 0x18));
                    if (local_24 == 1) {
                        *(int *)(gHw_Nonce_Num + (uint)param_1 * 4) =
                            *(int *)(gHw_Nonce_Num + (uint)param_1 * 4) + 1;
                        printf("%s: Find a HW. Chain%d ASIC%d Core%d : nonce = "
                               "0x%08x.\n",
                               "check_nonce", (uint)param_1, local_14, local_18,
                               local_20);
                    }
                }
                uVar1 = 0;
            } else {
                printf("%s: received work_id = %02d nonce. error!!!\t",
                       "check_nonce", local_1c);
                printf(",received data is : 0x%02x%02x%02x%02x%02x%02x\n",
                       (uint)*param_2, (uint)param_2[1], (uint)param_2[2],
                       (uint)param_2[3], (uint)param_2[4], (uint)param_2[5]);
                uVar1 = 0xffffffff;
            }
        } else {
            printf("%s: received core%02d nonce. error!!!\t", "check_nonce",
                   local_18);
            printf(",received data is : 0x%02x%02x%02x%02x%02x%02x\n",
                   (uint)*param_2, (uint)param_2[1], (uint)param_2[2],
                   (uint)param_2[3], (uint)param_2[4], (uint)param_2[5]);
            uVar1 = 0xffffffff;
        }
    } else {
        printf("%s: received ASIC%02d nonce. error!!!\t", "check_nonce",
               local_14);
        printf(",received data is : 0x%02x%02x%02x%02x%02x\n", (uint)*param_2,
               (uint)param_2[1], (uint)param_2[2], (uint)param_2[3],
               (uint)param_2[4]);
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

undefined4 check_register_value(undefined1 param_1, void *param_2)

{
    undefined4 uVar1;
    size_t local_c;

    local_c = 0;
    if (Conf._116_4_ == 0x6ba) {
        local_c = 7;
    } else if (Conf._116_4_ == 0x6bd) {
        local_c = 8;
    }
    if (reg_value_buf[2] < 0x200) {
        memcpy((void *)((int)reg_value_buf + *reg_value_buf * 10 + 0x10),
               param_2, local_c);
        *(byte *)((int)reg_value_buf + *reg_value_buf * 10 + 0x18) =
            *(byte *)((int)param_2 + (local_c - 1)) & 0x1f;
        *(undefined1 *)((int)reg_value_buf + *reg_value_buf * 10 + 0x19) =
            param_1;
        *reg_value_buf = *reg_value_buf + 1;
        reg_value_buf[2] = reg_value_buf[2] + 1;
        if (0x200 < *reg_value_buf) {
            *reg_value_buf = 0;
        }
        uVar1 = 0;
    } else {
        printf("%s: reg_value_buf buffer is full!\n", "check_register_value");
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

void add_point(uint *param_1, uint param_2)

{
    *param_1 = *param_1 + 1;
    if (param_2 <= *param_1) {
        *param_1 = 0;
    }
    return;
}

int use_point_sub_1(int param_1, int param_2)

{
    if (param_1 == 0) {
        param_1 = param_2;
    }
    return param_1 + -1;
}

int use_point_add_1(uint param_1, int param_2)

{
    int iVar1;

    if (param_1 < param_2 - 1U) {
        iVar1 = param_1 + 1;
    } else {
        iVar1 = 0;
    }
    return iVar1;
}

void *receive_func(byte *param_1)

{
    byte bVar1;
    byte bVar2;
    int iVar3;
    void *extraout_r3;
    void *extraout_r3_00;
    void *extraout_r3_01;
    void *extraout_r3_02;
    uint local_48;
    uint local_44;
    void *local_40;
    void *local_3c;
    void *local_38;
    int local_34;
    int local_30;
    undefined4 local_2c;
    byte local_26;
    byte local_25;
    byte *local_24;
    size_t local_20;
    uint local_1c;
    int local_18;
    uint local_14;

    local_25 = *param_1;
    local_26 = param_1[1];
    local_14 = 0;
    local_18 = 0;
    local_44 = 0;
    local_48 = 0;
    local_2c = 0;
    local_1c = 0;
    local_30 = 0;
    local_34 = 0;
    local_20 = 0;
    if (Conf._116_4_ == 0x6ba) {
        local_20 = 9;
    } else if (Conf._116_4_ == 0x6bd) {
        local_20 = 10;
    }
    local_24 = param_1;
    local_38 = malloc(local_20 * 200);
    if (local_38 == (void *)0x0) {
        printf("%s, malloc buffer error!\n", "receive_func");
        local_38 = extraout_r3;
    } else {
        local_3c = malloc(local_20 * 100);
        if (local_3c == (void *)0x0) {
            printf("%s, malloc buffer error!\n", "receive_func");
            free(local_38);
            local_38 = extraout_r3_00;
        } else {
            local_40 = malloc(local_20);
            if (local_40 == (void *)0x0) {
                printf("%s, malloc buffer error!\n", "receive_func");
                free(local_3c);
                free(local_38);
                local_38 = extraout_r3_01;
            } else {
                local_34 = local_20 * 100;
                printf("%s: which_chain = %d, which_i2c = %d\n", "receive_func",
                       (uint)local_25, (uint)local_26);
                uart_flush_rx(local_25);
                while (*(char *)((int)&start_receive + (uint)local_25) !=
                       '\0') {
                    while (*(char *)((int)&gIsOpeningCore + (uint)local_25) !=
                           '\0') {
                        usleep(2000);
                    }
                    usleep(300);
                    local_14 = uart_receive(local_25, local_38, local_20);
                    for (local_1c = 0; local_1c < local_14;
                         local_1c = local_1c + 1) {
                        *(undefined1 *)((int)local_3c + local_44) =
                            *(undefined1 *)((int)local_38 + local_1c);
                        add_point(&local_44, local_34);
                    }
                    if (local_48 != local_44) {
                        if (local_48 < local_44) {
                            iVar3 = -local_48;
                        } else {
                            iVar3 = local_20 * 100 - local_48;
                        }
                        local_14 = local_44 + iVar3;
                        while (local_20 <= local_14) {
                            if ((*(char *)((int)local_3c + local_48) ==
                                 -0x56) &&
                                (iVar3 = use_point_add_1(local_48, local_34),
                                 *(char *)((int)local_3c + iVar3) == 'U')) {
                                for (local_1c = 0; local_1c < local_20;
                                     local_1c = local_1c + 1) {
                                    *(undefined1 *)((int)local_40 + local_1c) =
                                        *(undefined1 *)((int)local_3c +
                                                        local_48);
                                    add_point(&local_48, local_34);
                                }
                                local_14 = local_14 - local_20;
                                iVar3 = is_nonce_or_reg_value(
                                    *(undefined1 *)((int)local_40 +
                                                    (local_20 - 1)));
                                if (iVar3 == 0) {
                                    local_30 = check_register_value(
                                        local_25, (int)local_40 + 2);
                                    if (local_30 == -1) {
                                        local_18 = local_18 + 1;
                                    }
                                } else if (((*(char *)((int)&gStartTest +
                                                       (uint)local_25) !=
                                             '\0') &&
                                            (*(char *)((int)&gIsOpenCoreEnd +
                                                       (uint)local_25) !=
                                             '\0')) &&
                                           (local_30 = check_nonce(
                                                local_25, (int)local_40 + 2),
                                            local_30 == -1)) {
                                    local_18 = local_18 + 1;
                                }
                            } else {
                                local_1c = 0;
                                while ((local_1c < local_20 - 1 &&
                                        ((*(char *)((int)local_3c + local_48) !=
                                              -0x56 ||
                                          (iVar3 = use_point_add_1(local_48,
                                                                   local_34),
                                           *(char *)((int)local_3c + iVar3) !=
                                               'U'))))) {
                                    add_point(&local_48, local_34);
                                    iVar3 = use_point_sub_1(local_48, local_34);
                                    bVar1 = *(byte *)((int)local_3c + iVar3);
                                    bVar2 = *(byte *)((int)local_3c + local_48);
                                    iVar3 = use_point_add_1(local_48, local_34);
                                    printf("%s: Headers are not corret! "
                                           "Header0 = 0x%02x, Header1 = "
                                           "0x%02x, Header2 = 0x%02x rp = %d\n",
                                           "receive_func", (uint)bVar1,
                                           (uint)bVar2,
                                           (uint) *
                                               (byte *)((int)local_3c + iVar3),
                                           local_48);
                                    local_1c = local_1c + 1;
                                }
                                local_14 = local_14 - local_1c;
                            }
                        }
                    }
                }
                if (local_40 != (void *)0x0) {
                    free(local_40);
                }
                if (local_3c != (void *)0x0) {
                    free(local_3c);
                }
                if (local_38 != (void *)0x0) {
                    free(local_38);
                    local_38 = extraout_r3_02;
                }
            }
        }
    }
    return local_38;
}

undefined4 send_func(byte *param_1)

{
    byte bVar1;
    undefined4 extraout_r3;
    undefined1 local_f4;
    byte local_f3;
    undefined1 auStack_f2[180];
    undefined1 local_3e;
    undefined1 local_3d;
    undefined2 local_3a;
    void *local_38;
    int local_34;
    undefined4 local_30;
    undefined4 local_2c;
    byte local_25;
    byte *local_24;
    int local_20;
    uint local_1c;
    uint local_18;
    uint local_14;

    local_25 = *param_1;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_2c = 0;
    local_30 = 0;
    local_20 = 0;
    local_24 = param_1;
    memset(&local_f4, 0, 0xb8);
    for (local_14 = 0; local_14 < (uint)Conf._108_4_; local_14 = local_14 + 1) {
        local_34 = *(int *)(cgpu + (local_14 + 0x20028) * 4);
        for (local_18 = 0; local_18 < (uint)Conf._112_4_;
             local_18 = local_18 + 1) {
            for (local_1c = 0; local_1c < (uint)Conf._64_4_;
                 local_1c = local_1c + 1) {
                local_38 = (void *)(local_34 +
                                    (local_18 * Conf._64_4_ + local_1c) * 0xcc);
                local_f4 = 0x30;
                bVar1 = (byte)local_1c;
                if ((Conf._116_4_ != 0x6ba) &&
                    (bVar1 = local_f3, Conf._116_4_ == 0x6bd)) {
                    bVar1 = (byte)local_1c | 0x80;
                }
                local_f3 = bVar1;
                for (local_20 = 0; local_20 < 0xb4; local_20 = local_20 + 1) {
                    auStack_f2[local_20] =
                        *(undefined1 *)((int)local_38 + local_20 + 8);
                }
                auStack_f2[0x90] = 0;
                local_3a = CRC16(&local_f4, 0xb6);
                local_3e = (undefined1)((ushort)local_3a >> 8);
                local_3d = (undefined1)local_3a;
                dcr_uart_send(local_25, &local_f4, 0xb8);
                pthread_mutex_lock((pthread_mutex_t *)(HW_check_mutex +
                                                       (uint)local_25 * 0x18));
                for (local_20 = 8; -1 < local_20; local_20 = local_20 + -1) {
                    memcpy(gWorks_For_Hw_Check + (uint)local_25 * 0x7f8 +
                               local_20 * 0xcc + 0xcc,
                           gWorks_For_Hw_Check + (uint)local_25 * 0x7f8 +
                               local_20 * 0xcc,
                           0xcc);
                }
                *(char *)((int)&gWork_Num_For_Hw_Check + (uint)local_25) =
                    *(char *)((int)&gWork_Num_For_Hw_Check + (uint)local_25) +
                    '\x01';
                if (8 <
                    *(byte *)((int)&gWork_Num_For_Hw_Check + (uint)local_25)) {
                    *(undefined1 *)((int)&gWork_Num_For_Hw_Check +
                                    (uint)local_25) = 9;
                }
                memcpy(gWorks_For_Hw_Check + (uint)local_25 * 0x7f8, local_38,
                       0xcc);
                pthread_mutex_unlock((
                    pthread_mutex_t *)(HW_check_mutex + (uint)local_25 * 0x18));
                *(int *)(gSend_Work_Num + (uint)local_25 * 4) =
                    *(int *)(gSend_Work_Num + (uint)local_25 * 4) + 1;
                usleep(Conf._200_4_);
            }
        }
    }
    while (*(uint *)(gSend_Work_Num + (uint)local_25 * 4) <
           (uint)(Conf._108_4_ * Conf._112_4_ * Conf._64_4_)) {
        printf("\n\n---%s: Chain%d send work num : %d, less than %d\n",
               "send_func", (uint)local_25,
               *(undefined4 *)(gSend_Work_Num + (uint)local_25 * 4),
               Conf._108_4_ * Conf._64_4_ * 0x114);
    }
    printf("\n\n---%s: Chain%d send work num : %d\n", "send_func",
           (uint)local_25,
           *(undefined4 *)(gSend_Work_Num + (uint)local_25 * 4));
    puts("\nsend test pattern done");
    system("date");
    putchar(10);
    *(undefined1 *)((int)&start_receive + (uint)local_25) = 0;
    puts("to stop receive");
    return extraout_r3;
}

void read_temp_func(byte *param_1)

{
    byte bVar1;

    bVar1 = *param_1;
    do {
        if ((*(char *)((int)&gIsReadTemp + (uint)bVar1) != '\0') &&
            (*(char *)((int)&gIsOpenCoreEnd + (uint)bVar1) != '\0')) {
            *(undefined1 *)((int)&gReadingTemp + (uint)bVar1) = 1;
            usleep(Conf._200_4_ * 0xf);
            if (Conf[0xfc] == '\x01') {
                read_asic_temperature(bVar1);
            } else {
                printf("\n%s: please config sensor_model in Config.ini\n",
                       "read_temp_func");
            }
            if (*(char *)((int)&gNotReadOutTemp + (uint)bVar1) != '\x01') {
                set_PWM_according_to_temperature(bVar1);
            }
            *(undefined1 *)((int)&gReadingTemp + (uint)bVar1) = 0;
        }
        usleep(1000000);
    } while (true);
}

void single_asic_print_lcd(undefined4 param_1, uint param_2)

{
    char local_20[20];

    builtin_strncpy(local_20, "      HW:       ", 0x10);
    display_level_result_on_lcd();
    if ((param_2 & 1) == 0) {
        write_lcd_no_memset(2, "   Pattern NG   ", 0x10);
    } else {
        write_lcd_no_memset(2, "   Pattern OK   ", 0x10);
    }
    sprintf(local_20 + 10, "%d",
            *(undefined4 *)(gHw_Nonce_Num + (uint)gChain * 4));
    write_lcd_no_memset(1, local_20, 0x10);
    return;
}

void single_board_print_lcd(uint param_1)

{
    display_level_result_on_lcd();
    if ((param_1 & 1) == 0) {
        write_lcd_no_memset(1, "   Pattern NG   ", 0x10);
        pattern_test_time = pattern_test_time + '\x01';
    } else {
        write_lcd_no_memset(1, "   Pattern OK   ", 0x10);
        pattern_test_time = '\0';
    }
    if (g_test_epprom == '\0') {
        puts("eeprom NG");
        write_lcd_no_memset(2, "   epprom NG\t", 0x10);
    } else {
        puts("eeprom OK");
        write_lcd_no_memset(2, "   epprom OK\t", 0x10);
    }
    if ((param_1 & 4) == 0) {
        write_lcd_no_memset(3, " Temperature NG ", 0x10);
    } else {
        write_lcd_no_memset(3, " Temperature OK ", 0x10);
    }
    return;
}

int single_asic_get_result(byte param_1)

{
    undefined4 uVar1;
    int iVar2;
    int local_1c;
    int local_18;
    int local_14;
    uint local_10;
    uint local_c;

    local_14 = 1;
    puts("\n\n-----------------------------------------------------------------"
         "-------------------------------------\n");
    printf("every CORE require nonce number: %lu\n\n", Conf._64_4_);
    puts("\n\nevery core returned valid nonce count:");
    uVar1 = cgpu._524448_4_;
    for (local_c = 0; local_c < (uint)Conf._112_4_; local_c = local_c + 1) {
        if (local_c % 10 == 0) {
            putchar(10);
        }
        printf("core[%02d]=%02d\t", local_c,
               *(undefined4 *)(gAsic_Core_Nonce_Num +
                               ((uint)param_1 * 0x20000 + local_c) * 4));
    }
    puts("\n\n");
    for (local_c = 0; local_c < (uint)Conf._112_4_; local_c = local_c + 1) {
        if (*(uint *)(gAsic_Core_Nonce_Num +
                      ((uint)param_1 * 0x20000 + local_c) * 4) <
            (uint)Conf._64_4_) {
            local_14 = 0;
            printf(
                "core[%02d] = %d,      lost these pattern\'s nonce : ", local_c,
                *(undefined4 *)(gAsic_Core_Nonce_Num +
                                ((uint)param_1 * 0x20000 + local_c) * 4));
            for (local_10 = 0; local_10 < (uint)Conf._64_4_;
                 local_10 = local_10 + 1) {
                if (*(int *)(uVar1 + (local_c * Conf._64_4_ + local_10) * 0xcc +
                             (param_1 + 0x2e) * 4 + 4) == 0) {
                    printf("%d  ", local_10);
                }
            }
            putchar(10);
        }
    }
    puts("\n\nevery core returned all nonce count:");
    for (local_c = 0; local_c < (uint)Conf._112_4_; local_c = local_c + 1) {
        local_18 = 0;
        if (local_c % 10 == 0) {
            putchar(10);
        }
        for (local_10 = 0; local_10 < (uint)Conf._64_4_;
             local_10 = local_10 + 1) {
            local_18 =
                local_18 +
                *(int *)(uVar1 + (local_c * Conf._64_4_ + local_10) * 0xcc +
                         (param_1 + 0x2e) * 4 + 4);
        }
        printf("core[%02d]=%02d\t", local_c, local_18);
    }
    puts("\n\nevery core returned repeated nonce count:");
    for (local_c = 0; local_c < (uint)Conf._112_4_; local_c = local_c + 1) {
        local_1c = 0;
        if (local_c % 10 == 0) {
            putchar(10);
        }
        for (local_10 = 0; local_10 < (uint)Conf._64_4_;
             local_10 = local_10 + 1) {
            iVar2 = uVar1 + (local_c * Conf._64_4_ + local_10) * 0xcc;
            if (*(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) == 0) {
                iVar2 = 0;
            } else {
                iVar2 = *(int *)(iVar2 + (param_1 + 0x2e) * 4 + 4) + -1;
            }
            local_1c = local_1c + iVar2;
        }
        printf("core[%02d]=%02d\t", local_c, local_1c);
    }
    puts("\n-------------------------------------------------------------------"
         "-----------------------------------\n");
    printf("Chain%d total valid nonce number: %d\n\n", (uint)param_1,
           *(undefined4 *)(gValid_Nonce_Num + (uint)param_1 * 4));
    printf("Chain%d total receive nonce number: %d\n\n", (uint)param_1,
           *(undefined4 *)(gReceive_Nonce_Num + (uint)param_1 * 4));
    printf("Chain%d total repeate nonce number: %d\n\n", (uint)param_1,
           *(undefined4 *)(gRepeated_Nonce_Id + (uint)param_1 * 4));
    printf("Chain%d HW number = %d\n\n", (uint)param_1,
           *(undefined4 *)(gHw_Nonce_Num + (uint)param_1 * 4));
    if (local_14 == 0) {
        puts("Pattern NG\n");
    } else {
        puts("Pattern OK\n");
    }
    return local_14;
}

uint single_board_get_result(byte param_1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int local_30;
    int local_2c;
    int local_28;
    int local_24;
    uint local_20;
    uint local_1c;
    uint local_18;
    uint local_14;
    uint local_10;
    uint local_c;

    local_18 = 0;
    local_20 = 7;
    local_30 = 0;
    puts("\n\n-----------------------------------------------------------------"
         "-------------------------------------\n");
    printf("every ASIC require nonce number: %lu\n",
           Conf._112_4_ * Conf._64_4_);
    iVar2 = Conf._112_4_ * Conf._64_4_ * Conf._108_4_;
    puts("\n\nevery asic returned valid nonce count:");
    for (local_c = 0; local_c < (uint)Conf._108_4_; local_c = local_c + 1) {
        if (local_c % 9 == 0) {
            putchar(10);
        }
        uVar1 = calculate_how_many_nonce_per_asic_get(param_1, local_c & 0xff,
                                                      Conf._112_4_);
        printf("asic[%02d]=%d\t", local_c, uVar1);
        if ((uVar1 <= (uint)(Conf._112_4_ * Conf._64_4_) &&
             Conf._112_4_ * Conf._64_4_ - uVar1 != 0) &&
            (local_18 = local_18 + 1, (uint)Conf._232_4_ < local_18)) {
            local_20 = local_20 & 0xfffffffe;
        }
    }
    puts("\n\nevery asic returned all nonce count:");
    local_2c = 0;
    for (local_c = 0; local_c < (uint)Conf._108_4_; local_c = local_c + 1) {
        if (local_c % 9 == 0) {
            putchar(10);
        }
        local_24 = 0;
        for (local_10 = 0; local_10 < (uint)Conf._112_4_;
             local_10 = local_10 + 1) {
            for (local_14 = 0; local_14 < (uint)Conf._64_4_;
                 local_14 = local_14 + 1) {
                local_24 = local_24 +
                           *(int *)(*(int *)(cgpu + (local_c + 0x20028) * 4) +
                                    (local_10 * Conf._64_4_ + local_14) * 0xcc +
                                    (param_1 + 0x2e) * 4 + 4);
            }
        }
        printf("asic[%02d]=%d\t", local_c, local_24);
        local_2c = local_2c + local_24;
    }
    puts("\n\nevery asic returned repeated nonce count:");
    for (local_c = 0; local_c < (uint)Conf._108_4_; local_c = local_c + 1) {
        if (local_c % 9 == 0) {
            putchar(10);
        }
        local_28 = 0;
        for (local_10 = 0; local_10 < (uint)Conf._112_4_;
             local_10 = local_10 + 1) {
            for (local_14 = 0; local_14 < (uint)Conf._64_4_;
                 local_14 = local_14 + 1) {
                iVar3 = *(int *)(cgpu + (local_c + 0x20028) * 4) +
                        (local_10 * Conf._64_4_ + local_14) * 0xcc;
                if (*(int *)(iVar3 + (param_1 + 0x2e) * 4 + 4) == 0) {
                    iVar3 = 0;
                } else {
                    iVar3 = *(int *)(iVar3 + (param_1 + 0x2e) * 4 + 4) + -1;
                }
                local_28 = local_28 + iVar3;
            }
        }
        printf("asic[%02d]=%d\t", local_c, local_28);
    }
    puts("\n");
    for (local_c = 0; local_c < (uint)Conf._108_4_; local_c = local_c + 1) {
        uVar1 = calculate_how_many_nonce_per_asic_get(param_1, local_c & 0xff,
                                                      Conf._112_4_);
        if (uVar1 <= (uint)(Conf._112_4_ * Conf._64_4_) &&
            Conf._112_4_ * Conf._64_4_ - uVar1 != 0) {
            printf("asic[%02d] = %d\n", local_c, uVar1);
            iVar3 = *(int *)(cgpu + (local_c + 0x20028) * 4);
            local_1c = 0;
            for (local_10 = 0; local_10 < (uint)Conf._112_4_;
                 local_10 = local_10 + 1) {
                if (*(uint *)(gAsic_Core_Nonce_Num +
                              (((uint)param_1 * 0x100 + local_c) * 0x200 +
                               local_10) *
                                  4) < (uint)Conf._64_4_) {
                    local_1c = local_1c + 1;
                    local_30 = local_30 + local_1c;
                    if ((uint)Conf._236_4_ < local_1c) {
                        local_20 = local_20 & 0xfffffffe;
                    }
                    if (*(uint *)(gAsic_Core_Nonce_Num +
                                  (((uint)param_1 * 0x100 + local_c) * 0x200 +
                                   local_10) *
                                      4) < (uint)Conf._240_4_) {
                        local_20 = local_20 & 0xfffffffe;
                    }
                    printf(
                        "core[%02d] = %d,      lost these nonce : ", local_10,
                        *(undefined4 *)(gAsic_Core_Nonce_Num +
                                        (((uint)param_1 * 0x100 + local_c) *
                                             0x200 +
                                         local_10) *
                                            4));
                    for (local_14 = 0; local_14 < (uint)Conf._64_4_;
                         local_14 = local_14 + 1) {
                        if (*(int *)(iVar3 +
                                     (local_10 * Conf._64_4_ + local_14) *
                                         0xcc +
                                     (param_1 + 0x2e) * 4 + 4) == 0) {
                            printf("%d  ", local_14);
                        }
                    }
                    putchar(10);
                }
            }
            puts("\n");
        }
    }
    if ((uint)Conf._248_4_ < *(uint *)(gHw_Nonce_Num + (uint)param_1 * 4)) {
        local_20 = local_20 & 0xfffffffe;
        printf("ret = %d\n", local_20);
    }
    if ((uint)Conf._244_4_ <
        (uint)(iVar2 - *(int *)(gValid_Nonce_Num + (uint)param_1 * 4))) {
        local_20 = local_20 & 0xfffffffe;
        printf("ret = %d\n", local_20);
    }
    puts("\n-------------------------------------------------------------------"
         "-----------------------------------\n");
    if (*(char *)((int)&gHigherThanAlarmTemp + (uint)param_1) != '\0') {
        local_20 = local_20 & 0xfffffffb;
    }
    printf("Chain%d total valid nonce number: %d\n\n", (uint)param_1,
           *(undefined4 *)(gValid_Nonce_Num + (uint)param_1 * 4));
    printf("Chain%d total returned nonce number: %d\n\n", (uint)param_1,
           local_2c);
    printf("Chain%d total repeated nonce number: %d\n\n", (uint)param_1,
           *(undefined4 *)(gRepeated_Nonce_Id + (uint)param_1 * 4));
    printf("Chain%d HW number = %d\n\n", (uint)param_1,
           *(undefined4 *)(gHw_Nonce_Num + (uint)param_1 * 4));
    printf("total invalid asic number %d\n", local_18);
    printf("total invalid core number %d\n", local_30);
    printf("total nonce expected %d lost %d allow most %d\n", iVar2,
           iVar2 - *(int *)(gValid_Nonce_Num + (uint)param_1 * 4),
           Conf._244_4_);
    if ((local_20 & 1) == 0) {
        puts("Pattern NG\n");
    } else {
        puts("Pattern OK\n");
    }
    if ((local_20 & 2) == 0) {
        puts("Sensor NG\n");
    } else {
        puts("Sensor OK\n");
    }
    if ((local_20 & 4) == 0) {
        puts("Temperature NG\n");
    } else {
        puts("Temperature OK\n");
    }
    return local_20;
}

undefined4 get_pllparam_divider(float param_1, uint *param_2, byte *param_3,
                                float *param_4)

{
    byte bVar1;
    byte bVar2;
    undefined4 uVar3;
    bool bVar4;
    double dVar5;
    float fVar6;
    uint uVar7;
    float fVar8;
    float local_28;
    byte local_22;
    byte local_21;
    byte local_20;
    byte local_1f;
    byte local_1e;
    byte local_1d;
    float local_1c;
    float local_18;
    float local_14;

    local_28 = 25.0;
    bVar4 = false;
    local_14 = 2500.0;
LAB_0001003a:
    if ((int)((uint)(local_14 < 3125.0) << 0x1f) < 0) {
        local_1c = 12.5;
    } else {
        local_1c = 25.0;
    }
    if (bVar4) {
        local_14 = local_18 - local_1c;
        bVar4 = false;
        local_28 = 25.0;
    }
    bVar2 = (0.0 < 25.0 / local_1c) * (char)(int)(25.0 / local_1c);
    fVar6 = ((float)bVar2 * local_14) / 25.0;
    bVar1 = (0.0 < fVar6) * (char)(int)fVar6;
    fVar6 = local_14 / param_1;
    uVar7 = (uint)(0.0 < fVar6) * (int)fVar6;
    fVar6 = fVar6 - (float)uVar7;
    if (-1 < (int)((uint)(fVar6 < local_28) << 0x1f))
        goto LAB_00010148;
    local_22 = (byte)uVar7;
    local_18 = local_14;
    local_28 = fVar6;
    local_1e = bVar2;
    local_1d = bVar1;
    if (-1 < (int)((uint)(fVar6 < 1e-06) << 0x1f))
        goto LAB_00010148;
    goto LAB_00010170;
LAB_00010148:
    local_14 = local_14 - local_1c;
    if (local_14 < 1400.0) {
    LAB_00010170:
        if (local_22 < 0x11) {
            local_21 = local_22;
            local_20 = 1;
            local_1f = 1;
            goto LAB_0001042e;
        }
        local_21 = 0x10;
        do {
            bVar2 = local_21 - 1;
            if (local_21 < 3)
                goto LAB_0001024e;
            fVar6 = (float)local_22 / (float)(byte)(local_21 - 1);
            fVar8 = fVar6 - (float)((uint)(0.0 < fVar6) * (int)fVar6);
            dVar5 = (double)fVar8;
            printf("--- %s: pll_div decimals %f postdiv_f %f",
                   "get_pllparam_divider", SUB84(dVar5, 0),
                   (int)((ulonglong)dVar5 >> 0x20), (double)fVar6);
            local_21 = bVar2;
        } while (-1 < (int)((uint)(fVar8 < 0.0001) << 0x1f));
        local_22 = __udivsi3(local_22, bVar2);
    LAB_0001024e:
        if ((bVar2 == 2) && ((local_22 & 1) != 0)) {
            printf("--- %s: need recal 1", "get_pllparam_divider");
            if (local_18 <= 1400.0) {
                printf("--- %s: !!!!!!!!!!!!!!!Set freq don\'t ok!!!!!!!!!! "
                       "using 200M pll",
                       "get_pllparam_divider");
                *param_2 = 0x780111;
                *param_3 = 0xf;
                return 0xffffffff;
            }
            local_14 = local_18;
            bVar4 = true;
        } else {
            if (local_22 < 8) {
                local_1f = local_22;
                local_20 = 1;
                local_21 = bVar2;
                goto LAB_0001042e;
            }
            local_1f = 7;
            local_20 = 1;
            do {
                bVar4 = local_1f == 0;
                local_1f = local_1f - 1;
                if (bVar4)
                    goto LAB_0001036e;
                fVar6 = (float)local_22 / (float)local_1f;
            } while (-1 < (int)((uint)(fVar6 - (float)((uint)(0.0 < fVar6) *
                                                       (int)fVar6) <
                                       0.0001)
                                << 0x1f));
            local_20 = (0.0 < fVar6) * (char)(int)fVar6;
        LAB_0001036e:
            if (((local_20 <= local_1f) && (local_20 < 8)) ||
                (printf("--- %s: need recal 2", "get_pllparam_divider"),
                 local_18 <= 1400.0)) {
                local_21 = bVar2;
                if ((uint)local_22 == (uint)local_20 * (uint)local_1f) {
                LAB_0001042e:
                    if (param_4 != (float *)0x0) {
                        *param_4 =
                            ((25.0 / (float)local_1e) * (float)local_1d) /
                            (float)(longlong)(int)((uint)local_20 *
                                                   (uint)local_1f);
                    }
                    *param_2 = (uint)local_20 | (uint)local_1d << 0x10 |
                               (uint)local_1e << 8 | (uint)local_1f << 4;
                    *param_3 = local_21;
                    printf(
                        "--- %s: Want freq %f  real freq %f",
                        "get_pllparam_divider", SUB84((double)param_1, 0),
                        (int)((ulonglong)(double)param_1 >> 0x20),
                        (double)(((25.0 / (float)local_1e) * (float)local_1d) /
                                 (float)(longlong)(int)((uint)local_21 *
                                                        (uint)local_20 *
                                                        (uint)local_1f)));
                    printf("--- %s: pll_vco %f, fbdiv %#x refdiv %#x postdiv1 "
                           "%#x postdiv2 %#x, pll_divider %d ,{pll_value %#x}",
                           "get_pllparam_divider", SUB84((double)local_18, 0),
                           (int)((ulonglong)(double)local_18 >> 0x20),
                           (uint)local_1d, (uint)local_1e, (uint)local_1f,
                           (uint)local_20, (uint)*param_3, *param_2);
                    uVar3 = 0;
                } else {
                    printf("--- %s: Don\'t find postdiv1 %d * postdiv2 %d = "
                           "postdiv %d",
                           "get_pllparam_divider", (uint)local_1f,
                           (uint)local_20, (uint)local_22);
                    *param_2 = 0x780111;
                    *param_3 = 0xf;
                    printf("--- %s: !!!!!!!!!!!!!!!Set freq don\'t "
                           "ok!!!!!!!!!! using 200M pll",
                           "get_pllparam_divider");
                    uVar3 = 0xffffffff;
                }
                return uVar3;
            }
            local_14 = local_18;
            bVar4 = true;
        }
    }
    goto LAB_0001003a;
}

void enable_read_temperature_from_asic_chain(undefined1 param_1,
                                             undefined1 param_2)

{
    if (Conf._116_4_ == 0x6ba) {
        set_BM1722_asic_register(param_1, param_2, 0x1c, 0,
                                 Conf._260_4_ << 8 | 0x7006061);
    } else if (Conf._116_4_ == 0x6bd) {
        set_BM1725_asic_register(param_1, param_2, 0x1c, 0,
                                 Conf._260_4_ << 8 | 0x7006061);
    }
    return;
}

void enable_extended_mode_of_temperature_sensor_chain(byte param_1)

{
    uint local_18;
    uint local_14;
    uint local_10;
    uint local_c;

    printf("\n--- %s\n", "enable_extended_mode_of_temperature_sensor_chain");
    for (local_c = 0; local_18 = 0, local_c < 3; local_c = local_c + 1) {
        if (local_c == 0) {
            local_14 = (uint)Conf[0xd0];
        }
        if (local_c == 1) {
            local_14 = (uint)Conf[0xd1];
        }
        if (local_c == 2) {
            local_14 = (uint)Conf[0xd2];
        }
        if (local_14 != 0) {
            enable_read_temperature_from_asic_chain(
                param_1,
                (gChain_Asic_Interval & 0xff) * (local_14 - 1 & 0xff) & 0xff);
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_10 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_10 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                }
                local_18 = local_18 + 1;
            } while (((local_10 & 0xc0000000) != 0) && (local_18 < 2));
            local_18 = 0;
            if ((local_10 & 0xc0000000) == 0) {
                if (Conf._116_4_ == 0x6ba) {
                    set_BM1722_asic_register(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20, 0,
                        0x1990904);
                } else if (Conf._116_4_ == 0x6bd) {
                    set_BM1725_asic_register(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20, 0,
                        0x1990904);
                }
                do {
                    if (Conf._116_4_ == 0x6ba) {
                        local_10 = check_BM1722_asic_reg(
                            param_1, gChain_Asic_Interval * (local_14 - 1),
                            0x20, 0);
                    } else if (Conf._116_4_ == 0x6bd) {
                        local_10 = check_BM1725_asic_reg(
                            param_1, gChain_Asic_Interval * (local_14 - 1),
                            0x20, 0);
                    }
                    local_18 = local_18 + 1;
                } while (((local_10 & 0xc0000000) != 0) && (local_18 < 2));
                if ((local_10 & 0xc0000000) != 0) {
                    *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 1;
                    printf("%s: Can\'t set extended mode. ret = 0x%08x\n",
                           "enable_extended_mode_of_temperature_sensor_chain",
                           local_10);
                }
            } else {
                *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 1;
                printf(
                    "%s: Can\'t read out GENERAL_I2C_COMMAND. ret = 0x%08x\n",
                    "enable_extended_mode_of_temperature_sensor_chain",
                    local_10);
            }
        }
    }
    return;
}

void get_temperature_offset_value_from_asic_chain(byte param_1)

{
    char cVar1;
    char local_2c[8];
    uint local_24;
    uint local_20;
    char local_19;
    uint local_18;
    uint local_14;
    uint local_10;
    uint local_c;

    local_10 = 0xffffffff;
    local_18 = 0;
    local_2c[0] = '\0';
    local_2c[1] = '\0';
    local_2c[2] = '\0';
    local_2c[3] = '\0';
    local_2c[4] = '\0';
    local_2c[5] = '\0';
    local_2c[6] = 0;
    local_2c[7] = 0;
    local_19 = '\0';
    local_20 = 0;
    local_24 = 0;
    printf("\n--- %s\n", "get_temperature_offset_value_from_asic_chain");
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        if (local_c == 0) {
            local_14 = (uint)Conf[0xd0];
        }
        if (local_c == 1) {
            local_14 = (uint)Conf[0xd1];
        }
        if (local_c == 2) {
            local_14 = (uint)Conf[0xd2];
        }
        if (local_14 != 0) {
            enable_read_temperature_from_asic_chain(
                param_1,
                (gChain_Asic_Interval & 0xff) * (local_14 - 1 & 0xff) & 0xff);
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_10 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_10 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                }
                local_18 = local_18 + 1;
            } while (((local_10 & 0xc0000000) != 0) && (local_18 < 2));
            local_18 = 0;
            if (Conf._116_4_ == 0x6ba) {
                set_BM1722_asic_register(param_1,
                                         gChain_Asic_Interval * (local_14 - 1),
                                         0x20, 0, 0x1980100);
            } else if (Conf._116_4_ == 0x6bd) {
                set_BM1725_asic_register(param_1,
                                         gChain_Asic_Interval * (local_14 - 1),
                                         0x20, 0, 0x1980100);
            }
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_10 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_10 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                }
                local_18 = local_18 + 1;
            } while (((local_10 & 0xc0000000) != 0) && (local_18 < 2));
            local_18 = 0;
            if ((local_10 & 0xc0000000) == 0) {
                local_24 = local_10 & 0xff;
                printf("ASIC temperature is %d\n", local_24);
            } else {
                *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 1;
                printf("%s: Can\'t read out ASIC TEMP. ret = 0x%08x\n",
                       "get_temperature_offset_value_from_asic_chain",
                       local_10);
            }
            local_10 = 0xffffffff;
            if (Conf._116_4_ == 0x6ba) {
                set_BM1722_asic_register(param_1,
                                         gChain_Asic_Interval * (local_14 - 1),
                                         0x20, 0, 0x1980000);
            } else if (Conf._116_4_ == 0x6bd) {
                set_BM1725_asic_register(param_1,
                                         gChain_Asic_Interval * (local_14 - 1),
                                         0x20, 0, 0x1980000);
            }
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_10 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_10 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_14 - 1), 0x20,
                        0);
                }
                local_18 = local_18 + 1;
            } while (((local_10 & 0xc0000000) != 0) && (local_18 < 2));
            local_18 = 0;
            if ((local_10 & 0xc0000000) == 0) {
                local_20 = local_10 & 0xff;
                printf("local_temp is %d\n", local_20);
            } else {
                *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 1;
                printf("%s: Can\'t read out HASH BOARD TEMP. ret = 0x%08x\n",
                       "get_temperature_offset_value_from_asic_chain",
                       local_10);
            }
            if (*(char *)((int)&gNotReadOutTemp + (uint)param_1) == '\0') {
                local_19 = (char)local_20 - (char)local_24;
            } else {
                local_19 = '\0';
            }
            cVar1 = (char)local_14;
            if (local_c == 0) {
                cgpu[0x1004c0] = local_19;
                local_2c[1] = local_19;
                *(char *)((int)&gT1_offset_value + (uint)param_1) = local_19;
                local_2c[0] = cVar1;
            }
            if (local_c == 1) {
                cgpu[0x1004c1] = local_19;
                local_2c[3] = local_19;
                *(char *)((int)&gT2_offset_value + (uint)param_1) = local_19;
                local_2c[2] = cVar1;
            }
            if (local_c == 2) {
                cgpu[0x1004c2] = local_19;
                local_2c[5] = local_19;
                *(char *)((int)&gT3_offset_value + (uint)param_1) = local_19;
                local_2c[4] = cVar1;
            }
            printf("temp_offset_value = %d\n", (int)local_19);
        }
    }
    local_2c[6] = Conf[0xfc] | 0x20;
    local_2c[7] = (char)Conf._256_4_;
    if (1 < (uint)Conf._108_4_) {
        putchar(10);
        for (local_c = 0; local_c < 8; local_c = local_c + 1) {
            printf("offset_value[%d] = %d\n", local_c, (int)local_2c[local_c]);
        }
    }
    return;
}

void set_default_temperature_offset_value_chain(byte param_1)

{
    char local_1d;
    uint local_1c;
    uint local_18;
    uint local_14;
    uint local_10;
    uint local_c;

    local_10 = 0;
    local_1c = 0;
    local_1d = '\0';
    printf("\n--- %s\n", "set_default_temperature_offset_value_chain");
    for (local_c = 0; local_14 = 0, local_c < 3; local_c = local_c + 1) {
        local_18 = 0;
        if (local_c == 0) {
            local_10 = (uint)Conf[0xd0];
            local_1d = *(char *)((int)&gT1_offset_value + (uint)param_1);
            local_18 =
                *(byte *)((int)&gT1_offset_value + (uint)param_1) | 0x1991100;
        }
        if (local_c == 1) {
            local_10 = (uint)Conf[0xd1];
            local_1d = *(char *)((int)&gT2_offset_value + (uint)param_1);
            local_18 =
                *(byte *)((int)&gT2_offset_value + (uint)param_1) | 0x1991100;
        }
        if (local_c == 2) {
            local_10 = (uint)Conf[0xd2];
            local_1d = *(char *)((int)&gT3_offset_value + (uint)param_1);
            local_18 =
                *(byte *)((int)&gT3_offset_value + (uint)param_1) | 0x1991100;
        }
        if (local_10 != 0) {
            enable_read_temperature_from_asic_chain(
                param_1,
                (gChain_Asic_Interval & 0xff) * (local_10 - 1 & 0xff) & 0xff);
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_1c = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_10 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_1c = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_10 - 1), 0x20,
                        0);
                }
                local_14 = local_14 + 1;
            } while (((local_1c & 0xc0000000) != 0) && (local_14 < 2));
            local_14 = 0;
            if (Conf._116_4_ == 0x6ba) {
                set_BM1722_asic_register(param_1,
                                         gChain_Asic_Interval * (local_10 - 1),
                                         0x20, 0, local_18);
            } else if (Conf._116_4_ == 0x6bd) {
                set_BM1725_asic_register(param_1,
                                         gChain_Asic_Interval * (local_10 - 1),
                                         0x20, 0, local_18);
            }
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_1c = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_10 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_1c = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_10 - 1), 0x20,
                        0);
                }
                local_14 = local_14 + 1;
            } while (((local_1c & 0xc0000000) != 0) && (local_14 < 2));
            local_14 = 0;
            if (Conf._116_4_ == 0x6ba) {
                set_BM1722_asic_register(param_1,
                                         gChain_Asic_Interval * (local_10 - 1),
                                         0x20, 0, 0x1981100);
            } else if (Conf._116_4_ == 0x6bd) {
                set_BM1725_asic_register(param_1,
                                         gChain_Asic_Interval * (local_10 - 1),
                                         0x20, 0, 0x1981100);
            }
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_1c = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_10 - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_1c = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_10 - 1), 0x20,
                        0);
                }
                local_14 = local_14 + 1;
            } while (((local_1c & 0xc0000000) != 0) && (local_14 < 2));
            if ((char)local_1c != local_1d) {
                if (local_c == 0) {
                    *(undefined1 *)((int)&Sensor1_OK + (uint)param_1) = 0;
                    puts("!!! sensor1 is error!\n");
                }
                if (local_c == 1) {
                    *(undefined1 *)((int)&Sensor2_OK + (uint)param_1) = 0;
                    puts("!!! sensor2 is error!\n");
                }
                if (local_c == 2) {
                    *(undefined1 *)((int)&Sensor3_OK + (uint)param_1) = 0;
                    puts("!!! sensor3 is error!\n");
                }
            }
        }
    }
    return;
}

void read_asic_temperature(byte param_1)

{
    undefined4 uVar1;
    uint uVar2;
    uint local_20;
    uint local_1c;
    uint local_18;
    uint local_14;

    local_18 = 0xffffffff;
    *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 0;
    for (local_14 = 0; local_20 = 0, local_14 < 3; local_14 = local_14 + 1) {
        if (local_14 == 0) {
            local_1c = (uint)Conf[0xd0];
        }
        if (local_14 == 1) {
            local_1c = (uint)Conf[0xd1];
        }
        if (local_14 == 2) {
            local_1c = (uint)Conf[0xd2];
        }
        if (local_1c != 0) {
            enable_read_temperature_from_asic_chain(
                param_1,
                (gChain_Asic_Interval & 0xff) * (local_1c - 1 & 0xff) & 0xff);
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_18 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_1c - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_18 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_1c - 1), 0x20,
                        0);
                }
                local_20 = local_20 + 1;
            } while (((local_18 & 0xc0000000) != 0) && (local_20 < 2));
            local_20 = 0;
            if (Conf._116_4_ == 0x6ba) {
                set_BM1722_asic_register(param_1,
                                         gChain_Asic_Interval * (local_1c - 1),
                                         0x20, 0, 0x1980100);
            } else if (Conf._116_4_ == 0x6bd) {
                set_BM1725_asic_register(param_1,
                                         gChain_Asic_Interval * (local_1c - 1),
                                         0x20, 0, 0x1980100);
            }
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_18 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_1c - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_18 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_1c - 1), 0x20,
                        0);
                }
                local_20 = local_20 + 1;
            } while (((local_18 & 0xc0000000) != 0) && (local_20 < 2));
            local_20 = 0;
            if ((local_18 & 0xc0000000) == 0) {
                uVar2 = local_18 & 0xff;
                printf("\n\nASIC %d TEMP is : %d\n", local_1c, uVar2);
                if (local_14 == 0) {
                    *(uint *)(Sensor1_temp + (uint)param_1 * 4) = uVar2;
                }
                if (local_14 == 1) {
                    *(uint *)(Sensor2_temp + (uint)param_1 * 4) = uVar2;
                }
                if (local_14 == 2) {
                    *(uint *)(Sensor3_temp + (uint)param_1 * 4) = uVar2;
                }
                if (Conf[0xd3] == local_1c) {
                    if (uVar2 < Conf[0xd4]) {
                        if (*(char *)((int)&gStartTest + (uint)param_1) !=
                            '\x01') {
                            printf("\nASIC %d temperature is %d, waiting it "
                                   "raise to start temperature %d\n\n",
                                   local_1c, uVar2, (uint)Conf[0xd4]);
                        }
                    } else {
                        if (*(char *)((int)&gStartTest + (uint)param_1) !=
                            '\x01') {
                            printf("\nBegin test!!! Start sensor is %d, ASIC "
                                   "temperature is %d\n\n",
                                   local_1c, uVar2);
                        }
                        *(undefined1 *)((int)&gStartTest + (uint)param_1) = 1;
                    }
                }
            } else {
                printf("%s: do not read out ASIC %d temperature\n\n",
                       "read_asic_temperature", local_1c);
                *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 1;
            }
            if (Conf._116_4_ == 0x6ba) {
                set_BM1722_asic_register(param_1,
                                         gChain_Asic_Interval * (local_1c - 1),
                                         0x20, 0, 0x1980000);
            } else if (Conf._116_4_ == 0x6bd) {
                set_BM1725_asic_register(param_1,
                                         gChain_Asic_Interval * (local_1c - 1),
                                         0x20, 0, 0x1980000);
            }
            do {
                if (Conf._116_4_ == 0x6ba) {
                    local_18 = check_BM1722_asic_reg(
                        param_1, gChain_Asic_Interval * (local_1c - 1), 0x20,
                        0);
                } else if (Conf._116_4_ == 0x6bd) {
                    local_18 = check_BM1725_asic_reg(
                        param_1, gChain_Asic_Interval * (local_1c - 1), 0x20,
                        0);
                }
                local_20 = local_20 + 1;
            } while (((local_18 & 0xc0000000) != 0) && (local_20 < 2));
            if ((local_18 & 0xc0000000) == 0) {
                printf("ASIC %d Hash Board temperature is %d\n\n", local_1c,
                       local_18 & 0xff);
            } else {
                printf("%s: do not read out ASIC %d Hash Board temperature\n\n",
                       "read_asic_temperature", local_1c);
                *(undefined1 *)((int)&gNotReadOutTemp + (uint)param_1) = 1;
            }
        }
    }
    uVar1 = __udivsi3((((*(int *)(Sensor1_temp + (uint)param_1 * 4) +
                         *(int *)(Sensor2_temp + (uint)param_1 * 4) +
                         *(int *)(Sensor3_temp + (uint)param_1 * 4)) -
                        *(int *)(last_Sensor1_temp + (uint)param_1 * 4)) -
                       *(int *)(last_Sensor2_temp + (uint)param_1 * 4)) -
                          *(int *)(last_Sensor3_temp + (uint)param_1 * 4),
                      gSensor_number);
    *(undefined4 *)(temp_change + (uint)param_1 * 4) = uVar1;
    if ((0 < *(int *)(temp_change + (uint)param_1 * 4)) ||
        (*(int *)(temp_change + (uint)param_1 * 4) < 0)) {
        *(undefined4 *)(last_Sensor1_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor1_temp + (uint)param_1 * 4);
        *(undefined4 *)(last_Sensor2_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor2_temp + (uint)param_1 * 4);
        *(undefined4 *)(last_Sensor3_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor3_temp + (uint)param_1 * 4);
    }
    *(undefined4 *)(highest_temp + (uint)param_1 * 4) =
        *(undefined4 *)(Sensor1_temp + (uint)param_1 * 4);
    if (*(int *)(highest_temp + (uint)param_1 * 4) <
        *(int *)(Sensor2_temp + (uint)param_1 * 4)) {
        *(undefined4 *)(highest_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor2_temp + (uint)param_1 * 4);
    }
    if (*(int *)(highest_temp + (uint)param_1 * 4) <
        *(int *)(Sensor3_temp + (uint)param_1 * 4)) {
        *(undefined4 *)(highest_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor3_temp + (uint)param_1 * 4);
    }
    *(undefined4 *)(lowest_temp + (uint)param_1 * 4) =
        *(undefined4 *)(Sensor1_temp + (uint)param_1 * 4);
    if ((*(int *)(Sensor2_temp + (uint)param_1 * 4) <
         *(int *)(lowest_temp + (uint)param_1 * 4)) &&
        (*(int *)(Sensor2_temp + (uint)param_1 * 4) != 0)) {
        *(undefined4 *)(lowest_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor2_temp + (uint)param_1 * 4);
    }
    if ((*(int *)(Sensor3_temp + (uint)param_1 * 4) <
         *(int *)(lowest_temp + (uint)param_1 * 4)) &&
        (*(int *)(Sensor3_temp + (uint)param_1 * 4) != 0)) {
        *(undefined4 *)(lowest_temp + (uint)param_1 * 4) =
            *(undefined4 *)(Sensor3_temp + (uint)param_1 * 4);
    }
    if (*(int *)(gGlobalHighestTemp + (uint)param_1 * 4) <
        *(int *)(highest_temp + (uint)param_1 * 4)) {
        *(undefined4 *)(gGlobalHighestTemp + (uint)param_1 * 4) =
            *(undefined4 *)(highest_temp + (uint)param_1 * 4);
    }
    printf("\ngGlobalHighestTemp is %d\n\n",
           *(undefined4 *)(gGlobalHighestTemp + (uint)param_1 * 4));
    if ((int)(uint)Conf[0xd6] < *(int *)(highest_temp + (uint)param_1 * 4)) {
        *(undefined1 *)((int)&gHigherThanAlarmTemp + (uint)param_1) = 1;
    }
    uVar2 = *(int *)(highest_temp + (uint)param_1 * 4) -
            *(int *)(lowest_temp + (uint)param_1 * 4);
    if (((uint)Conf._220_4_ < uVar2) &&
        (*(undefined1 *)((int)&gHigherThanMaxTempGap + (uint)param_1) = 1,
         *(int *)(gMaxTempGap_value + (uint)param_1 * 4) < (int)uVar2)) {
        *(uint *)(gMaxTempGap_value + (uint)param_1 * 4) = uVar2;
        printf("gMaxTempGap_value is %d\n\n",
               *(undefined4 *)(gMaxTempGap_value + (uint)param_1 * 4));
    }
    return;
}

undefined4 test_eeprom(void)

{
    undefined4 uVar1;
    byte local_f;
    byte local_e[2];
    int local_c;

    local_e[1] = 0x90;
    local_e[0] = 0x5a;
    local_f = 0xa5;
    local_c = 0;
    printf("test_set_eeprom_val = %x\n", 0x5a);
    iic_write_reg(e2prom_fd, local_e + 1, 1, local_e, 1);
    usleep(100000);
    local_c = iic_read_reg(e2prom_fd, local_e + 1, 1, &local_f, 1);
    if (local_c == 1) {
        printf("test_get_eeprom_val = %x\n", (uint)local_f);
        if (local_f == local_e[0]) {
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

void save_eeprom_N(undefined1 param_1, undefined1 param_2)

{
    undefined1 local_11[8];
    undefined1 local_9;

    local_11[0] = param_1;
    local_9 = param_2;
    iic_write_reg(e2prom_fd, local_11, 1, &local_9, 1);
    return;
}

bool get_eeprom_N(undefined1 param_1, undefined4 param_2)

{
    int iVar1;
    undefined1 local_11[5];
    undefined4 local_c;

    local_c = 0;
    local_11[0] = param_1;
    iVar1 = iic_read_reg(e2prom_fd, local_11, 1, param_2, 1);
    return iVar1 == 1;
}

undefined1 save_byte_to_eeprom(undefined1 param_1, byte param_2)

{
    int iVar1;
    byte local_a;
    undefined1 local_9;

    local_9 = 1;
    save_eeprom_N(param_1, param_2);
    usleep(500000);
    iVar1 = get_eeprom_N(param_1, &local_a);
    if (iVar1 == 0) {
        puts("Get value from eeprom Error");
        local_9 = 0;
    } else {
        printf("The value write to eeprom : 0x%02X\n", (uint)param_2);
        printf("The value get from eeprom : 0x%02X\n", (uint)local_a);
        if (param_2 != local_a) {
            puts("Save eeprom Error");
            local_9 = 0;
        }
    }
    return local_9;
}

char save_voltage_info_to_eeprom(uint param_1, uint param_2)

{
    undefined1 uVar1;
    int iVar2;
    undefined3 local_18;
    undefined1 uStack_15;
    undefined2 local_14;
    undefined1 local_12;
    undefined1 local_11;
    uint local_10;
    char local_9;

    local_9 = '\0';
    local_11 = 0;
    local_12 = 0;
    _local_18 = CONCAT13((char)(param_1 / 10), 0xaa55);
    local_14 = (ushort)(byte)(param_2 / 10);
    uVar1 = CRC5(&local_18, 0x28);
    local_14 = CONCAT11(uVar1, (undefined1)local_14);
    iVar2 = test_eeprom();
    if (iVar2 != 0) {
        for (local_10 = 0; (int)local_10 < 6; local_10 = local_10 + 1) {
            local_9 =
                save_byte_to_eeprom((local_10 & 0xff) - 0x66 & 0xff,
                                    *(undefined1 *)((int)&local_18 + local_10));
            if (local_9 != '\x01') {
                puts("save_voltage_info_to_eeprom failed!");
                return local_9;
            }
        }
    }
    return local_9;
}

undefined4 open_i2c(void)

{
    uint local_20;
    undefined2 local_1c;
    undefined1 local_1a;
    byte local_19;
    uint local_18;
    undefined2 local_14;
    undefined1 local_12;
    undefined1 local_11;
    uint local_10;
    undefined2 local_c;
    undefined1 local_a;
    byte local_9;

    local_10 = (uint)gChain;
    local_c = 0;
    local_a = 4;
    local_9 = gChain;
    printf("--- %s on 7007, slave high = 0x%x, low = 0x%x\n", __FUNCTION___5185,
           4, (uint)gChain);
    i2c_fd = iic_init(&local_10);
    local_18 = (uint)gChain;
    local_14 = 1;
    local_12 = 2;
    local_11 = 0;
    printf("--- %s on 7007, slave high = 0x%x, low = 0x%x\n", __FUNCTION___5185,
           2, 0);
    power_fd = iic_init(&local_18);
    local_20 = (uint)gChain;
    local_1c = 0;
    local_1a = 10;
    local_19 = gChain;
    printf("--- %s on 7007, slave high = 0x%x, low = 0x%x\n", __FUNCTION___5185,
           10, (uint)gChain);
    e2prom_fd = iic_init(&local_20);
    return i2c_fd;
}

undefined4 close_i2c(void)

{
    printf("--- %s\n", "close_i2c");
    iic_uninit(e2prom_fd);
    iic_uninit(power_fd);
    iic_uninit(i2c_fd);
    return 0;
}

undefined4 iic_i2c_write(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = iic_write(i2c_fd, param_1, param_2);
    return uVar1;
}

undefined4 iic_i2c_read(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = iic_read(i2c_fd, param_1, param_2);
    return uVar1;
}

undefined4 iic_i2c_write_reg(undefined1 param_1, undefined4 param_2,
                             undefined4 param_3)

{
    undefined4 uVar1;
    undefined1 local_9;

    local_9 = param_1;
    uVar1 = iic_write_reg(power_fd, &local_9, 1, param_2, param_3);
    return uVar1;
}

undefined4 iic_i2c_read_reg(undefined1 param_1, undefined4 param_2,
                            undefined4 param_3)

{
    undefined4 uVar1;
    undefined1 local_9;

    local_9 = param_1;
    uVar1 = iic_read_reg(power_fd, &local_9, 1, param_2, param_3);
    return uVar1;
}

undefined4 dcr_uart_send(char param_1, void *param_2, size_t param_3)

{
    undefined4 uVar1;
    undefined1 local_20c;
    undefined1 local_20b;
    undefined1 auStack_20a[510];
    undefined4 local_c;

    local_c = 0;
    if (param_1 == -1) {
        printf("%s: invalid chain id\n", "dcr_uart_send");
        uVar1 = 0xffffffff;
    } else {
        memset(&local_20c, 0, 0x200);
        local_20c = 0x55;
        local_20b = 0xaa;
        memcpy(auStack_20a, param_2, param_3);
        uVar1 = uart_send(param_1, &local_20c, param_3 + 2);
    }
    return uVar1;
}

void uart_set_baud(undefined1 param_1, undefined4 param_2)

{
    undefined4 local_10;
    undefined1 local_9;

    local_10 = param_2;
    local_9 = param_1;
    printf("uart_set_config %d \n", param_2);
    uart_set_config(local_9, 0, &local_10, 4);
    return;
}

void key_callback(int param_1, int param_2)

{
    char *local_10[2];

    local_10[0] = "reset";
    local_10[1] = "ipreport";
    if (param_2 == 0) {
        printf("%s key pressed\n", local_10[param_1 + -0x100]);
        key_pressed = 1;
    } else if (param_2 == 1) {
        printf("%s key up\n", local_10[param_1 + -0x100]);
        key_pressed = 0;
    }
    if (param_1 == 0x100) {
        red_led_off();
        green_led_off();
    }
    return;
}

undefined4 open_key(void)

{
    reg_key_callback(0x12069);
    return 1;
}

void close_key(void)

{
    unreg_key_callback(0x12069);
    return;
}

undefined4 read_key(undefined1 *param_1)

{
    *param_1 = (char)key_pressed;
    return 1;
}

void write_lcd(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    lcd_clear_result();
    lcd_show_result(param_1, param_2, param_3);
    return;
}

void write_lcd_no_memset(undefined4 param_1, undefined4 param_2,
                         undefined4 param_3)

{
    lcd_show_result(param_1, param_2, param_3);
    return;
}

byte c2hex(byte param_1)

{
    byte local_9;

    local_9 = 0xff;
    if ((param_1 < 0x30) || (0x39 < param_1)) {
        if ((param_1 == 0x61) || (param_1 == 0x41)) {
            local_9 = 10;
        } else if ((param_1 == 0x62) || (param_1 == 0x42)) {
            local_9 = 0xb;
        } else if ((param_1 == 99) || (param_1 == 0x43)) {
            local_9 = 0xc;
        } else if ((param_1 == 100) || (param_1 == 0x44)) {
            local_9 = 0xd;
        } else if ((param_1 == 0x65) || (param_1 == 0x45)) {
            local_9 = 0xe;
        } else if ((param_1 == 0x66) || (param_1 == 0x46)) {
            local_9 = 0xf;
        } else {
            printf("input value error: %c\n", (uint)param_1);
        }
    } else {
        local_9 = param_1 & 0xf;
    }
    return local_9;
}

byte twoc2hex(undefined1 param_1, undefined1 param_2)

{
    char cVar1;
    byte bVar2;

    cVar1 = c2hex(param_1);
    bVar2 = c2hex(param_2);
    return bVar2 ^ cVar1 << 4;
}

int s2hex(int param_1, int param_2, int param_3)

{
    undefined1 uVar1;
    int iVar2;
    int local_14;

    if (((param_2 == 0) || (param_3 < 1)) || (param_1 == 0)) {
        printf("s2hex para error dst(%p), src(%p), inlen(%d)\n", param_1,
               param_2, param_3);
        iVar2 = -1;
    } else {
        for (local_14 = 0; local_14 < param_3 / 2; local_14 = local_14 + 1) {
            uVar1 = twoc2hex(*(undefined1 *)(param_2 + local_14 * 2),
                             *(undefined1 *)(param_2 + local_14 * 2 + 1));
            *(undefined1 *)(param_1 + local_14) = uVar1;
        }
        if (param_3 % 2 != 0) {
            uVar1 = twoc2hex(*(undefined1 *)(param_2 + local_14 * 2), 0);
            *(undefined1 *)(param_1 + local_14) = uVar1;
        }
        iVar2 = param_3 / 2 + param_3 % 2;
    }
    return iVar2;
}

undefined4 print_works(void)

{
    int iVar1;
    int iVar2;
    undefined4 extraout_r3;
    undefined4 extraout_r3_00;
    undefined4 uVar3;
    uint local_18;
    uint local_14;
    uint local_10;
    int local_c;

    printf("\n%s begin\n\n", "print_works");
    if (Conf._108_4_ == 1) {
        local_14 = 0;
        while (true) {
            if ((uint)Conf._112_4_ <= local_14)
                break;
            iVar1 = *(int *)(cgpu + (local_14 + 0x20028) * 4);
            for (local_18 = 0; local_18 < (uint)Conf._64_4_;
                 local_18 = local_18 + 1) {
                iVar2 = iVar1 + local_18 * 0xcc;
                printf("core[%02d][%02d].work=0x", local_14, local_18);
                for (local_c = 0; local_c < 0xb4; local_c = local_c + 1) {
                    printf("%02x", (uint) * (byte *)(iVar2 + local_c + 8));
                }
                printf(" nonce=0x%08x\n", *(undefined4 *)(iVar2 + 4));
            }
            putchar(10);
            local_14 = local_14 + 1;
        }
        printf("\n%s end\n\n", "print_works");
        uVar3 = extraout_r3;
    } else {
        local_10 = 0;
        while (true) {
            if ((uint)Conf._108_4_ <= local_10)
                break;
            iVar1 = *(int *)(cgpu + (local_10 + 0x20028) * 4);
            for (local_14 = 0; local_14 < (uint)Conf._112_4_;
                 local_14 = local_14 + 1) {
                for (local_18 = 0; local_18 < (uint)Conf._64_4_;
                     local_18 = local_18 + 1) {
                    iVar2 = iVar1 + (local_14 * Conf._64_4_ + local_18) * 0xcc;
                    printf("asic[%02d][%02d][%02d].work=0x", local_10, local_14,
                           local_18);
                    for (local_c = 0; local_c < 0xb4; local_c = local_c + 1) {
                        printf("%02x", (uint) * (byte *)(iVar2 + local_c + 8));
                    }
                    printf(" nonce=0x%08x\n", *(undefined4 *)(iVar2 + 4));
                }
                putchar(10);
            }
            putchar(10);
            local_10 = local_10 + 1;
        }
        printf("\n%s end\n\n", "print_works");
        uVar3 = extraout_r3_00;
    }
    return uVar3;
}

uint get_work(int param_1, int param_2, FILE *param_3, uint param_4)

{
    char *pcVar1;
    char acStack_420[1024];
    uint *local_20;
    int local_1c;
    uint local_18;
    char *local_14;

    memset(acStack_420, 0, 0x400);
    local_18 = 0;
    local_1c = 0;
    while (true) {
        pcVar1 = fgets(acStack_420, 0x3ff, param_3);
        if (pcVar1 == (char *)0x0) {
            return local_18;
        }
        if (param_4 <= local_18) {
            return local_18;
        }
        local_20 = (uint *)(*(int *)(cgpu + (param_1 + 0x20028) * 4) +
                            (param_4 * param_2 + local_18) * 0xcc);
        local_14 = strstr(acStack_420, "nonce");
        if (local_14 == (char *)0x0)
            break;
        for (local_14 = local_14 + 5; *local_14 == ' ';
             local_14 = local_14 + 1) {
        }
        s2hex(local_20 + 1, local_14, 8);
        local_14 = strstr(acStack_420, "work");
        if (local_14 == (char *)0x0)
            goto LAB_000126f6;
        for (local_14 = local_14 + 4; *local_14 == ' ';
             local_14 = local_14 + 1) {
        }
        s2hex(local_20 + 2, local_14, 0x168);
        for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
            local_20[local_1c + 0x2f] = 0;
        }
        *local_20 = local_18;
        local_18 = local_18 + 1;
    }
    local_14 = (char *)0x0;
LAB_000126f6:
    free(local_20);
    puts("get work err");
    return local_18;
}

undefined4 get_works(void)

{
    void *pvVar1;
    FILE *pFVar2;
    undefined4 uVar3;
    int iVar4;
    char acStack_64[64];
    undefined4 local_24;
    uint local_20;
    uint local_1c;
    uint local_18;
    uint local_14;

    memset(acStack_64, 0, 0x40);
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    printf("%s, Conf.AsicNum %d, Conf.CoreNum %d\n", "get_works", Conf._108_4_,
           Conf._112_4_);
    local_20 = 0;
    while (true) {
        if ((uint)Conf._108_4_ <= local_20) {
            cgpu._1049760_4_ = cgpu._525472_4_;
            local_18 = 0;
            for (local_14 = 0; local_14 < (uint)(Conf._112_4_ * Conf._108_4_);
                 local_14 = local_14 + 1) {
                if (*(int *)(cgpu + (local_14 + 0x20128) * 4) <
                    (int)cgpu._1049760_4_) {
                    cgpu._1049760_4_ =
                        *(undefined4 *)(cgpu + (local_14 + 0x20128) * 4);
                    local_18 = local_14;
                }
            }
            if ((uint)cgpu._1049760_4_ < (uint)Conf._64_4_) {
                write_lcd(1, "Get Less Work", 0xd);
                printf("%s: cgpu.subid[%d] = %d, is the least pattern number\n",
                       "get_works", local_18, cgpu._1049760_4_);
                uVar3 = 0xffffffff;
            } else {
                uVar3 = 0;
            }
            return uVar3;
        }
        pvVar1 = malloc(Conf._112_4_ * Conf._64_4_ * 0xcc);
        *(void **)(cgpu + (local_20 + 0x20028) * 4) = pvVar1;
        if (*(int *)(cgpu + (local_20 + 0x20028) * 4) == 0)
            break;
        for (local_1c = 0; local_1c < (uint)Conf._112_4_;
             local_1c = local_1c + 1) {
            sprintf(acStack_64, "%s%02d%s%03d.txt", 0x2b632c, local_20,
                    0x2b636c, local_1c);
            iVar4 = local_20 * Conf._112_4_ + local_1c;
            pFVar2 = fopen(acStack_64, "r");
            *(FILE **)(cgpu + iVar4 * 4) = pFVar2;
            if (*(int *)(cgpu + (local_20 * Conf._112_4_ + local_1c) * 4) ==
                0) {
                printf("%s: Open test file %s error\n", "get_works",
                       acStack_64);
                return 0xffffffff;
            }
            iVar4 = local_20 * Conf._112_4_ + local_1c;
            uVar3 = get_work(
                local_20, local_1c,
                *(undefined4 *)(cgpu +
                                (local_20 * Conf._112_4_ + local_1c) * 4),
                Conf._64_4_);
            *(undefined4 *)(cgpu + (iVar4 + 0x20128) * 4) = uVar3;
            fclose(*(FILE **)(cgpu + (local_20 * Conf._112_4_ + local_1c) * 4));
        }
        local_20 = local_20 + 1;
    }
    printf("%s: malloc struct work err!\n", "get_works");
    return 0xffffffff;
}

void write_pic(undefined1 param_1, undefined1 param_2, undefined1 param_3)

{
    undefined1 local_b;
    undefined1 local_a;
    undefined1 local_9;

    local_b = param_3;
    local_a = param_2;
    local_9 = param_1;
    iic_i2c_write(&local_b, 1);
    return;
}

undefined1 read_pic(void)

{
    undefined1 local_9;

    local_9 = 0;
    iic_i2c_read(&local_9, 1);
    return local_9;
}

undefined4 set_PIC16F1704_flash_point32_ter(undefined1 param_1,
                                            undefined1 param_2, byte param_3,
                                            byte param_4)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_24;
    byte local_20;
    byte bStack_1f;
    undefined1 uStack_1e;
    undefined1 uStack_1d;
    byte local_1c[4];
    undefined1 local_18;
    undefined1 uStack_17;
    short local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 6;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = (ushort)param_3 + (ushort)param_4 + 7;
    uVar1 = (undefined1)((ushort)local_14 >> 8);
    _local_18 = CONCAT11((char)local_14, uVar1);
    local_24 = 0x106aa55;
    _local_20 =
        CONCAT13((char)local_14, CONCAT12(uVar1, CONCAT11(param_4, param_3)));
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 8; local_11 = local_11 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar4 = (uint)local_11;
        bVar2 = read_pic(param_1, param_2);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    if ((local_1c[0] == 1) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "set_PIC16F1704_flash_point32_ter");
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "set_PIC16F1704_flash_point32_ter", (uint)local_1c[0],
               (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 send_data_to_PIC16F1704(undefined1 param_1, undefined1 param_2,
                                   int param_3)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined1 local_20;
    undefined1 uStack_1f;
    byte local_1c[4];
    undefined1 local_18;
    undefined1 uStack_17;
    undefined1 local_14;
    byte local_13;
    short local_12;

    local_14 = 0x14;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_12 = 0x16;
    for (local_13 = 0; local_13 < 0x10; local_13 = local_13 + 1) {
        local_12 = (ushort) * (byte *)(param_3 + (uint)local_13) + local_12;
    }
    uVar1 = (undefined1)((ushort)local_12 >> 8);
    _local_18 = CONCAT11((char)local_12, uVar1);
    local_34 = 0x214aa55;
    for (local_13 = 0; local_13 < 0x10; local_13 = local_13 + 1) {
        *(undefined1 *)((int)&local_30 + (uint)local_13) =
            *(undefined1 *)(param_3 + (uint)local_13);
    }
    _local_20 = CONCAT11((char)local_12, uVar1);
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_13 = 0; local_13 < 0x16; local_13 = local_13 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_34 + (uint)local_13));
    }
    usleep(100000);
    for (local_13 = 0; local_13 < 2; local_13 = local_13 + 1) {
        uVar4 = (uint)local_13;
        bVar2 = read_pic(param_1, param_2);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    if ((local_1c[0] == 2) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "send_data_to_PIC16F1704");
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "send_data_to_PIC16F1704", (uint)local_1c[0], (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 read_PIC16F1704_flash_point32_ter(undefined1 param_1,
                                             undefined1 param_2, byte *param_3,
                                             byte *param_4)

{
    undefined1 uVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 local_28;
    undefined2 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined2 local_18;
    short local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c = 0;
    local_20 = 0xff;
    local_14 = 0xc;
    local_18 = 0xc00;
    local_28 = 0x804aa55;
    local_24 = 0xc00;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_28 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        uVar3 = (uint)local_11;
        uVar1 = read_pic(param_1, param_2);
        *(undefined1 *)((int)&local_20 + uVar3) = uVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    if ((local_20._1_1_ == 8) && ((char)local_20 == '\x06')) {
        local_14 = local_20._2_1_ + 0xe + (ushort)local_20._3_1_;
        if (((byte)((ushort)local_14 >> 8) == (byte)local_1c) &&
            ((byte)local_14 == local_1c._1_1_)) {
            *param_3 = local_20._2_1_;
            *param_4 = local_20._3_1_;
            printf(
                "\n--- %s ok! flash_addr_h = 0x%02x, flash_addr_l = 0x%02x\n\n",
                "read_PIC16F1704_flash_point32_ter", (uint)*param_3,
                (uint)*param_4);
            uVar2 = 1;
        } else {
            printf(
                "\n--- %s failed! read_back_data[0] = 0x%x, read_back_data[1] "
                "= 0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, "
                "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n\n",
                "read_PIC16F1704_flash_point32_ter", local_20 & 0xff, 8,
                (uint)local_20._2_1_, (uint)local_20._3_1_,
                (uint)(byte)local_1c, (uint)local_1c._1_1_);
            uVar2 = 0;
        }
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%x, read_back_data[1] = "
               "0x%x, read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, "
               "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n\n",
               "read_PIC16F1704_flash_point32_ter", local_20 & 0xff,
               (uint)local_20._1_1_, (uint)local_20._2_1_, (uint)local_20._3_1_,
               (uint)(byte)local_1c, (uint)local_1c._1_1_);
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 read_PIC16F1704_flash_data(undefined1 param_1, undefined1 param_2,
                                      int param_3)

{
    byte bVar1;
    undefined1 uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    undefined4 uVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    uint uVar21;
    uint uVar22;
    undefined4 local_4c;
    undefined2 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined2 local_30;
    ushort local_2c;
    undefined1 local_2a;
    byte local_29;

    local_2a = 4;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_44 = 0xff;
    local_2c = 7;
    local_30 = 0x700;
    local_4c = 0x304aa55;
    local_48 = 0x700;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_29 = 0; local_29 < 6; local_29 = local_29 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_4c + (uint)local_29));
    }
    usleep(300000);
    for (local_29 = 0; local_29 < 0x14; local_29 = local_29 + 1) {
        uVar18 = (uint)local_29;
        uVar2 = read_pic(param_1, param_2);
        *(undefined1 *)((int)&local_44 + uVar18) = uVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    uVar4 = local_44 >> 0x10 & 0xff;
    uVar18 = local_44 >> 0x18;
    uVar5 = local_40 & 0xff;
    uVar6 = local_40 >> 8 & 0xff;
    uVar7 = local_40 >> 0x10 & 0xff;
    uVar19 = local_40 >> 0x18;
    uVar8 = local_3c & 0xff;
    uVar9 = local_3c >> 8 & 0xff;
    uVar10 = local_3c >> 0x10 & 0xff;
    uVar20 = local_3c >> 0x18;
    uVar11 = local_38 & 0xff;
    uVar12 = local_38 >> 8 & 0xff;
    uVar13 = local_38 >> 0x10 & 0xff;
    uVar21 = local_38 >> 0x18;
    uVar14 = local_34 & 0xff;
    uVar15 = local_34 >> 8 & 0xff;
    uVar16 = local_34 >> 0x10 & 0xff;
    uVar22 = local_34 >> 0x18;
    printf("--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, "
           "read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,         "
           "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, "
           "read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         "
           "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, "
           "read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,         "
           "read_back_data[12] = 0x%x, read_back_data[13] = 0x%x, "
           "read_back_data[14] = 0x%x, read_back_data[15] = 0x%x,         "
           "read_back_data[16] = 0x%x, read_back_data[17] = 0x%x, "
           "read_back_data[18] = 0x%x, read_back_data[19] = 0x%x\n",
           "read_PIC16F1704_flash_data", local_44 & 0xff, local_44 >> 8 & 0xff,
           uVar4, uVar18, uVar5, uVar6, uVar7, uVar19, uVar8, uVar9, uVar10,
           uVar20, uVar11, uVar12, uVar13, uVar21, uVar14, uVar15, uVar16,
           uVar22);
    usleep(100000);
    if ((local_44._1_1_ == '\x03') && ((local_44 & 0xff) == 0x14)) {
        local_2c = (byte)local_44 + 3 + (ushort)local_44._2_1_ +
                   (ushort)local_44._3_1_ + (ushort)(byte)local_40 +
                   (ushort)local_40._1_1_ + (ushort)local_40._2_1_ +
                   (ushort)local_40._3_1_ + (ushort)(byte)local_3c +
                   (ushort)local_3c._1_1_ + (ushort)local_3c._2_1_ +
                   (ushort)local_3c._3_1_ + (ushort)(byte)local_38 +
                   (ushort)local_38._1_1_ + (ushort)local_38._2_1_ +
                   (ushort)local_38._3_1_ + (ushort)(byte)local_34 +
                   (ushort)local_34._1_1_;
        if (((char)(local_2c >> 8) == local_34._2_1_) &&
            (uVar3 = (uint)(byte)local_2c, uVar3 == local_34 >> 0x18)) {
            for (local_29 = 0; local_29 < 0x10; local_29 = local_29 + 1) {
                bVar1 = *(byte *)((int)&local_44 + local_29 + 2);
                uVar3 = (uint)bVar1;
                *(byte *)(param_3 + (uint)local_29) = bVar1;
            }
            printf("\n--- %s ok\n\n", "read_PIC16F1704_flash_data", uVar3,
                   (uint)local_29, uVar4, uVar18, uVar5, uVar6, uVar7, uVar19,
                   uVar8, uVar9, uVar10, uVar20, uVar11, uVar12, uVar13, uVar21,
                   uVar14, uVar15, uVar16, uVar22);
            uVar17 = 1;
        } else {
            printf("\n--- %s failed! crc = 0x%04x\n\n",
                   "read_PIC16F1704_flash_data", (uint)local_2c, (uint)local_2c,
                   uVar4, uVar18, uVar5, uVar6, uVar7, uVar19, uVar8, uVar9,
                   uVar10, uVar20, uVar11, uVar12, uVar13, uVar21, uVar14,
                   uVar15, uVar16, uVar22);
            uVar17 = 0;
        }
    } else {
        printf("\n--- %s failed!\n\n", "read_PIC16F1704_flash_data");
        uVar17 = 0;
    }
    return uVar17;
}

undefined4 erase_PIC16F1704_flash(undefined1 param_1, undefined1 param_2)

{
    byte bVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 local_24;
    undefined2 local_20;
    byte local_1c[4];
    undefined2 local_18;
    undefined2 local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = 8;
    local_18 = 0x800;
    local_24 = 0x404aa55;
    local_20 = 0x800;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar3 = (uint)local_11;
        bVar1 = read_pic(param_1, param_2);
        local_1c[uVar3] = bVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    if ((local_1c[0] == 4) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "erase_PIC16F1704_flash");
        uVar2 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "erase_PIC16F1704_flash", (uint)local_1c[0], (uint)local_1c[1]);
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 write_data_int32_to_PIC16F1704_flash(undefined1 param_1,
                                                undefined1 param_2)

{
    byte bVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 local_24;
    undefined2 local_20;
    byte local_1c[4];
    undefined2 local_18;
    undefined2 local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = 9;
    local_18 = 0x900;
    local_24 = 0x504aa55;
    local_20 = 0x900;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(200000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar3 = (uint)local_11;
        bVar1 = read_pic(param_1, param_2);
        local_1c[uVar3] = bVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    if ((local_1c[0] == 5) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "write_data_int32_to_PIC16F1704_flash");
        uVar2 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "write_data_int32_to_PIC16F1704_flash", (uint)local_1c[0],
               (uint)local_1c[1]);
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 jump_from_loader_to_app_PIC16F1704(undefined1 param_1,
                                              undefined1 param_2)

{
    byte bVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 local_24;
    undefined2 local_20;
    byte local_1c[4];
    undefined2 local_18;
    undefined2 local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = 10;
    local_18 = 0xa00;
    local_24 = 0x604aa55;
    local_20 = 0xa00;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar3 = (uint)local_11;
        bVar1 = read_pic(param_2, param_1);
        local_1c[uVar3] = bVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(300000);
    if ((local_1c[0] == 6) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "jump_from_loader_to_app_PIC16F1704");
        uVar2 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "jump_from_loader_to_app_PIC16F1704", (uint)local_1c[0],
               (uint)local_1c[1]);
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 reset_PIC16F1704_pic(undefined1 param_1, undefined1 param_2)

{
    byte bVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 local_24;
    undefined2 local_20;
    byte local_1c[4];
    undefined2 local_18;
    undefined2 local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = 0xb;
    local_18 = 0xb00;
    local_24 = 0x704aa55;
    local_20 = 0xb00;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar3 = (uint)local_11;
        bVar1 = read_pic(param_2, param_1);
        local_1c[uVar3] = bVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(1000000);
    if ((local_1c[0] == 7) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "reset_PIC16F1704_pic");
        uVar2 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "reset_PIC16F1704_pic", (uint)local_1c[0], (uint)local_1c[1]);
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 set_PIC16F1704_voltage(undefined1 param_1, undefined1 param_2,
                                  byte param_3)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_24;
    undefined2 local_20;
    undefined1 local_1e;
    undefined1 uStack_1d;
    byte local_1c[4];
    undefined2 local_18;
    short local_14;
    byte local_12;
    byte local_11;

    local_12 = 5;
    local_18 = 0xff;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1e = 0;
    printf("\n--- %s\n", "set_PIC16F1704_voltage", 0, &uStack_1d);
    local_14 = (ushort)local_12 + (ushort)param_3 + 0x10;
    uVar1 = (undefined1)((ushort)local_14 >> 8);
    local_1e = (undefined1)local_14;
    local_18 = CONCAT11(local_1e, uVar1);
    local_24 = CONCAT13(0x10, CONCAT12(local_12, 0xaa55));
    local_20 = CONCAT11(uVar1, param_3);
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 7; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(200000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar4 = (uint)local_11;
        bVar2 = read_pic(param_2, param_1);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    if ((local_1c[0] == 0x10) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "set_PIC16F1704_voltage");
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "set_PIC16F1704_voltage", (uint)local_1c[0], (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 write_hash_ID_PIC16F1704(undefined1 param_1, undefined1 param_2,
                                    int param_3)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined1 local_20;
    undefined1 uStack_1f;
    byte local_1c[4];
    undefined1 local_18;
    undefined1 uStack_17;
    undefined1 local_14;
    byte local_13;
    short local_12;

    local_14 = 0x10;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_12 = 0x22;
    for (local_13 = 0; local_13 < 0xc; local_13 = local_13 + 1) {
        local_12 = (ushort) * (byte *)(param_3 + (uint)local_13) + local_12;
    }
    uVar1 = (undefined1)((ushort)local_12 >> 8);
    _local_18 = CONCAT11((char)local_12, uVar1);
    local_30 = 0x1210aa55;
    for (local_13 = 0; local_13 < 0xc; local_13 = local_13 + 1) {
        *(undefined1 *)((int)&local_2c + (uint)local_13) =
            *(undefined1 *)(param_3 + (uint)local_13);
    }
    _local_20 = CONCAT11((char)local_12, uVar1);
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_13 = 0; local_13 < 0x12; local_13 = local_13 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_30 + (uint)local_13));
    }
    usleep(400000);
    for (local_13 = 0; local_13 < 2; local_13 = local_13 + 1) {
        uVar4 = (uint)local_13;
        bVar2 = read_pic(param_2, param_1);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    if ((local_1c[0] == 0x12) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "write_hash_ID_PIC16F1704");
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "write_hash_ID_PIC16F1704", (uint)local_1c[0],
               (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 read_hash_id_PIC16F1704(undefined1 param_1, undefined1 param_2,
                                   int param_3)

{
    byte bVar1;
    undefined1 uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    undefined4 uVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    uint uVar18;
    undefined4 local_48;
    undefined2 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined2 local_30;
    ushort local_2c;
    undefined1 local_2a;
    byte local_29;

    local_2a = 4;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_40 = 0xff;
    local_2c = 0x17;
    local_30 = 0x1700;
    local_48 = 0x1304aa55;
    local_44 = 0x1700;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_29 = 0; local_29 < 6; local_29 = local_29 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_48 + (uint)local_29));
    }
    usleep(200000);
    for (local_29 = 0; local_29 < 0x10; local_29 = local_29 + 1) {
        uVar15 = (uint)local_29;
        uVar2 = read_pic(param_1, param_2);
        *(undefined1 *)((int)&local_40 + uVar15) = uVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    uVar4 = local_40 >> 0x10 & 0xff;
    uVar15 = local_40 >> 0x18;
    uVar5 = local_3c & 0xff;
    uVar6 = local_3c >> 8 & 0xff;
    uVar7 = local_3c >> 0x10 & 0xff;
    uVar16 = local_3c >> 0x18;
    uVar8 = local_38 & 0xff;
    uVar9 = local_38 >> 8 & 0xff;
    uVar10 = local_38 >> 0x10 & 0xff;
    uVar17 = local_38 >> 0x18;
    uVar11 = local_34 & 0xff;
    uVar12 = local_34 >> 8 & 0xff;
    uVar13 = local_34 >> 0x10 & 0xff;
    uVar18 = local_34 >> 0x18;
    printf("--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, "
           "read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,        "
           "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, "
           "read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,        "
           "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, "
           "read_back_data[10] = 0x%x, read_back_data[11] = 0x%x,        "
           "read_back_data[12] = 0x%x, read_back_data[13] = 0x%x, "
           "read_back_data[14] = 0x%x, read_back_data[15] = 0x%x\n",
           "read_hash_id_PIC16F1704", local_40 & 0xff, local_40 >> 8 & 0xff,
           uVar4, uVar15, uVar5, uVar6, uVar7, uVar16, uVar8, uVar9, uVar10,
           uVar17, uVar11, uVar12, uVar13, uVar18);
    if ((local_40._1_1_ == '\x13') && ((local_40 & 0xff) == 0x10)) {
        local_2c = (byte)local_40 + 0x13 + (ushort)local_40._2_1_ +
                   (ushort)local_40._3_1_ + (ushort)(byte)local_3c +
                   (ushort)local_3c._1_1_ + (ushort)local_3c._2_1_ +
                   (ushort)local_3c._3_1_ + (ushort)(byte)local_38 +
                   (ushort)local_38._1_1_ + (ushort)local_38._2_1_ +
                   (ushort)local_38._3_1_ + (ushort)(byte)local_34 +
                   (ushort)local_34._1_1_;
        if (((char)(local_2c >> 8) == local_34._2_1_) &&
            (uVar3 = (uint)(byte)local_2c, uVar3 == local_34 >> 0x18)) {
            for (local_29 = 0; local_29 < 0xc; local_29 = local_29 + 1) {
                bVar1 = *(byte *)((int)&local_40 + local_29 + 2);
                uVar3 = (uint)bVar1;
                *(byte *)(param_3 + (uint)local_29) = bVar1;
            }
            printf("\n--- %s ok\n\n", "read_hash_id_PIC16F1704", uVar3,
                   (uint)local_29, uVar4, uVar15, uVar5, uVar6, uVar7, uVar16,
                   uVar8, uVar9, uVar10, uVar17, uVar11, uVar12, uVar13,
                   uVar18);
            uVar14 = 1;
        } else {
            printf("\n--- %s failed! crc = 0x%04x\n\n",
                   "read_hash_id_PIC16F1704", (uint)local_2c, (uint)local_2c,
                   uVar4, uVar15, uVar5, uVar6, uVar7, uVar16, uVar8, uVar9,
                   uVar10, uVar17, uVar11, uVar12, uVar13, uVar18);
            uVar14 = 0;
        }
    } else {
        printf("\n--- %s failed!\n\n", "read_hash_id_PIC16F1704");
        uVar14 = 0;
    }
    return uVar14;
}

undefined4 enable_PIC16F1704_dc_dc(undefined1 param_1, undefined1 param_2,
                                   byte param_3)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_24;
    undefined2 local_20;
    undefined1 local_1e;
    undefined1 uStack_1d;
    byte local_1c[4];
    undefined2 local_18;
    short local_14;
    byte local_12;
    byte local_11;

    local_12 = 5;
    local_18 = 0xff;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1e = 0;
    printf("\n--- %s\n", "enable_PIC16F1704_dc_dc", 0, &uStack_1d);
    local_14 = (ushort)local_12 + (ushort)param_3 + 0x15;
    uVar1 = (undefined1)((ushort)local_14 >> 8);
    local_1e = (undefined1)local_14;
    local_18 = CONCAT11(local_1e, uVar1);
    local_24 = CONCAT13(0x15, CONCAT12(local_12, 0xaa55));
    local_20 = CONCAT11(uVar1, param_3);
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 7; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar4 = (uint)local_11;
        bVar2 = read_pic(param_2, param_1);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    if ((local_1c[0] == 0x15) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "enable_PIC16F1704_dc_dc");
        usleep(500000);
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "enable_PIC16F1704_dc_dc", (uint)local_1c[0], (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 heart_beat_PIC16F1704(undefined1 param_1, undefined1 param_2)

{
    undefined1 uVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 local_28;
    undefined2 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined2 local_18;
    undefined2 local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c = 0;
    local_20 = 0xff;
    local_14 = 0x1a;
    local_18 = 0x1a00;
    local_28 = 0x1604aa55;
    local_24 = 0x1a00;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_28 + (uint)local_11));
    }
    usleep(100000);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        uVar3 = (uint)local_11;
        uVar1 = read_pic(param_2, param_1);
        *(undefined1 *)((int)&local_20 + uVar3) = uVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    if ((local_20._1_1_ == '\x16') && (local_20._2_1_ == '\x01')) {
        printf("\n--- %s ok\n\n", "heart_beat_PIC16F1704");
        uVar2 = 1;
    } else {
        printf("\n--- %s failed!\n\n", "heart_beat_PIC16F1704");
        uVar2 = 0;
    }
    return uVar2;
}

void pic_heart_beat_func(undefined1 *param_1)

{
    undefined1 uVar1;
    undefined1 uVar2;

    uVar1 = *param_1;
    uVar2 = param_1[1];
    do {
        heart_beat_PIC16F1704(uVar1, uVar2);
        sleep(10);
    } while (true);
}

undefined4 get_PIC16F1704_software_version(undefined1 param_1,
                                           undefined1 param_2, byte *param_3)

{
    undefined1 uVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined4 local_28;
    undefined2 local_24;
    undefined4 local_20;
    byte local_1c;
    undefined2 local_18;
    ushort local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c = 0;
    local_20 = 0xff;
    local_14 = 0x1b;
    local_18 = 0x1b00;
    local_28 = 0x1704aa55;
    local_24 = 0x1b00;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_28 + (uint)local_11));
    }
    usleep(200000);
    for (local_11 = 0; local_11 < 5; local_11 = local_11 + 1) {
        uVar5 = (uint)local_11;
        uVar1 = read_pic(param_1, param_2);
        *(undefined1 *)((int)&local_20 + uVar5) = uVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    uVar2 = local_20 >> 0x10 & 0xff;
    uVar5 = local_20 >> 0x18;
    uVar3 = (uint)local_1c;
    printf("--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, "
           "read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, "
           "read_back_data[4] = 0x%x\n",
           "get_PIC16F1704_software_version", local_20 & 0xff,
           local_20 >> 8 & 0xff, uVar2, uVar5, uVar3);
    if ((local_20._1_1_ == '\x17') && ((local_20 & 0xff) == 5)) {
        local_14 = (byte)local_20 + 0x17 + (ushort)local_20._2_1_;
        if (((char)(local_14 >> 8) == local_20._3_1_) &&
            ((byte)local_14 == local_1c)) {
            *param_3 = local_20._2_1_;
            printf("\n--- %s ok, version = 0x%02x\n\n",
                   "get_PIC16F1704_software_version", (uint)*param_3,
                   (uint)*param_3, uVar2, uVar5, uVar3);
            uVar4 = 1;
        } else {
            printf("\n--- %s failed! crc = 0x%04x\n\n",
                   "get_PIC16F1704_software_version", (uint)local_14,
                   (uint)local_14, uVar2, uVar5, uVar3);
            uVar4 = 0;
        }
    } else {
        printf("\n--- %s failed!\n\n", "get_PIC16F1704_software_version");
        uVar4 = 0;
    }
    return uVar4;
}

undefined4 get_PIC16F1704_voltage(undefined1 param_1, undefined1 param_2,
                                  byte *param_3)

{
    undefined1 uVar1;
    uint uVar2;
    uint uVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined4 local_28;
    undefined2 local_24;
    undefined4 local_20;
    byte local_1c;
    undefined2 local_18;
    ushort local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c = 0;
    local_20 = 0xff;
    local_14 = 0x1c;
    local_18 = 0x1c00;
    local_28 = 0x1804aa55;
    local_24 = 0x1c00;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_28 + (uint)local_11));
    }
    usleep(200000);
    for (local_11 = 0; local_11 < 5; local_11 = local_11 + 1) {
        uVar5 = (uint)local_11;
        uVar1 = read_pic(param_1, param_2);
        *(undefined1 *)((int)&local_20 + uVar5) = uVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    uVar2 = local_20 >> 0x10 & 0xff;
    uVar5 = local_20 >> 0x18;
    uVar3 = (uint)local_1c;
    printf("--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, "
           "read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, "
           "read_back_data[4] = 0x%x\n",
           "get_PIC16F1704_voltage", local_20 & 0xff, local_20 >> 8 & 0xff,
           uVar2, uVar5, uVar3);
    if ((local_20._1_1_ == '\x18') && ((local_20 & 0xff) == 5)) {
        local_14 = (byte)local_20 + 0x18 + (ushort)local_20._2_1_;
        if (((char)(local_14 >> 8) == local_20._3_1_) &&
            ((byte)local_14 == local_1c)) {
            *param_3 = local_20._2_1_;
            printf("\n--- %s ok, voltage = 0x%02x\n\n",
                   "get_PIC16F1704_voltage", (uint)*param_3, (uint)*param_3,
                   uVar2, uVar5, uVar3);
            uVar4 = 1;
        } else {
            printf("\n--- %s failed! crc = 0x%04x\n\n",
                   "get_PIC16F1704_voltage", (uint)local_14, (uint)local_14,
                   uVar2, uVar5, uVar3);
            uVar4 = 0;
        }
    } else {
        printf("\n--- %s failed!\n\n", "get_PIC16F1704_voltage");
        uVar4 = 0;
    }
    return uVar4;
}

undefined4 write_temperature_offset_PIC16F1704(undefined1 param_1,
                                               undefined1 param_2, int param_3)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined1 local_20;
    undefined1 uStack_1f;
    byte local_1c[4];
    undefined1 local_18;
    undefined1 uStack_17;
    undefined1 local_14;
    byte local_13;
    short local_12;

    local_14 = 0xc;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_28 = 0;
    local_24 = 0;
    local_12 = 0x2e;
    for (local_13 = 0; local_13 < 8; local_13 = local_13 + 1) {
        local_12 = (ushort) * (byte *)(param_3 + (uint)local_13) + local_12;
    }
    uVar1 = (undefined1)((ushort)local_12 >> 8);
    _local_18 = CONCAT11((char)local_12, uVar1);
    local_2c = 0x220caa55;
    for (local_13 = 0; local_13 < 8; local_13 = local_13 + 1) {
        *(undefined1 *)((int)&local_28 + (uint)local_13) =
            *(undefined1 *)(param_3 + (uint)local_13);
    }
    _local_20 = CONCAT11((char)local_12, uVar1);
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_13 = 0; local_13 < 0xe; local_13 = local_13 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_2c + (uint)local_13));
    }
    usleep(200000);
    for (local_13 = 0; local_13 < 2; local_13 = local_13 + 1) {
        uVar4 = (uint)local_13;
        bVar2 = read_pic(param_1, param_2);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    if ((local_1c[0] == 0x22) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "write_temperature_offset_PIC16F1704");
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "write_temperature_offset_PIC16F1704", (uint)local_1c[0],
               (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 read_temperature_offset_PIC16F1704(undefined1 param_1,
                                              undefined1 param_2, int param_3)

{
    byte bVar1;
    undefined1 uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    undefined4 uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    undefined4 local_3c;
    undefined2 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined2 local_28;
    ushort local_24;
    undefined1 local_22;
    byte local_21;

    local_22 = 4;
    local_30 = 0;
    local_2c = 0;
    local_34 = 0xff;
    local_21 = 0;
    local_24 = 0x27;
    local_28 = 0x2700;
    local_3c = 0x2304aa55;
    local_38 = 0x2700;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_21 = 0; local_21 < 6; local_21 = local_21 + 1) {
        write_pic(param_1, param_2,
                  *(undefined1 *)((int)&local_3c + (uint)local_21));
    }
    usleep(200000);
    for (local_21 = 0; local_21 < 0xc; local_21 = local_21 + 1) {
        uVar12 = (uint)local_21;
        uVar2 = read_pic(param_1, param_2);
        *(undefined1 *)((int)&local_34 + uVar12) = uVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    uVar3 = local_34 >> 0x10 & 0xff;
    uVar12 = local_34 >> 0x18;
    uVar4 = local_30 & 0xff;
    uVar5 = local_30 >> 8 & 0xff;
    uVar6 = local_30 >> 0x10 & 0xff;
    uVar13 = local_30 >> 0x18;
    uVar7 = local_2c & 0xff;
    uVar8 = local_2c >> 8 & 0xff;
    uVar9 = local_2c >> 0x10 & 0xff;
    uVar14 = local_2c >> 0x18;
    printf("--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, "
           "read_back_data[2] = 0x%x, read_back_data[3] = 0x%x,         "
           "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x, "
           "read_back_data[6] = 0x%x, read_back_data[7] = 0x%x,         "
           "read_back_data[8] = 0x%x, read_back_data[9] = 0x%x, "
           "read_back_data[10] = 0x%x, read_back_data[11] = 0x%x\n",
           "read_temperature_offset_PIC16F1704", local_34 & 0xff,
           local_34 >> 8 & 0xff, uVar3, uVar12, uVar4, uVar5, uVar6, uVar13,
           uVar7, uVar8, uVar9, uVar14);
    if ((local_34._1_1_ == '#') && ((local_34 & 0xff) == 0xc)) {
        local_24 = (byte)local_34 + 0x23 + (ushort)local_34._2_1_ +
                   (ushort)local_34._3_1_ + (ushort)(byte)local_30 +
                   (ushort)local_30._1_1_ + (ushort)local_30._2_1_ +
                   (ushort)local_30._3_1_ + (ushort)(byte)local_2c +
                   (ushort)local_2c._1_1_;
        if (((char)(local_24 >> 8) == local_2c._2_1_) &&
            (uVar10 = (uint)(byte)local_24, uVar10 == local_2c >> 0x18)) {
            for (local_21 = 0; local_21 < 8; local_21 = local_21 + 1) {
                bVar1 = *(byte *)((int)&local_34 + local_21 + 2);
                uVar10 = (uint)bVar1;
                *(byte *)(param_3 + (uint)local_21) = bVar1;
            }
            printf("\n--- %s ok\n\n", "read_temperature_offset_PIC16F1704",
                   uVar10, (uint)local_21, uVar3, uVar12, uVar4, uVar5, uVar6,
                   uVar13, uVar7, uVar8, uVar9, uVar14);
            uVar11 = 1;
        } else {
            printf("\n--- %s failed! crc = 0x%04x\n\n",
                   "read_temperature_offset_PIC16F1704", (uint)local_24,
                   (uint)local_24, uVar3, uVar12, uVar4, uVar5, uVar6, uVar13,
                   uVar7, uVar8, uVar9, uVar14);
            uVar11 = 0;
        }
    } else {
        printf("\n--- %s failed!\n\n", "read_temperature_offset_PIC16F1704");
        uVar11 = 0;
    }
    return uVar11;
}

undefined4 erase_PIC16F1704_app_flash(undefined4 param_1, undefined1 param_2)

{
    uint local_c;

    set_PIC16F1704_flash_point32_ter(param_1, param_2, 6, 0);
    printf("%s: erase_loop = %d\n", "erase_PIC16F1704_app_flash", 0x4c);
    local_c = 0;
    while (true) {
        if (0x4b < local_c)
            break;
        erase_PIC16F1704_flash(param_1, param_2);
        local_c = local_c + 1;
    }
    return 0x4c;
}

undefined4 PIC1704_update_pic_app_program(undefined4 param_1,
                                          undefined1 param_2)

{
    uint uVar1;
    undefined4 extraout_r3;
    undefined4 uVar2;
    undefined4 local_13d0;
    undefined4 local_13cc;
    undefined4 local_13c8;
    undefined4 local_13c4;
    char local_13c0[8];
    undefined4 uStack_13b8;
    undefined4 auStack_13b4[1249];
    FILE *local_30;
    int local_2c;
    uint local_28;
    byte local_24;
    byte local_23;
    byte local_22;
    byte local_21;
    ulong local_20;
    undefined4 local_1c;
    uint local_18;
    uint local_14;

    memset(&uStack_13b8, 0, 5000);
    local_1c = 0;
    local_14 = 0;
    local_13c0[0] = '\0';
    local_13c0[1] = 0;
    local_13c0[2] = 0;
    local_13c0[3] = 0;
    local_13c0[4] = 0;
    local_13d0 = 0;
    local_13cc = 0;
    local_13c8 = 0;
    local_13c4 = 0;
    local_20 = 0;
    local_21 = 6;
    local_22 = 0;
    local_23 = 0xf;
    local_24 = 0x7f;
    local_28 = 0;
    local_2c = 0;
    puts("\n--- update pic program");
    local_30 = fopen("/mnt/card/pic16f1704_app.txt", "r");
    if (local_30 == (FILE *)0x0) {
        printf("\n%s: open pic16f1704_app.txt failed\n",
               "PIC1704_update_pic_app_program");
        uVar2 = extraout_r3;
    } else {
        fseek(local_30, 0, 0);
        memset(&uStack_13b8, 0, 5000);
        local_28 = (((uint)local_23 * 0x100 + (uint)local_24) -
                    ((uint)local_21 * 0x100 + (uint)local_22)) +
                   1;
        printf("pic_flash_length = %d\n", local_28);
        for (local_14 = 0; local_14 < local_28; local_14 = local_14 + 1) {
            fgets(local_13c0, 0x3ff, local_30);
            local_20 = strtoul(local_13c0, (char **)0x0, 0x10);
            *(char *)((int)&uStack_13b8 + local_14 * 2) = (char)(local_20 >> 8);
            *(char *)((int)&uStack_13b8 + local_14 * 2 + 1) = (char)local_20;
        }
        fclose(local_30);
        local_2c = reset_PIC16F1704_pic(param_1, param_2);
        if (local_2c == 0) {
            printf("!!! %s: reset pic error!\n\n",
                   "PIC1704_update_pic_app_program");
            uVar2 = 0;
        } else {
            local_2c = erase_PIC16F1704_app_flash(param_1, param_2);
            if (local_2c == 0) {
                printf("!!! %s: erase flash error!\n\n",
                       "PIC1704_update_pic_app_program");
                uVar2 = 0;
            } else {
                local_2c =
                    set_PIC16F1704_flash_point32_ter(param_1, param_2, 6, 0);
                if (local_2c == 0) {
                    printf("!!! %s: set flash point32_ter error!\n\n",
                           "PIC1704_update_pic_app_program");
                    uVar2 = 0;
                } else {
                    for (local_14 = 0; uVar1 = (local_28 >> 5) * 4,
                        local_14 <= uVar1 && uVar1 - local_14 != 0;
                         local_14 = local_14 + 1) {
                        local_13d0 = (&uStack_13b8)[local_14 * 4];
                        local_13cc = auStack_13b4[local_14 * 4];
                        local_13c8 = auStack_13b4[local_14 * 4 + 1];
                        local_13c4 = auStack_13b4[local_14 * 4 + 2];
                        printf("send pic program time: %d\n", local_14);
                        for (local_18 = 0; local_18 < 0x10;
                             local_18 = local_18 + 1) {
                            printf("buf[%d] = 0x%02x\n", local_18,
                                   (uint) *
                                       (byte *)((int)&local_13d0 + local_18));
                        }
                        putchar(10);
                        send_data_to_PIC16F1704(param_1, param_2, &local_13d0);
                        write_data_int32_to_PIC16F1704_flash(param_1, param_2);
                    }
                    local_2c = reset_PIC16F1704_pic(param_1, param_2);
                    if (local_2c == 0) {
                        printf("!!! %s: reset pic error!\n\n",
                               "PIC1704_update_pic_app_program");
                        uVar2 = 0;
                    } else {
                        uVar2 = 1;
                    }
                }
            }
        }
    }
    return uVar2;
}

undefined4 save_freq_PIC16F1704(undefined1 param_1, undefined1 param_2,
                                ushort param_3)

{
    undefined1 uVar1;
    byte bVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_24;
    undefined1 local_20;
    undefined1 uStack_1f;
    undefined1 uStack_1e;
    undefined1 uStack_1d;
    byte local_1c[4];
    undefined1 local_18;
    undefined1 uStack_17;
    short local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 6;
    local_1c[0] = 0xff;
    local_1c[1] = 0;
    local_14 = (param_3 >> 8) + (param_3 & 0xff) + 0x2a;
    uVar1 = (undefined1)((ushort)local_14 >> 8);
    _local_18 = CONCAT11((char)local_14, uVar1);
    local_24 = 0x2406aa55;
    _local_20 = CONCAT13(
        (char)local_14,
        CONCAT12(uVar1, CONCAT11((char)param_3, (char)(param_3 >> 8))));
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 8; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_24 + (uint)local_11));
    }
    usleep(300000);
    for (local_11 = 0; local_11 < 2; local_11 = local_11 + 1) {
        uVar4 = (uint)local_11;
        bVar2 = read_pic(param_2, param_1);
        local_1c[uVar4] = bVar2;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    if ((local_1c[0] == 0x24) && (local_1c[1] == 1)) {
        printf("\n--- %s ok\n\n", "save_freq_PIC16F1704");
        uVar3 = 1;
    } else {
        printf("\n--- %s failed! read_back_data[0] = 0x%02x, read_back_data[1] "
               "= 0x%02x\n\n",
               "save_freq_PIC16F1704", (uint)local_1c[0], (uint)local_1c[1]);
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 get_PIC16F1704_freq(undefined1 param_1, undefined1 param_2,
                               ushort *param_3)

{
    undefined1 uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    undefined4 uVar5;
    uint uVar6;
    undefined4 local_28;
    undefined2 local_24;
    undefined4 local_20;
    undefined2 local_1c;
    undefined2 local_18;
    ushort local_14;
    undefined1 local_12;
    byte local_11;

    local_12 = 4;
    local_1c = 0;
    local_20 = 0xff;
    local_14 = 0x29;
    local_18 = 0x2900;
    local_28 = 0x2504aa55;
    local_24 = 0x2900;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        write_pic(param_2, param_1,
                  *(undefined1 *)((int)&local_28 + (uint)local_11));
    }
    usleep(300000);
    for (local_11 = 0; local_11 < 6; local_11 = local_11 + 1) {
        uVar6 = (uint)local_11;
        uVar1 = read_pic(param_2, param_1);
        *(undefined1 *)((int)&local_20 + uVar6) = uVar1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    usleep(200000);
    uVar2 = local_20 >> 0x10 & 0xff;
    uVar6 = local_20 >> 0x18;
    uVar3 = (uint)(byte)local_1c;
    uVar4 = (uint)local_1c._1_1_;
    printf("--- %s: read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, "
           "read_back_data[2] = 0x%x, read_back_data[3] = 0x%x, "
           "read_back_data[4] = 0x%x, read_back_data[5] = 0x%x\n",
           "get_PIC16F1704_freq", local_20 & 0xff, local_20 >> 8 & 0xff, uVar2,
           uVar6, uVar3, uVar4);
    if ((local_20._1_1_ == '%') && ((local_20 & 0xff) == 6)) {
        local_14 = (byte)local_20 + 0x25 + (ushort)local_20._2_1_ +
                   (ushort)local_20._3_1_;
        if (((char)(local_14 >> 8) == (byte)local_1c) &&
            ((char)local_14 == local_1c._1_1_)) {
            *param_3 = CONCAT11(local_20._2_1_, local_20._3_1_);
            printf("\n--- %s ok, freq = %d\n\n", "get_PIC16F1704_freq",
                   (uint)*param_3, (uint)*param_3, uVar2, uVar6, uVar3, uVar4);
            uVar5 = 1;
        } else {
            printf("\n--- %s failed! crc = 0x%04x\n\n", "get_PIC16F1704_freq",
                   (uint)local_14, (uint)local_14, uVar2, uVar6, uVar3, uVar4);
            uVar5 = 0;
        }
    } else {
        printf("\n--- %s failed!\n\n", "get_PIC16F1704_freq");
        uVar5 = 0;
    }
    return uVar5;
}

void set_temperature_offset_value(undefined4 param_1, undefined1 param_2,
                                  undefined4 param_3)

{
    printf("\n--- %s\n", "set_temperature_offset_value");
    write_temperature_offset_PIC16F1704(param_1, param_2, param_3);
    usleep(100000);
    return;
}

void write_sensor_info_int32_to_pic(undefined4 param_1, undefined1 param_2)

{
    undefined1 local_10;
    undefined1 local_f;
    undefined1 local_e;
    undefined1 local_d;
    undefined1 local_c;
    undefined1 local_b;
    byte local_a;
    undefined1 local_9;

    local_10 = 0;
    local_f = 0;
    local_e = 0;
    local_d = 0;
    local_c = 0;
    local_b = 0;
    local_a = 0;
    local_9 = 0;
    printf("\n--- %s\n", "write_sensor_info_int32_to_pic");
    local_10 = Conf[0xd0];
    local_f = 0;
    local_e = Conf[0xd1];
    local_d = 0;
    local_c = Conf[0xd2];
    local_b = 0;
    local_a = Conf[0xfc] | 0x20;
    local_9 = (undefined1)Conf._256_4_;
    set_temperature_offset_value(param_1, param_2, &local_10);
    return;
}

undefined4 check_chain(void)

{
    int iVar1;
    undefined4 uVar2;
    uint local_12c;
    uint local_128;

    printf("--- %s\n", "check_chain");
    iVar1 = platform_init();
    if (iVar1 == 0) {
        get_system_capability(&local_12c);
        if (local_12c == 1) {
            gChain = (byte)local_128;
            *(byte *)((int)&chain_info + (local_128 & 0xff) * 2) = gChain;
            *(undefined1 *)((int)&chain_info + (uint)gChain * 2 + 1) = 0;
            printf("gChain = %d\n", (uint)gChain);
            uVar2 = 0;
        } else if (local_12c < 2) {
            puts("no hash board inserted");
            uVar2 = 0xffffffff;
        } else {
            puts("test zhiju only support 1 plug");
            uVar2 = 0xffffffff;
        }
    } else {
        puts("platform init failed!");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

void fan_control(undefined1 param_1)

{
    if (fan_pwm_handle == 0) {
        fan_pwm_handle = pwm_init(0, 100);
    }
    printf("--- %s\n", "fan_control");
    pwm_set(fan_pwm_handle, param_1);
    return;
}

void set_PWM_according_to_temperature(void)

{
    char cVar1;

    if (*(int *)(highest_temp + (uint)gChain * 4) < (int)(uint)Conf[0xd4]) {
        fan_control(0);
    } else if (*(int *)(highest_temp + (uint)gChain * 4) < 0x32) {
        fan_control(0x28);
    } else if (*(int *)(highest_temp + (uint)gChain * 4) <
               (int)(uint)Conf[0xd5]) {
        cVar1 = __aeabi_idiv(*(int *)(highest_temp + (uint)gChain * 4) * 0x3c +
                                 -3000,
                             Conf[0xd5] - 0x32);
        fan_control(cVar1 + '(');
    } else {
        fan_control(100);
    }
    return;
}

byte znyq_set_iic(undefined4 param_1, undefined4 param_2, char param_3,
                  undefined4 param_4, undefined1 param_5)

{
    byte local_9;

    if (param_3 == '\0') {
        local_9 = iic_i2c_write_reg(param_5, &stack0x00000004, 1);
    } else {
        iic_i2c_read_reg(param_5, &local_9, 1);
    }
    return local_9;
}

void power_on(void)

{
    int iVar1;

    iVar1 = access("/sys/class/gpio/gpio907", 0);
    if (iVar1 == -1) {
        system("echo 907 > /sys/class/gpio/export");
        system("echo out > /sys/class/gpio/gpio907/direction");
        puts("init gpio907");
    }
    system("echo 0 > /sys/class/gpio/gpio907/value");
    sleep(1);
    return;
}

void power_off(void)

{
    int iVar1;

    iVar1 = access("/sys/class/gpio/gpio907", 0);
    if (iVar1 == -1) {
        system("echo 907 > /sys/class/gpio/export");
        system("echo out > /sys/class/gpio/gpio907/direction");
        puts("init gpio907");
    }
    system("echo 1 > /sys/class/gpio/gpio907/value");
    sleep(1);
    return;
}

void power_check_protocal_type(void)

{
    byte bVar1;

    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    bVar1 = znyq_set_iic(power_iic_addr, power_iic_no, 1, 1, 0, 0);
    if (bVar1 == 0xf5) {
        printf("power protocal %02x, using package cmd\n", 0xf5);
        power_protocal_type = 2;
    } else {
        printf("power protocal %02x, using simple cmd\n", (uint)bVar1);
        power_protocal_type = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    return;
}

void power_init(void)

{
    puts("power init ... ");
    power_check_protocal_type();
    power_on();
    return;
}

undefined4 power_check_reply(char *param_1, char *param_2, byte param_3)

{
    ushort uVar1;
    undefined4 uVar2;
    ushort local_c;
    ushort local_a;

    local_a = 0;
    if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
         (param_1[3] == param_2[3])) &&
        ((byte)param_2[2] + 2 == (uint)param_3)) {
        for (local_c = 2; (int)(uint)local_c < (int)(param_3 - 2);
             local_c = local_c + 1) {
            local_a = (byte)param_2[local_c] + local_a;
        }
        uVar1 = (ushort)(byte)param_2[param_3 - 1] * 0x100 +
                (ushort)(byte)param_2[param_3 - 2];
        if (local_a == uVar1) {
            uVar2 = 1;
        } else {
            printf("power reply crc error, crc %04x != crc_reply %04x:\n",
                   (uint)local_a, (uint)uVar1);
            for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
                printf("%02x ", (uint)(byte)param_2[local_c]);
            }
            putchar(10);
            uVar2 = 0;
        }
    } else {
        puts("power reply data error:");
        for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
            printf("%02x ", (uint)(byte)param_2[local_c]);
        }
        putchar(10);
        uVar2 = 0;
    }
    return uVar2;
}

bool power_send_cmd(int param_1, byte param_2, int param_3, byte param_4)

{
    undefined1 uVar1;
    int iVar2;
    byte local_12;
    byte local_11;

    local_12 = 0;
    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    while (local_12 < 3) {
        for (local_11 = 0; local_11 < param_2; local_11 = local_11 + 1) {
            znyq_set_iic(0x10, 1, 0, 1, 0x11,
                         *(undefined1 *)(param_1 + (uint)local_11));
        }
        usleep(500000);
        for (local_11 = 0; local_11 < param_4; local_11 = local_11 + 1) {
            uVar1 = znyq_set_iic(0x10, 1, 1, 0, 0x11, 0);
            *(undefined1 *)(param_3 + (uint)local_11) = uVar1;
            printf("%s, reply_buf[%d]=%02x\n", "power_send_cmd", (uint)local_11,
                   (uint) * (byte *)(param_3 + (uint)local_11));
        }
        iVar2 = power_check_reply(param_1, param_3, param_4);
        if (iVar2 != 0)
            break;
        local_12 = local_12 + 1;
        printf("power send cmd 0x%02x failed, retry for %d times\n",
               (uint) * (byte *)(param_1 + 3), (uint)local_12);
    }
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    return local_12 < 3;
}

void power_get_firmware_version(void)

{
    int iVar1;
    undefined4 local_30;
    uint local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined2 local_c;

    local_10 = 0x104aa55;
    local_c = 5;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar1 = power_send_cmd(&local_10, 6, &local_30, 8);
    if (iVar1 != 0) {
        printf("power firmware version is %02x %02x\n", local_2c >> 8 & 0xff,
               local_2c & 0xff);
    }
    return;
}

void power_get_device_no(void)

{
    int iVar1;
    undefined4 local_30;
    uint local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined2 local_c;

    local_10 = 0x204aa55;
    local_c = 6;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar1 = power_send_cmd(&local_10, 6, &local_30, 8);
    if (iVar1 != 0) {
        printf("power device no is %02x %02x\n", local_2c >> 8 & 0xff,
               local_2c & 0xff);
    }
    return;
}

uint power_get_da_value(void)

{
    uint uVar1;
    undefined4 local_30;
    uint local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined2 local_c;

    local_10 = 0x304aa55;
    local_c = 7;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    uVar1 = power_send_cmd(&local_10, 6, &local_30, 8);
    if (uVar1 != 0) {
        printf("power get da value is %02x\n", local_2c & 0xff);
        uVar1 = local_2c & 0xff;
    }
    return uVar1;
}

byte power_get_da_value_simple(void)

{
    byte bVar1;

    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    bVar1 = znyq_set_iic(power_iic_addr, power_iic_no, 1, 1, 2, 0);
    printf("power da value is %d\n", (uint)bVar1);
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    return bVar1;
}

void power_get_adc_value(void)

{
    int iVar1;
    undefined4 local_30;
    uint local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined2 local_c;

    local_10 = 0x404aa55;
    local_c = 8;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar1 = power_send_cmd(&local_10, 6, &local_30, 8);
    if (iVar1 != 0) {
        printf("power get adc value is %02x\n", local_2c & 0xff);
    }
    return;
}

void power_set_da_value(byte param_1)

{
    byte bVar1;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    byte local_24[4];
    undefined4 local_20;
    ushort local_1c;
    short local_1a;

    local_24[0] = 0x55;
    local_24[1] = 0xaa;
    local_24[2] = 6;
    local_24[3] = 0x83;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_1a = 0;
    local_20 = (uint)param_1;
    for (local_1c = 2; local_1c < 6; local_1c = local_1c + 1) {
        local_1a = (ushort)local_24[local_1c] + local_1a;
    }
    local_20._0_3_ = CONCAT12((byte)local_1a, (ushort)param_1);
    bVar1 = (byte)((ushort)local_1a >> 8);
    local_20 = CONCAT13(bVar1, (uint3)local_20);
    printf("%s, %02x, %02x, %02x, %02x, %02x, %02x, %02x, %02x\n",
           "power_set_da_value", 0x55, 0xaa, 6, 0x83, (uint3)local_20 & 0xff, 0,
           (uint)(byte)local_1a, (uint)bVar1);
    power_send_cmd(local_24, 8, &local_44, 8);
    return;
}

undefined1 power_set_da_value_simple(undefined1 param_1)

{
    undefined1 uVar1;

    pthread_mutex_lock((pthread_mutex_t *)i2c_mutex);
    usleep(100000);
    uVar1 = znyq_set_iic(power_iic_addr, power_iic_no, 0, 1, 2, param_1);
    pthread_mutex_unlock((pthread_mutex_t *)i2c_mutex);
    return uVar1;
}

undefined4 power_save_eeprom_data(byte param_1, int param_2, byte param_3)

{
    undefined4 uVar1;
    undefined4 local_134;
    undefined4 local_130;
    undefined4 local_12c;
    undefined4 local_128;
    undefined4 local_124;
    undefined4 local_120;
    undefined4 local_11c;
    undefined4 local_118;
    byte local_114[5];
    undefined1 auStack_10f[254];
    char local_11;
    uint local_10;
    ushort local_c;
    short local_a;

    memset(local_114, 0, 0x100);
    local_134 = 0;
    local_130 = 0;
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_a = 0;
    local_10 = param_3 + 7;
    if (((char)param_1 < '\0') || (0x20 < param_3)) {
        printf("invalid param addr 0x%02x, len %d\n", (uint)param_1,
               (uint)param_3);
        uVar1 = 0;
    } else {
        local_114[0] = 0x55;
        local_114[1] = 0xaa;
        local_114[2] = param_3 + 5;
        local_114[3] = 0x86;
        local_114[4] = param_1;
        for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
            auStack_10f[local_c] = *(undefined1 *)(param_2 + (uint)local_c);
        }
        for (local_c = 2; local_c < (ushort)(param_3 + 5);
             local_c = local_c + 1) {
            local_a = (ushort)local_114[local_c] + local_a;
        }
        local_114[local_10 - 2] = (byte)local_a;
        local_114[local_10 - 1] = (byte)((ushort)local_a >> 8);
        local_11 = power_send_cmd(local_114, local_10 & 0xff, &local_134, 8);
        if (local_11 == '\x01') {
            if (local_130._1_1_ == '\x01') {
                puts("save eeprom data success ");
                uVar1 = 1;
            } else {
                puts("save eeprom data failed ");
                uVar1 = 0;
            }
        } else {
            uVar1 = 0;
        }
    }
    return uVar1;
}

undefined4 power_read_eeprom_data(byte param_1, int param_2, byte param_3)

{
    undefined4 uVar1;
    undefined1 auStack_118[5];
    undefined1 auStack_113[251];
    byte local_18[11];
    char local_d;
    ushort local_c;
    short local_a;

    local_18[0] = 0x55;
    local_18[1] = 0xaa;
    local_18[2] = 6;
    local_18[3] = 6;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18[7] = 0;
    memset(auStack_118, 0, 0x100);
    local_a = 0;
    if (((char)param_1 < '\0') || (0x20 < param_3)) {
        printf("invalid param addr 0x%02x, len %d\n", (uint)param_1,
               (uint)param_3);
        uVar1 = 0;
    } else {
        local_18[5] = param_3;
        local_18[4] = param_1;
        for (local_c = 2; local_c < 6; local_c = local_c + 1) {
            local_a = (ushort)local_18[local_c] + local_a;
        }
        local_18[6] = (char)local_a;
        local_18[7] = (char)((ushort)local_a >> 8);
        local_d = power_send_cmd(local_18, 8, auStack_118, param_3 + 7);
        if (local_d == '\x01') {
            printf("read eeprom data:");
            for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
                *(undefined1 *)(param_2 + (uint)local_c) = auStack_113[local_c];
                printf("%02x ", (uint) * (byte *)(param_2 + (uint)local_c));
            }
            putchar(10);
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
    }
    return uVar1;
}

undefined1 power_is_support_cmd_package(void)

{
    undefined1 uVar1;
    short sVar2;

    sVar2 = power_protocal_type;
    if (power_protocal_type != 2) {
        sVar2 = 0;
    }
    uVar1 = (undefined1)sVar2;
    if (power_protocal_type == 2) {
        uVar1 = 1;
    }
    return uVar1;
}

undefined1 *power_get_voltage(undefined1 *param_1)

{
    undefined1 uVar1;
    int iVar2;

    iVar2 = power_is_support_cmd_package();
    if (iVar2 == 0) {
        uVar1 = power_get_da_value_simple();
        *param_1 = uVar1;
    } else {
        uVar1 = power_get_da_value();
        *param_1 = uVar1;
    }
    return param_1;
}

undefined4 power_set_voltage(undefined1 param_1)

{
    int iVar1;
    undefined4 extraout_r3;
    undefined4 extraout_r3_00;
    undefined4 uVar2;

    iVar1 = power_is_support_cmd_package();
    if (iVar1 == 0) {
        power_set_da_value_simple(param_1);
        uVar2 = extraout_r3_00;
    } else {
        power_set_da_value(param_1);
        uVar2 = extraout_r3;
    }
    return uVar2;
}

uint sph_bswap32(uint param_1)

{
    uint uVar1;

    uVar1 = param_1 >> 0x10 | param_1 << 0x10;
    return (uVar1 & 0xff00ff) << 8 | (uVar1 & 0xff00ff00) >> 8;
}

undefined8 sph_bswap64(uint param_1, uint param_2)

{
    uint uVar1;
    uint uVar2;

    uVar1 = param_2 >> 0x10 | param_2 << 0x10;
    uVar2 = param_1 >> 0x10 | param_1 << 0x10;
    return CONCAT44((uVar2 & 0xff00ff) << 8 | (uVar2 & 0xff00ff00) >> 8,
                    (uVar1 & 0xff00ff) << 8 | (uVar1 & 0xff00ff00) >> 8);
}

void sph_enc32be(undefined1 *param_1, undefined4 param_2)

{
    *param_1 = (char)((uint)param_2 >> 0x18);
    param_1[1] = (char)((uint)param_2 >> 0x10);
    param_1[2] = (char)((uint)param_2 >> 8);
    param_1[3] = (char)param_2;
    return;
}

void sph_enc32be_aligned(undefined4 *param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = sph_bswap32(param_2);
    *param_1 = uVar1;
    return;
}

undefined4 sph_dec32be_aligned(undefined4 *param_1)

{
    undefined4 uVar1;

    uVar1 = sph_bswap32(*param_1);
    return uVar1;
}

void sph_enc64be(undefined1 *param_1, undefined4 param_2, undefined4 param_3,
                 undefined4 param_4)

{
    undefined1 local_50;
    undefined1 local_48;
    undefined1 local_40;
    undefined1 local_38;
    undefined1 local_30;

    local_38 = (undefined1)((uint)param_4 >> 0x18);
    *param_1 = local_38;
    local_40 = (undefined1)((uint)param_4 >> 0x10);
    param_1[1] = local_40;
    local_48 = (undefined1)((uint)param_4 >> 8);
    param_1[2] = local_48;
    local_50 = (undefined1)param_4;
    param_1[3] = local_50;
    param_1[4] = (char)((uint)param_3 >> 0x18);
    param_1[5] = (char)((uint)param_3 >> 0x10);
    param_1[6] = (char)((uint)param_3 >> 8);
    local_30 = (undefined1)param_3;
    param_1[7] = local_30;
    return;
}

void sph_enc64be_aligned(undefined8 *param_1, undefined4 param_2,
                         undefined4 param_3, undefined4 param_4)

{
    undefined8 uVar1;

    uVar1 = sph_bswap64(param_3, param_4);
    *param_1 = uVar1;
    return;
}

undefined4 sph_dec64be_aligned(undefined4 *param_1)

{
    undefined4 uVar1;

    uVar1 = sph_bswap64(*param_1, param_1[1]);
    return uVar1;
}

void blake32_init(int param_1, void *param_2, void *param_3)

{
    memcpy((void *)(param_1 + 0x44), param_2, 0x20);
    memcpy((void *)(param_1 + 100), param_3, 0x10);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x40) = 0;
    return;
}

void blake32(int param_1, void *param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    uint uVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    uint uVar21;
    uint uVar22;
    uint uVar23;
    uint uVar24;
    uint uVar25;
    uint uVar26;
    uint uVar27;
    uint uVar28;
    uint uVar29;
    uint uVar30;
    uint uVar31;
    uint uVar32;
    uint uVar33;
    uint uVar34;
    uint uVar35;
    uint uVar36;
    undefined4 local_dc;
    undefined4 local_d8;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    local_c = *(int *)(param_1 + 0x40);
    if (param_3 < 0x40U - local_c) {
        memcpy((void *)(param_1 + local_c), param_2, param_3);
        *(uint *)(param_1 + 0x40) = local_c + param_3;
    } else {
        local_10 = *(uint *)(param_1 + 0x44);
        local_14 = *(uint *)(param_1 + 0x48);
        local_18 = *(uint *)(param_1 + 0x4c);
        local_1c = *(uint *)(param_1 + 0x50);
        local_20 = *(uint *)(param_1 + 0x54);
        local_24 = *(uint *)(param_1 + 0x58);
        local_28 = *(uint *)(param_1 + 0x5c);
        local_2c = *(uint *)(param_1 + 0x60);
        uVar17 = *(uint *)(param_1 + 100);
        uVar18 = *(uint *)(param_1 + 0x68);
        uVar19 = *(uint *)(param_1 + 0x6c);
        uVar20 = *(uint *)(param_1 + 0x70);
        local_30 = *(uint *)(param_1 + 0x74);
        local_34 = *(uint *)(param_1 + 0x78);
        local_dc = param_3;
        local_d8 = param_2;
        while (local_dc != 0) {
            local_38 = 0x40 - local_c;
            if (local_dc < local_38) {
                local_38 = local_dc;
            }
            memcpy((void *)(param_1 + local_c), local_d8, local_38);
            local_c = local_c + local_38;
            local_d8 = (void *)((int)local_d8 + local_38);
            local_dc = local_dc - local_38;
            if (local_c == 0x40) {
                local_30 = local_30 + 0x200;
                if (local_30 < 0x200) {
                    local_34 = local_34 + 1;
                }
                uVar1 = sph_dec32be_aligned(param_1);
                uVar2 = sph_dec32be_aligned(param_1 + 4);
                uVar3 = sph_dec32be_aligned(param_1 + 8);
                uVar4 = sph_dec32be_aligned(param_1 + 0xc);
                uVar5 = sph_dec32be_aligned(param_1 + 0x10);
                uVar6 = sph_dec32be_aligned(param_1 + 0x14);
                uVar7 = sph_dec32be_aligned(param_1 + 0x18);
                uVar8 = sph_dec32be_aligned(param_1 + 0x1c);
                uVar9 = sph_dec32be_aligned(param_1 + 0x20);
                uVar10 = sph_dec32be_aligned(param_1 + 0x24);
                uVar11 = sph_dec32be_aligned(param_1 + 0x28);
                uVar12 = sph_dec32be_aligned(param_1 + 0x2c);
                uVar13 = sph_dec32be_aligned(param_1 + 0x30);
                uVar14 = sph_dec32be_aligned(param_1 + 0x34);
                uVar15 = sph_dec32be_aligned(param_1 + 0x38);
                uVar16 = sph_dec32be_aligned(param_1 + 0x3c);
                uVar21 = local_10 + local_20 + (uVar1 ^ 0x85a308d3);
                uVar22 = uVar21 ^ local_30 ^ 0xa4093822;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = (uVar17 ^ 0x243f6a88) + uVar22;
                uVar24 = uVar23 ^ local_20;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar21 + uVar24 + (uVar2 ^ 0x243f6a88);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar26 = local_14 + local_24 + (uVar3 ^ 0x3707344);
                uVar21 = uVar26 ^ local_30 ^ 0x299f31d0;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = (uVar18 ^ 0x85a308d3) + uVar21;
                uVar28 = uVar27 ^ local_24;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar26 + uVar28 + (uVar4 ^ 0x13198a2e);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar30 = local_18 + local_28 + (uVar5 ^ 0x299f31d0);
                uVar26 = uVar30 ^ local_34 ^ 0x82efa98;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = (uVar19 ^ 0x13198a2e) + uVar26;
                uVar32 = uVar31 ^ local_28;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar30 + uVar32 + (uVar6 ^ 0xa4093822);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = local_1c + local_2c + (uVar7 ^ 0xec4e6c89);
                uVar30 = uVar34 ^ local_34 ^ 0xec4e6c89;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = (uVar20 ^ 0x3707344) + uVar30;
                uVar36 = uVar35 ^ local_2c;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar8 ^ 0x82efa98);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar9 ^ 0x38d01377);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar10 ^ 0x452821e6);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar11 ^ 0x34e90c6c);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar12 ^ 0xbe5466cf);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar13 ^ 0xc97c50dd);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar14 ^ 0xc0ac29b7);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar15 ^ 0xb5470917);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar16 ^ 0x3f84d5b5);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar15 ^ 0xbe5466cf);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar11 ^ 0x3f84d5b5);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar5 ^ 0x452821e6);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar9 ^ 0xa4093822);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar10 ^ 0xb5470917);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar16 ^ 0x38d01377);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar14 ^ 0x82efa98);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar7 ^ 0xc97c50dd);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar2 ^ 0xc0ac29b7);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar13 ^ 0x85a308d3);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar1 ^ 0x13198a2e);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar3 ^ 0x243f6a88);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar12 ^ 0xec4e6c89);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar8 ^ 0x34e90c6c);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar6 ^ 0x3707344);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar4 ^ 0x299f31d0);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar12 ^ 0x452821e6);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar9 ^ 0x34e90c6c);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar13 ^ 0x243f6a88);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar1 ^ 0xc0ac29b7);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar6 ^ 0x13198a2e);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar3 ^ 0x299f31d0);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar16 ^ 0xc97c50dd);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar14 ^ 0xb5470917);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar11 ^ 0x3f84d5b5);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar15 ^ 0xbe5466cf);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar4 ^ 0x82efa98);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar7 ^ 0x3707344);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar8 ^ 0x85a308d3);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar2 ^ 0xec4e6c89);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar10 ^ 0xa4093822);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar5 ^ 0x38d01377);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar8 ^ 0x38d01377);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar10 ^ 0xec4e6c89);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar4 ^ 0x85a308d3);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar2 ^ 0x3707344);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar14 ^ 0xc0ac29b7);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar13 ^ 0xc97c50dd);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar12 ^ 0x3f84d5b5);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar15 ^ 0x34e90c6c);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar3 ^ 0x82efa98);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar7 ^ 0x13198a2e);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar6 ^ 0xbe5466cf);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar11 ^ 0x299f31d0);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar5 ^ 0x243f6a88);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar1 ^ 0xa4093822);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar16 ^ 0x452821e6);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar9 ^ 0xb5470917);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar10 ^ 0x243f6a88);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar1 ^ 0x38d01377);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar6 ^ 0xec4e6c89);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar8 ^ 0x299f31d0);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar3 ^ 0xa4093822);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar5 ^ 0x13198a2e);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar11 ^ 0xb5470917);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar16 ^ 0xbe5466cf);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar15 ^ 0x85a308d3);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar2 ^ 0x3f84d5b5);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar12 ^ 0xc0ac29b7);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar13 ^ 0x34e90c6c);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar7 ^ 0x452821e6);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar9 ^ 0x82efa98);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar4 ^ 0xc97c50dd);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar14 ^ 0x3707344);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar3 ^ 0xc0ac29b7);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar13 ^ 0x13198a2e);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar7 ^ 0xbe5466cf);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar11 ^ 0x82efa98);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar1 ^ 0x34e90c6c);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar12 ^ 0x243f6a88);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar9 ^ 0x3707344);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar4 ^ 0x452821e6);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar5 ^ 0xc97c50dd);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar14 ^ 0xa4093822);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar8 ^ 0x299f31d0);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar6 ^ 0xec4e6c89);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar16 ^ 0x3f84d5b5);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar15 ^ 0xb5470917);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar2 ^ 0x38d01377);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar10 ^ 0x85a308d3);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar13 ^ 0x299f31d0);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar6 ^ 0xc0ac29b7);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar2 ^ 0xb5470917);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar16 ^ 0x85a308d3);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar15 ^ 0xc97c50dd);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar14 ^ 0x3f84d5b5);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar5 ^ 0xbe5466cf);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar11 ^ 0xa4093822);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar1 ^ 0xec4e6c89);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar8 ^ 0x243f6a88);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar7 ^ 0x3707344);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar4 ^ 0x82efa98);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar10 ^ 0x13198a2e);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar3 ^ 0x38d01377);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar9 ^ 0x34e90c6c);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar12 ^ 0x452821e6);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar14 ^ 0x34e90c6c);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar12 ^ 0xc97c50dd);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar8 ^ 0x3f84d5b5);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar15 ^ 0xec4e6c89);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar13 ^ 0x85a308d3);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar2 ^ 0xc0ac29b7);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar4 ^ 0x38d01377);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar10 ^ 0x3707344);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar6 ^ 0x243f6a88);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar1 ^ 0x299f31d0);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar16 ^ 0xa4093822);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar5 ^ 0xb5470917);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar9 ^ 0x82efa98);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar7 ^ 0x452821e6);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar3 ^ 0xbe5466cf);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar11 ^ 0x13198a2e);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar7 ^ 0xb5470917);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar16 ^ 0x82efa98);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar15 ^ 0x38d01377);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar10 ^ 0x3f84d5b5);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar12 ^ 0x3707344);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar4 ^ 0x34e90c6c);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar1 ^ 0x452821e6);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar9 ^ 0x243f6a88);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar13 ^ 0x13198a2e);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar3 ^ 0xc0ac29b7);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar14 ^ 0xec4e6c89);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar8 ^ 0xc97c50dd);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar2 ^ 0xa4093822);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar5 ^ 0x85a308d3);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar11 ^ 0x299f31d0);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar6 ^ 0xbe5466cf);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar11 ^ 0x13198a2e);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar3 ^ 0xbe5466cf);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar9 ^ 0xa4093822);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar5 ^ 0x452821e6);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar8 ^ 0x82efa98);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar7 ^ 0xec4e6c89);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar2 ^ 0x299f31d0);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar6 ^ 0x85a308d3);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar16 ^ 0x34e90c6c);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar12 ^ 0xb5470917);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar10 ^ 0x3f84d5b5);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar15 ^ 0x38d01377);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar4 ^ 0xc0ac29b7);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar13 ^ 0x3707344);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar14 ^ 0x243f6a88);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar1 ^ 0xc97c50dd);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar1 ^ 0x85a308d3);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar2 ^ 0x243f6a88);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar3 ^ 0x3707344);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar4 ^ 0x13198a2e);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar5 ^ 0x299f31d0);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar6 ^ 0xa4093822);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar7 ^ 0xec4e6c89);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar8 ^ 0x82efa98);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar9 ^ 0x38d01377);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar10 ^ 0x452821e6);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar11 ^ 0x34e90c6c);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar12 ^ 0xbe5466cf);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar13 ^ 0xc97c50dd);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar14 ^ 0xc0ac29b7);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar15 ^ 0xb5470917);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar16 ^ 0x3f84d5b5);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar15 ^ 0xbe5466cf);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar11 ^ 0x3f84d5b5);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar5 ^ 0x452821e6);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar9 ^ 0xa4093822);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar10 ^ 0xb5470917);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar16 ^ 0x38d01377);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar14 ^ 0x82efa98);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar7 ^ 0xc97c50dd);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar2 ^ 0xc0ac29b7);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar13 ^ 0x85a308d3);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar1 ^ 0x13198a2e);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar3 ^ 0x243f6a88);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar12 ^ 0xec4e6c89);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar8 ^ 0x34e90c6c);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar6 ^ 0x3707344);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar4 ^ 0x299f31d0);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar25 = uVar25 + uVar24 + (uVar12 ^ 0x452821e6);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar25 = uVar25 + uVar24 + (uVar9 ^ 0x34e90c6c);
                uVar22 = uVar25 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar29 = uVar29 + uVar28 + (uVar13 ^ 0x243f6a88);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar29 = uVar29 + uVar28 + (uVar1 ^ 0xc0ac29b7);
                uVar21 = uVar29 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar33 = uVar33 + uVar32 + (uVar6 ^ 0x13198a2e);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar33 = uVar33 + uVar32 + (uVar3 ^ 0x299f31d0);
                uVar26 = uVar33 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar34 = uVar34 + uVar36 + (uVar16 ^ 0xc97c50dd);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar34 = uVar34 + uVar36 + (uVar14 ^ 0xb5470917);
                uVar30 = uVar34 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar25 = uVar25 + uVar28 + (uVar11 ^ 0x3f84d5b5);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar25 = uVar25 + uVar28 + (uVar15 ^ 0xbe5466cf);
                uVar30 = uVar25 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar29 = uVar29 + uVar32 + (uVar4 ^ 0x82efa98);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar29 = uVar29 + uVar32 + (uVar7 ^ 0x3707344);
                uVar22 = uVar29 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar33 = uVar33 + uVar36 + (uVar8 ^ 0x85a308d3);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar33 = uVar33 + uVar36 + (uVar2 ^ 0xec4e6c89);
                uVar21 = uVar33 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar34 = uVar34 + uVar24 + (uVar10 ^ 0xa4093822);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar34 = uVar34 + uVar24 + (uVar5 ^ 0x38d01377);
                uVar26 = uVar34 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar8 = uVar25 + uVar24 + (uVar8 ^ 0x38d01377);
                uVar22 = uVar8 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar8 = uVar8 + uVar24 + (uVar10 ^ 0xec4e6c89);
                uVar22 = uVar8 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar23 = uVar23 + uVar22;
                uVar24 = uVar23 ^ uVar24;
                uVar24 = uVar24 >> 7 | uVar24 << 0x19;
                uVar4 = uVar29 + uVar28 + (uVar4 ^ 0x85a308d3);
                uVar21 = uVar4 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar2 = uVar4 + uVar28 + (uVar2 ^ 0x3707344);
                uVar21 = uVar2 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar27 = uVar27 + uVar21;
                uVar28 = uVar27 ^ uVar28;
                uVar28 = uVar28 >> 7 | uVar28 << 0x19;
                uVar4 = uVar33 + uVar32 + (uVar14 ^ 0xc0ac29b7);
                uVar26 = uVar4 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar4 = uVar4 + uVar32 + (uVar13 ^ 0xc97c50dd);
                uVar26 = uVar4 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar31 = uVar31 + uVar26;
                uVar32 = uVar31 ^ uVar32;
                uVar32 = uVar32 >> 7 | uVar32 << 0x19;
                uVar10 = uVar34 + uVar36 + (uVar12 ^ 0x3f84d5b5);
                uVar30 = uVar10 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar10 = uVar10 + uVar36 + (uVar15 ^ 0x34e90c6c);
                uVar30 = uVar10 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar35 = uVar35 + uVar30;
                uVar36 = uVar35 ^ uVar36;
                uVar36 = uVar36 >> 7 | uVar36 << 0x19;
                uVar3 = uVar8 + uVar28 + (uVar3 ^ 0x82efa98);
                uVar30 = uVar3 ^ uVar30;
                uVar30 = uVar30 >> 0x10 | uVar30 << 0x10;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar28 = uVar28 >> 0xc | uVar28 << 0x14;
                uVar3 = uVar3 + uVar28 + (uVar7 ^ 0x13198a2e);
                uVar30 = uVar3 ^ uVar30;
                uVar30 = uVar30 >> 8 | uVar30 << 0x18;
                uVar31 = uVar31 + uVar30;
                uVar28 = uVar31 ^ uVar28;
                uVar2 = uVar2 + uVar32 + (uVar6 ^ 0xbe5466cf);
                uVar22 = uVar2 ^ uVar22;
                uVar22 = uVar22 >> 0x10 | uVar22 << 0x10;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar32 = uVar32 >> 0xc | uVar32 << 0x14;
                uVar2 = uVar2 + uVar32 + (uVar11 ^ 0x299f31d0);
                uVar22 = uVar2 ^ uVar22;
                uVar22 = uVar22 >> 8 | uVar22 << 0x18;
                uVar35 = uVar35 + uVar22;
                uVar32 = uVar35 ^ uVar32;
                uVar4 = uVar4 + uVar36 + (uVar5 ^ 0x243f6a88);
                uVar21 = uVar4 ^ uVar21;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar36 = uVar36 >> 0xc | uVar36 << 0x14;
                uVar1 = uVar4 + uVar36 + (uVar1 ^ 0xa4093822);
                uVar21 = uVar1 ^ uVar21;
                uVar21 = uVar21 >> 8 | uVar21 << 0x18;
                uVar23 = uVar23 + uVar21;
                uVar36 = uVar23 ^ uVar36;
                uVar4 = uVar10 + uVar24 + (uVar16 ^ 0x452821e6);
                uVar26 = uVar4 ^ uVar26;
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                uVar24 = uVar24 >> 0xc | uVar24 << 0x14;
                uVar4 = uVar4 + uVar24 + (uVar9 ^ 0xb5470917);
                uVar26 = uVar4 ^ uVar26;
                uVar26 = uVar26 >> 8 | uVar26 << 0x18;
                uVar27 = uVar27 + uVar26;
                uVar24 = uVar27 ^ uVar24;
                local_10 = uVar23 ^ uVar17 ^ uVar3 ^ local_10;
                local_14 = uVar27 ^ uVar18 ^ uVar2 ^ local_14;
                local_18 = uVar31 ^ uVar19 ^ uVar1 ^ local_18;
                local_1c = uVar35 ^ uVar20 ^ uVar4 ^ local_1c;
                local_20 =
                    uVar22 ^ uVar17 ^ (uVar24 >> 7 | uVar24 << 0x19) ^ local_20;
                local_24 =
                    uVar21 ^ uVar18 ^ (uVar28 >> 7 | uVar28 << 0x19) ^ local_24;
                local_28 =
                    uVar26 ^ uVar19 ^ (uVar32 >> 7 | uVar32 << 0x19) ^ local_28;
                local_2c =
                    uVar30 ^ uVar20 ^ (uVar36 >> 7 | uVar36 << 0x19) ^ local_2c;
                local_c = 0;
            }
        }
        *(uint *)(param_1 + 0x44) = local_10;
        *(uint *)(param_1 + 0x48) = local_14;
        *(uint *)(param_1 + 0x4c) = local_18;
        *(uint *)(param_1 + 0x50) = local_1c;
        *(uint *)(param_1 + 0x54) = local_20;
        *(uint *)(param_1 + 0x58) = local_24;
        *(uint *)(param_1 + 0x5c) = local_28;
        *(uint *)(param_1 + 0x60) = local_2c;
        *(uint *)(param_1 + 100) = uVar17;
        *(uint *)(param_1 + 0x68) = uVar18;
        *(uint *)(param_1 + 0x6c) = uVar19;
        *(uint *)(param_1 + 0x70) = uVar20;
        *(uint *)(param_1 + 0x74) = local_30;
        *(uint *)(param_1 + 0x78) = local_34;
        *(int *)(param_1 + 0x40) = local_c;
    }
    return;
}

void blake32_close(int param_1, byte param_2, uint param_3, int param_4,
                   uint param_5)

{
    byte abStack_64[55];
    byte local_2d;
    undefined1 auStack_2c[4];
    undefined1 auStack_28[4];
    int local_24;
    undefined4 local_20;
    int local_1c;
    int local_18;
    uint local_14;
    int local_10;
    uint local_c;

    local_10 = *(int *)(param_1 + 0x40);
    local_14 = local_10 * 8 + param_3;
    local_18 = 0x80 >> (param_3 & 0xff);
    abStack_64[local_10] = (byte)local_18 | param_2 & -(byte)local_18;
    local_1c = *(int *)(param_1 + 0x74) + local_14;
    local_20 = *(undefined4 *)(param_1 + 0x78);
    if ((local_10 == 0) && (param_3 == 0)) {
        *(undefined4 *)(param_1 + 0x74) = 0xfffffe00;
        *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
    } else if (*(int *)(param_1 + 0x74) == 0) {
        *(uint *)(param_1 + 0x74) = local_14 - 0x200;
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    } else {
        *(uint *)(param_1 + 0x74) =
            *(int *)(param_1 + 0x74) + local_14 + -0x200;
    }
    if (local_14 < 0x1bf) {
        memset(abStack_64 + local_10 + 1, 0, 0x37 - local_10);
        if (param_5 == 8) {
            local_2d = local_2d | 1;
        }
        sph_enc32be_aligned(auStack_2c, local_20);
        sph_enc32be_aligned(auStack_28, local_1c);
        blake32(param_1, abStack_64 + local_10, 0x40 - local_10);
    } else {
        memset(abStack_64 + local_10 + 1, 0, 0x3f - local_10);
        blake32(param_1, abStack_64 + local_10, 0x40 - local_10);
        *(undefined4 *)(param_1 + 0x74) = 0xfffffe00;
        *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
        memset(abStack_64, 0, 0x38);
        if (param_5 == 8) {
            local_2d = 1;
        }
        sph_enc32be_aligned(auStack_2c, local_20);
        sph_enc32be_aligned(auStack_28, local_1c);
        blake32(param_1, abStack_64, 0x40);
    }
    local_24 = param_4;
    for (local_c = 0; local_c < param_5; local_c = local_c + 1) {
        sph_enc32be(local_24 + local_c * 4,
                    *(undefined4 *)(param_1 + (local_c + 0x10) * 4 + 4));
    }
    return;
}

void blake64_init(int param_1, void *param_2, void *param_3)

{
    memcpy((void *)(param_1 + 0x88), param_2, 0x40);
    memcpy((void *)(param_1 + 200), param_3, 0x20);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x80) = 0;
    return;
}

void blake64(int param_1, void *param_2, uint param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    bool bVar5;
    undefined8 uVar6;
    uint local_1b4;
    void *local_1b0;
    undefined8 local_1a8;
    undefined8 local_1a0;
    undefined8 local_198;
    undefined8 local_190;
    undefined8 local_188;
    undefined8 local_180;
    undefined8 local_178;
    undefined8 local_170;
    undefined8 local_168;
    undefined8 local_160;
    undefined8 local_158;
    undefined8 local_150;
    undefined8 local_148;
    undefined8 local_140;
    undefined8 local_138;
    undefined8 local_130;
    uint local_128;
    uint uStack_124;
    uint local_120;
    uint uStack_11c;
    uint local_118;
    uint uStack_114;
    uint local_110;
    uint uStack_10c;
    int local_108;
    uint local_104;
    uint local_100;
    uint uStack_fc;
    uint local_f8;
    uint uStack_f4;
    uint local_f0;
    uint uStack_ec;
    uint local_e8;
    uint uStack_e4;
    uint local_e0;
    uint uStack_dc;
    uint local_d8;
    uint uStack_d4;
    uint local_d0;
    uint uStack_cc;
    uint local_c8;
    uint uStack_c4;
    uint local_c0;
    uint uStack_bc;
    uint local_b8;
    uint uStack_b4;
    uint local_b0;
    uint uStack_ac;
    uint local_a8;
    uint uStack_a4;
    uint local_a0;
    uint uStack_9c;
    uint local_98;
    uint uStack_94;
    uint local_90;
    uint uStack_8c;
    uint local_88;
    uint uStack_84;
    uint local_7c;
    uint local_78;
    uint uStack_74;
    uint local_70;
    uint uStack_6c;
    uint local_68;
    uint uStack_64;
    uint local_60;
    uint uStack_5c;
    uint local_58;
    uint uStack_54;
    uint local_50;
    uint uStack_4c;
    uint local_48;
    uint uStack_44;
    uint local_40;
    uint uStack_3c;
    uint local_38;
    uint uStack_34;
    uint local_30;
    uint uStack_2c;
    int local_24;

    local_24 = *(int *)(param_1 + 0x80);
    local_108 = param_1;
    if (param_3 < 0x80U - local_24) {
        memcpy((void *)(param_1 + local_24), param_2, param_3);
        *(uint *)(param_1 + 0x80) = local_24 + param_3;
    } else {
        local_30 = *(uint *)(param_1 + 0x88);
        uStack_2c = *(uint *)(param_1 + 0x8c);
        local_38 = *(uint *)(param_1 + 0x90);
        uStack_34 = *(uint *)(param_1 + 0x94);
        local_40 = *(uint *)(param_1 + 0x98);
        uStack_3c = *(uint *)(param_1 + 0x9c);
        local_48 = *(uint *)(param_1 + 0xa0);
        uStack_44 = *(uint *)(param_1 + 0xa4);
        local_50 = *(uint *)(param_1 + 0xa8);
        uStack_4c = *(uint *)(param_1 + 0xac);
        local_58 = *(uint *)(param_1 + 0xb0);
        uStack_54 = *(uint *)(param_1 + 0xb4);
        local_60 = *(uint *)(param_1 + 0xb8);
        uStack_5c = *(uint *)(param_1 + 0xbc);
        local_68 = *(uint *)(param_1 + 0xc0);
        uStack_64 = *(uint *)(param_1 + 0xc4);
        local_110 = *(uint *)(param_1 + 200);
        uStack_10c = *(uint *)(param_1 + 0xcc);
        local_118 = *(uint *)(param_1 + 0xd0);
        uStack_114 = *(uint *)(param_1 + 0xd4);
        local_120 = *(uint *)(param_1 + 0xd8);
        uStack_11c = *(uint *)(param_1 + 0xdc);
        local_128 = *(uint *)(param_1 + 0xe0);
        uStack_124 = *(uint *)(param_1 + 0xe4);
        local_70 = *(uint *)(param_1 + 0xe8);
        uStack_6c = *(uint *)(param_1 + 0xec);
        local_78 = *(uint *)(param_1 + 0xf0);
        uStack_74 = *(uint *)(param_1 + 0xf4);
        local_1b4 = param_3;
        local_1b0 = param_2;
        uVar6 = CONCAT44(local_130._4_4_, (undefined4)local_130);
        while (local_1b4 != 0) {
            local_7c = 0x80 - local_24;
            if (local_1b4 < local_7c) {
                local_7c = local_1b4;
            }
            local_130 = uVar6;
            memcpy((void *)(local_108 + local_24), local_1b0, local_7c);
            local_24 = local_24 + local_7c;
            local_1b0 = (void *)((int)local_1b0 + local_7c);
            local_1b4 = local_1b4 - local_7c;
            uVar6 = local_130;
            if (local_24 == 0x80) {
                bVar5 = 0xfffffbff < local_70;
                local_70 = local_70 + 0x400;
                uStack_6c = uStack_6c + bVar5;
                bVar5 = uStack_6c == 0;
                if (uStack_6c == 0) {
                    bVar5 = local_70 < 0x400;
                }
                if (bVar5) {
                    bVar5 = 0xfffffffe < local_78;
                    local_78 = local_78 + 1;
                    uStack_74 = uStack_74 + bVar5;
                }
                local_88 = local_30;
                uStack_84 = uStack_2c;
                local_90 = local_38;
                uStack_8c = uStack_34;
                local_98 = local_40;
                uStack_94 = uStack_3c;
                local_a0 = local_48;
                uStack_9c = uStack_44;
                local_a8 = local_50;
                uStack_a4 = uStack_4c;
                local_b0 = local_58;
                uStack_ac = uStack_54;
                local_b8 = local_60;
                uStack_b4 = uStack_5c;
                local_c0 = local_68;
                uStack_bc = uStack_64;
                local_c8 = local_110 ^ 0x85a308d3;
                uStack_c4 = uStack_10c ^ 0x243f6a88;
                local_d0 = local_118 ^ 0x3707344;
                uStack_cc = uStack_114 ^ 0x13198a2e;
                local_d8 = local_120 ^ 0x299f31d0;
                uStack_d4 = uStack_11c ^ 0xa4093822;
                local_e0 = local_128 ^ 0xec4e6c89;
                uStack_dc = uStack_124 ^ 0x82efa98;
                local_e8 = local_70 ^ 0x38d01377;
                uStack_e4 = uStack_6c ^ 0x452821e6;
                local_f0 = local_70 ^ 0x34e90c6c;
                uStack_ec = uStack_6c ^ 0xbe5466cf;
                local_f8 = local_78 ^ 0xc97c50dd;
                uStack_f4 = uStack_74 ^ 0xc0ac29b7;
                local_100 = local_78 ^ 0xb5470917;
                uStack_fc = uStack_74 ^ 0x3f84d5b5;
                uVar6 = sph_dec64be_aligned(local_108);
                local_1a8 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 8);
                local_1a0 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x10);
                local_198 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x18);
                local_190 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x20);
                local_188 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x28);
                local_180 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x30);
                local_178 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x38);
                local_170 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x40);
                local_168 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x48);
                local_160 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x50);
                local_158 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x58);
                local_150 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x60);
                local_148 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x68);
                local_140 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x70);
                local_138 = uVar6;
                uVar6 = sph_dec64be_aligned(local_108 + 0x78);
                local_130 = uVar6;
                for (local_104 = 0; local_104 < 0x10;
                     local_104 = local_104 + 1) {
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 4) * 8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40))) +
                        local_88 + local_a8;
                    uStack_84 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 4) * 8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40) * 8 +
                                   4)) +
                        uStack_84 + uStack_a4 + CARRY4(local_88, local_a8) +
                        (uint)CARRY4(
                            *(uint *)(CB +
                                      *(int *)(sigma + local_104 * 0x40 + 4) *
                                          8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40)),
                            local_88 + local_a8);
                    local_88 = uVar2;
                    uVar3 = uVar2 ^ local_e8;
                    local_e8 = uStack_84 ^ uStack_e4;
                    uStack_e4 = uVar3;
                    uVar4 = local_e8 + local_c8;
                    uStack_c4 = uVar3 + uStack_c4 + CARRY4(local_e8, local_c8);
                    local_c8 = uVar4;
                    uVar1 = (uStack_c4 ^ uStack_a4) >> 0x19 | (uVar4 ^ local_a8)
                                                                  << 7;
                    local_a8 = (uVar4 ^ local_a8) >> 0x19 |
                               (uStack_c4 ^ uStack_a4) << 7;
                    uStack_a4 = uVar1;
                    local_88 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40) * 8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 4))) +
                        uVar2 + local_a8;
                    uStack_84 =
                        (*(uint *)(CB + *(int *)(sigma + local_104 * 0x40) * 8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 4) * 8 +
                                   4)) +
                        uStack_84 + uVar1 + CARRY4(uVar2, local_a8) +
                        (uint)CARRY4(
                            *(uint *)(CB +
                                      *(int *)(sigma + local_104 * 0x40) * 8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   4)),
                            uVar2 + local_a8);
                    uStack_e4 = (uStack_84 ^ uVar3) >> 0x10 |
                                (local_88 ^ local_e8) << 0x10;
                    local_e8 = (local_88 ^ local_e8) >> 0x10 |
                               (uStack_84 ^ uVar3) << 0x10;
                    local_c8 = local_e8 + uVar4;
                    uStack_c4 = uStack_e4 + uStack_c4 + CARRY4(local_e8, uVar4);
                    uStack_a4 = (uStack_c4 ^ uVar1) >> 0xb |
                                (local_c8 ^ local_a8) << 0x15;
                    local_a8 = (local_c8 ^ local_a8) >> 0xb |
                               (uStack_c4 ^ uVar1) << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0xc) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 8))) +
                        local_90 + local_b0;
                    uStack_8c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0xc) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 8) * 8 +
                                   4)) +
                        uStack_8c + uStack_ac + CARRY4(local_90, local_b0) +
                        (uint)CARRY4(
                            *(uint *)(CB +
                                      *(int *)(sigma + local_104 * 0x40 + 0xc) *
                                          8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   8)),
                            local_90 + local_b0);
                    local_90 = uVar2;
                    uVar3 = uVar2 ^ local_f0;
                    local_f0 = uStack_8c ^ uStack_ec;
                    uStack_ec = uVar3;
                    uVar4 = local_f0 + local_d0;
                    uStack_cc = uVar3 + uStack_cc + CARRY4(local_f0, local_d0);
                    local_d0 = uVar4;
                    uVar1 = (uStack_cc ^ uStack_ac) >> 0x19 | (uVar4 ^ local_b0)
                                                                  << 7;
                    local_b0 = (uVar4 ^ local_b0) >> 0x19 |
                               (uStack_cc ^ uStack_ac) << 7;
                    uStack_ac = uVar1;
                    local_90 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 8) * 8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0xc))) +
                        uVar2 + local_b0;
                    uStack_8c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 8) * 8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0xc) *
                                       8 +
                                   4)) +
                        uStack_8c + uVar1 + CARRY4(uVar2, local_b0) +
                        (uint)CARRY4(
                            *(uint *)(CB +
                                      *(int *)(sigma + local_104 * 0x40 + 8) *
                                          8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0xc)),
                            uVar2 + local_b0);
                    uStack_ec = (uStack_8c ^ uVar3) >> 0x10 |
                                (local_90 ^ local_f0) << 0x10;
                    local_f0 = (local_90 ^ local_f0) >> 0x10 |
                               (uStack_8c ^ uVar3) << 0x10;
                    local_d0 = local_f0 + uVar4;
                    uStack_cc = uStack_ec + uStack_cc + CARRY4(local_f0, uVar4);
                    uStack_ac = (uStack_cc ^ uVar1) >> 0xb |
                                (local_d0 ^ local_b0) << 0x15;
                    local_b0 = (local_d0 ^ local_b0) >> 0xb |
                               (uStack_cc ^ uVar1) << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x14) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x10))) +
                        local_98 + local_b8;
                    uStack_94 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x14) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x10) *
                                       8 +
                                   4)) +
                        uStack_94 + uStack_b4 + CARRY4(local_98, local_b8) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x14) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x10)),
                            local_98 + local_b8);
                    local_98 = uVar2;
                    uVar3 = uVar2 ^ local_f8;
                    local_f8 = uStack_94 ^ uStack_f4;
                    uStack_f4 = uVar3;
                    uVar4 = local_f8 + local_d8;
                    uStack_d4 = uVar3 + uStack_d4 + CARRY4(local_f8, local_d8);
                    local_d8 = uVar4;
                    uVar1 = (uStack_d4 ^ uStack_b4) >> 0x19 | (uVar4 ^ local_b8)
                                                                  << 7;
                    local_b8 = (uVar4 ^ local_b8) >> 0x19 |
                               (uStack_d4 ^ uStack_b4) << 7;
                    uStack_b4 = uVar1;
                    local_98 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x10) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x14))) +
                        uVar2 + local_b8;
                    uStack_94 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x10) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x14) *
                                       8 +
                                   4)) +
                        uStack_94 + uVar1 + CARRY4(uVar2, local_b8) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x10) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x14)),
                            uVar2 + local_b8);
                    uStack_f4 = (uStack_94 ^ uVar3) >> 0x10 |
                                (local_98 ^ local_f8) << 0x10;
                    local_f8 = (local_98 ^ local_f8) >> 0x10 |
                               (uStack_94 ^ uVar3) << 0x10;
                    local_d8 = local_f8 + uVar4;
                    uStack_d4 = uStack_f4 + uStack_d4 + CARRY4(local_f8, uVar4);
                    uStack_b4 = (uStack_d4 ^ uVar1) >> 0xb |
                                (local_d8 ^ local_b8) << 0x15;
                    local_b8 = (local_d8 ^ local_b8) >> 0xb |
                               (uStack_d4 ^ uVar1) << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x1c) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x18))) +
                        local_a0 + local_c0;
                    uStack_9c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x1c) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x18) *
                                       8 +
                                   4)) +
                        uStack_9c + uStack_bc + CARRY4(local_a0, local_c0) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x1c) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x18)),
                            local_a0 + local_c0);
                    local_a0 = uVar2;
                    uVar3 = uVar2 ^ local_100;
                    local_100 = uStack_9c ^ uStack_fc;
                    uStack_fc = uVar3;
                    uVar4 = local_100 + local_e0;
                    uStack_dc = uVar3 + uStack_dc + CARRY4(local_100, local_e0);
                    local_e0 = uVar4;
                    uVar1 = (uStack_dc ^ uStack_bc) >> 0x19 | (uVar4 ^ local_c0)
                                                                  << 7;
                    local_c0 = (uVar4 ^ local_c0) >> 0x19 |
                               (uStack_dc ^ uStack_bc) << 7;
                    uStack_bc = uVar1;
                    local_a0 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x18) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x1c))) +
                        uVar2 + local_c0;
                    uStack_9c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x18) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x1c) *
                                       8 +
                                   4)) +
                        uStack_9c + uVar1 + CARRY4(uVar2, local_c0) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x18) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x1c)),
                            uVar2 + local_c0);
                    uStack_fc = (uStack_9c ^ uVar3) >> 0x10 |
                                (local_a0 ^ local_100) << 0x10;
                    local_100 = (local_a0 ^ local_100) >> 0x10 |
                                (uStack_9c ^ uVar3) << 0x10;
                    local_e0 = local_100 + uVar4;
                    uStack_dc =
                        uStack_fc + uStack_dc + CARRY4(local_100, uVar4);
                    uStack_bc = (uStack_dc ^ uVar1) >> 0xb |
                                (local_e0 ^ local_c0) << 0x15;
                    local_c0 = (local_e0 ^ local_c0) >> 0xb |
                               (uStack_dc ^ uVar1) << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x24) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x20))) +
                        local_88 + local_b0;
                    uStack_84 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x24) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x20) *
                                       8 +
                                   4)) +
                        uStack_84 + uStack_ac + CARRY4(local_88, local_b0) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x24) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x20)),
                            local_88 + local_b0);
                    local_88 = uVar2;
                    uVar3 = uVar2 ^ local_100;
                    local_100 = uStack_84 ^ uStack_fc;
                    uStack_fc = uVar3;
                    uVar4 = local_100 + local_d8;
                    uStack_d4 = uVar3 + uStack_d4 + CARRY4(local_100, local_d8);
                    local_d8 = uVar4;
                    uVar1 = (uStack_d4 ^ uStack_ac) >> 0x19 | (uVar4 ^ local_b0)
                                                                  << 7;
                    local_b0 = (uVar4 ^ local_b0) >> 0x19 |
                               (uStack_d4 ^ uStack_ac) << 7;
                    uStack_ac = uVar1;
                    local_88 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x20) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x24))) +
                        uVar2 + local_b0;
                    uStack_84 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x20) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x24) *
                                       8 +
                                   4)) +
                        uStack_84 + uVar1 + CARRY4(uVar2, local_b0) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x20) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x24)),
                            uVar2 + local_b0);
                    local_100 = local_88 ^ local_100;
                    uVar3 = uStack_84 ^ uVar3;
                    uStack_fc = uVar3 >> 0x10 | local_100 << 0x10;
                    local_100 = local_100 >> 0x10 | uVar3 << 0x10;
                    uStack_d4 =
                        uStack_fc + uStack_d4 + CARRY4(local_100, uVar4);
                    local_d8 = local_100 + uVar4;
                    uVar2 = local_100 + uVar4 ^ local_b0;
                    uVar1 = uStack_d4 ^ uVar1;
                    local_b0 = uVar2 >> 0xb | uVar1 << 0x15;
                    uStack_ac = uVar1 >> 0xb | uVar2 << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x2c) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x28))) +
                        local_90 + local_b8;
                    uStack_8c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x2c) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x28) *
                                       8 +
                                   4)) +
                        uStack_8c + uStack_b4 + CARRY4(local_90, local_b8) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x2c) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x28)),
                            local_90 + local_b8);
                    local_90 = uVar2;
                    uVar3 = uVar2 ^ local_e8;
                    local_e8 = uStack_8c ^ uStack_e4;
                    uStack_e4 = uVar3;
                    uVar4 = local_e8 + local_e0;
                    uStack_dc = uVar3 + uStack_dc + CARRY4(local_e8, local_e0);
                    local_e0 = uVar4;
                    uVar1 = (uStack_dc ^ uStack_b4) >> 0x19 | (uVar4 ^ local_b8)
                                                                  << 7;
                    local_b8 = (uVar4 ^ local_b8) >> 0x19 |
                               (uStack_dc ^ uStack_b4) << 7;
                    uStack_b4 = uVar1;
                    local_90 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x28) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x2c))) +
                        uVar2 + local_b8;
                    uStack_8c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x28) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x2c) *
                                       8 +
                                   4)) +
                        uStack_8c + uVar1 + CARRY4(uVar2, local_b8) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x28) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x2c)),
                            uVar2 + local_b8);
                    local_e8 = local_90 ^ local_e8;
                    uVar3 = uStack_8c ^ uVar3;
                    uStack_e4 = uVar3 >> 0x10 | local_e8 << 0x10;
                    local_e8 = local_e8 >> 0x10 | uVar3 << 0x10;
                    uStack_dc = uStack_e4 + uStack_dc + CARRY4(local_e8, uVar4);
                    local_e0 = local_e8 + uVar4;
                    uVar2 = local_e8 + uVar4 ^ local_b8;
                    uVar1 = uStack_dc ^ uVar1;
                    local_b8 = uVar2 >> 0xb | uVar1 << 0x15;
                    uStack_b4 = uVar1 >> 0xb | uVar2 << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x34) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x30))) +
                        local_98 + local_c0;
                    uStack_94 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x34) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x30) *
                                       8 +
                                   4)) +
                        uStack_94 + uStack_bc + CARRY4(local_98, local_c0) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x34) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x30)),
                            local_98 + local_c0);
                    local_98 = uVar2;
                    uVar3 = uVar2 ^ local_f0;
                    local_f0 = uStack_94 ^ uStack_ec;
                    uStack_ec = uVar3;
                    uVar4 = local_f0 + local_c8;
                    uStack_c4 = uVar3 + uStack_c4 + CARRY4(local_f0, local_c8);
                    local_c8 = uVar4;
                    uVar1 = (uStack_c4 ^ uStack_bc) >> 0x19 | (uVar4 ^ local_c0)
                                                                  << 7;
                    local_c0 = (uVar4 ^ local_c0) >> 0x19 |
                               (uStack_c4 ^ uStack_bc) << 7;
                    uStack_bc = uVar1;
                    local_98 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x30) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x34))) +
                        uVar2 + local_c0;
                    uStack_94 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x30) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x34) *
                                       8 +
                                   4)) +
                        uStack_94 + uVar1 + CARRY4(uVar2, local_c0) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x30) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x34)),
                            uVar2 + local_c0);
                    local_f0 = local_98 ^ local_f0;
                    uVar3 = uStack_94 ^ uVar3;
                    uStack_ec = uVar3 >> 0x10 | local_f0 << 0x10;
                    local_f0 = local_f0 >> 0x10 | uVar3 << 0x10;
                    uStack_c4 = uStack_ec + uStack_c4 + CARRY4(local_f0, uVar4);
                    local_c8 = local_f0 + uVar4;
                    uVar2 = local_f0 + uVar4 ^ local_c0;
                    uVar1 = uStack_c4 ^ uVar1;
                    local_c0 = uVar2 >> 0xb | uVar1 << 0x15;
                    uStack_bc = uVar1 >> 0xb | uVar2 << 0x15;
                    uVar2 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x3c) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x38))) +
                        local_a0 + local_a8;
                    uStack_9c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x3c) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x38) *
                                       8 +
                                   4)) +
                        uStack_9c + uStack_a4 + CARRY4(local_a0, local_a8) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x3c) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x38)),
                            local_a0 + local_a8);
                    local_a0 = uVar2;
                    uVar3 = uVar2 ^ local_f8;
                    local_f8 = uStack_9c ^ uStack_f4;
                    uStack_f4 = uVar3;
                    uVar4 = local_f8 + local_d0;
                    uStack_cc = uVar3 + uStack_cc + CARRY4(local_f8, local_d0);
                    local_d0 = uVar4;
                    uVar1 = (uStack_cc ^ uStack_a4) >> 0x19 | (uVar4 ^ local_a8)
                                                                  << 7;
                    local_a8 = (uVar4 ^ local_a8) >> 0x19 |
                               (uStack_cc ^ uStack_a4) << 7;
                    uStack_a4 = uVar1;
                    local_a0 =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x38) *
                                       8) ^
                         *(uint *)(&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x3c))) +
                        uVar2 + local_a8;
                    uStack_9c =
                        (*(uint *)(CB +
                                   *(int *)(sigma + local_104 * 0x40 + 0x38) *
                                       8 +
                                   4) ^
                         *(uint *)((int)&local_1a8 +
                                   *(int *)(sigma + local_104 * 0x40 + 0x3c) *
                                       8 +
                                   4)) +
                        uStack_9c + uVar1 + CARRY4(uVar2, local_a8) +
                        (uint)CARRY4(
                            *(uint *)(CB + *(int *)(sigma + local_104 * 0x40 +
                                                    0x38) *
                                               8) ^
                                *(uint *)(&local_1a8 +
                                          *(int *)(sigma + local_104 * 0x40 +
                                                   0x3c)),
                            uVar2 + local_a8);
                    local_f8 = local_a0 ^ local_f8;
                    uVar3 = uStack_9c ^ uVar3;
                    uStack_f4 = local_f8 << 0x10 | uVar3 >> 0x10;
                    local_f8 = uVar3 << 0x10 | local_f8 >> 0x10;
                    uStack_cc = uStack_f4 + uStack_cc + CARRY4(local_f8, uVar4);
                    local_d0 = local_f8 + uVar4;
                    uVar2 = local_f8 + uVar4 ^ local_a8;
                    uVar1 = uStack_cc ^ uVar1;
                    local_a8 = uVar1 << 0x15 | uVar2 >> 0xb;
                    uStack_a4 = uVar2 << 0x15 | uVar1 >> 0xb;
                }
                local_30 = local_30 ^ local_110 ^ local_88 ^ local_c8;
                uStack_2c = uStack_2c ^ uStack_10c ^ uStack_84 ^ uStack_c4;
                local_38 = local_38 ^ local_118 ^ local_90 ^ local_d0;
                uStack_34 = uStack_34 ^ uStack_114 ^ uStack_8c ^ uStack_cc;
                local_40 = local_40 ^ local_120 ^ local_98 ^ local_d8;
                uStack_3c = uStack_3c ^ uStack_11c ^ uStack_94 ^ uStack_d4;
                local_48 = local_48 ^ local_128 ^ local_a0 ^ local_e0;
                uStack_44 = uStack_44 ^ uStack_124 ^ uStack_9c ^ uStack_dc;
                local_50 = local_50 ^ local_110 ^ local_a8 ^ local_e8;
                uStack_4c = uStack_4c ^ uStack_10c ^ uStack_a4 ^ uStack_e4;
                local_58 = local_58 ^ local_118 ^ local_b0 ^ local_f0;
                uStack_54 = uStack_54 ^ uStack_114 ^ uStack_ac ^ uStack_ec;
                local_60 = local_60 ^ local_120 ^ local_b8 ^ local_f8;
                uStack_5c = uStack_5c ^ uStack_11c ^ uStack_b4 ^ uStack_f4;
                local_68 = local_68 ^ local_128 ^ local_c0 ^ local_100;
                uStack_64 = uStack_64 ^ uStack_124 ^ uStack_bc ^ uStack_fc;
                local_24 = 0;
            }
        }
        *(uint *)(param_1 + 0x88) = local_30;
        *(uint *)(param_1 + 0x8c) = uStack_2c;
        *(uint *)(param_1 + 0x90) = local_38;
        *(uint *)(param_1 + 0x94) = uStack_34;
        *(uint *)(param_1 + 0x98) = local_40;
        *(uint *)(param_1 + 0x9c) = uStack_3c;
        *(uint *)(param_1 + 0xa0) = local_48;
        *(uint *)(param_1 + 0xa4) = uStack_44;
        *(uint *)(param_1 + 0xa8) = local_50;
        *(uint *)(param_1 + 0xac) = uStack_4c;
        *(uint *)(param_1 + 0xb0) = local_58;
        *(uint *)(param_1 + 0xb4) = uStack_54;
        *(uint *)(param_1 + 0xb8) = local_60;
        *(uint *)(param_1 + 0xbc) = uStack_5c;
        *(uint *)(param_1 + 0xc0) = local_68;
        *(uint *)(param_1 + 0xc4) = uStack_64;
        *(uint *)(param_1 + 200) = local_110;
        *(uint *)(param_1 + 0xcc) = uStack_10c;
        *(uint *)(param_1 + 0xd0) = local_118;
        *(uint *)(param_1 + 0xd4) = uStack_114;
        *(uint *)(param_1 + 0xd8) = local_120;
        *(uint *)(param_1 + 0xdc) = uStack_11c;
        *(uint *)(param_1 + 0xe0) = local_128;
        *(uint *)(param_1 + 0xe4) = uStack_124;
        *(uint *)(param_1 + 0xe8) = local_70;
        *(uint *)(param_1 + 0xec) = uStack_6c;
        *(uint *)(param_1 + 0xf0) = local_78;
        *(uint *)(param_1 + 0xf4) = uStack_74;
        *(int *)(param_1 + 0x80) = local_24;
    }
    return;
}

void blake64_close(int param_1, byte param_2, uint param_3, int param_4,
                   uint param_5)

{
    uint uVar1;
    undefined4 extraout_r1;
    undefined4 extraout_r1_00;
    int iVar2;
    undefined4 *puVar3;
    byte abStack_b8[111];
    byte local_49;
    undefined1 auStack_48[8];
    undefined1 auStack_40[12];
    int local_34;
    undefined4 local_30;
    undefined4 uStack_2c;
    int local_28;
    int iStack_24;
    int local_20;
    uint local_1c;
    int local_18;
    uint local_14;

    local_18 = *(int *)(param_1 + 0x80);
    local_1c = local_18 * 8 + param_3;
    local_20 = 0x80 >> (param_3 & 0xff);
    abStack_b8[local_18] = (byte)local_20 | param_2 & -(byte)local_20;
    local_28 = local_1c + *(uint *)(param_1 + 0xe8);
    iStack_24 = *(int *)(param_1 + 0xec) +
                (uint)CARRY4(local_1c, *(uint *)(param_1 + 0xe8));
    local_30 = *(undefined4 *)(param_1 + 0xf0);
    uStack_2c = *(undefined4 *)(param_1 + 0xf4);
    if ((local_18 == 0) && (param_3 == 0)) {
        *(undefined4 *)(param_1 + 0xe8) = 0xfffffc00;
        *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
    } else if (*(int *)(param_1 + 0xe8) == 0 && *(int *)(param_1 + 0xec) == 0) {
        *(uint *)(param_1 + 0xe8) = local_1c - 0x400;
        *(uint *)(param_1 + 0xec) = (0x3ff < local_1c) - 1;
        iVar2 = *(int *)(param_1 + 0xf0);
        *(int *)(param_1 + 0xf0) = iVar2 + -1;
        *(uint *)(param_1 + 0xf4) =
            *(int *)(param_1 + 0xf4) + -1 + (uint)(iVar2 != 0);
    } else {
        uVar1 = *(uint *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = uVar1 - (0x400 - local_1c);
        *(uint *)(param_1 + 0xec) =
            *(int *)(param_1 + 0xec) - (uint)(uVar1 < 0x400 - local_1c);
    }
    if (local_1c < 0x37f) {
        memset(abStack_b8 + local_18 + 1, 0, 0x6f - local_18);
        if (param_5 == 8) {
            local_49 = local_49 | 1;
        }
        sph_enc64be_aligned(auStack_48);
        sph_enc64be_aligned(auStack_40, extraout_r1, local_28, iStack_24);
        blake64(param_1, abStack_b8 + local_18, 0x80 - local_18);
    } else {
        memset(abStack_b8 + local_18 + 1, 0, 0x7f - local_18);
        blake64(param_1, abStack_b8 + local_18, 0x80 - local_18);
        *(undefined4 *)(param_1 + 0xe8) = 0xfffffc00;
        *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
        memset(abStack_b8, 0, 0x70);
        if (param_5 == 8) {
            local_49 = 1;
        }
        sph_enc64be_aligned(auStack_48);
        sph_enc64be_aligned(auStack_40, extraout_r1_00, local_28, iStack_24);
        blake64(param_1, abStack_b8, 0x80);
    }
    local_34 = param_4;
    for (local_14 = 0; local_14 < param_5; local_14 = local_14 + 1) {
        iVar2 = local_34 + local_14 * 8;
        puVar3 = (undefined4 *)(param_1 + (local_14 + 0x11) * 8);
        sph_enc64be(iVar2, iVar2, *puVar3, puVar3[1]);
    }
    return;
}

void sph_blake224_init(undefined4 param_1)

{
    blake32_init(param_1, &IV224, salt_zero_small);
    return;
}

void sph_blake224(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    blake32(param_1, param_2, param_3);
    return;
}

void sph_blake224_close(undefined4 param_1, undefined4 param_2)

{
    sph_blake224_addbits_and_close(param_1, 0, 0, param_2);
    return;
}

void sph_blake224_addbits_and_close(undefined4 param_1, undefined4 param_2,
                                    undefined4 param_3, undefined4 param_4)

{
    blake32_close(param_1, param_2, param_3, param_4, 7);
    sph_blake224_init(param_1);
    return;
}

void sph_blake256_init(undefined4 param_1)

{
    blake32_init(param_1, IV256, salt_zero_small);
    return;
}

void sph_blake256(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    blake32(param_1, param_2, param_3);
    return;
}

void sph_blake256_close(undefined4 param_1, undefined4 param_2)

{
    sph_blake256_addbits_and_close(param_1, 0, 0, param_2);
    return;
}

void sph_blake256_addbits_and_close(undefined4 param_1, undefined4 param_2,
                                    undefined4 param_3, undefined4 param_4)

{
    blake32_close(param_1, param_2, param_3, param_4, 8);
    sph_blake256_init(param_1);
    return;
}

void sph_blake384_init(undefined4 param_1)

{
    blake64_init(param_1, IV384, salt_zero_big);
    return;
}

void sph_blake384(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    blake64(param_1, param_2, param_3);
    return;
}

void sph_blake384_close(undefined4 param_1, undefined4 param_2)

{
    sph_blake384_addbits_and_close(param_1, 0, 0, param_2);
    return;
}

void sph_blake384_addbits_and_close(undefined4 param_1, undefined4 param_2,
                                    undefined4 param_3, undefined4 param_4)

{
    blake64_close(param_1, param_2, param_3, param_4, 6);
    sph_blake384_init(param_1);
    return;
}

void sph_blake512_init(undefined4 param_1)

{
    blake64_init(param_1, IV512, salt_zero_big);
    return;
}

void sph_blake512(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    blake64(param_1, param_2, param_3);
    return;
}

void sph_blake512_close(undefined4 param_1, undefined4 param_2)

{
    sph_blake512_addbits_and_close(param_1, 0, 0, param_2);
    return;
}

void sph_blake512_addbits_and_close(undefined4 param_1, undefined4 param_2,
                                    undefined4 param_3, undefined4 param_4)

{
    blake64_close(param_1, param_2, param_3, param_4, 8);
    sph_blake512_init(param_1);
    return;
}

void platform_dump_capability(uint *param_1)

{
    uint local_10;
    uint local_c;

    if (param_1 != (uint *)0x0) {
        printf("%s:%d", "platform_dump_capability", 0x20);
        puts("==========================capability "
             "start==========================");
        printf("%s:%d", "platform_dump_capability", 0x21);
        printf("board num = %d\n", *param_1);
        for (local_c = 0; local_c < *param_1; local_c = local_c + 1) {
            printf("%s:%d", "platform_dump_capability", 0x23);
            printf("board id = %d, chain num = %d\n",
                   param_1[local_c * 0x12 + 1], param_1[local_c * 0x12 + 2]);
            for (local_10 = 0; local_10 < param_1[local_c * 0x12 + 2];
                 local_10 = local_10 + 1) {
                printf("%s:%d", "platform_dump_capability", 0x25);
                printf("\tchain id = %d\n",
                       param_1[local_c * 0x12 + local_10 + 3]);
            }
        }
        printf("%s:%d", "platform_dump_capability", 0x29);
        puts("==========================capability "
             "end============================");
    }
    return;
}

undefined4 platform_init(void)

{
    int iVar1;
    undefined4 uVar2;
    uint local_214;
    char acStack_210[512];
    char *local_10;
    int local_c;

    if (platform_inited == 0) {
        iVar1 = fpga_init();
        if (iVar1 == 0) {
            iVar1 = gpio_init();
            if (iVar1 == 0) {
                memset(capability, 0, 0x124);
                local_10 = getenv("HAL_CONFIG_PATH");
                if (local_10 == (char *)0x0) {
                    snprintf(acStack_210, 0x200, "/media/card/%s",
                             "hal_conf.json");
                } else {
                    snprintf(acStack_210, 0x200, "%s/%s", local_10,
                             "hal_conf.json");
                }
                printf("%s:%d", "platform_init", 0x41);
                printf("hal config path = %s\n", acStack_210);
                iVar1 = hal_load_conf(acStack_210);
                if (iVar1 == 0) {
                    local_214 = 0;
                    local_c = 0;
                    fpga_read(2, &local_214);
                    if (local_214 == 0) {
                        printf("%s:%d", "platform_init", 0x4c);
                        puts("Cannot Find Any Plug In!\r");
                    } else if ((local_214 & 0xff000000) == 0) {
                        platform_is_t9 = 0;
                        local_214 = local_214 & 0xffff;
                        printf("%s:%d", "platform_init", 0x57);
                        printf("HASH_ON_PLUG V9 = 0x%x\n", local_214);
                        for (; local_214 != 0; local_214 = local_214 >> 1) {
                            if ((local_214 & 1) != 0) {
                                printf("%s:%d", "platform_init", 0x5a);
                                printf("slot %d pluged\n", local_c);
                                *(int *)(capability + capability._0_4_ * 0x48 +
                                         4) = local_c;
                                *(int *)(capability +
                                         (capability._0_4_ * 0x12 +
                                          *(int *)(capability +
                                                   capability._0_4_ * 0x48 +
                                                   8) +
                                          2) *
                                             4 +
                                         4) = local_c;
                                *(int *)(capability + capability._0_4_ * 0x48 +
                                         8) =
                                    *(int *)(capability +
                                             capability._0_4_ * 0x48 + 8) +
                                    1;
                                capability._0_4_ = capability._0_4_ + 1;
                            }
                            local_c = local_c + 1;
                        }
                    } else {
                        platform_is_t9 = 1;
                        local_214 = local_214 >> 0x18;
                        printf("%s:%d", "platform_init", 0x51);
                        printf("HASH_ON_PLUG T9 = 0x%x\n", local_214);
                    }
                    if (platform_is_t9 == 0) {
                        fpga_read(v9_fpga_map._0_4_, &local_214);
                    } else {
                        fpga_read(t9_fpga_map, &local_214);
                    }
                    local_214 = local_214 | 0x20000000;
                    printf("%s:%d", "platform_init", 0x68);
                    printf("HARDWARE_VERSION = 0x%x\n", local_214);
                    if (platform_is_t9 == 0) {
                        fpga_write(v9_fpga_map._0_4_, local_214);
                    } else {
                        fpga_write(t9_fpga_map, local_214);
                    }
                    platform_dump_capability(capability);
                    platform_inited = 1;
                    fan_init();
                    ui_init();
                    uart_init();
                    uVar2 = 0;
                } else {
                    fpga_uninit();
                    gpio_uninit();
                    printf("%s:%d", "platform_init", 0x45);
                    puts("failed to load hal config");
                    uVar2 = 0xfffffffd;
                }
            } else {
                printf("%s:%d", "platform_init", 0x33);
                puts("gpio init failed");
                uVar2 = 0xfffffffe;
            }
        } else {
            printf("%s:%d", "platform_init", 0x2f);
            puts("fpga init failed");
            uVar2 = 0xffffffff;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

void platform_uninit(void)

{
    if (platform_inited != 0) {
        uart_uninit();
        fpga_uninit();
        fan_uninit();
        ui_uninit();
        gpio_uninit();
        platform_inited = 0;
    }
    return;
}

void get_system_capability(void *param_1)

{
    if (param_1 != (void *)0x0) {
        memcpy(param_1, capability, 0x124);
    }
    return;
}

undefined4 get_eth_mac(char *param_1, int param_2)

{
    int iVar1;
    undefined4 uVar2;
    char acStack_30[18];
    undefined1 auStack_1e[14];
    int local_10;
    int local_c;

    local_10 = 0;
    local_10 = socket(2, 1, 0);
    if (local_10 < 0) {
        printf("%s:%d", "get_eth_mac", 0x8f);
        printf("error sock");
        uVar2 = 0xffffffff;
    } else {
        strcpy(acStack_30, param_1);
        iVar1 = ioctl(local_10, 0x8927, acStack_30);
        if (iVar1 < 0) {
            printf("%s:%d", "get_eth_mac", 0x95);
            printf("error ioctl");
            close(local_10);
            uVar2 = 0xfffffffe;
        } else {
            for (local_c = 0; local_c < 6; local_c = local_c + 1) {
                *(undefined1 *)(param_2 + local_c) = auStack_1e[local_c];
            }
            close(local_10);
            uVar2 = 0;
        }
    }
    return uVar2;
}

undefined4 get_uuid(void *param_1)

{
    undefined4 uVar1;

    if (param_1 == (void *)0x0) {
        uVar1 = 0xffffffff;
    } else {
        memset(param_1, 0, 0x10);
        uVar1 = get_eth_mac(&DAT_0002ba3c, param_1);
    }
    return uVar1;
}

undefined4 get_mac(int param_1)

{
    undefined4 uVar1;

    if (param_1 == 0) {
        uVar1 = 0xffffffff;
    } else {
        uVar1 = get_eth_mac(&DAT_0002ba3c, param_1);
    }
    return uVar1;
}

void chain_reset(undefined4 param_1)

{
    chain_reset_low(param_1);
    usleep(100000);
    chain_reset_high(param_1);
    return;
}

void chain_reset_low(uint param_1)

{
    uint local_c;

    local_c = 0;
    if (platform_is_t9 == 0) {
        fpga_read(v9_fpga_map._48_4_, &local_c);
    } else {
        fpga_read(DAT_00035580, &local_c);
    }
    local_c = local_c | 1 << (param_1 & 0xff);
    if (platform_is_t9 == 0) {
        fpga_write(v9_fpga_map._48_4_, local_c);
    } else {
        fpga_write(DAT_00035580, local_c);
    }
    return;
}

void chain_reset_high(uint param_1)

{
    uint local_c;

    local_c = 0;
    if (platform_is_t9 == 0) {
        fpga_read(v9_fpga_map._48_4_, &local_c);
    } else {
        fpga_read(DAT_00035580, &local_c);
    }
    local_c = local_c & ~(1 << (param_1 & 0xff));
    if (platform_is_t9 == 0) {
        fpga_write(v9_fpga_map._48_4_, local_c);
    } else {
        fpga_write(DAT_00035580, local_c);
    }
    return;
}

void board_reset(undefined4 param_1)

{
    board_reset_low(param_1);
    usleep(100000);
    board_reset_high(param_1);
    return;
}

void board_reset_low(void)

{
    return;
}

void board_reset_high(void)

{
    return;
}

undefined4 get_hardware_type(void)

{
    undefined4 uVar1;
    int local_c;

    local_c = 0;
    if (platform_inited == 0) {
        printf("%s:%d", "get_hardware_type", 0xde);
        puts("platform not inited");
        uVar1 = 2;
    } else {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._0_4_, &local_c);
        } else {
            fpga_read(t9_fpga_map, &local_c);
        }
        if (local_c < 0) {
            uVar1 = 1;
        } else {
            uVar1 = 0;
        }
    }
    return uVar1;
}

undefined4 set_hardware_type(int param_1)

{
    undefined4 uVar1;
    uint local_c;

    local_c = 0;
    if (platform_inited == 0) {
        printf("%s:%d", "set_hardware_type", 0xed);
        puts("platform not inited");
        uVar1 = 0xfffffffe;
    } else {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._0_4_, &local_c);
        } else {
            fpga_read(t9_fpga_map, &local_c);
        }
        if (param_1 == 0) {
            local_c = local_c & 0x7fffffff;
        } else if (param_1 == 1) {
            local_c = local_c | 0x80000000;
        }
        if (platform_is_t9 == 0) {
            fpga_write(v9_fpga_map._0_4_, local_c);
        } else {
            fpga_write(t9_fpga_map, local_c);
        }
        uVar1 = 0;
    }
    return uVar1;
}

undefined4 enable_bypass_mode(void)

{
    undefined4 uVar1;
    uint local_c;

    local_c = 0;
    if (platform_inited == 0) {
        printf("%s:%d", "enable_bypass_mode", 0x104);
        puts("platform not inited");
        uVar1 = 0xfffffffe;
    } else {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._0_4_, &local_c);
        } else {
            fpga_read(t9_fpga_map, &local_c);
        }
        local_c = local_c | 0x20000000;
        if (platform_is_t9 == 0) {
            fpga_write(v9_fpga_map._0_4_, local_c);
        } else {
            fpga_write(t9_fpga_map, local_c);
        }
        uVar1 = 0;
    }
    return uVar1;
}

undefined4 disable_bypass_mode(void)

{
    undefined4 uVar1;
    uint local_c;

    local_c = 0;
    if (platform_inited == 0) {
        printf("%s:%d", "disable_bypass_mode", 0x112);
        puts("platform not inited");
        uVar1 = 0xfffffffe;
    } else {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._0_4_, &local_c);
        } else {
            fpga_read(t9_fpga_map, &local_c);
        }
        local_c = local_c & 0xdfffffff;
        if (platform_is_t9 == 0) {
            fpga_write(v9_fpga_map._0_4_, local_c);
        } else {
            fpga_write(t9_fpga_map, local_c);
        }
        uVar1 = 0;
    }
    return uVar1;
}

bool is_bypass_mode_enable(void)

{
    bool bVar1;
    uint local_c;

    local_c = 0;
    if (platform_inited == 0) {
        printf("%s:%d", "is_bypass_mode_enable", 0x120);
        puts("platform not inited");
        bVar1 = false;
    } else {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._0_4_, &local_c);
        } else {
            fpga_read(t9_fpga_map, &local_c);
        }
        bVar1 = (local_c & 0x20000000) != 0;
    }
    return bVar1;
}

uint get_hardware_version(void)

{
    uint local_c;

    local_c = 0;
    if (platform_inited == 0) {
        printf("%s:%d", "get_hardware_version", 0x12d);
        puts("platform not inited");
        local_c = 0;
    } else {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._0_4_, &local_c);
        } else {
            fpga_read(t9_fpga_map, &local_c);
        }
        local_c = local_c & 0xffff;
    }
    return local_c;
}

undefined4 fan_init(void)

{
    undefined4 uVar1;

    if (platform_inited == 0) {
        printf("%s:%d", "fan_init", 0xb);
        puts("please init platform first!!");
        uVar1 = 0xffffffff;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

void fan_uninit(void)

{
    return;
}

int fan_get_realtime_speed(uint param_1)

{
    uint local_10;
    int local_c;

    local_10 = 0;
    local_c = 0;
    while (true) {
        if (5 < local_c) {
            return -1;
        }
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._4_4_, &local_10);
        } else {
            fpga_read(DAT_00035554, &local_10);
        }
        printf("%s:%d", "fan_get_realtime_speed", 0x20);
        printf("FAN_SPEED fpga value = 0x%x\n", local_10);
        if ((local_10 >> 8 & 7) == param_1)
            break;
        usleep(10000);
        local_c = local_c + 1;
    }
    return (local_10 & 0xff) * 0x78;
}

undefined4 fan_get_max_num(void)

{
    undefined4 uVar1;

    uVar1 = hal_fan_number();
    return uVar1;
}

undefined4 fan_get_max_speed(undefined4 param_1)

{
    undefined4 uVar1;

    uVar1 = hal_fan_max_speed(param_1);
    return uVar1;
}

void reset(void)

{
    int local_c;

    local_c = -0x7fff8000;
    fpga_write(0x10, 0x80008000);
    do {
        usleep(100000);
        fpga_read(0x10, &local_c);
    } while (local_c < 0);
    printf("%s:%d", "reset", 0x123);
    puts("fpga reset success");
    return;
}

undefined4 fpga_init(void)

{
    undefined4 uVar1;

    if (fpga_inited == 0) {
        fpga_fd = open("/dev/axi_fpga_dev", 2);
        if (fpga_fd < 0) {
            printf("%s:%d", "fpga_init", 0x12f);
            printf("/dev/axi_fpga_dev open failed. fd = %d\n", fpga_fd);
            uVar1 = 0xffffffff;
        } else {
            axi_fpga_addr = mmap((void *)0x0, 0x1200, 3, 1, fpga_fd, 0);
            if (axi_fpga_addr == (void *)0x0) {
                printf("%s:%d", "fpga_init", 0x136);
                printf("mmap axi_fpga_addr failed. axi_fpga_addr = 0x%x\n",
                       axi_fpga_addr);
                close(fpga_fd);
                uVar1 = 0xfffffffe;
            } else {
                printf("%s:%d", "fpga_init", 0x13a);
                printf("fpga_init success. axi_fpga_addr = 0x%x\n",
                       axi_fpga_addr);
                reset();
                fpga_inited = 1;
                uVar1 = 0;
            }
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

void fpga_uninit(void)

{
    int iVar1;

    if (fpga_inited != 0) {
        iVar1 = munmap(axi_fpga_addr, 0x1200);
        if (iVar1 < 0) {
            printf("%s:%d", "fpga_uninit", 0x14a);
            puts("munmap failed!");
        }
        fpga_inited = 0;
        close(fpga_fd);
    }
    return;
}

undefined4 fpga_read(int param_1, undefined4 *param_2)

{
    *param_2 = *(undefined4 *)(axi_fpga_addr + param_1 * 4);
    return 0;
}

undefined4 fpga_write(int param_1, undefined4 param_2)

{
    *(undefined4 *)(axi_fpga_addr + param_1 * 4) = param_2;
    return 0;
}

int gpio_compare_e(int *param_1, int *param_2)

{
    return *param_1 - *param_2;
}

undefined4 gpio_thread_function(void)

{
    int iVar1;
    undefined4 local_2c;
    uint local_28;
    byte local_21;
    undefined4 local_20;
    undefined4 *local_1c;
    int local_18;
    undefined4 *local_14;
    int local_10;
    int local_c;

    local_10 = 0;
    do {
        if (gpio_thread == 0) {
            return 0;
        }
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)gpio_ctrl_map);
        if (iVar1 == 0) {
            local_14 = (undefined4 *)new_iterator_c_map(gpio_ctrl_map._24_4_);
            local_c = (*(code *)*local_14)(local_14);
            while (local_c != 0) {
                local_18 = local_14[5];
                local_1c = (undefined4 *)(*(code *)local_14[2])(local_c);
                local_20 = *(undefined4 *)**(undefined4 **)(local_18 + 0x10);
                local_21 = 0;
                local_10 = gpio_read(local_20, &local_21);
                if (local_10 != 0) {
                    printf("%s:%d", "gpio_thread_function", 0x32);
                    printf("failed to read gpio port %d\n", local_20);
                    free(local_1c);
                    break;
                }
                if (local_1c[1] != (uint)local_21) {
                    printf("%s:%d", "gpio_thread_function", 0x37);
                    printf("gpio port %d, last val = %d, new val = %d\n",
                           *(undefined4 *)**(undefined4 **)(local_18 + 0x10),
                           local_1c[1], (uint)local_21);
                    (*(code *)*local_1c)(local_20, local_21);
                    local_2c = *local_1c;
                    local_28 = (uint)local_21;
                    (*(code *)local_14[1])(local_14, &local_2c, 8);
                }
                free(local_1c);
                local_c = (*(code *)*local_14)(local_14);
            }
            delete_iterator_c_map(local_14);
            pthread_mutex_unlock((pthread_mutex_t *)gpio_ctrl_map);
        }
        usleep(200000);
    } while (true);
}

undefined4 gpio_init(void)

{
    if (gpio_inited == 0) {
        pthread_mutex_init((pthread_mutex_t *)gpio_ctrl_map,
                           (pthread_mutexattr_t *)0x0);
        gpio_ctrl_map._24_4_ = new_c_map(0x1cba1, 0, 0);
        pthread_mutex_init((pthread_mutex_t *)api_mutex,
                           (pthread_mutexattr_t *)0x0);
        gpio_thread = 1;
        pthread_create(&thread, (pthread_attr_t *)0x0,
                       (__start_routine *)0x1cbc1, (void *)0x0);
        gpio_inited = 1;
    } else {
        printf("%s:%d", "gpio_init", 0x4e);
        puts("gpio re init");
    }
    return 0;
}

void gpio_uninit(void)

{
    if (gpio_inited != 0) {
        gpio_thread = 0;
        pthread_join(thread, (void **)0x0);
        pthread_mutex_destroy((pthread_mutex_t *)gpio_ctrl_map);
        delete_c_map(gpio_ctrl_map._24_4_);
        gpio_inited = 0;
        pthread_mutex_destroy((pthread_mutex_t *)api_mutex);
    }
    return;
}

undefined4 gpio_reg_callback(undefined4 param_1, int param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_14;
    int local_10[2];

    local_14 = param_1;
    if (param_2 == 0) {
        printf("%s:%d", "gpio_reg_callback", 0x78);
        puts("bad param");
        uVar2 = 0xffffffff;
    } else {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)gpio_ctrl_map);
        if (iVar1 == 0) {
            iVar1 = exists_c_map(gpio_ctrl_map._24_4_, &local_14);
            if (iVar1 == 0) {
                printf("%s:%d", "gpio_reg_callback", 0x81);
                printf("add %d to callback map\n", local_14);
                local_10[1] = 0xffffffff;
                local_10[0] = param_2;
                insert_c_map(gpio_ctrl_map._24_4_, &local_14, 4, local_10, 8);
            } else {
                printf("%s:%d", "gpio_reg_callback", 0x85);
                printf("port %d already exist in callback map \n", local_14);
            }
            pthread_mutex_unlock((pthread_mutex_t *)gpio_ctrl_map);
            uVar2 = 0;
        } else {
            printf("%s:%d", "gpio_reg_callback", 0x7c);
            puts("fail to lock gpio ctrl mutex");
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}

undefined4 gpio_unreg_callback(undefined4 param_1, int param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_c;

    local_c = param_1;
    if (param_2 == 0) {
        printf("%s:%d", "gpio_unreg_callback", 0x94);
        puts("bad param");
        uVar2 = 0xffffffff;
    } else {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)gpio_ctrl_map);
        if (iVar1 == 0) {
            iVar1 = exists_c_map(gpio_ctrl_map._24_4_, &local_c);
            if (iVar1 == 1) {
                printf("%s:%d", "gpio_unreg_callback", 0x9d);
                printf("remove %d from callback list\n", local_c);
                remove_c_map(gpio_ctrl_map._24_4_, &local_c);
            } else {
                printf("%s:%d", "gpio_unreg_callback", 0xa0);
                puts("callback function not registered before");
            }
            pthread_mutex_unlock((pthread_mutex_t *)gpio_ctrl_map);
            uVar2 = 0;
        } else {
            printf("%s:%d", "gpio_unreg_callback", 0x98);
            puts("fail to lock gpio ctrl mutex");
            uVar2 = 0xffffffff;
        }
    }
    return uVar2;
}

undefined4 gpio_export(undefined4 param_1)

{
    int iVar1;
    ssize_t sVar2;
    undefined4 uVar3;
    char acStack_50[64];
    size_t local_10;
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)api_mutex);
    if (iVar1 == 0) {
        snprintf(acStack_50, 0x40, "/sys/class/gpio/gpio%d", param_1);
        iVar1 = access(acStack_50, 0);
        if (iVar1 == 0) {
            printf("%s:%d", "gpio_export", 0xb7);
            printf("port %d already exported\n", param_1);
            perror("access error");
            pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
            uVar3 = 0;
        } else {
            local_c = open("/sys/class/gpio/export", 1);
            if (local_c < 0) {
                printf("%s:%d", "gpio_export", 0xbf);
                puts("Failed to open export for writing!");
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0xfffffffe;
            } else {
                local_10 = snprintf(acStack_50, 0x40, "%d", param_1);
                sVar2 = write(local_c, acStack_50, local_10);
                if (sVar2 < 0) {
                    printf("%s:%d", "gpio_export", 0xc6);
                    printf("Failed to export gpio %d!", param_1);
                    close(local_c);
                    pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                    uVar3 = 0xfffffffd;
                } else {
                    printf("%s:%d", "gpio_export", 0xcb);
                    printf("export gpio %d success\n", param_1);
                    close(local_c);
                    pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                    uVar3 = 0;
                }
            }
        }
    } else {
        printf("%s:%d", "gpio_export", 0xb1);
        puts("failed to api lock");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}

undefined4 gpio_unexport(undefined4 param_1)

{
    int iVar1;
    ssize_t sVar2;
    undefined4 uVar3;
    char acStack_50[64];
    size_t local_10;
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)api_mutex);
    if (iVar1 == 0) {
        snprintf(acStack_50, 0x40, "/sys/class/gpio/gpio%d", param_1);
        local_c = access(acStack_50, 0);
        if (local_c == 0) {
            local_c = open("/sys/class/gpio/unexport", 1);
            if (local_c < 0) {
                printf("%s:%d", "gpio_unexport", 0xea);
                puts("Failed to open unexport for writing!");
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0xfffffffe;
            } else {
                local_10 = snprintf(acStack_50, 0x40, "%d", param_1);
                sVar2 = write(local_c, acStack_50, local_10);
                if (sVar2 < 0) {
                    printf("%s:%d", "gpio_unexport", 0xf1);
                    printf("Failed to unexport gpio %d!", param_1);
                    close(local_c);
                    pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                    uVar3 = 0xfffffffe;
                } else {
                    printf("%s:%d", "gpio_unexport", 0xf6);
                    printf("unexport gpio %d success\n", param_1);
                    close(local_c);
                    pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                    uVar3 = 0;
                }
            }
        } else {
            printf("%s:%d", "gpio_unexport", 0xe2);
            printf("port %d already unexported, ret = %d\n", param_1, local_c);
            perror("access error");
            pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
            uVar3 = 0;
        }
    } else {
        printf("%s:%d", "gpio_unexport", 0xdc);
        puts("failed to api lock");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}

undefined4 gpio_direction(undefined4 param_1, int param_2)

{
    int iVar1;
    ssize_t sVar2;
    undefined4 uVar3;
    size_t __n;
    char acStack_4c[64];
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)api_mutex);
    if (iVar1 == 0) {
        snprintf(acStack_4c, 0x40, "/sys/class/gpio/gpio%d/direction", param_1);
        local_c = open(acStack_4c, 1);
        if (local_c < 0) {
            printf("%s:%d", "gpio_direction", 0x111);
            printf("Failed to open gpio %d direction for writing!\n", param_1);
            pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
            uVar3 = 0xfffffffe;
        } else {
            if (param_2 == 0) {
                iVar1 = 0;
            } else {
                iVar1 = 3;
            }
            if (param_2 == 0) {
                __n = 2;
            } else {
                __n = 3;
            }
            sVar2 = write(local_c, (void *)((int)&dir_str_6737 + iVar1), __n);
            if (sVar2 < 0) {
                printf("%s:%d", "gpio_direction", 0x117);
                if (param_2 == 0) {
                    iVar1 = 0;
                } else {
                    iVar1 = 3;
                }
                printf("Failed to set gpio %d direction %s !\n", param_1,
                       (int)&dir_str_6737 + iVar1);
                close(local_c);
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0xfffffffd;
            } else {
                printf("%s:%d", "gpio_direction", 0x11c);
                if (param_2 == 0) {
                    iVar1 = 0;
                } else {
                    iVar1 = 3;
                }
                printf("set gpio %d direction %s success!\n", param_1,
                       (int)&dir_str_6737 + iVar1);
                close(local_c);
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0;
            }
        }
    } else {
        printf("%s:%d", "gpio_direction", 0x10a);
        puts("failed to api lock");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}

undefined4 gpio_read(undefined4 param_1, undefined1 *param_2)

{
    int iVar1;
    ssize_t sVar2;
    undefined4 uVar3;
    char local_50[68];
    int local_c;

    local_50[0] = '\0';
    local_50[1] = '\0';
    local_50[2] = '\0';
    local_50[3] = '\0';
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)api_mutex);
    if (iVar1 == 0) {
        snprintf(local_50 + 4, 0x40, "/sys/class/gpio/gpio%d/value", param_1);
        local_c = open(local_50 + 4, 0);
        if (local_c < 0) {
            printf("%s:%d", "gpio_read", 0x136);
            printf("Failed to open gpio %d value for reading!\n", param_1);
            pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
            uVar3 = 0xfffffffe;
        } else {
            sVar2 = read(local_c, local_50, 4);
            if (sVar2 < 0) {
                printf("%s:%d", "gpio_read", 0x13c);
                puts("Failed to read value!");
                close(local_c);
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0xfffffffd;
            } else {
                close(local_c);
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                iVar1 = atoi(local_50);
                *param_2 = (char)iVar1;
                uVar3 = 0;
            }
        }
    } else {
        printf("%s:%d", "gpio_read", 0x12f);
        puts("failed to api lock");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}

undefined4 gpio_write(undefined4 param_1, char param_2)

{
    int iVar1;
    ssize_t sVar2;
    undefined4 uVar3;
    char acStack_4c[64];
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)api_mutex);
    if (iVar1 == 0) {
        snprintf(acStack_4c, 0x40, "/sys/class/gpio/gpio%d/value", param_1);
        local_c = open(acStack_4c, 1);
        if (local_c < 0) {
            printf("%s:%d", "gpio_write", 0x15c);
            puts("Failed to open gpio value for writing!");
            pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
            uVar3 = 0xfffffffe;
        } else {
            sVar2 = write(
                local_c,
                (void *)((int)&values_str_6753 + (uint)(param_2 != '\0')), 1);
            if (sVar2 < 0) {
                printf("%s:%d", "gpio_write", 0x162);
                puts("Failed to write value!");
                close(local_c);
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0xfffffffd;
            } else {
                close(local_c);
                pthread_mutex_unlock((pthread_mutex_t *)api_mutex);
                uVar3 = 0;
            }
        }
    } else {
        printf("%s:%d", "gpio_write", 0x155);
        puts("failed to api lock");
        uVar3 = 0xffffffff;
    }
    return uVar3;
}

int iic_init(undefined4 *param_1)

{
    int iVar1;
    uint uVar2;
    int local_10;
    int local_c;

    local_10 = 0;
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&iic_mutex);
    if (iVar1 == 0) {
        if (param_1 == (undefined4 *)0x0) {
            printf("%s:%d", "iic_init", 0x19);
            puts("bad param");
            local_c = -3;
        } else {
            local_10 = i2c_init(0);
            if (local_10 < 0) {
                printf("%s:%d", "iic_init", 0x1f);
                puts("failed to i2c_init");
                local_c = -1;
            } else {
                printf("%s:%d", "iic_init", 0x23);
                uVar2 = (uint) * (byte *)((int)param_1 + 7);
                printf("i2c chain = %d, master = 0x%x, slave high= 0x%x, slave "
                       "low = 0x%x\n",
                       *param_1, (uint) * (ushort *)(param_1 + 1),
                       (uint) * (byte *)((int)param_1 + 6), uVar2);
                iVar1 = i2c_select(local_10, *(undefined2 *)(param_1 + 1));
                if (iVar1 == 0) {
                    iVar1 =
                        i2c_ioctl(local_10, 0x703,
                                  (uint) * (byte *)((int)param_1 + 7) << 1 |
                                      (uint) * (byte *)((int)param_1 + 6) << 4);
                    if (iVar1 == 0) {
                        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
                        return local_10;
                    }
                    printf("%s:%d", "iic_init", 0x2a, iVar1, uVar2);
                    puts("failed to i2c_ioctl");
                    local_c = -1;
                } else {
                    printf("%s:%d", "iic_init", 0x25, iVar1, uVar2);
                    puts("failed to i2c_select");
                    local_c = -1;
                }
            }
        }
        if (0 < local_10) {
            i2c_uninit(local_10);
        }
        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
    } else {
        printf("%s:%d", "iic_init", 0x13);
        puts("failed to iic lock");
        local_c = -4;
    }
    return local_c;
}

void iic_uninit(undefined4 param_1)

{
    int iVar1;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&iic_mutex);
    if (iVar1 == 0) {
        i2c_uninit(param_1);
        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
    } else {
        printf("%s:%d", "iic_uninit", 0x3f);
        puts("failed to i2c lock");
    }
    return;
}

undefined4 iic_read(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&iic_mutex);
    if (iVar1 == 0) {
        uVar2 = i2c_read(param_1, param_2, param_3);
        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
    } else {
        printf("%s:%d", "iic_read", 0x52);
        puts("failed to i2c lock");
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

undefined4 iic_write(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&iic_mutex);
    if (iVar1 == 0) {
        uVar2 = i2c_write(param_1, param_2, param_3);
        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
    } else {
        printf("%s:%d", "iic_write", 0x66);
        puts("failed to i2c lock");
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

undefined4 iic_read_reg(undefined4 param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 param_4,
                        undefined4 param_5)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&iic_mutex);
    if (iVar1 == 0) {
        uVar2 = i2c_read_reg(param_1, param_2, param_3, param_4, param_5);
        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
    } else {
        printf("%s:%d", "iic_read_reg", 0x7b);
        puts("failed to i2c lock");
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

undefined4 iic_write_reg(undefined4 param_1, undefined4 param_2,
                         undefined4 param_3, undefined4 param_4,
                         undefined4 param_5)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&iic_mutex);
    if (iVar1 == 0) {
        uVar2 = i2c_write_reg(param_1, param_2, param_3, param_4, param_5);
        pthread_mutex_unlock((pthread_mutex_t *)&iic_mutex);
    } else {
        printf("%s:%d", "iic_write_reg", 0x91);
        puts("failed to i2c lock");
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

int pwm_init(uint param_1, undefined4 param_2)

{
    int iVar1;

    if (platform_inited == 0) {
        printf("%s:%d", "pwm_init", 0x10);
        puts("please init platform first!!");
        iVar1 = -2;
    } else if (param_1 < 2) {
        *(undefined4 *)(&pwm_param + param_1 * 8) = param_2;
        (&DAT_00235de8)[param_1 * 8] = 1;
        iVar1 = param_1 + 1;
    } else {
        printf("%s:%d", "pwm_init", 0x14);
        puts("bad param");
        iVar1 = -3;
    }
    return iVar1;
}

void pwm_uninit(int param_1)

{
    if (param_1 + -1 < 2) {
        *(undefined4 *)(&pwm_param + (param_1 + -1) * 8) = 0;
        (&DAT_00235de8)[(param_1 + -1) * 8] = 0;
    } else {
        printf("%s:%d", "pwm_uninit", 0x1d);
        puts("bad param");
    }
    return;
}

undefined4 pwm_set(int param_1, uint param_2)

{
    undefined4 uVar1;

    if (param_1 + -1 < 2) {
        if (param_1 == 1) {
            if (99 < param_2) {
                param_2 = 100;
            }
            if (platform_is_t9 == 0) {
                fpga_write(v9_fpga_map._72_4_, 100 - param_2 | param_2 << 0x10);
            } else {
                fpga_write(DAT_00035598, 100 - param_2 | param_2 << 0x10);
            }
        } else {
            printf("%s:%d", "pwm_set", 0x37);
            printf("pwm type %d not supported\n", param_1 + -1);
        }
        uVar1 = 0;
    } else {
        printf("%s:%d", "pwm_set", 0x2d);
        puts("bad param");
        uVar1 = 0xfffffffd;
    }
    return uVar1;
}

undefined4 pwm_get(int param_1, uint *param_2)

{
    undefined4 local_c;

    local_c = 0xfffffffb;
    if (param_1 + -1 < 2) {
        if (param_1 == 1) {
            if (platform_is_t9 == 0) {
                fpga_read(v9_fpga_map._72_4_, param_2);
            } else {
                fpga_read(DAT_00035598, param_2);
            }
            *param_2 = *param_2 >> 0x10;
            printf("%s:%d", "pwm_get", 0x4f);
            printf("duty of fpga = 0x%x\n", *param_2);
            local_c = 0;
        }
    } else {
        printf("%s:%d", "pwm_get", 0x47);
        puts("bad param");
        local_c = 0xfffffffd;
    }
    return local_c;
}

undefined4 get_send_address_info(undefined4 param_1, undefined4 *param_2,
                                 undefined4 *param_3, undefined4 *param_4,
                                 undefined4 *param_5)

{
    undefined4 local_c;

    local_c = 0;
    if (platform_is_t9 == 0) {
        switch (param_1) {
        case 0:
            *param_2 = 0x18;
            *param_3 = v9_fpga_map._172_4_;
            *param_4 = v9_fpga_map._188_4_;
            *param_5 = v9_fpga_map._192_4_;
            break;
        case 1:
            *param_2 = 0x10;
            *param_3 = v9_fpga_map._172_4_;
            *param_4 = v9_fpga_map._196_4_;
            *param_5 = v9_fpga_map._200_4_;
            break;
        case 2:
            *param_2 = 8;
            *param_3 = v9_fpga_map._172_4_;
            *param_4 = v9_fpga_map._204_4_;
            *param_5 = v9_fpga_map._208_4_;
            break;
        case 3:
            *param_2 = 0;
            *param_3 = v9_fpga_map._172_4_;
            *param_4 = v9_fpga_map._212_4_;
            *param_5 = v9_fpga_map._216_4_;
            break;
        case 4:
            *param_2 = 0x18;
            *param_3 = v9_fpga_map._176_4_;
            *param_4 = v9_fpga_map._220_4_;
            *param_5 = v9_fpga_map._224_4_;
            break;
        case 5:
            *param_2 = 0x10;
            *param_3 = v9_fpga_map._176_4_;
            *param_4 = v9_fpga_map._228_4_;
            *param_5 = v9_fpga_map._232_4_;
            break;
        case 6:
            *param_2 = 8;
            *param_3 = v9_fpga_map._176_4_;
            *param_4 = v9_fpga_map._236_4_;
            *param_5 = v9_fpga_map._240_4_;
            break;
        case 7:
            *param_2 = 0;
            *param_3 = v9_fpga_map._176_4_;
            *param_4 = v9_fpga_map._244_4_;
            *param_5 = v9_fpga_map._248_4_;
            break;
        case 8:
            *param_2 = 0x18;
            *param_3 = v9_fpga_map._180_4_;
            *param_4 = v9_fpga_map._252_4_;
            *param_5 = v9_fpga_map._256_4_;
            break;
        case 9:
            *param_2 = 0x10;
            *param_3 = v9_fpga_map._180_4_;
            *param_4 = v9_fpga_map._260_4_;
            *param_5 = v9_fpga_map._264_4_;
            break;
        default:
            printf("%s:%d", "get_send_address_info", 0xc9);
            printf("%s: The uart %d is not supported!!!\n",
                   "get_send_address_info", param_1);
            local_c = 0xffffffff;
        }
    } else {
        switch (param_1) {
        case 0:
            *param_2 = 0x18;
            *param_3 = DAT_000355fc;
            *param_4 = DAT_0003560c;
            *param_5 = DAT_00035618;
            break;
        case 1:
            *param_2 = 0x10;
            *param_3 = DAT_000355fc;
            *param_4 = DAT_00035614;
            *param_5 = DAT_00035618;
            break;
        case 2:
            *param_2 = 8;
            *param_3 = DAT_000355fc;
            *param_4 = DAT_0003561c;
            *param_5 = DAT_00035620;
            break;
        case 3:
            *param_2 = 0;
            *param_3 = DAT_000355fc;
            *param_4 = DAT_00035624;
            *param_5 = DAT_00035628;
            break;
        case 4:
            *param_2 = 0x18;
            *param_3 = DAT_00035600;
            *param_4 = DAT_0003562c;
            *param_5 = DAT_00035630;
            break;
        case 5:
            *param_2 = 0x10;
            *param_3 = DAT_00035600;
            *param_4 = DAT_00035634;
            *param_5 = DAT_00035638;
            break;
        case 6:
            *param_2 = 8;
            *param_3 = DAT_00035600;
            *param_4 = DAT_0003563c;
            *param_5 = DAT_00035640;
            break;
        case 7:
            *param_2 = 0;
            *param_3 = DAT_00035600;
            *param_4 = DAT_00035644;
            *param_5 = DAT_00035648;
            break;
        case 8:
            *param_2 = 0x18;
            *param_3 = DAT_00035604;
            *param_4 = DAT_0003564c;
            *param_5 = DAT_00035650;
            break;
        case 9:
            *param_2 = 0x10;
            *param_3 = DAT_00035604;
            *param_4 = DAT_00035654;
            *param_5 = DAT_00035658;
            break;
        case 10:
            *param_2 = 8;
            *param_3 = DAT_00035604;
            *param_4 = DAT_000356c8;
            *param_5 = DAT_000356cc;
            break;
        case 0xb:
            *param_2 = 0;
            *param_3 = DAT_00035604;
            *param_4 = DAT_000356d0;
            *param_5 = DAT_000356d4;
            break;
        case 0xc:
            *param_2 = 0x18;
            *param_3 = DAT_00035608;
            *param_4 = DAT_000356d8;
            *param_5 = DAT_000356dc;
            break;
        case 0xd:
            *param_2 = 0x10;
            *param_3 = DAT_00035608;
            *param_4 = DAT_000356e0;
            *param_5 = DAT_000356e4;
            break;
        default:
            printf("%s:%d", "get_send_address_info", 0x7c);
            printf("%s: The uart %d is not supported!!!\n",
                   "get_send_address_info", param_1);
            local_c = 0xffffffff;
        }
    }
    return local_c;
}

undefined4 get_read_address_info(undefined4 param_1, undefined4 *param_2,
                                 undefined4 *param_3)

{
    undefined4 local_c;

    local_c = 0;
    if (platform_is_t9 == 0) {
        switch (param_1) {
        case 0:
            *param_2 = v9_fpga_map._296_4_;
            *param_3 = v9_fpga_map._300_4_;
            break;
        case 1:
            *param_2 = v9_fpga_map._304_4_;
            *param_3 = v9_fpga_map._308_4_;
            break;
        case 2:
            *param_2 = v9_fpga_map._312_4_;
            *param_3 = v9_fpga_map._316_4_;
            break;
        case 3:
            *param_2 = v9_fpga_map._320_4_;
            *param_3 = v9_fpga_map._324_4_;
            break;
        case 4:
            *param_2 = v9_fpga_map._328_4_;
            *param_3 = v9_fpga_map._332_4_;
            break;
        case 5:
            *param_2 = v9_fpga_map._336_4_;
            *param_3 = v9_fpga_map._340_4_;
            break;
        case 6:
            *param_2 = v9_fpga_map._344_4_;
            *param_3 = v9_fpga_map._348_4_;
            break;
        case 7:
            *param_2 = v9_fpga_map._352_4_;
            *param_3 = v9_fpga_map._356_4_;
            break;
        case 8:
            *param_2 = v9_fpga_map._360_4_;
            *param_3 = v9_fpga_map._364_4_;
            break;
        case 9:
            *param_2 = v9_fpga_map._368_4_;
            *param_3 = v9_fpga_map._372_4_;
            break;
        default:
            printf("%s:%d", "get_read_address_info", 0x146);
            printf("%s: The uart%d is not supported!!!\n",
                   "get_read_address_info", param_1);
            local_c = 0xffffffff;
        }
    } else {
        switch (param_1) {
        case 0:
            *param_2 = DAT_00035678;
            *param_3 = DAT_0003567c;
            break;
        case 1:
            *param_2 = DAT_00035680;
            *param_3 = DAT_00035684;
            break;
        case 2:
            *param_2 = DAT_00035688;
            *param_3 = DAT_0003568c;
            break;
        case 3:
            *param_2 = DAT_00035690;
            *param_3 = DAT_00035694;
            break;
        default:
            printf("%s:%d", "get_read_address_info", 0x10c);
            printf("%s: The uart%d is not supported!!!\n",
                   "get_read_address_info", param_1);
            local_c = 0xffffffff;
            break;
        case 8:
            *param_2 = DAT_000356b8;
            *param_3 = DAT_000356bc;
            break;
        case 9:
            *param_2 = DAT_000356c0;
            *param_3 = DAT_000356c4;
            break;
        case 10:
            *param_2 = DAT_000356e8;
            *param_3 = DAT_000356ec;
            break;
        case 0xb:
            *param_2 = DAT_000356f0;
            *param_3 = DAT_000356f4;
            break;
        case 0xc:
            *param_2 = DAT_000356f8;
            *param_3 = DAT_000356fc;
            break;
        case 0xd:
            *param_2 = DAT_00035700;
            *param_3 = DAT_00035704;
        }
    }
    return local_c;
}

uint check_how_many_uart_data_in_fpga(byte param_1)

{
    uint local_c;

    local_c = 0;
    if (platform_is_t9 == 0) {
        switch (param_1) {
        case 0:
            fpga_read(v9_fpga_map._268_4_, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 1:
            fpga_read(v9_fpga_map._268_4_, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 2:
            fpga_read(v9_fpga_map._272_4_, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 3:
            fpga_read(v9_fpga_map._272_4_, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 4:
            fpga_read(v9_fpga_map._276_4_, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 5:
            fpga_read(v9_fpga_map._276_4_, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 6:
            fpga_read(v9_fpga_map._280_4_, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 7:
            fpga_read(v9_fpga_map._280_4_, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 8:
            fpga_read(v9_fpga_map._284_4_, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 9:
            fpga_read(v9_fpga_map._284_4_, &local_c);
            local_c = local_c & 0x3ff;
            break;
        default:
            printf("%s:%d", "check_how_many_uart_data_in_fpga", 0x1c1);
            printf("%s: The uart%d is not supported!!!\n",
                   "check_how_many_uart_data_in_fpga", (uint)param_1);
            local_c = 0;
        }
    } else {
        switch (param_1) {
        case 0:
            fpga_read(DAT_0003565c, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 1:
            fpga_read(DAT_0003565c, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 2:
            fpga_read(DAT_00035660, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 3:
            fpga_read(DAT_00035660, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 4:
            fpga_read(DAT_00035664, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 5:
            fpga_read(DAT_00035664, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 6:
            fpga_read(DAT_00035668, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 7:
            fpga_read(DAT_00035668, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 8:
            fpga_read(DAT_0003566c, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 9:
            fpga_read(DAT_0003566c, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 10:
            fpga_read(DAT_00035670, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 0xb:
            fpga_read(DAT_00035670, &local_c);
            local_c = local_c & 0x3ff;
            break;
        case 0xc:
            fpga_read(DAT_00035674, &local_c);
            local_c = local_c >> 0x10 & 0x3ff;
            break;
        case 0xd:
            fpga_read(DAT_00035674, &local_c);
            local_c = local_c & 0x3ff;
            break;
        default:
            printf("%s:%d", "check_how_many_uart_data_in_fpga", 0x18a);
            printf("%s: The uart%d is not supported!!!\n",
                   "check_how_many_uart_data_in_fpga", (uint)param_1);
            local_c = 0;
        }
    }
    return local_c;
}

int read_uart_data_in_fpga(undefined4 param_1, int param_2, uint param_3)

{
    undefined1 uVar1;
    undefined1 uVar2;
    int iVar3;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    uint local_18;
    uint local_14;
    int local_10;
    uint local_c;

    local_1c = 0;
    local_20 = 0;
    local_14 = 0;
    local_18 = 0;
    local_c = 0;
    local_24 = 0;
    local_10 = 0;
    iVar3 = get_read_address_info(param_1, &local_1c, &local_20);
    if (iVar3 == 0) {
        local_14 = param_3 & 0x3ff | 0x80000000;
        fpga_write(local_1c, local_14);
        local_18 = param_3 >> 2;
        for (local_c = 0; local_c < local_18; local_c = local_c + 1) {
            fpga_read(local_20, &local_24);
            *(char *)(param_2 + local_c * 4) = (char)((uint)local_24 >> 0x18);
            *(char *)(param_2 + local_c * 4 + 1) =
                (char)((uint)local_24 >> 0x10);
            *(char *)(param_2 + local_c * 4 + 2) = (char)((uint)local_24 >> 8);
            *(char *)(param_2 + local_c * 4 + 3) = (char)local_24;
        }
        local_10 = local_18 << 2;
        local_18 = param_3 & 3;
        if (local_18 != 0) {
            fpga_read(local_20, &local_24);
            uVar2 = (undefined1)((uint)local_24 >> 0x10);
            uVar1 = (undefined1)((uint)local_24 >> 0x18);
            if (local_18 == 2) {
                *(undefined1 *)(param_2 + local_c * 4) = uVar1;
                *(undefined1 *)(param_2 + local_c * 4 + 1) = uVar2;
                local_10 = local_10 + 2;
            } else if (local_18 == 3) {
                *(undefined1 *)(param_2 + local_c * 4) = uVar1;
                *(undefined1 *)(param_2 + local_c * 4 + 1) = uVar2;
                *(char *)(param_2 + local_c * 4 + 2) =
                    (char)((uint)local_24 >> 8);
                local_10 = local_10 + 3;
            } else if (local_18 == 1) {
                *(undefined1 *)(param_2 + local_c * 4) = uVar1;
                local_10 = local_10 + 1;
            } else {
                printf("%s:%d", "read_uart_data_in_fpga", 0x1fb);
                printf("%s: the uart%d left data is 4*N length, error!!!\n",
                       "read_uart_data_in_fpga", param_1);
            }
        }
    } else {
        printf("%s:%d", "read_uart_data_in_fpga", 0x1cd);
        printf("get_read_address_info error, chain_id = %d\n", param_1);
        local_10 = 0;
    }
    return local_10;
}

undefined4 uart_init(void)

{
    undefined4 uVar1;

    if (platform_inited == 0) {
        printf("%s:%d", "uart_init", 0x206);
        puts("please init platform first!!");
        uVar1 = 0xffffffff;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

void uart_uninit(void)

{
    return;
}

void hexdump(undefined4 param_1, int param_2, uint param_3)

{
    uint __c;
    uint local_1c;
    uint local_10;
    int local_c;

    printf("Dumping %u %s bytes from %p:\n", param_3, param_1, param_2);
    local_1c = param_3;
    local_c = param_2;
    while (true) {
        if ((int)local_1c < 1) {
            return;
        }
        for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
            if (local_10 < local_1c) {
                printf("%02x ", (uint) * (byte *)(local_c + local_10));
            } else {
                printf("   ");
            }
        }
        for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
            if (local_10 < local_1c) {
                if ((*(byte *)(local_c + local_10) < 0x20) ||
                    (0x7e < *(byte *)(local_c + local_10))) {
                    __c = 0x2e;
                } else {
                    __c = (uint) * (byte *)(local_c + local_10);
                }
                putchar(__c);
            } else {
                putchar(0x20);
            }
        }
        putchar(10);
        local_c = local_c + 0x10;
        if ((int)local_1c < 0x11)
            break;
        local_1c = local_1c - 0x10;
    }
    return;
}

uint uart_send(int param_1, void *param_2, uint param_3)

{
    int iVar1;
    uint local_138;
    uint local_134;
    undefined4 local_130;
    undefined4 local_12c;
    undefined4 local_128;
    byte abStack_124[256];
    uint local_24;
    uint local_20;
    undefined4 local_1c;
    uint local_18;
    int local_14;

    local_1c = 0;
    local_20 = 0;
    local_14 = 0;
    memset(abStack_124, 0, 0x100);
    local_18 = 0;
    local_128 = 0;
    local_12c = 0;
    local_130 = 0;
    local_134 = 0;
    local_138 = 0;
    local_24 = param_3;
    pthread_mutex_lock((pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    iVar1 = get_send_address_info(param_1, &local_138, &local_128, &local_12c,
                                  &local_130);
    if (iVar1 == 0) {
        local_1c = 0;
        do {
            fpga_read(local_128, &local_134);
            local_134 = local_134 >> (local_138 & 0xff) & 0xff;
        } while (local_134 < param_3);
        local_1c = 0;
        do {
            fpga_read(local_12c, &local_134);
        } while ((int)local_134 < 0);
        memcpy(abStack_124, param_2, param_3);
        local_20 = local_24 >> 2;
        for (local_14 = 0; local_14 < (int)local_20; local_14 = local_14 + 1) {
            local_18 = (uint)abStack_124[local_14 * 4 + 3] |
                       (uint)abStack_124[local_14 * 4] << 0x18 |
                       (uint)abStack_124[local_14 * 4 + 1] << 0x10 |
                       (uint)abStack_124[local_14 * 4 + 2] << 8;
            fpga_write(local_130, local_18);
        }
        local_20 = local_24 & 3;
        if (local_20 != 0) {
            if (local_20 == 2) {
                local_18 = (uint)abStack_124[local_14 * 4 + 1] << 0x10 |
                           (uint)abStack_124[local_14 * 4] << 0x18;
            } else if (local_20 == 3) {
                local_18 = (uint)abStack_124[local_14 * 4 + 2] << 8 |
                           (uint)abStack_124[local_14 * 4] << 0x18 |
                           (uint)abStack_124[local_14 * 4 + 1] << 0x10;
            } else if (local_20 == 1) {
                local_18 = (uint)abStack_124[local_14 * 4] << 0x18;
            } else {
                printf(
                    "%s: the uart%d send left data is 4*N length, error!!!\n",
                    "uart_send", param_1);
            }
            fpga_write(local_130, local_18);
        }
        fpga_write(local_12c, local_24 | 0x80000000);
        pthread_mutex_unlock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    } else {
        printf("%s:%d", "uart_send", 0x248);
        printf("get_send_address_info error, chain_id = %d\n", param_1);
        pthread_mutex_unlock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
        local_24 = 0;
    }
    return local_24;
}

undefined4 uart_receive(uint param_1, undefined4 param_2, uint param_3,
                        undefined4 param_4)

{
    undefined4 uVar1;
    uint local_c;

    pthread_mutex_lock(
        (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
    local_c = check_how_many_uart_data_in_fpga(param_1 & 0xff);
    if (param_3 < local_c) {
        local_c = param_3;
    }
    if (local_c == 0) {
        pthread_mutex_unlock(
            (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
        uVar1 = 0;
    } else {
        uVar1 = __udivsi3(local_c, 1, local_c, 1, param_4);
        uVar1 = read_uart_data_in_fpga(param_1, param_2, uVar1);
        __udivsi3(local_c, 1);
        pthread_mutex_unlock(
            (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
    }
    return uVar1;
}

undefined4 uart_set_config(int param_1, int param_2, undefined4 *param_3,
                           undefined4 param_4)

{
    undefined4 local_c;

    local_c = 0xfffffffb;
    if (param_3 == (undefined4 *)0x0) {
        local_c = 0xfffffffd;
    } else {
        pthread_mutex_lock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
        if (param_2 == 0) {
            if (platform_is_t9 == 0) {
                local_c = fpga_write(v9_fpga_map._56_4_, *param_3);
            } else {
                local_c = fpga_write(DAT_00035588, *param_3);
            }
        } else {
            printf("%s:%d", "uart_set_config", 0x2e0, param_2, param_4);
            printf("unknown set config type = %d\n", param_2);
        }
        pthread_mutex_unlock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    }
    return local_c;
}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same
 * address */

undefined4 uart_get_config(int param_1, int param_2, undefined4 *param_3,
                           int param_4)

{
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    local_c = 0xfffffffb;
    if ((param_3 == (undefined4 *)0x0) || (param_4 != 0)) {
        local_c = 0xfffffffd;
    } else {
        pthread_mutex_lock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
        if (param_2 == 0) {
            if (platform_is_t9 == 0) {
                local_14 = 0;
                local_c = fpga_read(v9_fpga_map._56_4_, &local_14);
                *param_3 = local_14;
            } else {
                local_10 = 0;
                local_c = fpga_read(DAT_00035588, &local_10);
                *param_3 = local_10;
            }
            _shift = 4;
            printf("%s:%d", "uart_get_config", 0x2fc);
            printf("uart_get_config return %d\n", *param_3);
        } else {
            printf("%s:%d", "uart_get_config", 0x2ff);
            printf("unknown set config type = %d\n", param_2);
        }
        pthread_mutex_unlock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    }
    return local_c;
}

/* WARNING: Type propagation algorithm not settling */

void clear_uart_tx_fifo(int param_1)

{
    int iVar1;
    uint local_20;
    uint local_1c[5];

    local_1c[3] = 0;
    local_1c[2] = 0;
    local_1c[1] = 0;
    local_1c[0] = 0;
    local_20 = 0;
    local_1c[4] = 0;
    pthread_mutex_lock((pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    iVar1 = get_send_address_info(param_1, &local_20, local_1c + 3,
                                  local_1c + 2, local_1c + 1);
    if (iVar1 == 0) {
        local_1c[4] = 0;
        do {
            fpga_read(local_1c[3], local_1c);
            local_1c[0] = local_1c[0] >> (local_20 & 0xff) & 0xff;
            if (local_1c[0] == 0xff) {
                pthread_mutex_unlock(
                    (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
                return;
            }
            printf("%s: waiting fpga uart%d clear send fifo space ...\n",
                   "clear_uart_tx_fifo", param_1);
            usleep(3000);
            local_1c[4] = local_1c[4] + 1;
        } while (local_1c[4] < 0x15);
        printf("%s:%d", "clear_uart_tx_fifo", 0x323);
        printf("%s: uart%d always dose not has enough send fifo space, break\n",
               "clear_uart_tx_fifo", param_1);
        pthread_mutex_unlock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    } else {
        printf("%s:%d", "clear_uart_tx_fifo", 0x30f);
        printf("get_send_address_info error, chain_id = %d\n", param_1);
        pthread_mutex_unlock(
            (pthread_mutex_t *)(&uart_send_mutex + param_1 * 0x18));
    }
    return;
}

void clear_uart_rx_fifo(uint param_1)

{
    size_t __size;
    void *__ptr;
    size_t sVar1;

    pthread_mutex_lock(
        (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
    __size = check_how_many_uart_data_in_fpga(param_1 & 0xff);
    if (__size == 0) {
        pthread_mutex_unlock(
            (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
    } else {
        __ptr = malloc(__size);
        if (__ptr == (void *)0x0) {
            printf("%s:%d", "clear_uart_rx_fifo", 0x33f);
            printf("%s: uart%d malloc buffer error\n", "clear_uart_rx_fifo",
                   param_1);
            usleep(500000);
            pthread_mutex_unlock(
                (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
        } else {
            sVar1 = read_uart_data_in_fpga(param_1, __ptr, __size);
            if (sVar1 == __size) {
                free(__ptr);
                usleep(10000);
                pthread_mutex_unlock(
                    (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
            } else {
                printf("%s:%d", "clear_uart_rx_fifo", 0x348);
                printf(
                    "%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
                    "clear_uart_rx_fifo", param_1, __size, sVar1);
                free(__ptr);
                usleep(10000);
                pthread_mutex_unlock(
                    (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
            }
        }
    }
    return;
}

undefined4 uart_flush(undefined4 param_1)

{
    printf("%s:%d", "uart_flush", 0x35b);
    printf("flush uart %d\n", param_1);
    clear_uart_rx_fifo(param_1);
    usleep(10000);
    clear_uart_tx_fifo(param_1);
    return 0;
}

undefined4 uart_flush_tx(undefined4 param_1)

{
    clear_uart_tx_fifo(param_1);
    return 0;
}

undefined4 uart_flush_rx(undefined4 param_1)

{
    clear_uart_rx_fifo(param_1);
    return 0;
}

undefined4 uart_get_readable_byte_num(uint param_1)

{
    undefined4 uVar1;

    pthread_mutex_lock(
        (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
    uVar1 = check_how_many_uart_data_in_fpga(param_1 & 0xff);
    pthread_mutex_unlock(
        (pthread_mutex_t *)(uart_receive_mutex + param_1 * 0x18));
    return uVar1;
}

undefined4 ui_pull_function(void)

{
    int iVar1;
    byte bVar2;
    bool bVar3;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    int local_18;
    undefined4 *local_14;
    undefined4 *local_10;
    int local_c;

    while (ui_pull_thread != 0) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)&ui_api_mutex);
        if (iVar1 == 0) {
            local_10 = (undefined4 *)new_iterator_c_map(ui_flicker_map);
            local_c = (*(code *)*local_10)(local_10);
            while (local_c != 0) {
                local_14 = (undefined4 *)(*(code *)local_10[2])(local_c);
                local_18 = local_10[5];
                if (local_14[1] == 0) {
                    gpio_write(
                        *(undefined4 *)**(undefined4 **)(local_18 + 0x10),
                        local_14[2] & 0xff);
                    iVar1 = local_14[2];
                    bVar3 = iVar1 == 1;
                    if (bVar3) {
                        iVar1 = 0;
                    }
                    bVar2 = (byte)iVar1;
                    if (!bVar3) {
                        bVar2 = 1;
                    }
                    local_14[2] = (uint)bVar2;
                    local_14[1] = *local_14;
                }
                local_14[1] = local_14[1] + -200;
                local_14[1] = local_14[1];
                local_24 = *local_14;
                local_20 = local_14[1];
                local_1c = local_14[2];
                (*(code *)local_10[1])(local_10, &local_24, 0xc);
                free(local_14);
                local_c = (*(code *)*local_10)(local_10);
            }
            delete_iterator_c_map(local_10);
            pthread_mutex_unlock((pthread_mutex_t *)&ui_api_mutex);
        }
        usleep(200000);
    }
    return 0;
}

int gpio_compare_e(int *param_1, int *param_2)

{
    return *param_1 - *param_2;
}

undefined4 convert_ui_type_to_port(uint param_1)

{
    undefined4 local_c;

    local_c = 0;
    if (param_1 == 2) {
        local_c = 0x3ae;
    } else if (param_1 < 3) {
        if (param_1 == 1) {
            local_c = 0x3ad;
        }
    } else if (param_1 == 0x100) {
        local_c = 0x399;
    } else if (param_1 == 0x101) {
        local_c = 0x3af;
    }
    return local_c;
}

undefined4 convert_port_to_ui_type(int param_1)

{
    undefined4 local_c;

    local_c = 0x102;
    if (param_1 == 0x399) {
        local_c = 0x100;
    } else if (param_1 == 0x3af) {
        local_c = 0x101;
    }
    return local_c;
}

void gpio_key_callback(undefined4 param_1, char param_2)

{
    int iVar1;
    int local_c;

    iVar1 = convert_port_to_ui_type(param_1);
    if (iVar1 == 0x102) {
        printf("%s:%d", "gpio_key_callback", 0x6e);
        printf("gpio port %d is not a supported key\n", param_1);
    } else {
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(int *)(ui_callback + local_c * 4) != 0) {
                (**(code **)(ui_callback + local_c * 4))(iVar1,
                                                         param_2 != '\0');
            }
        }
    }
    return;
}

undefined4 ui_init(void)

{
    int iVar1;
    undefined4 uVar2;
    int local_c;

    if (ui_inited == 0) {
        iVar1 = gpio_init();
        if (iVar1 == 0) {
            uVar2 = convert_ui_type_to_port(1);
            gpio_export(uVar2);
            uVar2 = convert_ui_type_to_port(2);
            gpio_export(uVar2);
            uVar2 = convert_ui_type_to_port(0x100);
            gpio_export(uVar2);
            uVar2 = convert_ui_type_to_port(0x101);
            gpio_export(uVar2);
            uVar2 = convert_ui_type_to_port(0x100);
            gpio_reg_callback(uVar2, 0x1fa51);
            uVar2 = convert_ui_type_to_port(0x101);
            gpio_reg_callback(uVar2, 0x1fa51);
            pthread_mutex_init((pthread_mutex_t *)&ui_api_mutex,
                               (pthread_mutexattr_t *)0x0);
            for (local_c = 0; local_c < 5; local_c = local_c + 1) {
                *(undefined4 *)(ui_callback + local_c * 4) = 0;
            }
            ui_flicker_map = new_c_map(0x1f991, 0, 0);
            ui_pull_thread = 1;
            pthread_create(&ui_thread, (pthread_attr_t *)0x0,
                           (__start_routine *)0x1f86d, (void *)0x0);
            ui_inited = 1;
            uVar2 = 0;
        } else {
            printf("%s:%d", "ui_init", 0x7c);
            puts("gpio init failed");
            uVar2 = 0xffffffff;
        }
    } else {
        uVar2 = 0;
    }
    return uVar2;
}

void ui_uninit(void)

{
    undefined4 uVar1;

    if (ui_inited != 0) {
        ui_pull_thread = 0;
        pthread_join(ui_thread, (void **)0x0);
        delete_c_map(ui_flicker_map);
        pthread_mutex_destroy((pthread_mutex_t *)&ui_api_mutex);
        uVar1 = convert_ui_type_to_port(0x100);
        gpio_unreg_callback(uVar1, 0x1fa51);
        uVar1 = convert_ui_type_to_port(0x101);
        gpio_unreg_callback(uVar1, 0x1fa51);
        uVar1 = convert_ui_type_to_port(1);
        gpio_unexport(uVar1);
        uVar1 = convert_ui_type_to_port(2);
        gpio_unexport(uVar1);
        uVar1 = convert_ui_type_to_port(0x100);
        gpio_unexport(uVar1);
        uVar1 = convert_ui_type_to_port(0x101);
        gpio_unexport(uVar1);
        gpio_uninit();
        ui_inited = 0;
    }
    return;
}

void remove_port_form_gpio_map(undefined4 param_1, int param_2)

{
    int iVar1;
    undefined4 local_c;

    if ((param_2 != 0) &&
        (local_c = param_1, iVar1 = exists_c_map(param_2, &local_c),
         iVar1 == 1)) {
        printf("%s:%d", "remove_port_form_gpio_map", 0xa8);
        printf("remove %d from flicker list\n", local_c);
        remove_c_map(param_2, &local_c);
    }
    return;
}

void add_port_to_gpio_map(undefined4 param_1, undefined4 param_2, int param_3)

{
    int iVar1;
    undefined4 local_1c[2];
    undefined4 local_14;
    undefined4 local_10;
    undefined4 local_c;

    if (param_3 != 0) {
        local_1c[0] = param_1;
        iVar1 = exists_c_map(param_3, local_1c);
        if (iVar1 == 0) {
            printf("%s:%d", "add_port_to_gpio_map", 0xb4);
            printf("add %d to flicker map with interval %d\n", local_1c[0],
                   param_2);
            local_10 = 0;
            local_c = 1;
            local_14 = param_2;
            insert_c_map(param_3, local_1c, 4, &local_14, 0xc);
        } else {
            printf("%s:%d", "add_port_to_gpio_map", 0xb8);
            printf("port %d already exist in map\n", local_1c[0]);
        }
    }
    return;
}

void update_filcker_freq(int param_1, undefined4 param_2, int param_3)

{
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 *local_18;
    int local_14;
    undefined4 *local_10;
    int local_c;

    if (param_3 != 0) {
        local_10 = (undefined4 *)new_iterator_c_map(param_3);
        local_c = (*(code *)*local_10)(local_10);
        while (local_c != 0) {
            local_14 = local_10[5];
            if (*(int *)**(undefined4 **)(local_14 + 0x10) == param_1) {
                local_18 = (undefined4 *)(*(code *)local_10[2])(local_c);
                local_20 = 0;
                local_1c = 1;
                local_24 = param_2;
                (*(code *)local_10[1])(local_10, &local_24, 0xc);
                printf("%s:%d", "update_filcker_freq", 0xc9);
                printf("update the freq interval of port[%d] from %d to %d\n",
                       param_1, *local_18, param_2);
                free(local_18);
                break;
            }
            local_c = (*(code *)*local_10)(local_10);
        }
        delete_iterator_c_map(local_10);
    }
    return;
}

undefined4 gpio_ctrl_ui(undefined4 param_1, int param_2)

{
    int iVar1;
    int iVar2;
    undefined4 local_c;

    local_c = 0xffffffff;
    iVar1 = convert_ui_type_to_port(param_1);
    if (iVar1 == 0) {
        printf("%s:%d", "gpio_ctrl_ui", 0xde);
        puts("unsuported gpio port");
        local_c = 0xffffffff;
    } else {
        printf("%s:%d", "gpio_ctrl_ui", 0xe1);
        printf("ui type = %d, port = %d, status = %d\n", param_1, iVar1,
               param_2);
        iVar2 = pthread_mutex_lock((pthread_mutex_t *)&ui_api_mutex);
        if (iVar2 == 0) {
            if (param_2 == 1) {
                remove_port_form_gpio_map(iVar1, ui_flicker_map);
                local_c = gpio_write(iVar1, 0);
            } else if (param_2 == 0) {
                remove_port_form_gpio_map(iVar1, ui_flicker_map);
                local_c = gpio_write(iVar1, 1);
            } else if (param_2 == 2) {
                add_port_to_gpio_map(iVar1, 200, ui_flicker_map);
            } else {
                printf("%s:%d", "gpio_ctrl_ui", 0xf3);
                puts("unsuported led status");
                local_c = 0xfffffffe;
            }
            pthread_mutex_unlock((pthread_mutex_t *)&ui_api_mutex);
        } else {
            printf("%s:%d", "gpio_ctrl_ui", 0xe3);
            puts("failed to api lock");
            local_c = 0xffffffff;
        }
    }
    return local_c;
}

undefined4 gpio_set_led_filker_freq(undefined4 param_1, int param_2)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = convert_ui_type_to_port(param_1);
    if (iVar1 == 0) {
        printf("%s:%d", "gpio_set_led_filker_freq", 0x106);
        puts("unsuported led port");
        uVar2 = 0xffffffff;
    } else if (param_2 == 200) {
        printf("%s:%d", "gpio_set_led_filker_freq", 0x10a);
        puts("interval is same with default");
        uVar2 = 0;
    } else {
        update_filcker_freq(iVar1, param_2, ui_flicker_map);
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 red_led_on(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(1, 0);
    return uVar1;
}

undefined4 red_led_off(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(1, 1);
    return uVar1;
}

undefined4 red_led_flicker(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(1, 2);
    return uVar1;
}

undefined4 green_led_on(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(2, 0);
    return uVar1;
}

undefined4 green_led_off(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(2, 1);
    return uVar1;
}

undefined4 green_led_flicker(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(2, 2);
    return uVar1;
}

undefined4 beeper_on(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(0x10, 0);
    return uVar1;
}

undefined4 beeper_off(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(0x10, 1);
    return uVar1;
}

undefined4 beeper_flicker(void)

{
    undefined4 uVar1;

    uVar1 = gpio_ctrl_ui(0x10, 2);
    return uVar1;
}

undefined4 reg_key_callback(undefined4 param_1)

{
    int iVar1;
    undefined4 local_10;
    int local_c;

    local_10 = 0;
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&ui_api_mutex);
    if (iVar1 == 0) {
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(int *)(ui_callback + local_c * 4) == 0) {
                *(undefined4 *)(ui_callback + local_c * 4) = param_1;
                break;
            }
        }
        if (4 < local_c) {
            local_10 = 0xfffffffe;
            printf("%s:%d", "reg_key_callback", 0x14b);
            puts("no more listener available");
        }
        pthread_mutex_unlock((pthread_mutex_t *)&ui_api_mutex);
    } else {
        printf("%s:%d", "reg_key_callback", 0x140);
        puts("failed to api lock");
        local_10 = 0xffffffff;
    }
    return local_10;
}

undefined4 unreg_key_callback(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&ui_api_mutex);
    if (iVar1 == 0) {
        for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(int *)(ui_callback + local_c * 4) == param_1) {
                *(undefined4 *)(ui_callback + local_c * 4) = 0;
                break;
            }
        }
        if (4 < local_c) {
            printf("%s:%d", "unreg_key_callback", 0x165);
            puts("listener not registered before");
        }
        pthread_mutex_unlock((pthread_mutex_t *)&ui_api_mutex);
        uVar2 = 0;
    } else {
        printf("%s:%d", "unreg_key_callback", 0x15b);
        puts("failed to api lock");
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 lcd_show_result(undefined4 param_1, undefined4 param_2,
                           undefined4 param_3)

{
    int iVar1;
    undefined4 local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&ui_api_mutex);
    if (iVar1 == 0) {
        if (lcd_ctx < 0) {
            lcd_ctx = lcd_init(lcd_path);
            lcd_clear(lcd_ctx);
        }
        if (lcd_ctx < 1) {
            printf("%s:%d", "lcd_show_result", 0x181);
            printf("failed to init %s\n", lcd_path);
            local_c = 0xffffffff;
        } else {
            local_c = lcd_write(lcd_ctx, param_1, param_2, param_3);
        }
        pthread_mutex_unlock((pthread_mutex_t *)&ui_api_mutex);
    } else {
        printf("%s:%d", "lcd_show_result", 0x177);
        puts("failed to api lock");
        local_c = 0xfffffffc;
    }
    return local_c;
}

void lcd_clear_result(void)

{
    int iVar1;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&ui_api_mutex);
    if (iVar1 == 0) {
        if (0 < lcd_ctx) {
            lcd_clear(lcd_ctx);
        }
        pthread_mutex_unlock((pthread_mutex_t *)&ui_api_mutex);
    } else {
        printf("%s:%d", "lcd_clear_result", 0x18c);
        puts("failed to api lock");
    }
    return;
}

int lcd_init(char *param_1)

{
    int iVar1;

    if (lcd_inited == 0) {
        if (param_1 == (char *)0x0) {
            printf("%s:%d", "lcd_init", 0x18);
            puts("bad param");
            iVar1 = -3;
        } else {
            iVar1 = open(param_1, 0x802);
            lcd_fd = iVar1;
            if (iVar1 < 0) {
                printf("%s:%d", "lcd_init", 0x1e);
                puts("open lcd failed!!!");
                iVar1 = -1;
            } else {
                lcd_inited = 1;
            }
        }
    } else {
        iVar1 = 0;
    }
    return iVar1;
}

undefined4 lcd_write(int param_1, byte param_2, int param_3, uint param_4)

{
    int iVar1;
    undefined4 uVar2;
    uint __n;
    uint uVar3;
    uint local_20;
    byte local_15;
    int local_c;

    local_c = 0;
    if (lcd_inited == 0) {
        uVar2 = 0xfffffffe;
    } else if (((param_1 == lcd_fd) && (param_2 < 4)) && (param_4 < 0x41)) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)lcd_mutex);
        local_20 = param_4;
        local_15 = param_2;
        if (iVar1 == 0) {
            do {
                __n = local_20;
                if (0xf < local_20) {
                    __n = 0x10;
                }
                uVar3 = (uint)local_15;
                local_15 = local_15 + 1;
                memcpy(lcd_output + uVar3 * 0x10, (void *)(param_3 + local_c),
                       __n);
                local_c = local_c + __n;
                local_20 = local_20 - __n;
            } while ((local_20 != 0) && (local_15 < 4));
            write(lcd_fd, lcd_output, 0x40);
            pthread_mutex_unlock((pthread_mutex_t *)lcd_mutex);
            uVar2 = 0;
        } else {
            printf("%s:%d", "lcd_write", 0x3b);
            puts("failed to lcd lock");
            uVar2 = 0xfffffffc;
        }
    } else {
        printf("%s:%d", "lcd_write", 0x36);
        puts("bad param");
        uVar2 = 0xfffffffd;
    }
    return uVar2;
}

undefined4 lcd_flush(void)

{
    return 0;
}

undefined4 lcd_clear(int param_1)

{
    int iVar1;
    undefined4 uVar2;

    if (lcd_inited == 0) {
        uVar2 = 0xfffffffe;
    } else if (param_1 == lcd_fd) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)lcd_mutex);
        if (iVar1 == 0) {
            memset(lcd_output, 0x20, 0x40);
            lseek(lcd_fd, 0, 0);
            write(lcd_fd, lcd_output, 0x40);
            pthread_mutex_unlock((pthread_mutex_t *)lcd_mutex);
            uVar2 = 0;
        } else {
            printf("%s:%d", "lcd_clear", 0x61);
            puts("failed to lcd lock");
            uVar2 = 0xfffffffc;
        }
    } else {
        printf("%s:%d", "lcd_clear", 0x5d);
        puts("bad param");
        uVar2 = 0xfffffffd;
    }
    return uVar2;
}

undefined4 lcd_uninit(int param_1)

{
    int iVar1;
    undefined4 local_c;

    local_c = 0;
    if (lcd_inited != 0) {
        iVar1 = close(param_1);
        if (iVar1 != 0) {
            printf("%s:%d", "lcd_uninit", 0x75);
            puts("lcd close failed!!!");
            local_c = 0xffffffff;
        }
        lcd_inited = 0;
    }
    return local_c;
}

int i2c_compare_e(int *param_1, int *param_2)

{
    return *param_1 - *param_2;
}

int i2c_init(void)

{
    undefined4 local_14;
    undefined4 local_10;
    int local_c;

    local_c = -1;
    if (platform_inited == 0) {
        printf("%s:%d", "i2c_init", 0x29);
        puts("please init platform first!!");
        local_c = -2;
    } else {
        if (i2c_index == 0) {
            i2c_ctx_map = new_c_map(0x2078d, 0, 0);
            pthread_mutex_init((pthread_mutex_t *)&i2c_mutex,
                               (pthread_mutexattr_t *)0x0);
        }
        i2c_index = i2c_index + 1;
        local_14 = 0;
        local_10 = 0;
        local_c = i2c_index;
        insert_c_map(i2c_ctx_map, &local_c, 4, &local_14, 8);
    }
    return local_c;
}

void i2c_uninit(undefined4 param_1)

{
    int iVar1;
    undefined4 local_1c[2];
    undefined4 *local_14;
    int local_10;
    int local_c;

    local_c = 0;
    local_1c[0] = param_1;
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
    if (iVar1 == 0) {
        iVar1 = exists_c_map(i2c_ctx_map, local_1c);
        if (iVar1 == 1) {
            printf("%s:%d", "i2c_uninit", 0x42);
            printf("remove %d from callback list\n", local_1c[0]);
            remove_c_map(i2c_ctx_map, local_1c);
        } else {
            printf("%s:%d", "i2c_uninit", 0x45);
            printf("ctx(%d) is not inited\n", local_1c[0]);
        }
        local_14 = (undefined4 *)new_iterator_c_map(i2c_ctx_map);
        local_10 = (*(code *)*local_14)(local_14);
        while (local_10 != 0) {
            local_c = local_c + 1;
            local_10 = (*(code *)*local_14)(local_14);
        }
        delete_iterator_c_map(local_14);
        pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
        if (local_c == 0) {
            printf("%s:%d", "i2c_uninit", 0x50);
            puts("all i2c uninited");
            i2c_index = 0;
            delete_c_map(i2c_ctx_map);
            i2c_ctx_map = 0;
        } else {
            printf("%s:%d", "i2c_uninit", 0x55);
            printf("still have %d nodes\n", local_c);
        }
    } else {
        printf("%s:%d", "i2c_uninit", 0x3e);
        puts("failed to i2c lock");
    }
    return;
}

undefined4 wait4i2c_ready(void)

{
    char cVar1;
    uint uVar2;
    int local_10;
    uint local_c;

    local_10 = 0;
    local_c = 0;
    do {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._44_4_, &local_10);
        } else {
            fpga_read(DAT_0003557c, &local_10);
        }
        if (local_10 < 0) {
            return 1;
        }
        usleep(5000);
        uVar2 = local_c;
        if (0x13 < local_c) {
            uVar2 = 0;
        }
        cVar1 = (char)uVar2;
        if (local_c < 0x14) {
            cVar1 = '\x01';
        }
        local_c = local_c + 1;
    } while (cVar1 != '\0');
    return 0;
}

undefined4 wait4i2c_data(undefined1 *param_1)

{
    char cVar1;
    uint uVar2;
    int local_10;
    uint local_c;

    local_10 = 0;
    local_c = 0;
    do {
        if (platform_is_t9 == 0) {
            fpga_read(v9_fpga_map._44_4_, &local_10);
        } else {
            fpga_read(DAT_0003557c, &local_10);
        }
        if (local_10 < 0) {
            *param_1 = (char)local_10;
            return 1;
        }
        usleep(5000);
        uVar2 = local_c;
        if (0x13 < local_c) {
            uVar2 = 0;
        }
        cVar1 = (char)uVar2;
        if (local_c < 0x14) {
            cVar1 = '\x01';
        }
        local_c = local_c + 1;
    } while (cVar1 != '\0');
    return 0;
}

uint i2c_read(undefined4 param_1, int param_2, uint param_3)

{
    int iVar1;
    undefined4 local_1c;
    int *local_18;
    int *local_14;
    uint local_10;
    uint local_c;

    local_c = 0;
    local_1c = param_1;
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
    if (iVar1 == 0) {
        local_10 = 0;
        local_18 = (int *)0x0;
        iVar1 = find_c_map(i2c_ctx_map, &local_1c, &local_18);
        if (iVar1 == 1) {
            local_14 = local_18;
            local_10 = ((uint)local_18[1] >> 1 & 7) << 0x10 |
                       *local_18 << 0x1a | ((uint)local_18[1] >> 4) << 0x14 |
                       0x2000000;
            for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
                iVar1 = wait4i2c_ready();
                if (iVar1 == 0) {
                    free(local_18);
                    printf("%s:%d", "i2c_read", 0x92);
                    puts("iic not ready 4 read1");
                    pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                    return 0xfffffffe;
                }
                if (platform_is_t9 == 0) {
                    fpga_write(v9_fpga_map._44_4_, local_10);
                } else {
                    fpga_write(DAT_0003557c, local_10);
                }
                iVar1 = wait4i2c_data(param_2 + local_c);
                if (iVar1 == 0) {
                    free(local_18);
                    printf("%s:%d", "i2c_read", 0x9e);
                    puts("iic not ready 4 read2");
                    pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                    return 0xfffffffd;
                }
            }
            free(local_18);
            pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
        } else {
            printf("%s:%d", "i2c_read", 0xa5);
            printf("ctx %d not inited\n", local_1c);
            pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
            param_3 = 0xfffffffe;
        }
    } else {
        printf("%s:%d", "i2c_read", 0x84);
        puts("failed to i2c lock");
        param_3 = 0xffffffff;
    }
    return param_3;
}

uint i2c_write(undefined4 param_1, int param_2, uint param_3)

{
    int iVar1;
    undefined4 local_1c;
    int *local_18;
    int *local_14;
    uint local_10;
    uint local_c;

    local_c = 0;
    local_1c = param_1;
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
    if (iVar1 == 0) {
        local_10 = 0;
        local_18 = (int *)0x0;
        iVar1 = find_c_map(i2c_ctx_map, &local_1c, &local_18);
        if (iVar1 == 1) {
            local_14 = local_18;
            for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
                local_10 = (uint) * (byte *)(param_2 + local_c) |
                           *local_14 << 0x1a |
                           ((uint)local_14[1] >> 4) << 0x14 |
                           ((uint)local_14[1] >> 1 & 7) << 0x10;
                iVar1 = wait4i2c_ready();
                if (iVar1 == 0) {
                    free(local_18);
                    printf("%s:%d", "i2c_write", 200);
                    puts("iic not ready 4 write");
                    pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                    return 0xfffffffe;
                }
                if (platform_is_t9 == 0) {
                    fpga_write(v9_fpga_map._44_4_, local_10);
                } else {
                    fpga_write(DAT_0003557c, local_10);
                }
            }
            free(local_18);
            pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
        } else {
            printf("%s:%d", "i2c_write", 0xd2);
            printf("ctx %d not inited\n", local_1c);
            pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
            param_3 = 0xfffffffe;
        }
    } else {
        printf("%s:%d", "i2c_write", 0xba);
        puts("failed to i2c lock");
        param_3 = 0xffffffff;
    }
    return param_3;
}

uint i2c_read_reg(undefined4 param_1, byte *param_2, int param_3, int param_4,
                  uint param_5)

{
    int iVar1;
    undefined4 local_1c;
    int *local_18;
    int *local_14;
    uint local_10;
    uint local_c;

    local_c = 0;
    local_1c = param_1;
    if (param_3 == 1) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
        if (iVar1 == 0) {
            local_10 = 0;
            local_18 = (int *)0x0;
            iVar1 = find_c_map(i2c_ctx_map, &local_1c, &local_18);
            if (iVar1 == 1) {
                local_14 = local_18;
                for (local_c = 0; local_c < param_5; local_c = local_c + 1) {
                    if (*local_14 == 1) {
                        local_10 = ((uint)local_14[1] >> 1 & 7) << 0x10 |
                                   *local_14 << 0x1a |
                                   ((uint)local_14[1] >> 4) << 0x14 | 0x2000000;
                    } else {
                        local_10 =
                            (*param_2 + local_c) * 0x100 | *local_14 << 0x1a |
                            ((uint)local_14[1] >> 4) << 0x14 |
                            ((uint)local_14[1] >> 1 & 7) << 0x10 | 0x3000000;
                    }
                    iVar1 = wait4i2c_ready();
                    if (iVar1 == 0) {
                        printf("%s:%d", "i2c_read_reg", 0xfe);
                        puts("iic not ready 4 read1");
                        free(local_18);
                        pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                        return 0xfffffffe;
                    }
                    if (platform_is_t9 == 0) {
                        fpga_write(v9_fpga_map._44_4_, local_10);
                    } else {
                        fpga_write(DAT_0003557c, local_10);
                    }
                    iVar1 = wait4i2c_data(param_4 + local_c);
                    if (iVar1 == 0) {
                        printf("%s:%d", "i2c_read_reg", 0x10a);
                        puts("iic failed to read data");
                        free(local_18);
                        pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                        return 0xfffffffd;
                    }
                }
                free(local_18);
                pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
            } else {
                printf("%s:%d", "i2c_read_reg", 0x112);
                printf("ctx %d not inited\n", local_1c);
                pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                param_5 = 0xfffffffe;
            }
        } else {
            printf("%s:%d", "i2c_read_reg", 0xec);
            puts("failed to i2c lock");
            param_5 = 0xffffffff;
        }
    } else {
        printf("%s:%d", "i2c_read_reg", 0xe8);
        puts("more than one byte reg address is not supported");
        param_5 = 0xfffffffd;
    }
    return param_5;
}

uint i2c_write_reg(undefined4 param_1, byte *param_2, int param_3, int param_4,
                   uint param_5)

{
    int iVar1;
    undefined4 local_1c;
    int *local_18;
    int *local_14;
    uint local_10;
    uint local_c;

    local_c = 0;
    local_1c = param_1;
    if (param_3 == 1) {
        iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
        if (iVar1 == 0) {
            local_10 = 0;
            local_18 = (int *)0x0;
            iVar1 = find_c_map(i2c_ctx_map, &local_1c, &local_18);
            if (iVar1 == 1) {
                local_14 = local_18;
                for (local_c = 0; local_c < param_5; local_c = local_c + 1) {
                    local_10 = (uint) * (byte *)(param_4 + local_c) |
                               *local_14 << 0x1a |
                               ((uint)local_14[1] >> 4) << 0x14 |
                               ((uint)local_14[1] >> 1 & 7) << 0x10 |
                               (*param_2 + local_c) * 0x100 | 0x1000000;
                    iVar1 = wait4i2c_ready();
                    if (iVar1 == 0) {
                        printf("%s:%d", "i2c_write_reg", 0x13b);
                        puts("iic not ready 4 write");
                        free(local_18);
                        pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                        return 0xfffffffe;
                    }
                    if (platform_is_t9 == 0) {
                        fpga_write(v9_fpga_map._44_4_, local_10);
                    } else {
                        fpga_write(DAT_0003557c, local_10);
                    }
                }
                free(local_18);
                pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
            } else {
                printf("%s:%d", "i2c_write_reg", 0x146);
                printf("ctx %d not inited\n", local_1c);
                pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
                param_5 = 0xfffffffe;
            }
        } else {
            printf("%s:%d", "i2c_write_reg", 300);
            puts("failed to i2c lock");
            param_5 = 0xffffffff;
        }
    } else {
        printf("%s:%d", "i2c_write_reg", 0x128);
        puts("more than one byte reg address is not supported");
        param_5 = 0xfffffffd;
    }
    return param_5;
}

undefined4 i2c_ioctl(int param_1, short param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 *local_18;
    int local_14;
    undefined4 *local_10;
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
    if (iVar1 == 0) {
        local_10 = (undefined4 *)new_iterator_c_map(i2c_ctx_map);
        local_c = (*(code *)*local_10)(local_10);
        while (local_c != 0) {
            local_14 = local_10[5];
            if (param_1 == *(int *)**(undefined4 **)(local_14 + 0x10)) {
                local_18 = (undefined4 *)(*(code *)local_10[2])(local_c);
                if (param_2 == 0x703) {
                    local_20 = *local_18;
                    local_1c = param_3;
                    (*(code *)local_10[1])(local_10, &local_20, 8);
                    printf("%s:%d", __FUNCTION___6884, 0x168);
                    printf("update the slave address to %d\n", param_3);
                    free(local_18);
                }
                break;
            }
            local_c = (*(code *)*local_10)(local_10);
        }
        delete_iterator_c_map(local_10);
        pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
        uVar2 = 0;
    } else {
        printf("%s:%d", __FUNCTION___6884, 0x15a);
        puts("failed to i2c lock");
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

undefined4 i2c_select(int param_1, undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 local_20;
    undefined4 local_1c;
    void *local_18;
    int local_14;
    undefined4 *local_10;
    int local_c;

    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&i2c_mutex);
    if (iVar1 == 0) {
        local_10 = (undefined4 *)new_iterator_c_map(i2c_ctx_map);
        local_c = (*(code *)*local_10)(local_10);
        while (local_c != 0) {
            local_14 = local_10[5];
            if (param_1 == *(int *)**(undefined4 **)(local_14 + 0x10)) {
                local_18 = (void *)(*(code *)local_10[2])(local_c);
                local_1c = *(undefined4 *)((int)local_18 + 4);
                local_20 = param_2;
                (*(code *)local_10[1])(local_10, &local_20, 8);
                printf("%s:%d", "i2c_select", 0x186);
                printf("update the master address to %d\n", param_2);
                free(local_18);
                break;
            }
            local_c = (*(code *)*local_10)(local_10);
        }
        delete_iterator_c_map(local_10);
        pthread_mutex_unlock((pthread_mutex_t *)&i2c_mutex);
        uVar2 = 0;
    } else {
        printf("%s:%d", "i2c_select", 0x17b);
        puts("failed to i2c lock");
        uVar2 = 0xfffffffc;
    }
    return uVar2;
}

void json_decref(int param_1)

{
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if (*(int *)(param_1 + 4) == 0) {
            json_delete(param_1);
        }
    }
    return;
}

undefined4 hal_load_conf(undefined4 param_1)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined1 auStack_140[252];
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    void *local_28;
    int *local_24;
    int *local_20;
    int *local_1c;
    uint local_18;
    uint local_14;

    local_1c = (int *)0x0;
    local_20 = (int *)0x0;
    local_24 = (int *)0x0;
    local_28 = (void *)0x0;
    memset(chains, 0xff, 0x100);
    memset(fans, 0xff, 0x48);
    local_1c = (int *)json_load_file(param_1, 0, auStack_140);
    if ((local_1c == (int *)0x0) || (*local_1c != 0)) {
        printf("%s:%d", "hal_load_conf", 0x2a);
        printf("%s,%d bad json format\n", "platform/7007/src/hal_conf.c", 0x2a);
        uVar3 = 0xffffffff;
    } else {
        local_28 = (void *)json_dumps(local_1c, 0);
        printf("%s:%d", "hal_load_conf", 0x2e);
        printf("json = %s \n", local_28);
        free(local_28);
        local_20 = (int *)json_object_get(local_1c, "chain");
        if ((local_20 == (int *)0x0) || (*local_20 != 1)) {
            printf("%s:%d", "hal_load_conf", 0x34);
            printf("%s,%d bad chain format\n", "platform/7007/src/hal_conf.c",
                   0x34);
            json_decref(local_1c);
            uVar3 = 0xfffffffe;
        } else {
            local_14 = 0;
            while ((uVar1 = local_14, uVar2 = json_array_size(local_20),
                    uVar1 < uVar2 && ((int)local_14 < 0x10))) {
                local_24 = (int *)json_array_get(local_20, local_14);
                if ((local_24 == (int *)0x0) || (*local_24 != 0)) {
                    printf("%s:%d", "hal_load_conf", 0x3e);
                    printf("%s,%d bad object in chain\n",
                           "platform/7007/src/hal_conf.c", 0x3e);
                    json_decref(local_1c);
                    return 0xfffffffd;
                }
                local_2c = json_object_get(local_24, &DAT_0002cb80);
                uVar3 = json_integer_value(local_2c);
                *(undefined4 *)(chains + local_14 * 0x10) = uVar3;
                local_30 = json_object_get(local_24, &DAT_0002cb84);
                uVar3 = json_integer_value(local_30);
                *(undefined4 *)(chains + local_14 * 0x10 + 4) = uVar3;
                local_34 = json_object_get(local_24, &DAT_0002cb8c);
                uVar3 = json_integer_value(local_34);
                *(undefined4 *)(chains + local_14 * 0x10 + 8) = uVar3;
                local_38 = json_object_get(local_24, "reset");
                uVar3 = json_integer_value(local_38);
                *(undefined4 *)(chains + local_14 * 0x10 + 0xc) = uVar3;
                local_14 = local_14 + 1;
            }
            local_20 = (int *)json_object_get(local_1c, &DAT_0002cb9c);
            if ((local_20 == (int *)0x0) || (*local_20 != 1)) {
                printf("%s:%d", "hal_load_conf", 0x4f);
                printf("%s,%d bad fan format\n", "platform/7007/src/hal_conf.c",
                       0x4f);
                json_decref(local_1c);
                uVar3 = 0xfffffffc;
            } else {
                local_18 = 0;
                while ((uVar1 = local_18, uVar2 = json_array_size(local_20),
                        uVar1 < uVar2 && ((int)local_18 < 6))) {
                    local_24 = (int *)json_array_get(local_20, local_18);
                    if ((local_24 == (int *)0x0) || (*local_24 != 0)) {
                        printf("%s:%d", "hal_load_conf", 0x58);
                        printf("%s,%d bad object in fan\n",
                               "platform/7007/src/hal_conf.c", 0x58);
                        json_decref(local_1c);
                        return 0xfffffffb;
                    }
                    local_3c = json_object_get(local_24, &DAT_0002cb80);
                    uVar3 = json_integer_value(local_3c);
                    *(undefined4 *)(fans + local_18 * 0xc) = uVar3;
                    local_40 = json_object_get(local_24, &DAT_0002cbd4);
                    uVar3 = json_integer_value(local_40);
                    *(undefined4 *)(fans + local_18 * 0xc + 4) = uVar3;
                    local_44 = json_object_get(local_24, &DAT_0002cbdc);
                    uVar3 = json_integer_value(local_44);
                    *(undefined4 *)(fans + local_18 * 0xc + 8) = uVar3;
                    local_18 = local_18 + 1;
                }
                local_24 = (int *)json_object_get(local_1c, &DAT_0002cbe0);
                if ((local_24 == (int *)0x0) || (*local_24 != 3)) {
                    printf("%s:%d", "hal_load_conf", 0x67);
                    printf("%s,%d bad red\n", "platform/7007/src/hal_conf.c",
                           0x67);
                    json_decref(local_1c);
                    uVar3 = 0xfffffffa;
                } else {
                    red_addr = json_integer_value(local_24);
                    local_24 = (int *)json_object_get(local_1c, "green");
                    if ((local_24 == (int *)0x0) || (*local_24 != 3)) {
                        printf("%s:%d", "hal_load_conf", 0x6f);
                        printf("%s,%d bad green\n",
                               "platform/7007/src/hal_conf.c", 0x6f);
                        json_decref(local_1c);
                        uVar3 = 0xfffffff9;
                    } else {
                        green_addr = json_integer_value(local_24);
                        local_24 = (int *)json_object_get(local_1c, "reset");
                        if ((local_24 == (int *)0x0) || (*local_24 != 3)) {
                            printf("%s:%d", "hal_load_conf", 0x77);
                            printf("%s,%d bad reset\n",
                                   "platform/7007/src/hal_conf.c", 0x77);
                            json_decref(local_1c);
                            uVar3 = 0xfffffff8;
                        } else {
                            reset_addr = json_integer_value(local_24);
                            local_24 =
                                (int *)json_object_get(local_1c, "ipreport");
                            if ((local_24 == (int *)0x0) || (*local_24 != 3)) {
                                printf("%s:%d", "hal_load_conf", 0x7f);
                                printf("%s,%d bad ipreport\n",
                                       "platform/7007/src/hal_conf.c", 0x7f);
                                json_decref(local_1c);
                                uVar3 = 0xfffffff7;
                            } else {
                                ipreport_addr = json_integer_value(local_24);
                                json_decref(local_1c);
                                conf_loaded = 1;
                                uVar3 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar3;
}

undefined4 hal_led_red_addr(void)

{
    undefined4 uVar1;

    uVar1 = red_addr;
    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

undefined4 hal_led_green_addr(void)

{
    undefined4 uVar1;

    uVar1 = green_addr;
    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

undefined4 hal_key_reset_addr(void)

{
    undefined4 uVar1;

    uVar1 = reset_addr;
    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

undefined4 hal_key_ipreport_addr(void)

{
    undefined4 uVar1;

    uVar1 = ipreport_addr;
    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

undefined4 hal_chain_uart_addr(int param_1)

{
    undefined4 uVar1;
    int local_c;

    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    } else {
        for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
            if (*(int *)(chains + local_c * 0x10) == param_1) {
                return *(undefined4 *)(chains + local_c * 0x10 + 4);
            }
        }
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}

undefined4 hal_chain_plug_addr(int param_1)

{
    undefined4 uVar1;
    int local_c;

    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    } else {
        for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
            if (*(int *)(chains + local_c * 0x10) == param_1) {
                return *(undefined4 *)(chains + local_c * 0x10 + 8);
            }
        }
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}

undefined4 hal_chain_reset_addr(int param_1)

{
    undefined4 uVar1;
    int local_c;

    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    } else {
        for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
            if (*(int *)(chains + local_c * 0x10) == param_1) {
                return *(undefined4 *)(chains + local_c * 0x10 + 0xc);
            }
        }
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}

int hal_chain_max_num(void)

{
    int local_c;

    if (conf_loaded == 0) {
        local_c = -1;
    } else {
        local_c = 0;
        while ((local_c < 0x10 &&
                ((((*(int *)(chains + local_c * 0x10) != 0xff ||
                    (*(int *)(chains + local_c * 0x10 + 4) != 0xff)) ||
                   (*(int *)(chains + local_c * 0x10 + 8) != 0xff)) ||
                  (*(int *)(chains + local_c * 0x10 + 0xc) != 0xff))))) {
            local_c = local_c + 1;
        }
    }
    return local_c;
}

undefined4 hal_fan_addr(int param_1)

{
    undefined4 uVar1;
    int local_c;

    if (conf_loaded == 0) {
        uVar1 = 0xffffffff;
    } else {
        for (local_c = 0; local_c < 6; local_c = local_c + 1) {
            if (*(int *)(fans + local_c * 0xc) == param_1) {
                return *(undefined4 *)(fans + local_c * 0xc + 4);
            }
        }
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}

undefined4 hal_fan_max_speed(int param_1)

{
    int local_c;

    if (conf_loaded != 0) {
        for (local_c = 0; local_c < 6; local_c = local_c + 1) {
            if (*(int *)(fans + local_c * 0xc) == param_1) {
                return *(undefined4 *)(fans + local_c * 0xc + 8);
            }
        }
    }
    return 0xffffffff;
}

int hal_fan_number(void)

{
    int local_10;
    int local_c;

    local_c = 0;
    if (conf_loaded == 0) {
        local_c = -1;
    } else {
        for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
            if (*(int *)(fans + local_10 * 0xc) != -1) {
                local_c = local_c + 1;
            }
        }
    }
    return local_c;
}

int *new_c_map(undefined4 param_1, undefined4 param_2, undefined4 param_3)

{
    int *piVar1;
    int iVar2;

    piVar1 = (int *)malloc(4);
    if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
    } else {
        iVar2 = new_c_rb(param_1, param_2, param_3);
        *piVar1 = iVar2;
        if (*piVar1 == 0) {
            piVar1 = (int *)0x0;
        }
    }
    return piVar1;
}

undefined4 insert_c_map(undefined4 *param_1, undefined4 param_2,
                        undefined4 param_3, undefined4 param_4,
                        undefined4 param_5)

{
    undefined4 uVar1;

    if (param_1 == (undefined4 *)0x0) {
        uVar1 = 0x1f5;
    } else {
        uVar1 = insert_c_rb(*param_1, param_2, param_3, param_4, param_5);
    }
    return uVar1;
}

undefined4 exists_c_map(undefined4 *param_1, undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;

    if (param_1 == (undefined4 *)0x0) {
        uVar2 = 0;
    } else {
        iVar1 = find_c_rb(*param_1, param_2);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            uVar2 = 1;
        }
    }
    return uVar2;
}

undefined4 remove_c_map(undefined4 *param_1, undefined4 param_2)

{
    void *local_14;
    void *local_10;
    undefined4 local_c;

    local_c = 0;
    if (param_1 == (undefined4 *)0x0) {
        local_c = 0x1f5;
    } else {
        local_10 = (void *)remove_c_rb(*param_1, param_2);
        if (local_10 != (void *)0x0) {
            get_raw_clib_object(*(undefined4 *)((int)local_10 + 0x10),
                                &local_14);
            free(local_14);
            delete_clib_object(*(undefined4 *)((int)local_10 + 0x10));
            get_raw_clib_object(*(undefined4 *)((int)local_10 + 0x14),
                                &local_14);
            free(local_14);
            delete_clib_object(*(undefined4 *)((int)local_10 + 0x14));
            free(local_10);
        }
    }
    return local_c;
}

undefined4 find_c_map(undefined4 *param_1, undefined4 param_2,
                      undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;

    if (param_1 == (undefined4 *)0x0) {
        uVar2 = 0;
    } else {
        iVar1 = find_c_rb(*param_1, param_2);
        if (iVar1 == 0) {
            uVar2 = 0;
        } else {
            get_raw_clib_object(*(undefined4 *)(iVar1 + 0x14), param_3);
            uVar2 = 1;
        }
    }
    return uVar2;
}

undefined4 delete_c_map(undefined4 *param_1)

{
    undefined4 local_c;

    local_c = 0;
    if (param_1 != (undefined4 *)0x0) {
        local_c = delete_c_rb(*param_1);
        free(param_1);
    }
    return local_c;
}

undefined4 minimum_c_map(undefined4 *param_1)

{
    undefined4 uVar1;

    uVar1 = minimum_c_rb(*param_1, *(undefined4 *)*param_1);
    return uVar1;
}

undefined4 get_next_c_map(int param_1)

{
    undefined4 uVar1;

    if (*(int *)(param_1 + 0x14) == 0) {
        uVar1 = minimum_c_map(*(undefined4 *)(param_1 + 0xc));
        *(undefined4 *)(param_1 + 0x14) = uVar1;
    } else {
        uVar1 = tree_successor(**(undefined4 **)(param_1 + 0xc),
                               *(undefined4 *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
        uVar1 = 0;
    } else {
        uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14);
    }
    return uVar1;
}

undefined4 get_value_c_map(undefined4 param_1)

{
    undefined4 local_c;

    get_raw_clib_object(param_1, &local_c);
    return local_c;
}

void replace_value_c_map(int param_1, undefined4 param_2, undefined4 param_3)

{
    undefined4 local_10;
    int *local_c;

    local_c = *(int **)(param_1 + 0xc);
    if (*(int *)(*local_c + 0x20) != 0) {
        get_raw_clib_object(*(undefined4 *)(param_1 + 0x14), &local_10);
        (**(code **)(*local_c + 0x20))(local_10);
    }
    replace_raw_clib_object(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),
                            param_2, param_3);
    return;
}

undefined4 *new_iterator_c_map(undefined4 param_1)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)malloc(0x18);
    *puVar1 = 0x22099;
    puVar1[2] = 0x220f5;
    puVar1[1] = 0x22115;
    puVar1[3] = param_1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    return puVar1;
}

void delete_iterator_c_map(void *param_1)

{
    free(param_1);
    return;
}

void __left_rotate(undefined4 *param_1, undefined4 *param_2)

{
    int *piVar1;

    piVar1 = (int *)param_2[1];
    param_2[1] = *piVar1;
    if ((undefined4 *)*piVar1 != param_1 + 1) {
        *(undefined4 **)(*piVar1 + 8) = param_2;
    }
    if (param_1 + 1 != piVar1) {
        piVar1[2] = param_2[2];
    }
    if (param_2[2] == 0) {
        *param_1 = piVar1;
    } else if ((undefined4 *)*(int *)param_2[2] == param_2) {
        *(int **)param_2[2] = piVar1;
    } else {
        *(int **)(param_2[2] + 4) = piVar1;
    }
    *piVar1 = (int)param_2;
    if (param_1 + 1 != param_2) {
        param_2[2] = piVar1;
    }
    return;
}

void __right_rotate(int *param_1, int *param_2)

{
    int *piVar1;

    piVar1 = (int *)*param_2;
    *param_2 = piVar1[1];
    if ((int *)piVar1[1] != param_1 + 1) {
        *(int **)(piVar1[1] + 8) = param_2;
    }
    if (param_1 + 1 != piVar1) {
        piVar1[2] = param_2[2];
    }
    if (param_2[2] == 0) {
        *param_1 = (int)piVar1;
    } else if (*(int **)(param_2[2] + 4) == param_2) {
        *(int **)(param_2[2] + 4) = piVar1;
    } else {
        *(int **)param_2[2] = piVar1;
    }
    piVar1[1] = (int)param_2;
    if (param_1 + 1 != param_2) {
        param_2[2] = (int)piVar1;
    }
    return;
}

int *new_c_rb(int param_1, int param_2, int param_3)

{
    int *__s;

    __s = (int *)malloc(0x28);
    if (__s == (int *)0x0) {
        __s = (int *)0x0;
    } else {
        memset(__s, 0, 0x28);
        __s[9] = param_1;
        __s[7] = param_2;
        __s[8] = param_3;
        *__s = (int)(__s + 1);
        __s[1] = (int)(__s + 1);
        __s[2] = (int)(__s + 1);
        __s[3] = 0;
        __s[4] = 0;
    }
    return __s;
}

void __rb_insert_fixup(int *param_1, int param_2)

{
    int iVar1;
    undefined4 local_18;

    local_18 = param_2;
    while ((*param_1 != local_18 &&
            (*(int *)(*(int *)(local_18 + 8) + 0xc) == 1))) {
        if (*(int *)(local_18 + 8) == **(int **)(*(int *)(local_18 + 8) + 8)) {
            iVar1 = *(int *)(*(int *)(*(int *)(local_18 + 8) + 8) + 4);
            if (*(int *)(iVar1 + 0xc) == 1) {
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
                *(undefined4 *)(iVar1 + 0xc) = 0;
                *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
                local_18 = *(int *)(*(int *)(local_18 + 8) + 8);
            } else {
                if (*(int *)(*(int *)(local_18 + 8) + 4) == local_18) {
                    local_18 = *(int *)(local_18 + 8);
                    __left_rotate(param_1, local_18);
                }
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
                *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
                __right_rotate(param_1,
                               *(undefined4 *)(*(int *)(local_18 + 8) + 8));
            }
        } else {
            iVar1 = **(int **)(*(int *)(local_18 + 8) + 8);
            if (*(int *)(iVar1 + 0xc) == 1) {
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
                *(undefined4 *)(iVar1 + 0xc) = 0;
                *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
                local_18 = *(int *)(*(int *)(local_18 + 8) + 8);
            } else {
                if (**(int **)(local_18 + 8) == local_18) {
                    local_18 = *(int *)(local_18 + 8);
                    __right_rotate(param_1, local_18);
                }
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
                *(undefined4 *)(*(int *)(*(int *)(local_18 + 8) + 8) + 0xc) = 1;
                __left_rotate(param_1,
                              *(undefined4 *)(*(int *)(local_18 + 8) + 8));
            }
        }
    }
    *(undefined4 *)(*param_1 + 0xc) = 0;
    return;
}

undefined4 *find_c_rb(undefined4 *param_1, undefined4 param_2)

{
    void *local_14;
    int local_10;
    undefined4 *local_c;

    local_c = (undefined4 *)*param_1;
    while (param_1 + 1 != local_c) {
        local_10 = 0;
        get_raw_clib_object(local_c[4], &local_14);
        local_10 = (*(code *)param_1[9])(param_2, local_14);
        free(local_14);
        if (local_10 == 0)
            break;
        if (local_10 < 0) {
            local_c = (undefined4 *)*local_c;
        } else {
            local_c = (undefined4 *)local_c[1];
        }
    }
    if (param_1 + 1 == local_c) {
        local_c = (undefined4 *)0x0;
    }
    return local_c;
}

undefined4 insert_c_rb(undefined4 *param_1, undefined4 param_2,
                       undefined4 param_3, int param_4, undefined4 param_5)

{
    undefined4 uVar1;
    void *local_30;
    void *local_2c;
    void *local_28;
    void *local_24;
    int local_20;
    int local_1c;
    void *local_18;
    undefined4 local_14;
    undefined4 *local_10;
    undefined4 *local_c;

    local_14 = 0;
    local_18 = malloc(0x18);
    if (local_18 == (void *)0x0) {
        local_14 = 2;
    } else {
        *(undefined4 **)local_18 = param_1 + 1;
        *(undefined4 **)((int)local_18 + 4) = param_1 + 1;
        *(undefined4 *)((int)local_18 + 0xc) = 1;
        uVar1 = new_clib_object(param_2, param_3);
        *(undefined4 *)((int)local_18 + 0x10) = uVar1;
        if (param_4 == 0) {
            *(undefined4 *)((int)local_18 + 0x14) = 0;
        } else {
            uVar1 = new_clib_object(param_4, param_5);
            *(undefined4 *)((int)local_18 + 0x14) = uVar1;
        }
        local_c = (undefined4 *)*param_1;
        local_10 = (undefined4 *)0x0;
        while (param_1 + 1 != local_c) {
            local_1c = 0;
            get_raw_clib_object(local_c[4], &local_24);
            get_raw_clib_object(*(undefined4 *)((int)local_18 + 0x10),
                                &local_28);
            local_1c = (*(code *)param_1[9])(local_28, local_24);
            free(local_24);
            free(local_28);
            if (local_1c == 0) {
                return 0x191;
            }
            local_10 = local_c;
            if (local_1c < 0) {
                local_c = (undefined4 *)*local_c;
            } else {
                local_c = (undefined4 *)local_c[1];
            }
        }
        *(undefined4 **)((int)local_18 + 8) = local_10;
        if (local_10 == (undefined4 *)0x0) {
            *param_1 = local_18;
        } else {
            local_20 = 0;
            get_raw_clib_object(local_10[4], &local_2c);
            get_raw_clib_object(*(undefined4 *)((int)local_18 + 0x10),
                                &local_30);
            local_20 = (*(code *)param_1[9])(local_30, local_2c);
            free(local_2c);
            free(local_30);
            if (local_20 < 0) {
                *local_10 = local_18;
            } else {
                local_10[1] = local_18;
            }
        }
        __rb_insert_fixup(param_1, local_18);
        debug_verify_properties(param_1);
    }
    return local_14;
}

void __rb_remove_fixup(int *param_1, int param_2)

{
    int local_18;
    int *local_10;
    int *local_c;

    local_18 = param_2;
    while ((*param_1 != local_18 && (*(int *)(local_18 + 0xc) == 0))) {
        if (**(int **)(local_18 + 8) == local_18) {
            local_c = *(int **)(*(int *)(local_18 + 8) + 4);
            if (local_c[3] == 1) {
                local_c[3] = 0;
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 1;
                __left_rotate(param_1, *(undefined4 *)(local_18 + 8));
                local_c = *(int **)(*(int *)(local_18 + 8) + 4);
            }
            if ((*(int *)(*local_c + 0xc) == 0) &&
                (*(int *)(local_c[1] + 0xc) == 0)) {
                local_c[3] = 1;
                local_18 = *(int *)(local_18 + 8);
            } else {
                if (*(int *)(local_c[1] + 0xc) == 0) {
                    *(undefined4 *)(*local_c + 0xc) = 0;
                    local_c[3] = 1;
                    __right_rotate(param_1, local_c);
                    local_c = *(int **)(*(int *)(local_18 + 8) + 4);
                }
                local_c[3] = *(int *)(*(int *)(local_18 + 8) + 0xc);
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
                *(undefined4 *)(local_c[1] + 0xc) = 0;
                __left_rotate(param_1, *(undefined4 *)(local_18 + 8));
                local_18 = *param_1;
            }
        } else {
            local_10 = (int *)**(int **)(local_18 + 8);
            if (local_10[3] == 1) {
                local_10[3] = 0;
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 1;
                __right_rotate(param_1, *(undefined4 *)(local_18 + 8));
                local_10 = (int *)**(undefined4 **)(local_18 + 8);
            }
            if ((*(int *)(local_10[1] + 0xc) == 0) &&
                (*(int *)(*local_10 + 0xc) == 0)) {
                local_10[3] = 1;
                local_18 = *(int *)(local_18 + 8);
            } else {
                if (*(int *)(*local_10 + 0xc) == 0) {
                    *(undefined4 *)(local_10[1] + 0xc) = 0;
                    local_10[3] = 1;
                    __left_rotate(param_1, local_10);
                    local_10 = (int *)**(undefined4 **)(local_18 + 8);
                }
                local_10[3] = *(int *)(*(int *)(local_18 + 8) + 0xc);
                *(undefined4 *)(*(int *)(local_18 + 8) + 0xc) = 0;
                *(undefined4 *)(*local_10 + 0xc) = 0;
                __right_rotate(param_1, *(undefined4 *)(local_18 + 8));
                local_18 = *param_1;
            }
        }
    }
    *(undefined4 *)(local_18 + 0xc) = 0;
    return;
}

int *__remove_c_rb(int *param_1, int *param_2)

{
    int iVar1;
    int *local_10;
    int local_c;

    local_10 = param_2;
    if (((int *)*param_2 != param_1 + 1) &&
        ((int *)param_2[1] != param_1 + 1)) {
        for (local_10 = (int *)param_2[1]; (int *)*local_10 != param_1 + 1;
             local_10 = (int *)*local_10) {
        }
    }
    if ((int *)*local_10 == param_1 + 1) {
        local_c = local_10[1];
    } else {
        local_c = *local_10;
    }
    *(int *)(local_c + 8) = local_10[2];
    if (local_10[2] == 0) {
        *param_1 = local_c;
    } else if (*(int **)local_10[2] == local_10) {
        *(int *)local_10[2] = local_c;
    } else {
        *(int *)(local_10[2] + 4) = local_c;
    }
    if (local_10 != param_2) {
        iVar1 = param_2[4];
        param_2[4] = local_10[4];
        local_10[4] = iVar1;
        iVar1 = param_2[5];
        param_2[5] = local_10[5];
        local_10[5] = iVar1;
    }
    if (local_10[3] == 0) {
        __rb_remove_fixup(param_1, local_c);
    }
    debug_verify_properties(param_1);
    return local_10;
}

undefined4 remove_c_rb(undefined4 *param_1, undefined4 param_2)

{
    undefined4 uVar1;
    void *local_14;
    int local_10;
    undefined4 *local_c;

    local_c = (undefined4 *)*param_1;
    while (param_1 + 1 != local_c) {
        local_10 = 0;
        get_raw_clib_object(local_c[4], &local_14);
        local_10 = (*(code *)param_1[9])(param_2, local_14);
        free(local_14);
        if (local_10 == 0)
            break;
        if (local_10 < 0) {
            local_c = (undefined4 *)*local_c;
        } else {
            local_c = (undefined4 *)local_c[1];
        }
    }
    if (param_1 + 1 == local_c) {
        uVar1 = 0;
    } else {
        uVar1 = __remove_c_rb(param_1, local_c);
    }
    return uVar1;
}

void __delete_c_rb_node(int param_1, int param_2)

{
    undefined4 local_10;
    undefined4 local_c;

    if (*(int *)(param_1 + 0x1c) != 0) {
        get_raw_clib_object(*(undefined4 *)(param_2 + 0x10), &local_c);
        (**(code **)(param_1 + 0x1c))(local_c);
    }
    delete_clib_object(*(undefined4 *)(param_2 + 0x10));
    if (*(int *)(param_2 + 0x14) != 0) {
        if (*(int *)(param_1 + 0x20) != 0) {
            get_raw_clib_object(*(undefined4 *)(param_2 + 0x14), &local_10);
            (**(code **)(param_1 + 0x20))(local_10);
        }
        delete_clib_object(*(undefined4 *)(param_2 + 0x14));
    }
    return;
}

undefined4 delete_c_rb(undefined4 *param_1)

{
    int *local_c;

    local_c = (int *)*param_1;
    while (param_1 + 1 != local_c) {
        if ((undefined4 *)*local_c == param_1 + 1) {
            if ((undefined4 *)local_c[1] == param_1 + 1) {
                __delete_c_rb_node(param_1, local_c);
                if (local_c[2] == 0) {
                    free(local_c);
                    local_c = param_1 + 1;
                } else {
                    local_c = (int *)local_c[2];
                    if ((undefined4 *)*local_c == param_1 + 1) {
                        if ((undefined4 *)local_c[1] != param_1 + 1) {
                            free((void *)local_c[1]);
                            local_c[1] = (int)(param_1 + 1);
                        }
                    } else {
                        free((void *)*local_c);
                        *local_c = (int)(param_1 + 1);
                    }
                }
            } else {
                local_c = (int *)local_c[1];
            }
        } else {
            local_c = (int *)*local_c;
        }
    }
    free(param_1);
    return 0;
}

int *minimum_c_rb(int param_1, int *param_2)

{
    undefined4 local_10;

    for (local_10 = param_2; *local_10 != param_1 + 4;
         local_10 = (int *)*local_10) {
    }
    return local_10;
}

int maximum_c_rb(int param_1, int param_2)

{
    undefined4 local_10;

    for (local_10 = param_2; *(int *)(local_10 + 4) != param_1 + 4;
         local_10 = *(int *)(local_10 + 4)) {
    }
    return local_10;
}

bool empty_c_rb(int *param_1)

{
    return (int *)*param_1 != param_1 + 1;
}

undefined4 *tree_successor(undefined4 *param_1, undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 *local_18;
    undefined4 *local_c;

    if ((undefined4 *)param_2[1] == param_1 + 1) {
        puVar1 = (undefined4 *)maximum_c_rb(param_1, *param_1);
        if (puVar1 == param_2) {
            local_c = (undefined4 *)0x0;
        } else {
            local_18 = param_2;
            for (local_c = (undefined4 *)param_2[2];
                 (param_1 + 1 != local_c &&
                  ((undefined4 *)local_c[1] == local_18));
                 local_c = (undefined4 *)local_c[2]) {
                local_18 = local_c;
            }
        }
    } else {
        local_c = (undefined4 *)minimum_c_rb(param_1, param_2[1]);
    }
    return local_c;
}

void debug_verify_properties(undefined4 *param_1)

{
    debug_verify_property_1(param_1, *param_1);
    debug_verify_property_2(param_1, *param_1);
    debug_verify_property_4(param_1, *param_1);
    debug_verify_property_5(param_1, *param_1);
    return;
}

void debug_verify_property_1(int param_1, undefined4 *param_2)

{
    int iVar1;

    iVar1 = debug_node_color(param_1, param_2);
    if ((iVar1 != 1) &&
        (iVar1 = debug_node_color(param_1, param_2), iVar1 != 0)) {
        /* WARNING: Subroutine does not return */
        __assert_fail(
            "debug_node_color(pTree,n) == 1 || debug_node_color(pTree,n) == 0",
            "3rdparty/cstl/src/c_rb.c", 0x1df, "debug_verify_property_1");
    }
    if ((undefined4 *)(param_1 + 4) != param_2) {
        debug_verify_property_1(param_1, *param_2);
        debug_verify_property_1(param_1, param_2[1]);
    }
    return;
}

void debug_verify_property_2(undefined4 param_1, undefined4 param_2)

{
    int iVar1;

    iVar1 = debug_node_color(param_1, param_2);
    if (iVar1 != 0) {
        /* WARNING: Subroutine does not return */
        __assert_fail("debug_node_color(pTree,root) == 0",
                      "3rdparty/cstl/src/c_rb.c", 0x1e6,
                      "debug_verify_property_2");
    }
    return;
}

undefined4 debug_node_color(int param_1, int param_2)

{
    undefined4 uVar1;

    if (param_1 + 4 == param_2) {
        uVar1 = 0;
    } else {
        uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    return uVar1;
}

void debug_verify_property_4(int param_1, undefined4 *param_2)

{
    int iVar1;

    iVar1 = debug_node_color(param_1, param_2);
    if (iVar1 == 1) {
        iVar1 = debug_node_color(param_1, *param_2);
        if (iVar1 != 0) {
            /* WARNING: Subroutine does not return */
            __assert_fail("debug_node_color(pTree,n->left) == 0",
                          "3rdparty/cstl/src/c_rb.c", 0x1ef,
                          "debug_verify_property_4");
        }
        iVar1 = debug_node_color(param_1, param_2[1]);
        if (iVar1 != 0) {
            /* WARNING: Subroutine does not return */
            __assert_fail("debug_node_color(pTree,n->right) == 0",
                          "3rdparty/cstl/src/c_rb.c", 0x1f0,
                          "debug_verify_property_4");
        }
        iVar1 = debug_node_color(param_1, param_2[2]);
        if (iVar1 != 0) {
            /* WARNING: Subroutine does not return */
            __assert_fail("debug_node_color(pTree,n->parent) == 0",
                          "3rdparty/cstl/src/c_rb.c", 0x1f1,
                          "debug_verify_property_4");
        }
    }
    if ((undefined4 *)(param_1 + 4) != param_2) {
        debug_verify_property_4(param_1, *param_2);
        debug_verify_property_4(param_1, param_2[1]);
    }
    return;
}

void debug_verify_property_5(undefined4 param_1, undefined4 param_2)

{
    undefined4 local_c;

    local_c = 0xffffffff;
    debug_verify_property_5_helper(param_1, param_2, 0, &local_c);
    return;
}

void debug_verify_property_5_helper(int param_1, undefined4 *param_2,
                                    int param_3, int *param_4)

{
    int iVar1;
    int local_14;

    iVar1 = debug_node_color(param_1, param_2);
    local_14 = param_3;
    if (iVar1 == 0) {
        local_14 = param_3 + 1;
    }
    if ((undefined4 *)(param_1 + 4) == param_2) {
        if (*param_4 == -1) {
            *param_4 = local_14;
        } else if (*param_4 != local_14) {
            /* WARNING: Subroutine does not return */
            __assert_fail("black_count == *path_black_count",
                          "3rdparty/cstl/src/c_rb.c", 0x205,
                          "debug_verify_property_5_helper");
        }
    } else {
        debug_verify_property_5_helper(param_1, *param_2, local_14, param_4);
        debug_verify_property_5_helper(param_1, param_2[1], local_14, param_4);
    }
    return;
}

void clib_copy(void *param_1, void *param_2, size_t param_3)

{
    memcpy(param_1, param_2, param_3);
    return;
}

void clib_get(void *param_1, void *param_2, size_t param_3)

{
    memcpy(param_1, param_2, param_3);
    return;
}

int *new_clib_object(void *param_1, size_t param_2)

{
    int *__ptr;
    void *pvVar1;

    __ptr = (int *)malloc(8);
    if (__ptr == (int *)0x0) {
        __ptr = (int *)0x0;
    } else {
        __ptr[1] = param_2;
        pvVar1 = malloc(param_2);
        *__ptr = (int)pvVar1;
        if (*__ptr == 0) {
            free(__ptr);
            __ptr = (int *)0x0;
        } else {
            memcpy((void *)*__ptr, param_1, param_2);
        }
    }
    return __ptr;
}

undefined4 get_raw_clib_object(undefined4 *param_1, int *param_2)

{
    void *pvVar1;
    undefined4 uVar2;

    pvVar1 = malloc(param_1[1]);
    *param_2 = (int)pvVar1;
    if (*param_2 == 0) {
        uVar2 = 3;
    } else {
        memcpy((void *)*param_2, (void *)*param_1, param_1[1]);
        uVar2 = 0;
    }
    return uVar2;
}

void replace_raw_clib_object(undefined4 *param_1, void *param_2, size_t param_3)

{
    void *pvVar1;

    free((void *)*param_1);
    pvVar1 = malloc(param_3);
    *param_1 = pvVar1;
    memcpy((void *)*param_1, param_2, param_3);
    return;
}

void delete_clib_object(undefined4 *param_1)

{
    if (param_1 != (undefined4 *)0x0) {
        free((void *)*param_1);
        free(param_1);
    }
    return;
}

char *clib_strdup(char *param_1)

{
    char *pcVar1;

    pcVar1 = strdup(param_1);
    return pcVar1;
}

undefined4 dump_to_strbuffer(undefined4 param_1, undefined4 param_2,
                             undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = strbuffer_append_bytes(param_3, param_1, param_2);
    return uVar1;
}

undefined4 dump_to_file(void *param_1, size_t param_2, FILE *param_3)

{
    size_t sVar1;
    undefined4 uVar2;

    sVar1 = fwrite(param_1, param_2, 1, param_3);
    if (sVar1 == 1) {
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 dump_indent(uint param_1, int param_2, int param_3, code *param_4,
                       undefined4 param_5)

{
    int iVar1;
    undefined4 uVar2;
    int local_c;

    if ((param_1 & 0x1f) == 0) {
        if ((param_3 != 0) && ((param_1 & 0x20) == 0)) {
            uVar2 = (*param_4)(&DAT_0002ce04, 1, param_5);
            return uVar2;
        }
    } else {
        iVar1 = (*param_4)(&DAT_0002ce00, 1, param_5);
        if (iVar1 != 0) {
            return 0xffffffff;
        }
        for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
            iVar1 = (*param_4)("                                ",
                               param_1 & 0x1f, param_5);
            if (iVar1 != 0) {
                return 0xffffffff;
            }
        }
    }
    return 0;
}

undefined4 dump_string(char *param_1, code *param_2, undefined4 param_3,
                       uint param_4)

{
    char *pcVar1;
    int iVar2;
    undefined4 uVar3;
    char *local_3c;
    char acStack_34[16];
    uint local_24;
    uint local_20;
    uint local_1c;
    undefined4 local_18;
    char *local_14;
    char *local_10;
    char *local_c;

    iVar2 = (*param_2)(&DAT_0002ce08, 1, param_3);
    local_3c = param_1;
    pcVar1 = param_1;
    if (iVar2 != 0) {
        return 0xffffffff;
    }
LAB_00023114:
    local_c = pcVar1;
    local_10 = local_c;
    if (*local_c != '\0')
        goto LAB_000230c4;
    goto LAB_00023124;
LAB_000230c4:
    local_10 = (char *)utf8_iterate(local_c, &local_24);
    if (local_10 == (char *)0x0) {
        return 0xffffffff;
    }
    if (((((local_24 != 0x5c) && (local_24 != 0x22)) &&
          (0x1f < (int)local_24)) &&
         (((param_4 & 0x400) == 0 || (local_24 != 0x2f)))) &&
        ((pcVar1 = local_10,
          (param_4 & 0x40) == 0 || (pcVar1 = local_10, (int)local_24 < 0x80))))
        goto LAB_00023114;
LAB_00023124:
    if ((local_c != local_3c) &&
        (iVar2 = (*param_2)(local_3c, (int)local_c - (int)local_3c, param_3),
         iVar2 != 0)) {
        return 0xffffffff;
    }
    if (local_10 == local_c) {
        uVar3 = (*param_2)(&DAT_0002ce08, 1, param_3);
        return uVar3;
    }
    local_18 = 2;
    if (local_24 == 0xc) {
        local_14 = "\\f";
        goto LAB_00023256;
    }
    if ((int)local_24 < 0xd) {
        if (local_24 == 9) {
            local_14 = "\\t";
            goto LAB_00023256;
        }
        if (local_24 == 10) {
            local_14 = "\\n";
            goto LAB_00023256;
        }
        if (local_24 == 8) {
            local_14 = "\\b";
            goto LAB_00023256;
        }
    } else {
        if (local_24 == 0x22) {
            local_14 = "\\\"";
            goto LAB_00023256;
        }
        if ((int)local_24 < 0x23) {
            if (local_24 == 0xd) {
                local_14 = "\\r";
                goto LAB_00023256;
            }
        } else {
            if (local_24 == 0x2f) {
                local_14 = "\\/";
                goto LAB_00023256;
            }
            if (local_24 == 0x5c) {
                local_14 = "\\\\";
                goto LAB_00023256;
            }
        }
    }
    if ((int)local_24 < 0x10000) {
        sprintf(acStack_34, "\\u%04x", local_24);
        local_18 = 6;
    } else {
        local_24 = local_24 - 0x10000;
        local_1c = (int)(local_24 & 0xffc00) >> 10 | 0xd800;
        local_20 = local_24 & 0x3ff | 0xdc00;
        sprintf(acStack_34, "\\u%04x\\u%04x", local_1c, local_20);
        local_18 = 0xc;
    }
    local_14 = acStack_34;
LAB_00023256:
    iVar2 = (*param_2)(local_14, local_18, param_3);
    if (iVar2 != 0) {
        return 0xffffffff;
    }
    local_c = local_10;
    local_3c = local_10;
    pcVar1 = local_c;
    goto LAB_00023114;
}

int object_key_compare_keys(int param_1, int param_2)

{
    int iVar1;

    iVar1 = strcmp(*(char **)(param_1 + 4), *(char **)(param_2 + 4));
    return iVar1;
}

uint object_key_compare_serials(uint *param_1, uint *param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;

    uVar2 = *param_1;
    uVar3 = *param_2;
    if (uVar2 < uVar3) {
        uVar2 = 0xffffffff;
    } else {
        bVar4 = uVar2 == uVar3;
        if (bVar4) {
            uVar3 = 0;
        }
        bVar1 = (byte)uVar3;
        if (!bVar4) {
            bVar1 = 1;
        }
        uVar2 = (uint)bVar1;
    }
    return uVar2;
}

undefined4 do_dump(undefined4 *param_1, uint param_2, int param_3,
                   code *param_4, undefined4 param_5)

{
    void *pvVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined4 extraout_s1;
    undefined8 uVar5;
    char acStack_c0[100];
    int local_5c;
    undefined4 local_58;
    void *local_54;
    size_t local_50;
    int local_4c;
    undefined4 *local_48;
    int local_44;
    undefined4 *local_40;
    int local_3c;
    undefined8 local_38;
    int local_2c;
    __compar_fn_t local_28;
    size_t local_24;
    undefined4 local_20;
    undefined *local_1c;
    int local_18;
    int local_14;

    if (param_1 == (undefined4 *)0x0) {
        uVar3 = 0xffffffff;
    } else {
        switch (*param_1) {
        case 0:
            if ((param_2 & 0x20) == 0) {
                local_1c = &DAT_0002ce74;
                local_20 = 2;
            } else {
                local_1c = &DAT_0002ce70;
                local_20 = 1;
            }
            local_48 = param_1;
            if (param_1[8] == 0) {
                param_1[8] = 1;
                local_18 = json_object_iter(param_1);
                iVar2 = (*param_4)(&DAT_0002ce78, 1, param_5);
                if (iVar2 == 0) {
                    if (local_18 == 0) {
                        local_48[8] = 0;
                        uVar3 = (*param_4)(&DAT_0002ce7c, 1, param_5);
                        return uVar3;
                    }
                    iVar2 =
                        dump_indent(param_2, param_3 + 1, 0, param_4, param_5);
                    if (iVar2 == 0) {
                        if (((param_2 & 0x80) == 0) &&
                            ((param_2 & 0x100) == 0)) {
                            do {
                                if (local_18 == 0)
                                    goto LAB_00023924;
                                local_4c =
                                    json_object_iter_next(param_1, local_18);
                                uVar3 = json_object_iter_key(local_18);
                                dump_string(uVar3, param_4, param_5, param_2);
                                iVar2 = (*param_4)(local_1c, local_20, param_5);
                                if (iVar2 != 0)
                                    break;
                                uVar3 = json_object_iter_value(local_18);
                                iVar2 = do_dump(uVar3, param_2, param_3 + 1,
                                                param_4, param_5);
                                if (iVar2 != 0)
                                    break;
                                if (local_4c == 0) {
                                    iVar2 = dump_indent(param_2, param_3, 0,
                                                        param_4, param_5);
                                } else {
                                    iVar2 =
                                        (*param_4)(&DAT_0002ce6c, 1, param_5);
                                    if (iVar2 != 0)
                                        break;
                                    iVar2 = dump_indent(param_2, param_3 + 1, 1,
                                                        param_4, param_5);
                                }
                                local_18 = local_4c;
                            } while (iVar2 == 0);
                        } else {
                            local_50 = json_object_size(param_1);
                            local_54 = (void *)jsonp_malloc(local_50 << 3);
                            if (local_54 != (void *)0x0) {
                                local_24 = 0;
                                while (local_18 != 0) {
                                    puVar4 = (undefined4 *)((int)local_54 +
                                                            local_24 * 8);
                                    uVar3 = hashtable_iter_serial(local_18);
                                    pvVar1 = local_54;
                                    *puVar4 = uVar3;
                                    iVar2 = local_24 * 8;
                                    uVar3 = json_object_iter_key(local_18);
                                    *(undefined4 *)((int)pvVar1 + iVar2 + 4) =
                                        uVar3;
                                    local_18 = json_object_iter_next(param_1,
                                                                     local_18);
                                    local_24 = local_24 + 1;
                                }
                                if (local_24 != local_50) {
                                    /* WARNING: Subroutine does not return */
                                    __assert_fail(
                                        "i == size",
                                        "3rdparty/jansson-2.6/src/dump.c",
                                        0x141, "do_dump");
                                }
                                if ((param_2 & 0x80) == 0) {
                                    local_28 = (__compar_fn_t)0x232c1;
                                } else {
                                    local_28 = (code *)0x23299;
                                }
                                qsort(local_54, local_50, 8, local_28);
                                for (local_24 = 0; local_24 < local_50;
                                     local_24 = local_24 + 1) {
                                    local_58 =
                                        *(undefined4 *)((int)local_54 +
                                                        local_24 * 8 + 4);
                                    local_5c =
                                        json_object_get(param_1, local_58);
                                    if (local_5c == 0) {
                                        /* WARNING: Subroutine does not return
                                         */
                                        __assert_fail(
                                            "value",
                                            "3rdparty/jansson-2.6/src/dump.c",
                                            0x151, "do_dump");
                                    }
                                    dump_string(local_58, param_4, param_5,
                                                param_2);
                                    iVar2 =
                                        (*param_4)(local_1c, local_20, param_5);
                                    if ((iVar2 != 0) ||
                                        (iVar2 = do_dump(local_5c, param_2,
                                                         param_3 + 1, param_4,
                                                         param_5),
                                         iVar2 != 0)) {
                                        jsonp_free(local_54);
                                        goto LAB_00023954;
                                    }
                                    if (local_24 < local_50 - 1) {
                                        iVar2 = (*param_4)(&DAT_0002ce6c, 1,
                                                           param_5);
                                        if ((iVar2 != 0) ||
                                            (iVar2 = dump_indent(
                                                 param_2, param_3 + 1, 1,
                                                 param_4, param_5),
                                             iVar2 != 0)) {
                                            jsonp_free(local_54);
                                            goto LAB_00023954;
                                        }
                                    } else {
                                        iVar2 = dump_indent(param_2, param_3, 0,
                                                            param_4, param_5);
                                        if (iVar2 != 0) {
                                            jsonp_free(local_54);
                                            goto LAB_00023954;
                                        }
                                    }
                                }
                                jsonp_free(local_54);
                            LAB_00023924:
                                local_48[8] = 0;
                                uVar3 = (*param_4)(&DAT_0002ce7c, 1, param_5);
                                return uVar3;
                            }
                        }
                    }
                }
            }
        LAB_00023954:
            local_48[8] = 0;
            uVar3 = 0xffffffff;
            break;
        case 1:
            local_40 = param_1;
            if (param_1[5] == 0) {
                param_1[5] = 1;
                local_44 = json_array_size(param_1);
                iVar2 = (*param_4)(&DAT_0002ce64, 1, param_5);
                if (iVar2 == 0) {
                    if (local_44 == 0) {
                        local_40[5] = 0;
                        uVar3 = (*param_4)(&DAT_0002ce68, 1, param_5);
                        return uVar3;
                    }
                    iVar2 =
                        dump_indent(param_2, param_3 + 1, 0, param_4, param_5);
                    if (iVar2 == 0) {
                        local_14 = 0;
                        while (true) {
                            if (local_44 <= local_14) {
                                local_40[5] = 0;
                                uVar3 = (*param_4)(&DAT_0002ce68, 1, param_5);
                                return uVar3;
                            }
                            uVar3 = json_array_get(param_1, local_14);
                            iVar2 = do_dump(uVar3, param_2, param_3 + 1,
                                            param_4, param_5);
                            if (iVar2 != 0)
                                break;
                            if (local_14 < local_44 + -1) {
                                iVar2 = (*param_4)(&DAT_0002ce6c, 1, param_5);
                                if (iVar2 != 0)
                                    break;
                                iVar2 = dump_indent(param_2, param_3 + 1, 1,
                                                    param_4, param_5);
                            } else {
                                iVar2 = dump_indent(param_2, param_3, 0,
                                                    param_4, param_5);
                            }
                            if (iVar2 != 0)
                                break;
                            local_14 = local_14 + 1;
                        }
                    }
                }
            }
            local_40[5] = 0;
            uVar3 = 0xffffffff;
            break;
        case 2:
            uVar3 = json_string_value(param_1);
            uVar3 = dump_string(uVar3, param_4, param_5, param_2);
            break;
        case 3:
            uVar5 = json_integer_value(param_1);
            uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
            local_2c =
                snprintf(acStack_c0, 100, "%lld", uVar3, (int)uVar5, uVar3);
            if ((local_2c < 0) || (99 < local_2c)) {
                uVar3 = 0xffffffff;
            } else {
                uVar3 = (*param_4)(acStack_c0, local_2c, param_5);
            }
            break;
        case 4:
            uVar3 = json_real_value(param_1);
            local_38 = CONCAT44(extraout_s1, uVar3);
            local_3c = jsonp_dtostr(uVar3, acStack_c0, 100);
            if (local_3c < 0) {
                uVar3 = 0xffffffff;
            } else {
                uVar3 = (*param_4)(acStack_c0, local_3c, param_5);
            }
            break;
        case 5:
            uVar3 = (*param_4)(&DAT_0002ce4c, 4, param_5);
            break;
        case 6:
            uVar3 = (*param_4)("false", 5, param_5);
            break;
        case 7:
            uVar3 = (*param_4)(&DAT_0002ce44, 4, param_5);
            break;
        default:
            uVar3 = 0xffffffff;
        }
    }
    return uVar3;
}

undefined4 json_dumps(undefined4 param_1, undefined4 param_2)

{
    int iVar1;
    undefined4 uVar2;
    undefined1 auStack_18[12];
    undefined4 local_c;

    iVar1 = strbuffer_init(auStack_18);
    if (iVar1 == 0) {
        iVar1 = json_dump_callback(param_1, 0x22f99, auStack_18, param_2);
        if (iVar1 == 0) {
            uVar2 = strbuffer_value(auStack_18);
            local_c = jsonp_strdup(uVar2);
        } else {
            local_c = 0;
        }
        strbuffer_close(auStack_18);
    } else {
        local_c = 0;
    }
    return local_c;
}

undefined4 json_dumpf(undefined4 param_1, undefined4 param_2,
                      undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = json_dump_callback(param_1, 0x22fbd, param_2, param_3);
    return uVar1;
}

undefined4 json_dump_file(undefined4 param_1, char *param_2, undefined4 param_3)

{
    FILE *__stream;
    undefined4 uVar1;

    __stream = fopen(param_2, "w");
    if (__stream == (FILE *)0x0) {
        uVar1 = 0xffffffff;
    } else {
        uVar1 = json_dumpf(param_1, __stream, param_3);
        fclose(__stream);
    }
    return uVar1;
}

undefined4 json_dump_callback(int *param_1, undefined4 param_2,
                              undefined4 param_3, uint param_4)

{
    undefined4 uVar1;

    if ((((param_4 & 0x200) == 0) &&
         ((param_1 == (int *)0x0 || (*param_1 != 1)))) &&
        ((param_1 == (int *)0x0 || (*param_1 != 0)))) {
        uVar1 = 0xffffffff;
    } else {
        uVar1 = do_dump(param_1, param_4, 0, param_2, param_3);
    }
    return uVar1;
}

void json_decref(int param_1)

{
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if (*(int *)(param_1 + 4) == 0) {
            json_delete(param_1);
        }
    }
    return;
}

int hash_str(byte *param_1)

{
    int local_10;
    byte *local_c;

    local_10 = 0x1505;
    for (local_c = param_1; *local_c != 0; local_c = local_c + 1) {
        local_10 = local_10 * 0x21 + (uint)*local_c;
    }
    return local_10;
}

void list_init(int param_1)

{
    *(int *)(param_1 + 4) = param_1;
    *(int *)param_1 = param_1;
    return;
}

void list_insert(int *param_1, int *param_2)

{
    param_2[1] = (int)param_1;
    *param_2 = *param_1;
    *(int **)(*param_1 + 4) = param_2;
    *param_1 = (int)param_2;
    return;
}

void list_remove(int *param_1)

{
    *(int *)(*param_1 + 4) = param_1[1];
    *(int *)param_1[1] = *param_1;
    return;
}

undefined4 bucket_is_empty(int param_1, int *param_2)

{
    undefined4 uVar1;

    if ((*param_2 == param_1 + 0xc) && (*param_2 == param_2[1])) {
        uVar1 = 1;
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

void insert_to_bucket(int param_1, undefined4 *param_2, undefined4 param_3)

{
    int iVar1;

    iVar1 = bucket_is_empty(param_1, param_2);
    if (iVar1 == 0) {
        list_insert(*param_2, param_3);
        *param_2 = param_3;
    } else {
        list_insert(param_1 + 0xc, param_3);
        param_2[1] = param_3;
        *param_2 = param_2[1];
    }
    return;
}

undefined4 num_buckets(int param_1)

{
    return *(undefined4 *)(&primes + *(int *)(param_1 + 8) * 4);
}

int *hashtable_find_pair(undefined4 param_1, int *param_2, char *param_3,
                         int param_4)

{
    int iVar1;
    int local_c;

    iVar1 = bucket_is_empty(param_1, param_2);
    if (iVar1 == 0) {
        local_c = *param_2;
        while (true) {
            if ((*(int *)(local_c + -4) == param_4) &&
                (iVar1 = strcmp((char *)(local_c + 0x10), param_3),
                 iVar1 == 0)) {
                return (int *)(local_c + -4);
            }
            if (param_2[1] == local_c)
                break;
            local_c = *(int *)(local_c + 4);
        }
    }
    return (int *)0x0;
}

undefined4 hashtable_do_del(int *param_1, undefined4 param_2,
                            undefined4 param_3)

{
    undefined4 uVar1;
    int iVar2;
    int extraout_r1;
    int *piVar3;

    uVar1 = num_buckets(param_1);
    __aeabi_uidivmod(param_3, uVar1);
    piVar3 = (int *)(param_1[1] + extraout_r1 * 8);
    iVar2 = hashtable_find_pair(param_1, piVar3, param_2, param_3);
    if (iVar2 == 0) {
        uVar1 = 0xffffffff;
    } else {
        if ((iVar2 + 4 == *piVar3) && (iVar2 + 4 == piVar3[1])) {
            piVar3[1] = (int)(param_1 + 3);
            *piVar3 = piVar3[1];
        } else if (iVar2 + 4 == *piVar3) {
            *piVar3 = *(int *)(iVar2 + 8);
        } else if (iVar2 + 4 == piVar3[1]) {
            piVar3[1] = *(int *)(iVar2 + 4);
        }
        list_remove(iVar2 + 4);
        json_decref(*(undefined4 *)(iVar2 + 0xc));
        jsonp_free(iVar2);
        *param_1 = *param_1 + -1;
        uVar1 = 0;
    }
    return uVar1;
}

void hashtable_do_clear(int param_1)

{
    int iVar1;
    undefined4 local_c;

    local_c = *(int *)(param_1 + 0x10);
    while (param_1 + 0xc != local_c) {
        iVar1 = *(int *)(local_c + 4);
        json_decref(*(undefined4 *)(local_c + 8));
        jsonp_free(local_c + -4);
        local_c = iVar1;
    }
    return;
}

undefined4 hashtable_do_rehash(int param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    int extraout_r1;
    int iVar4;
    int iVar5;
    undefined4 local_10;
    undefined4 local_c;

    jsonp_free(*(undefined4 *)(param_1 + 4));
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    iVar1 = num_buckets(param_1);
    uVar2 = jsonp_malloc(iVar1 << 3);
    *(undefined4 *)(param_1 + 4) = uVar2;
    if (*(int *)(param_1 + 4) == 0) {
        uVar2 = 0xffffffff;
    } else {
        for (local_10 = 0; uVar3 = num_buckets(param_1), local_10 < uVar3;
             local_10 = local_10 + 1) {
            iVar5 = *(int *)(param_1 + 4);
            iVar4 = *(int *)(param_1 + 4) + local_10 * 8;
            *(int *)(iVar4 + 4) = param_1 + 0xc;
            *(undefined4 *)(iVar5 + local_10 * 8) = *(undefined4 *)(iVar4 + 4);
        }
        local_c = *(int *)(param_1 + 0x10);
        list_init(param_1 + 0xc);
        while (param_1 + 0xc != local_c) {
            iVar5 = *(int *)(local_c + 4);
            __aeabi_uidivmod(*(undefined4 *)(local_c + -4), iVar1);
            insert_to_bucket(param_1, *(int *)(param_1 + 4) + extraout_r1 * 8,
                             local_c);
            local_c = iVar5;
        }
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 hashtable_init(undefined4 *param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    int iVar4;
    uint local_c;

    *param_1 = 0;
    param_1[2] = 0;
    iVar1 = num_buckets(param_1);
    uVar2 = jsonp_malloc(iVar1 << 3);
    param_1[1] = uVar2;
    if (param_1[1] == 0) {
        uVar2 = 0xffffffff;
    } else {
        list_init(param_1 + 3);
        for (local_c = 0; uVar3 = num_buckets(param_1), local_c < uVar3;
             local_c = local_c + 1) {
            iVar1 = param_1[1];
            iVar4 = param_1[1] + local_c * 8;
            *(undefined4 **)(iVar4 + 4) = param_1 + 3;
            *(undefined4 *)(iVar1 + local_c * 8) = *(undefined4 *)(iVar4 + 4);
        }
        uVar2 = 0;
    }
    return uVar2;
}

void hashtable_close(int param_1)

{
    hashtable_do_clear(param_1);
    jsonp_free(*(undefined4 *)(param_1 + 4));
    return;
}

undefined4 hashtable_set(uint *param_1, char *param_2, undefined4 param_3,
                         undefined4 param_4)

{
    uint uVar1;
    int iVar2;
    undefined4 uVar3;
    size_t sVar4;
    undefined4 *puVar5;
    int extraout_r1;
    undefined4 uVar6;
    int iVar7;
    uint uVar8;

    uVar8 = *param_1;
    uVar1 = num_buckets(param_1);
    if ((uVar8 < uVar1) || (iVar2 = hashtable_do_rehash(param_1), iVar2 == 0)) {
        uVar6 = hash_str(param_2);
        uVar3 = num_buckets(param_1);
        __aeabi_uidivmod(uVar6, uVar3);
        iVar7 = param_1[1] + extraout_r1 * 8;
        iVar2 = hashtable_find_pair(param_1, iVar7, param_2, uVar6);
        if (iVar2 == 0) {
            sVar4 = strlen(param_2);
            puVar5 = (undefined4 *)jsonp_malloc(sVar4 + 0x15);
            if (puVar5 == (undefined4 *)0x0) {
                return 0xffffffff;
            }
            *puVar5 = uVar6;
            puVar5[4] = param_3;
            strcpy((char *)(puVar5 + 5), param_2);
            puVar5[3] = param_4;
            list_init(puVar5 + 1);
            insert_to_bucket(param_1, iVar7, puVar5 + 1);
            *param_1 = *param_1 + 1;
        } else {
            json_decref(*(undefined4 *)(iVar2 + 0xc));
            *(undefined4 *)(iVar2 + 0xc) = param_4;
        }
        uVar6 = 0;
    } else {
        uVar6 = 0xffffffff;
    }
    return uVar6;
}

undefined4 hashtable_get(int param_1, undefined4 param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int extraout_r1;
    int iVar3;

    uVar1 = hash_str(param_2);
    iVar3 = *(int *)(param_1 + 4);
    uVar2 = num_buckets(param_1);
    __aeabi_uidivmod(uVar1, uVar2);
    iVar3 =
        hashtable_find_pair(param_1, iVar3 + extraout_r1 * 8, param_2, uVar1);
    if (iVar3 == 0) {
        uVar1 = 0;
    } else {
        uVar1 = *(undefined4 *)(iVar3 + 0xc);
    }
    return uVar1;
}

undefined4 hashtable_del(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = hash_str(param_2);
    uVar1 = hashtable_do_del(param_1, param_2, uVar1);
    return uVar1;
}

void hashtable_clear(undefined4 *param_1)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    uint local_c;

    hashtable_do_clear(param_1);
    for (local_c = 0; uVar1 = num_buckets(param_1), local_c < uVar1;
         local_c = local_c + 1) {
        iVar2 = param_1[1];
        iVar3 = param_1[1] + local_c * 8;
        *(undefined4 **)(iVar3 + 4) = param_1 + 3;
        *(undefined4 *)(iVar2 + local_c * 8) = *(undefined4 *)(iVar3 + 4);
    }
    list_init(param_1 + 3);
    *param_1 = 0;
    return;
}

undefined4 hashtable_iter(int param_1)

{
    undefined4 uVar1;

    uVar1 = hashtable_iter_next(param_1, param_1 + 0xc);
    return uVar1;
}

int hashtable_iter_at(int param_1, undefined4 param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int extraout_r1;
    int iVar3;

    uVar1 = hash_str(param_2);
    iVar3 = *(int *)(param_1 + 4);
    uVar2 = num_buckets(param_1);
    __aeabi_uidivmod(uVar1, uVar2);
    iVar3 =
        hashtable_find_pair(param_1, iVar3 + extraout_r1 * 8, param_2, uVar1);
    if (iVar3 == 0) {
        iVar3 = 0;
    } else {
        iVar3 = iVar3 + 4;
    }
    return iVar3;
}

undefined4 hashtable_iter_next(int param_1, int param_2)

{
    undefined4 uVar1;

    if (*(int *)(param_2 + 4) == param_1 + 0xc) {
        uVar1 = 0;
    } else {
        uVar1 = *(undefined4 *)(param_2 + 4);
    }
    return uVar1;
}

int hashtable_iter_key(int param_1)

{
    return param_1 + 0x10;
}

undefined4 hashtable_iter_serial(int param_1)

{
    return *(undefined4 *)(param_1 + 0xc);
}

undefined4 hashtable_iter_value(int param_1)

{
    return *(undefined4 *)(param_1 + 8);
}

void hashtable_iter_set(int param_1, undefined4 param_2)

{
    json_decref(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = param_2;
    return;
}

int json_incref(int param_1)

{
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    return param_1;
}

void json_decref(int param_1)

{
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if (*(int *)(param_1 + 4) == 0) {
            json_delete(param_1);
        }
    }
    return;
}

undefined4 json_object_set_nocheck(undefined4 param_1, undefined4 param_2,
                                   undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = json_incref(param_3);
    uVar1 = json_object_set_new_nocheck(param_1, param_2, uVar1);
    return uVar1;
}

undefined4 json_array_append(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = json_incref(param_2);
    uVar1 = json_array_append_new(param_1, uVar1);
    return uVar1;
}

void error_set(int param_1, int param_2, char *param_3, undefined4 param_4)

{
    char acStack_168[159];
    undefined1 local_c9;
    char acStack_c8[159];
    undefined1 local_29;
    undefined4 *local_28;
    char *local_24;
    char *local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 uStack_4;

    local_14 = 0xffffffff;
    local_18 = 0xffffffff;
    local_1c = 0;
    local_20 = acStack_c8;
    if (param_1 != 0) {
        local_28 = &uStack_4;
        uStack_4 = param_4;
        vsnprintf(acStack_c8, 0xa0, param_3, local_28);
        local_29 = 0;
        if (param_2 != 0) {
            local_24 = (char *)strbuffer_value(param_2 + 0x28);
            local_14 = *(undefined4 *)(param_2 + 0x18);
            local_18 = *(undefined4 *)(param_2 + 0x1c);
            local_1c = *(undefined4 *)(param_2 + 0x24);
            if ((local_24 == (char *)0x0) || (*local_24 == '\0')) {
                if (*(int *)(param_2 + 0x14) == -2) {
                    local_20 = acStack_c8;
                } else {
                    snprintf(acStack_168, 0xa0, "%s near end of file",
                             acStack_c8);
                    local_c9 = 0;
                    local_20 = acStack_168;
                }
            } else if (*(uint *)(param_2 + 0x2c) < 0x15) {
                snprintf(acStack_168, 0xa0, "%s near \'%s\'", acStack_c8,
                         local_24);
                local_c9 = 0;
                local_20 = acStack_168;
            }
        }
        jsonp_error_set(param_1, local_14, local_18, local_1c, &DAT_0002cf58,
                        local_20);
    }
    return;
}

void stream_init(undefined4 *param_1, undefined4 param_2, undefined4 param_3)

{
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 1;
    param_1[7] = 0;
    param_1[9] = 0;
    return;
}

uint stream_get(undefined4 *param_1, undefined4 param_2)

{
    undefined1 uVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int local_c;

    if (param_1[5] != 0) {
        return param_1[5];
    }
    if (*(char *)((int)param_1 + param_1[4] + 8) == '\0') {
        uVar2 = (*(code *)*param_1)(param_1[1]);
        if (uVar2 == 0xffffffff) {
            param_1[5] = 0xffffffff;
            return 0xffffffff;
        }
        *(char *)(param_1 + 2) = (char)uVar2;
        param_1[4] = 0;
        if ((0x7f < (int)uVar2) && ((int)uVar2 < 0x100)) {
            iVar3 = utf8_check_first(uVar2 & 0xff);
            if (iVar3 != 0) {
                if (iVar3 < 2) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("count >= 2",
                                  "3rdparty/jansson-2.6/src/load.c", 0xaf,
                                  "stream_get");
                }
                for (local_c = 1; local_c < iVar3; local_c = local_c + 1) {
                    uVar1 = (*(code *)*param_1)(param_1[1]);
                    *(undefined1 *)((int)param_1 + local_c + 8) = uVar1;
                }
                iVar4 = utf8_check_full(param_1 + 2, iVar3, 0);
                if (iVar4 != 0) {
                    *(undefined1 *)((int)param_1 + iVar3 + 8) = 0;
                    goto LAB_00024588;
                }
            }
            param_1[5] = 0xfffffffe;
            error_set(param_2, param_1, "unable to decode byte 0x%x", uVar2);
            return 0xfffffffe;
        }
        *(undefined1 *)((int)param_1 + 9) = 0;
    }
LAB_00024588:
    uVar2 = (uint) * (byte *)((int)param_1 + param_1[4] + 8);
    param_1[4] = param_1[4] + 1;
    param_1[9] = param_1[9] + 1;
    if (uVar2 == 10) {
        param_1[6] = param_1[6] + 1;
        param_1[8] = param_1[7];
        param_1[7] = 0;
    } else {
        iVar3 = utf8_check_first(uVar2);
        if (iVar3 != 0) {
            param_1[7] = param_1[7] + 1;
        }
    }
    return uVar2;
}

void stream_unget(int param_1, uint param_2)

{
    int iVar1;

    if ((param_2 != 0xffffffff) && (param_2 != 0xfffffffe)) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        if (param_2 == 10) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
        } else {
            iVar1 = utf8_check_first(param_2 & 0xff);
            if (iVar1 != 0) {
                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
            }
        }
        if (*(int *)(param_1 + 0x10) == 0) {
            /* WARNING: Subroutine does not return */
            __assert_fail("stream->buffer_pos > 0",
                          "3rdparty/jansson-2.6/src/load.c", 0xe0,
                          "stream_unget");
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
        if (*(byte *)(param_1 + *(int *)(param_1 + 0x10) + 8) != param_2) {
            /* WARNING: Subroutine does not return */
            __assert_fail("stream->buffer[stream->buffer_pos] == c",
                          "3rdparty/jansson-2.6/src/load.c", 0xe2,
                          "stream_unget");
        }
    }
    return;
}

undefined4 lex_get(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = stream_get(param_1, param_2);
    return uVar1;
}

void lex_save(int param_1, undefined1 param_2)

{
    strbuffer_append_byte(param_1 + 0x28, param_2);
    return;
}

int lex_get_save(undefined4 param_1, undefined4 param_2)

{
    int iVar1;

    iVar1 = stream_get(param_1, param_2);
    if ((iVar1 != -1) && (iVar1 != -2)) {
        lex_save(param_1, iVar1);
    }
    return iVar1;
}

void lex_unget(undefined4 param_1, undefined4 param_2)

{
    stream_unget(param_1, param_2);
    return;
}

void lex_unget_unsave(int param_1, uint param_2)

{
    byte bVar1;

    if ((param_2 != 0xffffffff) && (param_2 != 0xfffffffe)) {
        stream_unget(param_1, param_2);
        bVar1 = strbuffer_pop(param_1 + 0x28);
        if (bVar1 != param_2) {
            /* WARNING: Subroutine does not return */
            __assert_fail("c == d", "3rdparty/jansson-2.6/src/load.c", 0x10c,
                          "lex_unget_unsave");
        }
    }
    return;
}

void lex_save_cached(int param_1)

{
    while (*(char *)(param_1 + *(int *)(param_1 + 0x10) + 8) != '\0') {
        lex_save(param_1,
                 *(undefined1 *)(param_1 + *(int *)(param_1 + 0x10) + 8));
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    return;
}

int decode_unicode_escape(char *param_1)

{
    byte bVar1;
    int local_10;
    int local_c;

    local_10 = 0;
    if (*param_1 != 'u') {
        /* WARNING: Subroutine does not return */
        __assert_fail("str[0] == \'u\'", "3rdparty/jansson-2.6/src/load.c",
                      0x120, "decode_unicode_escape");
    }
    local_c = 1;
    do {
        if (4 < local_c) {
            return local_10;
        }
        bVar1 = param_1[local_c];
        local_10 = local_10 * 0x10;
        if ((bVar1 < 0x30) || (0x39 < bVar1)) {
            if ((bVar1 < 0x61) || (0x7a < bVar1)) {
                if ((bVar1 < 0x41) || (0x5a < bVar1)) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 300,
                                  "decode_unicode_escape");
                }
                local_10 = local_10 + (bVar1 - 0x37);
            } else {
                local_10 = local_10 + (bVar1 - 0x57);
            }
        } else {
            local_10 = local_10 + (bVar1 - 0x30);
        }
        local_c = local_c + 1;
    } while (true);
}

void lex_scan_string(int param_1, undefined4 param_2)

{
    byte bVar1;
    undefined4 uVar2;
    int iVar3;
    byte *pbVar4;
    size_t local_28;
    undefined1 auStack_24[4];
    int local_20;
    int local_1c;
    int local_18;
    byte *local_14;
    byte *local_10;
    int local_c;

    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    local_c = lex_get_save(param_1, param_2);
    while (local_c != 0x22) {
        if (local_c == -2)
            goto LAB_00024c8e;
        if (local_c == -1) {
            error_set(param_2, param_1, "premature end of input");
            goto LAB_00024c8e;
        }
        if ((-1 < local_c) && (local_c < 0x20)) {
            lex_unget_unsave(param_1, local_c);
            if (local_c == 10) {
                error_set(param_2, param_1, "unexpected newline", 10);
            } else {
                error_set(param_2, param_1, "control character 0x%x", local_c);
            }
            goto LAB_00024c8e;
        }
        if (local_c == 0x5c) {
            local_c = lex_get_save(param_1, param_2);
            if (local_c == 0x75) {
                local_c = lex_get_save(param_1, param_2);
                for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
                    if ((((local_c < 0x30) || (0x39 < local_c)) &&
                         ((local_c < 0x41 || (0x46 < local_c)))) &&
                        ((local_c < 0x61 || (0x66 < local_c)))) {
                        error_set(param_2, param_1, "invalid escape");
                        goto LAB_00024c8e;
                    }
                    local_c = lex_get_save(param_1, param_2);
                }
            } else {
                if (((((local_c != 0x22) && (local_c != 0x5c)) &&
                      (local_c != 0x2f)) &&
                     ((local_c != 0x62 && (local_c != 0x66)))) &&
                    ((local_c != 0x6e &&
                      ((local_c != 0x72 && (local_c != 0x74)))))) {
                    error_set(param_2, param_1, "invalid escape");
                    goto LAB_00024c8e;
                }
                local_c = lex_get_save(param_1, param_2);
            }
        } else {
            local_c = lex_get_save(param_1, param_2);
        }
    }
    uVar2 = jsonp_malloc(*(int *)(param_1 + 0x2c) + 1);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    if (*(int *)(param_1 + 0x38) == 0) {
    LAB_00024c8e:
        jsonp_free(*(undefined4 *)(param_1 + 0x38));
    } else {
        local_14 = *(byte **)(param_1 + 0x38);
        iVar3 = strbuffer_value(param_1 + 0x28);
        local_10 = (byte *)(iVar3 + 1);
        while (*local_10 != 0x22) {
            if (*local_10 == 0x5c) {
                pbVar4 = local_10 + 1;
                if (*pbVar4 == 0x75) {
                    local_10 = pbVar4;
                    local_1c = decode_unicode_escape(pbVar4);
                    pbVar4 = local_10 + 5;
                    if ((local_1c < 0xd800) || (0xdbff < local_1c)) {
                        if ((0xdbff < local_1c) && (local_1c < 0xe000)) {
                            local_10 = pbVar4;
                            error_set(param_2, param_1,
                                      "invalid Unicode \'\\u%04X\'", local_1c);
                            goto LAB_00024c8e;
                        }
                        local_10 = pbVar4;
                        if (local_1c == 0) {
                            error_set(param_2, param_1,
                                      "\\u0000 is not allowed");
                            goto LAB_00024c8e;
                        }
                    } else {
                        if ((*pbVar4 != 0x5c) || (local_10[6] != 0x75)) {
                            local_10 = pbVar4;
                            error_set(param_2, param_1,
                                      "invalid Unicode \'\\u%04X\'", local_1c);
                            goto LAB_00024c8e;
                        }
                        local_10 = local_10 + 6;
                        local_20 = decode_unicode_escape(local_10);
                        local_10 = local_10 + 5;
                        if ((local_20 < 0xdc00) || (0xdfff < local_20)) {
                            error_set(param_2, param_1,
                                      "invalid Unicode \'\\u%04X\\u%04X\'",
                                      local_1c, local_20);
                            goto LAB_00024c8e;
                        }
                        local_1c =
                            (local_1c + -0xd800) * 0x400 + local_20 + 0x2400;
                    }
                    iVar3 = utf8_encode(local_1c, auStack_24, &local_28);
                    if (iVar3 != 0) {
                        /* WARNING: Subroutine does not return */
                        __assert_fail("0", "3rdparty/jansson-2.6/src/load.c",
                                      0x1ae, "lex_scan_string");
                    }
                    memcpy(local_14, auStack_24, local_28);
                    local_14 = local_14 + local_28;
                } else {
                    bVar1 = *pbVar4;
                    if (bVar1 == 0x66) {
                        *local_14 = 0xc;
                    } else if (bVar1 < 0x67) {
                        if (bVar1 != 0x5c) {
                            if (0x5c < bVar1) {
                                if (bVar1 != 0x62)
                                    goto LAB_00024c2c;
                                *local_14 = 8;
                                goto LAB_00024c4c;
                            }
                            if ((bVar1 != 0x22) && (bVar1 != 0x2f)) {
                            LAB_00024c2c:
                                local_10 = pbVar4;
                                /* WARNING: Subroutine does not return */
                                __assert_fail("0",
                                              "3rdparty/jansson-2.6/src/load.c",
                                              0x1bc, "lex_scan_string");
                            }
                        }
                        *local_14 = *pbVar4;
                    } else if (bVar1 == 0x72) {
                        *local_14 = 0xd;
                    } else if (bVar1 == 0x74) {
                        *local_14 = 9;
                    } else {
                        if (bVar1 != 0x6e)
                            goto LAB_00024c2c;
                        *local_14 = 10;
                    }
                LAB_00024c4c:
                    local_14 = local_14 + 1;
                    local_10 = local_10 + 2;
                }
            } else {
                *local_14 = *local_10;
                local_14 = local_14 + 1;
                local_10 = local_10 + 1;
            }
        }
        *local_14 = 0;
        *(undefined4 *)(param_1 + 0x34) = 0x100;
    }
    return;
}

undefined4 lex_scan_number(int param_1, int param_2, undefined4 param_3)

{
    int *piVar1;
    int iVar2;
    int local_30;
    undefined4 local_28;
    undefined4 uStack_24;
    char *local_1c;
    undefined8 local_18;
    char *local_c;

    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    local_30 = param_2;
    if (param_2 == 0x2d) {
        local_30 = lex_get_save(param_1, param_3);
    }
    if (local_30 == 0x30) {
        local_30 = lex_get_save(param_1, param_3);
        if ((0x2f < local_30) && (local_30 < 0x3a)) {
            lex_unget_unsave(param_1, local_30);
            return 0xffffffff;
        }
    } else {
        if ((local_30 < 0x30) || (0x39 < local_30)) {
            lex_unget_unsave(param_1, local_30);
            return 0xffffffff;
        }
        local_30 = lex_get_save(param_1, param_3);
        while ((0x2f < local_30 && (local_30 < 0x3a))) {
            local_30 = lex_get_save(param_1, param_3);
        }
    }
    if (((local_30 == 0x2e) || (local_30 == 0x45)) || (local_30 == 0x65)) {
        if (local_30 == 0x2e) {
            iVar2 = lex_get(param_1, param_3);
            if ((iVar2 < 0x30) || (0x39 < iVar2)) {
                lex_unget(param_1, iVar2);
                return 0xffffffff;
            }
            lex_save(param_1, iVar2);
            local_30 = lex_get_save(param_1, param_3);
            while ((0x2f < local_30 && (local_30 < 0x3a))) {
                local_30 = lex_get_save(param_1, param_3);
            }
        }
        if ((local_30 == 0x45) || (local_30 == 0x65)) {
            local_30 = lex_get_save(param_1, param_3);
            if ((local_30 == 0x2b) || (local_30 == 0x2d)) {
                local_30 = lex_get_save(param_1, param_3);
            }
            if ((local_30 < 0x30) || (0x39 < local_30)) {
                lex_unget_unsave(param_1, local_30);
                return 0xffffffff;
            }
            local_30 = lex_get_save(param_1, param_3);
            while ((0x2f < local_30 && (local_30 < 0x3a))) {
                local_30 = lex_get_save(param_1, param_3);
            }
        }
        lex_unget_unsave(param_1, local_30);
        iVar2 = jsonp_strtod(param_1 + 0x28, &local_28);
        if (iVar2 == 0) {
            *(undefined4 *)(param_1 + 0x34) = 0x102;
            *(undefined4 *)(param_1 + 0x38) = local_28;
            *(undefined4 *)(param_1 + 0x3c) = uStack_24;
            return 0;
        }
        error_set(param_3, param_1, "real number overflow");
    } else {
        lex_unget_unsave(param_1, local_30);
        local_c = (char *)strbuffer_value(param_1 + 0x28);
        piVar1 = __errno_location();
        *piVar1 = 0;
        local_18 = strtoll(local_c, &local_1c, 10);
        piVar1 = __errno_location();
        if (*piVar1 != 0x22) {
            if (local_c + *(int *)(param_1 + 0x2c) != local_1c) {
                /* WARNING: Subroutine does not return */
                __assert_fail("end == saved_text + lex->saved_text.length",
                              "3rdparty/jansson-2.6/src/load.c", 0x206,
                              "lex_scan_number");
            }
            *(undefined4 *)(param_1 + 0x34) = 0x101;
            *(undefined4 *)(param_1 + 0x38) = (undefined4)local_18;
            *(undefined4 *)(param_1 + 0x3c) = local_18._4_4_;
            return 0;
        }
        if (local_18 < 0) {
            error_set(param_3, param_1, "too big negative integer");
        } else {
            error_set(param_3, param_1, "too big integer");
        }
    }
    return 0xffffffff;
}

undefined4 lex_scan(int param_1, undefined4 param_2)

{
    char *__s1;
    int iVar1;
    int local_c;

    strbuffer_clear(param_1 + 0x28);
    if (*(int *)(param_1 + 0x34) == 0x100) {
        jsonp_free(*(undefined4 *)(param_1 + 0x38));
        *(undefined4 *)(param_1 + 0x38) = 0;
    }
    local_c = lex_get(param_1, param_2);
    while ((((local_c == 0x20 || (local_c == 9)) || (local_c == 10)) ||
            (local_c == 0xd))) {
        local_c = lex_get(param_1, param_2);
    }
    if (local_c == -1) {
        *(undefined4 *)(param_1 + 0x34) = 0;
    } else if (local_c == -2) {
        *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    } else {
        lex_save(param_1, local_c);
        if ((((local_c == 0x7b) || (local_c == 0x7d)) ||
             ((local_c == 0x5b || ((local_c == 0x5d || (local_c == 0x3a)))))) ||
            (local_c == 0x2c)) {
            *(int *)(param_1 + 0x34) = local_c;
        } else if (local_c == 0x22) {
            lex_scan_string(param_1, param_2);
        } else if (((local_c < 0x30) || (0x39 < local_c)) &&
                   (local_c != 0x2d)) {
            if (((local_c < 0x41) || (0x5a < local_c)) &&
                ((local_c < 0x61 || (0x7a < local_c)))) {
                lex_save_cached(param_1);
                *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
            } else {
                local_c = lex_get_save(param_1, param_2);
                while (((0x40 < local_c && (local_c < 0x5b)) ||
                        ((0x60 < local_c && (local_c < 0x7b))))) {
                    local_c = lex_get_save(param_1, param_2);
                }
                lex_unget_unsave(param_1, local_c);
                __s1 = (char *)strbuffer_value(param_1 + 0x28);
                iVar1 = strcmp(__s1, "true");
                if (iVar1 == 0) {
                    *(undefined4 *)(param_1 + 0x34) = 0x103;
                } else {
                    iVar1 = strcmp(__s1, "false");
                    if (iVar1 == 0) {
                        *(undefined4 *)(param_1 + 0x34) = 0x104;
                    } else {
                        iVar1 = strcmp(__s1, "null");
                        if (iVar1 == 0) {
                            *(undefined4 *)(param_1 + 0x34) = 0x105;
                        } else {
                            *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
                        }
                    }
                }
            }
        } else {
            lex_scan_number(param_1, local_c, param_2);
        }
    }
    return *(undefined4 *)(param_1 + 0x34);
}

undefined4 lex_steal_string(int param_1)

{
    undefined4 local_c;

    local_c = 0;
    if (*(int *)(param_1 + 0x34) == 0x100) {
        local_c = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x38) = 0;
    }
    return local_c;
}

undefined4 lex_init(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;

    stream_init(param_1, param_2, param_3);
    iVar1 = strbuffer_init(param_1 + 0x28);
    if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
        uVar2 = 0;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

void lex_close(int param_1)

{
    if (*(int *)(param_1 + 0x34) == 0x100) {
        jsonp_free(*(undefined4 *)(param_1 + 0x38));
    }
    strbuffer_close(param_1 + 0x28);
    return;
}

int parse_object(int param_1, uint param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;

    iVar1 = json_object();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        lex_scan(param_1, param_3);
        if (*(int *)(param_1 + 0x34) != 0x7d) {
            while (*(int *)(param_1 + 0x34) == 0x100) {
                iVar2 = lex_steal_string(param_1);
                if (iVar2 == 0) {
                    return 0;
                }
                if (((param_2 & 1) != 0) &&
                    (iVar3 = json_object_get(iVar1, iVar2), iVar3 != 0)) {
                    jsonp_free(iVar2);
                    error_set(param_3, param_1, "duplicate object key");
                    goto LAB_00025294;
                }
                lex_scan(param_1, param_3);
                if (*(int *)(param_1 + 0x34) != 0x3a) {
                    jsonp_free(iVar2);
                    error_set(param_3, param_1, "\':\' expected");
                    goto LAB_00025294;
                }
                lex_scan(param_1, param_3);
                iVar3 = parse_value(param_1, param_2, param_3);
                if (iVar3 == 0) {
                    jsonp_free(iVar2);
                    goto LAB_00025294;
                }
                iVar4 = json_object_set_nocheck(iVar1, iVar2, iVar3);
                if (iVar4 != 0) {
                    jsonp_free(iVar2);
                    json_decref(iVar3);
                    goto LAB_00025294;
                }
                json_decref(iVar3);
                jsonp_free(iVar2);
                lex_scan(param_1, param_3);
                if (*(int *)(param_1 + 0x34) != 0x2c) {
                    if (*(int *)(param_1 + 0x34) == 0x7d) {
                        return iVar1;
                    }
                    error_set(param_3, param_1, "\'}\' expected");
                    goto LAB_00025294;
                }
                lex_scan(param_1, param_3);
            }
            error_set(param_3, param_1, "string or \'}\' expected");
        LAB_00025294:
            json_decref(iVar1);
            iVar1 = 0;
        }
    }
    return iVar1;
}

int parse_array(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = json_array();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        lex_scan(param_1, param_3);
        if (*(int *)(param_1 + 0x34) != 0x5d) {
            while (*(int *)(param_1 + 0x34) != 0) {
                iVar2 = parse_value(param_1, param_2, param_3);
                if (iVar2 == 0)
                    goto LAB_0002534e;
                iVar3 = json_array_append(iVar1, iVar2);
                if (iVar3 != 0) {
                    json_decref(iVar2);
                    goto LAB_0002534e;
                }
                json_decref(iVar2);
                lex_scan(param_1, param_3);
                if (*(int *)(param_1 + 0x34) != 0x2c)
                    break;
                lex_scan(param_1, param_3);
            }
            if (*(int *)(param_1 + 0x34) != 0x5d) {
                error_set(param_3, param_1, "\']\' expected");
            LAB_0002534e:
                json_decref(iVar1);
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}

int parse_value(int param_1, uint param_2, undefined4 param_3)

{
    int iVar1;
    undefined4 local_18[3];
    int local_c;

    iVar1 = *(int *)(param_1 + 0x34);
    if (iVar1 == 0x101) {
        if ((param_2 & 8) == 0) {
            local_c = json_integer(*(undefined4 *)(param_1 + 0x38),
                                   *(undefined4 *)(param_1 + 0x3c));
        } else {
            iVar1 = jsonp_strtod(param_1 + 0x28, local_18);
            if (iVar1 != 0) {
                error_set(param_3, param_1, "real number overflow");
                return 0;
            }
            local_c = json_real(local_18[0]);
        }
    } else if (iVar1 < 0x102) {
        if (iVar1 == 0x5b) {
            local_c = parse_array(param_1, param_2, param_3);
        } else {
            if (iVar1 < 0x5c) {
                if (iVar1 == -1) {
                    error_set(param_3, param_1, "invalid token");
                    return 0;
                }
            LAB_0002547c:
                error_set(param_3, param_1, "unexpected token");
                return 0;
            }
            if (iVar1 == 0x7b) {
                local_c = parse_object(param_1, param_2, param_3);
            } else {
                if (iVar1 != 0x100)
                    goto LAB_0002547c;
                local_c = json_string_nocheck(*(undefined4 *)(param_1 + 0x38));
            }
        }
    } else if (iVar1 == 0x103) {
        local_c = json_true();
    } else if (iVar1 < 0x103) {
        local_c = json_real((int)*(undefined8 *)(param_1 + 0x38));
    } else if (iVar1 == 0x104) {
        local_c = json_false();
    } else {
        if (iVar1 != 0x105)
            goto LAB_0002547c;
        local_c = json_null();
    }
    if (local_c == 0) {
        local_c = 0;
    }
    return local_c;
}

int parse_json(int param_1, uint param_2, int param_3)

{
    int iVar1;

    lex_scan(param_1, param_3);
    if ((((param_2 & 4) == 0) && (*(int *)(param_1 + 0x34) != 0x5b)) &&
        (*(int *)(param_1 + 0x34) != 0x7b)) {
        error_set(param_3, param_1, "\'[\' or \'{\' expected");
        iVar1 = 0;
    } else {
        iVar1 = parse_value(param_1, param_2, param_3);
        if (iVar1 == 0) {
            iVar1 = 0;
        } else if (((param_2 & 2) == 0) && (lex_scan(param_1, param_3),
                                            *(int *)(param_1 + 0x34) != 0)) {
            error_set(param_3, param_1, "end of file expected");
            json_decref(iVar1);
            iVar1 = 0;
        } else if (param_3 != 0) {
            *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x24);
        }
    }
    return iVar1;
}

uint string_get(int *param_1)

{
    byte bVar1;
    uint uVar2;

    bVar1 = *(byte *)(*param_1 + param_1[1]);
    if (bVar1 == 0) {
        uVar2 = 0xffffffff;
    } else {
        param_1[1] = param_1[1] + 1;
        uVar2 = (uint)bVar1;
    }
    return uVar2;
}

undefined4 json_loads(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    int local_58[2];
    undefined1 auStack_50[68];
    undefined4 local_c;

    jsonp_error_init(param_3, "<string>");
    if (param_1 == 0) {
        error_set(param_3, 0, "wrong arguments");
        local_c = 0;
    } else {
        local_58[1] = 0;
        local_58[0] = param_1;
        iVar1 = lex_init(auStack_50, 0x25551, local_58);
        if (iVar1 == 0) {
            local_c = parse_json(auStack_50, param_2, param_3);
            lex_close(auStack_50);
        } else {
            local_c = 0;
        }
    }
    return local_c;
}

uint buffer_get(int *param_1)

{
    byte bVar1;
    uint uVar2;

    if ((uint)param_1[2] < (uint)param_1[1]) {
        bVar1 = *(byte *)(*param_1 + param_1[2]);
        param_1[2] = param_1[2] + 1;
        uVar2 = (uint)bVar1;
    } else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}

undefined4 json_loadb(int param_1, undefined4 param_2, undefined4 param_3,
                      undefined4 param_4)

{
    int iVar1;
    int local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined1 auStack_50[68];
    undefined4 local_c;

    jsonp_error_init(param_4, "<buffer>");
    if (param_1 == 0) {
        error_set(param_4, 0, "wrong arguments");
        local_c = 0;
    } else {
        local_54 = 0;
        local_5c = param_1;
        local_58 = param_2;
        iVar1 = lex_init(auStack_50, 0x25615, &local_5c);
        if (iVar1 == 0) {
            local_c = parse_json(auStack_50, param_3, param_4);
            lex_close(auStack_50);
        } else {
            local_c = 0;
        }
    }
    return local_c;
}

undefined4 json_loadf(int param_1, undefined4 param_2, undefined4 param_3)

{
    int iVar1;
    undefined1 auStack_50[64];
    undefined4 local_10;
    char *local_c;

    if (param_1 == stdin) {
        local_c = "<stdin>";
    } else {
        local_c = "<stream>";
    }
    jsonp_error_init(param_3, local_c);
    if (param_1 == 0) {
        error_set(param_3, 0, "wrong arguments");
        local_10 = 0;
    } else {
        iVar1 = lex_init(auStack_50, fgetc, param_1);
        if (iVar1 == 0) {
            local_10 = parse_json(auStack_50, param_2, param_3);
            lex_close(auStack_50);
        } else {
            local_10 = 0;
        }
    }
    return local_10;
}

undefined4 json_load_file(char *param_1, undefined4 param_2, undefined4 param_3)

{
    FILE *__stream;
    int *piVar1;
    char *pcVar2;
    undefined4 uVar3;

    jsonp_error_init(param_3, param_1);
    if (param_1 == (char *)0x0) {
        error_set(param_3, 0, "wrong arguments");
        uVar3 = 0;
    } else {
        __stream = fopen(param_1, "rb");
        if (__stream == (FILE *)0x0) {
            piVar1 = __errno_location();
            pcVar2 = strerror(*piVar1);
            error_set(param_3, 0, "unable to open %s: %s", param_1, pcVar2);
            uVar3 = 0;
        } else {
            uVar3 = json_loadf(__stream, param_2, param_3);
            fclose(__stream);
        }
    }
    return uVar3;
}

uint callback_get(int param_1)

{
    byte bVar1;
    undefined4 uVar2;

    if (*(uint *)(param_1 + 0x400) <= *(uint *)(param_1 + 0x404)) {
        *(undefined4 *)(param_1 + 0x404) = 0;
        uVar2 = (**(code **)(param_1 + 0x408))(
            param_1, 0x400, *(undefined4 *)(param_1 + 0x40c));
        *(undefined4 *)(param_1 + 0x400) = uVar2;
        if ((*(int *)(param_1 + 0x400) == 0) ||
            (*(int *)(param_1 + 0x400) == -1)) {
            return 0xffffffff;
        }
    }
    bVar1 = *(byte *)(param_1 + *(int *)(param_1 + 0x404));
    *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
    return (uint)bVar1;
}

undefined4 json_load_callback(int param_1, undefined4 param_2,
                              undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined1 auStack_468[1032];
    int local_60;
    undefined4 local_5c;
    undefined1 auStack_58[68];
    undefined4 local_14;

    memset(auStack_468, 0, 0x410);
    local_60 = param_1;
    local_5c = param_2;
    jsonp_error_init(param_4, "<callback>");
    if (param_1 == 0) {
        error_set(param_4, 0, "wrong arguments");
        local_14 = 0;
    } else {
        iVar1 = lex_init(auStack_58, 0x25809, auStack_468);
        if (iVar1 == 0) {
            local_14 = parse_json(auStack_58, param_3, param_4);
            lex_close(auStack_58);
        } else {
            local_14 = 0;
        }
    }
    return local_14;
}

undefined4 jsonp_malloc(int param_1)

{
    undefined4 uVar1;

    if (param_1 == 0) {
        uVar1 = 0;
    } else {
        uVar1 = (*do_malloc)(param_1);
    }
    return uVar1;
}

void jsonp_free(int param_1)

{
    if (param_1 != 0) {
        (*do_free)(param_1);
    }
    return;
}

void *jsonp_strdup(char *param_1)

{
    size_t sVar1;
    void *__dest;

    sVar1 = strlen(param_1);
    if (sVar1 == 0xffffffff) {
        __dest = (void *)0x0;
    } else {
        __dest = (void *)jsonp_malloc(sVar1 + 1);
        if (__dest == (void *)0x0) {
            __dest = (void *)0x0;
        } else {
            memcpy(__dest, param_1, sVar1 + 1);
        }
    }
    return __dest;
}

void json_set_alloc_funcs(undefined4 param_1, undefined4 param_2)

{
    do_malloc = param_1;
    do_free = param_2;
    return;
}

undefined4 strbuffer_init(int *param_1)

{
    int iVar1;
    undefined4 uVar2;

    param_1[2] = 0x10;
    param_1[1] = 0;
    iVar1 = jsonp_malloc(param_1[2]);
    *param_1 = iVar1;
    if (*param_1 == 0) {
        uVar2 = 0xffffffff;
    } else {
        *(undefined1 *)*param_1 = 0;
        uVar2 = 0;
    }
    return uVar2;
}

void strbuffer_close(int *param_1)

{
    if (*param_1 != 0) {
        jsonp_free(*param_1);
    }
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
}

void strbuffer_clear(undefined4 *param_1)

{
    param_1[1] = 0;
    *(undefined1 *)*param_1 = 0;
    return;
}

undefined4 strbuffer_value(undefined4 *param_1)

{
    return *param_1;
}

undefined4 strbuffer_steal_value(undefined4 *param_1)

{
    undefined4 uVar1;

    uVar1 = *param_1;
    *param_1 = 0;
    return uVar1;
}

undefined4 strbuffer_append(undefined4 param_1, char *param_2)

{
    size_t sVar1;
    undefined4 uVar2;

    sVar1 = strlen(param_2);
    uVar2 = strbuffer_append_bytes(param_1, param_2, sVar1);
    return uVar2;
}

undefined4 strbuffer_append_byte(undefined4 param_1, undefined1 param_2)

{
    undefined4 uVar1;
    undefined1 local_d;
    undefined4 local_c;

    local_d = param_2;
    local_c = param_1;
    uVar1 = strbuffer_append_bytes(param_1, &local_d, 1);
    return uVar1;
}

undefined4 strbuffer_append_bytes(int *param_1, void *param_2, uint param_3)

{
    void *__dest;
    uint uVar1;
    uint uVar2;

    if ((uint)(param_1[2] - param_1[1]) <= param_3) {
        if (((param_1[2] < 0) || (param_3 == 0xffffffff)) ||
            (-param_3 - 2 < (uint)param_1[1])) {
            return 0xffffffff;
        }
        uVar1 = param_1[1] + param_3 + 1;
        uVar2 = param_1[2] << 1;
        if ((uint)(param_1[2] << 1) <= uVar1) {
            uVar2 = uVar1;
        }
        __dest = (void *)jsonp_malloc(uVar2);
        if (__dest == (void *)0x0) {
            return 0xffffffff;
        }
        memcpy(__dest, (void *)*param_1, param_1[1]);
        jsonp_free(*param_1);
        *param_1 = (int)__dest;
        param_1[2] = uVar2;
    }
    memcpy((void *)(*param_1 + param_1[1]), param_2, param_3);
    param_1[1] = param_1[1] + param_3;
    *(undefined1 *)(*param_1 + param_1[1]) = 0;
    return 0;
}

undefined1 strbuffer_pop(int *param_1)

{
    undefined1 uVar1;

    if (param_1[1] == 0) {
        uVar1 = 0;
    } else {
        param_1[1] = param_1[1] + -1;
        uVar1 = *(undefined1 *)(*param_1 + param_1[1]);
        *(undefined1 *)(*param_1 + param_1[1]) = 0;
    }
    return uVar1;
}

void to_locale(undefined4 *param_1)

{
    lconv *plVar1;
    char *pcVar2;
    char *pcVar3;

    plVar1 = localeconv();
    pcVar3 = plVar1->decimal_point;
    if (*pcVar3 != '.') {
        pcVar2 = strchr((char *)*param_1, 0x2e);
        if (pcVar2 != (char *)0x0) {
            *pcVar2 = *pcVar3;
        }
    }
    return;
}

void from_locale(char *param_1)

{
    lconv *plVar1;
    char *pcVar2;

    plVar1 = localeconv();
    if (*plVar1->decimal_point != 0x2e) {
        pcVar2 = strchr(param_1, (uint)(byte)*plVar1->decimal_point);
        if (pcVar2 != (char *)0x0) {
            *pcVar2 = '.';
        }
    }
    return;
}

undefined4 jsonp_strtod(int *param_1, undefined4 *param_2)

{
    int *piVar1;
    undefined4 uVar2;
    char *local_14;
    undefined8 local_10;

    to_locale(param_1);
    piVar1 = __errno_location();
    *piVar1 = 0;
    local_10 = strtod((char *)*param_1, &local_14);
    if ((char *)(*param_1 + param_1[1]) != local_14) {
        /* WARNING: Subroutine does not return */
        __assert_fail("end == strbuffer->value + strbuffer->length",
                      "3rdparty/jansson-2.6/src/strconv.c", 0x46,
                      "jsonp_strtod");
    }
    piVar1 = __errno_location();
    if ((*piVar1 == 0x22) && (local_10 != 0.0)) {
        uVar2 = 0xffffffff;
    } else {
        *param_2 = (undefined4)local_10;
        param_2[1] = local_10._4_4_;
        uVar2 = 0;
    }
    return uVar2;
}

char *jsonp_dtostr(char *param_1, char *param_2)

{
    char *pcVar1;
    char *local_14;
    char *local_10;
    char *local_c;

    local_14 = (char *)snprintf(param_1, (size_t)param_2, "%.17g");
    if ((int)local_14 < 0) {
        local_14 = (char *)0xffffffff;
    } else if (local_14 < param_2) {
        from_locale(param_1);
        pcVar1 = strchr(param_1, 0x2e);
        if ((pcVar1 == (char *)0x0) &&
            (pcVar1 = strchr(param_1, 0x65), pcVar1 == (char *)0x0)) {
            if (param_2 <= local_14 + 3) {
                return (char *)0xffffffff;
            }
            param_1[(int)local_14] = '.';
            param_1[(int)(local_14 + 1)] = '0';
            param_1[(int)(local_14 + 2)] = '\0';
            local_14 = local_14 + 2;
        }
        pcVar1 = strchr(param_1, 0x65);
        if (pcVar1 != (char *)0x0) {
            local_c = pcVar1 + 1;
            local_10 = pcVar1 + 2;
            if (*local_c == '-') {
                local_c = pcVar1 + 2;
            }
            for (; *local_10 == '0'; local_10 = local_10 + 1) {
            }
            if (local_10 != local_c) {
                memmove(local_c, local_10,
                        (size_t)(param_1 + ((int)local_14 - (int)local_10)));
                local_14 = local_c + ((int)local_14 - (int)local_10);
            }
        }
    } else {
        local_14 = (char *)0xffffffff;
    }
    return local_14;
}

undefined4 utf8_encode(uint param_1, byte *param_2, undefined4 *param_3)

{
    byte bVar1;
    undefined4 uVar2;

    if ((int)param_1 < 0) {
        uVar2 = 0xffffffff;
    } else {
        bVar1 = (byte)param_1;
        if ((int)param_1 < 0x80) {
            *param_2 = bVar1;
            *param_3 = 1;
        } else if ((int)param_1 < 0x800) {
            *param_2 = (char)((int)(param_1 & 0x7c0) >> 6) - 0x40;
            param_2[1] = (bVar1 & 0x3f) + 0x80;
            *param_3 = 2;
        } else if ((int)param_1 < 0x10000) {
            *param_2 = (char)((int)(param_1 & 0xf000) >> 0xc) - 0x20;
            param_2[1] = (char)((int)(param_1 & 0xfc0) >> 6) + 0x80;
            param_2[2] = (bVar1 & 0x3f) + 0x80;
            *param_3 = 3;
        } else {
            if (0x10ffff < (int)param_1) {
                return 0xffffffff;
            }
            *param_2 = (char)((int)(param_1 & 0x1c0000) >> 0x12) - 0x10;
            param_2[1] = (char)((int)(param_1 & 0x3f000) >> 0xc) + 0x80;
            param_2[2] = (char)((int)(param_1 & 0xfc0) >> 6) + 0x80;
            param_2[3] = (bVar1 & 0x3f) + 0x80;
            *param_3 = 4;
        }
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 utf8_check_first(byte param_1)

{
    undefined4 uVar1;

    if ((char)param_1 < '\0') {
        if (((char)param_1 < '\0') && (param_1 < 0xc0)) {
            uVar1 = 0;
        } else if ((param_1 == 0xc0) || (param_1 == 0xc1)) {
            uVar1 = 0;
        } else if ((param_1 < 0xc2) || (0xdf < param_1)) {
            if ((param_1 < 0xe0) || (0xef < param_1)) {
                if ((param_1 < 0xf0) || (0xf4 < param_1)) {
                    uVar1 = 0;
                } else {
                    uVar1 = 4;
                }
            } else {
                uVar1 = 3;
            }
        } else {
            uVar1 = 2;
        }
    } else {
        uVar1 = 1;
    }
    return uVar1;
}

undefined4 utf8_check_full(byte *param_1, int param_2, uint *param_3)

{
    byte bVar1;
    undefined4 uVar2;
    uint local_10;
    int local_c;

    bVar1 = *param_1;
    if (param_2 == 2) {
        local_10 = bVar1 & 0x1f;
    } else if (param_2 == 3) {
        local_10 = bVar1 & 0xf;
    } else {
        if (param_2 != 4) {
            return 0;
        }
        local_10 = bVar1 & 7;
    }
    local_c = 1;
    while (true) {
        if (param_2 <= local_c) {
            if ((int)local_10 < 0x110000) {
                if (((int)local_10 < 0xd800) || (0xdfff < (int)local_10)) {
                    if ((((param_2 == 2) && ((int)local_10 < 0x80)) ||
                         ((param_2 == 3 && ((int)local_10 < 0x800)))) ||
                        ((param_2 == 4 && ((int)local_10 < 0x10000)))) {
                        uVar2 = 0;
                    } else {
                        if (param_3 != (uint *)0x0) {
                            *param_3 = local_10;
                        }
                        uVar2 = 1;
                    }
                } else {
                    uVar2 = 0;
                }
            } else {
                uVar2 = 0;
            }
            return uVar2;
        }
        bVar1 = param_1[local_c];
        if ((-1 < (char)bVar1) || (0xbf < bVar1))
            break;
        local_10 = local_10 * 0x40 + (bVar1 & 0x3f);
        local_c = local_c + 1;
    }
    return 0;
}

byte *utf8_iterate(byte *param_1, uint *param_2)

{
    int iVar1;
    uint local_10;
    int local_c;

    if (*param_1 != 0) {
        local_c = utf8_check_first(*param_1);
        if (local_c < 1) {
            param_1 = (byte *)0x0;
        } else {
            if (local_c == 1) {
                local_10 = (uint)*param_1;
            } else {
                iVar1 = utf8_check_full(param_1, local_c, &local_10);
                if (iVar1 == 0) {
                    return (byte *)0x0;
                }
            }
            if (param_2 != (uint *)0x0) {
                *param_2 = local_10;
            }
            param_1 = param_1 + local_c;
        }
    }
    return param_1;
}

undefined4 utf8_check_string(char *param_1, size_t param_2)

{
    int iVar1;
    int iVar2;
    size_t local_18;
    int local_c;

    local_18 = param_2;
    if (param_2 == 0xffffffff) {
        local_18 = strlen(param_1);
    }
    local_c = 0;
    do {
        if ((int)local_18 <= local_c) {
            return 1;
        }
        iVar1 = utf8_check_first(param_1[local_c]);
        if (iVar1 == 0) {
            return 0;
        }
        if (1 < iVar1) {
            if ((int)local_18 < local_c + iVar1) {
                return 0;
            }
            iVar2 = utf8_check_full(param_1 + local_c, iVar1, 0);
            if (iVar2 == 0) {
                return 0;
            }
            local_c = local_c + iVar1 + -1;
        }
        local_c = local_c + 1;
    } while (true);
}

int json_incref(int param_1)

{
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    }
    return param_1;
}

void json_decref(int param_1)

{
    if ((param_1 != 0) && (*(int *)(param_1 + 4) != -1)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        if (*(int *)(param_1 + 4) == 0) {
            json_delete(param_1);
        }
    }
    return;
}

undefined4 json_object_set_nocheck(undefined4 param_1, undefined4 param_2,
                                   undefined4 param_3)

{
    undefined4 uVar1;

    uVar1 = json_incref(param_3);
    uVar1 = json_object_set_new_nocheck(param_1, param_2, uVar1);
    return uVar1;
}

undefined4 json_array_append(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;

    uVar1 = json_incref(param_2);
    uVar1 = json_array_append_new(param_1, uVar1);
    return uVar1;
}

void json_init(undefined4 *param_1, undefined4 param_2)

{
    *param_1 = param_2;
    param_1[1] = 1;
    return;
}

int json_object(void)

{
    int iVar1;
    int iVar2;

    iVar1 = jsonp_malloc(0x24);
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        json_init(iVar1, 0);
        iVar2 = hashtable_init(iVar1 + 8);
        if (iVar2 == 0) {
            *(undefined4 *)(iVar1 + 0x1c) = 0;
            *(undefined4 *)(iVar1 + 0x20) = 0;
        } else {
            jsonp_free(iVar1);
            iVar1 = 0;
        }
    }
    return iVar1;
}

void json_delete_object(int param_1)

{
    hashtable_close(param_1 + 8);
    jsonp_free(param_1);
    return;
}

int json_object_size(int *param_1)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        iVar1 = 0;
    } else {
        iVar1 = param_1[2];
    }
    return iVar1;
}

undefined4 json_object_get(int *param_1, undefined4 param_2)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        uVar1 = 0;
    } else {
        uVar1 = hashtable_get(param_1 + 2, param_2);
    }
    return uVar1;
}

undefined4 json_object_set_new_nocheck(int *param_1, int param_2, int *param_3)

{
    int iVar1;

    if (param_3 != (int *)0x0) {
        if ((((param_2 != 0) && (param_1 != (int *)0x0)) && (*param_1 == 0)) &&
            (param_1 != param_3)) {
            iVar1 = param_1[7];
            param_1[7] = iVar1 + 1;
            iVar1 = hashtable_set(param_1 + 2, param_2, iVar1, param_3);
            if (iVar1 == 0) {
                return 0;
            }
            json_decref(param_3);
            return 0xffffffff;
        }
        json_decref(param_3);
    }
    return 0xffffffff;
}

undefined4 json_object_set_new(undefined4 param_1, int param_2,
                               undefined4 param_3)

{
    int iVar1;
    undefined4 uVar2;

    if ((param_2 == 0) ||
        (iVar1 = utf8_check_string(param_2, 0xffffffff), iVar1 == 0)) {
        json_decref(param_3);
        uVar2 = 0xffffffff;
    } else {
        uVar2 = json_object_set_new_nocheck(param_1, param_2, param_3);
    }
    return uVar2;
}

undefined4 json_object_del(int *param_1, undefined4 param_2)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        uVar1 = 0xffffffff;
    } else {
        uVar1 = hashtable_del(param_1 + 2, param_2);
    }
    return uVar1;
}

undefined4 json_object_clear(int *param_1)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        uVar1 = 0xffffffff;
    } else {
        hashtable_clear(param_1 + 2);
        param_1[7] = 0;
        uVar1 = 0;
    }
    return uVar1;
}

undefined4 json_object_update(int *param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    int local_c;

    if ((((param_1 == (int *)0x0) || (*param_1 != 0)) ||
         (param_2 == (int *)0x0)) ||
        (*param_2 != 0)) {
        uVar2 = 0xffffffff;
    } else {
        uVar2 = json_object_iter(param_2);
        local_c = json_object_iter_key(uVar2);
        while (local_c != 0) {
            uVar2 = json_object_key_to_iter(local_c);
            iVar1 = json_object_iter_value(uVar2);
            if (iVar1 == 0)
                break;
            iVar1 = json_object_set_nocheck(param_1, local_c, iVar1);
            if (iVar1 != 0) {
                return 0xffffffff;
            }
            uVar2 = json_object_key_to_iter(local_c);
            uVar2 = json_object_iter_next(param_2, uVar2);
            local_c = json_object_iter_key(uVar2);
        }
        uVar2 = 0;
    }
    return uVar2;
}

undefined4 json_object_update_existing(int *param_1, int *param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 local_c;

    if ((((param_1 == (int *)0x0) || (*param_1 != 0)) ||
         (param_2 == (int *)0x0)) ||
        (*param_2 != 0)) {
        uVar3 = 0xffffffff;
    } else {
        uVar3 = json_object_iter(param_2);
        local_c = json_object_iter_key(uVar3);
        while (local_c != 0) {
            uVar3 = json_object_key_to_iter(local_c);
            iVar2 = json_object_iter_value(uVar3);
            if (iVar2 == 0)
                break;
            iVar1 = json_object_get(param_1, local_c);
            if (iVar1 != 0) {
                json_object_set_nocheck(param_1, local_c, iVar2);
            }
            uVar3 = json_object_key_to_iter(local_c);
            uVar3 = json_object_iter_next(param_2, uVar3);
            local_c = json_object_iter_key(uVar3);
        }
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 json_object_update_missing(int *param_1, int *param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 local_c;

    if ((((param_1 == (int *)0x0) || (*param_1 != 0)) ||
         (param_2 == (int *)0x0)) ||
        (*param_2 != 0)) {
        uVar3 = 0xffffffff;
    } else {
        uVar3 = json_object_iter(param_2);
        local_c = json_object_iter_key(uVar3);
        while (local_c != 0) {
            uVar3 = json_object_key_to_iter(local_c);
            iVar2 = json_object_iter_value(uVar3);
            if (iVar2 == 0)
                break;
            iVar1 = json_object_get(param_1, local_c);
            if (iVar1 == 0) {
                json_object_set_nocheck(param_1, local_c, iVar2);
            }
            uVar3 = json_object_key_to_iter(local_c);
            uVar3 = json_object_iter_next(param_2, uVar3);
            local_c = json_object_iter_key(uVar3);
        }
        uVar3 = 0;
    }
    return uVar3;
}

undefined4 json_object_iter(int *param_1)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        uVar1 = 0;
    } else {
        uVar1 = hashtable_iter(param_1 + 2);
    }
    return uVar1;
}

undefined4 json_object_iter_at(int *param_1, int param_2)

{
    undefined4 uVar1;

    if (((param_2 == 0) || (param_1 == (int *)0x0)) || (*param_1 != 0)) {
        uVar1 = 0;
    } else {
        uVar1 = hashtable_iter_at(param_1 + 2, param_2);
    }
    return uVar1;
}

undefined4 json_object_iter_next(int *param_1, int param_2)

{
    undefined4 uVar1;

    if (((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_2 == 0)) {
        uVar1 = 0;
    } else {
        uVar1 = hashtable_iter_next(param_1 + 2, param_2);
    }
    return uVar1;
}

undefined4 json_object_iter_key(int param_1)

{
    undefined4 uVar1;

    if (param_1 == 0) {
        uVar1 = 0;
    } else {
        uVar1 = hashtable_iter_key(param_1);
    }
    return uVar1;
}

undefined4 json_object_iter_value(int param_1)

{
    undefined4 uVar1;

    if (param_1 == 0) {
        uVar1 = 0;
    } else {
        uVar1 = hashtable_iter_value(param_1);
    }
    return uVar1;
}

undefined4 json_object_iter_set_new(int *param_1, int param_2, int param_3)

{
    undefined4 uVar1;

    if ((((param_1 == (int *)0x0) || (*param_1 != 0)) || (param_2 == 0)) ||
        (param_3 == 0)) {
        uVar1 = 0xffffffff;
    } else {
        hashtable_iter_set(param_2, param_3);
        uVar1 = 0;
    }
    return uVar1;
}

int json_object_key_to_iter(int param_1)

{
    if (param_1 == 0) {
        param_1 = 0;
    } else {
        param_1 = param_1 + -0x10;
    }
    return param_1;
}

undefined4 json_object_equal(undefined4 param_1, undefined4 param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    int local_14;

    iVar1 = json_object_size(param_1);
    iVar2 = json_object_size(param_2);
    if (iVar1 == iVar2) {
        uVar3 = json_object_iter(param_1);
        local_14 = json_object_iter_key(uVar3);
        while (local_14 != 0) {
            uVar3 = json_object_key_to_iter(local_14);
            iVar1 = json_object_iter_value(uVar3);
            if (iVar1 == 0)
                break;
            uVar3 = json_object_get(param_2, local_14);
            iVar1 = json_equal(iVar1, uVar3);
            if (iVar1 == 0) {
                return 0;
            }
            uVar3 = json_object_key_to_iter(local_14);
            uVar3 = json_object_iter_next(param_1, uVar3);
            local_14 = json_object_iter_key(uVar3);
        }
        uVar3 = 1;
    } else {
        uVar3 = 0;
    }
    return uVar3;
}

int json_object_copy(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    int iVar3;
    int local_c;

    iVar1 = json_object();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        uVar2 = json_object_iter(param_1);
        local_c = json_object_iter_key(uVar2);
        while (local_c != 0) {
            uVar2 = json_object_key_to_iter(local_c);
            iVar3 = json_object_iter_value(uVar2);
            if (iVar3 == 0) {
                return iVar1;
            }
            json_object_set_nocheck(iVar1, local_c, iVar3);
            uVar2 = json_object_key_to_iter(local_c);
            uVar2 = json_object_iter_next(param_1, uVar2);
            local_c = json_object_iter_key(uVar2);
        }
    }
    return iVar1;
}

int json_object_deep_copy(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 local_c;

    iVar1 = json_object();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        for (local_c = json_object_iter(param_1); local_c != 0;
             local_c = json_object_iter_next(param_1, local_c)) {
            uVar2 = json_object_iter_key(local_c);
            uVar3 = json_object_iter_value(local_c);
            uVar3 = json_deep_copy(uVar3);
            json_object_set_new_nocheck(iVar1, uVar2, uVar3);
        }
    }
    return iVar1;
}

int json_array(void)

{
    int iVar1;
    undefined4 uVar2;

    iVar1 = jsonp_malloc(0x18);
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        json_init(iVar1, 1);
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 8) = 8;
        uVar2 = jsonp_malloc(*(int *)(iVar1 + 8) << 2);
        *(undefined4 *)(iVar1 + 0x10) = uVar2;
        if (*(int *)(iVar1 + 0x10) == 0) {
            jsonp_free(iVar1);
            iVar1 = 0;
        } else {
            *(undefined4 *)(iVar1 + 0x14) = 0;
        }
    }
    return iVar1;
}

void json_delete_array(int param_1)

{
    undefined4 local_c;

    for (local_c = 0; local_c < *(uint *)(param_1 + 0xc);
         local_c = local_c + 1) {
        json_decref(*(undefined4 *)(*(int *)(param_1 + 0x10) + local_c * 4));
    }
    jsonp_free(*(undefined4 *)(param_1 + 0x10));
    jsonp_free(param_1);
    return;
}

int json_array_size(int *param_1)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
        iVar1 = 0;
    } else {
        iVar1 = param_1[3];
    }
    return iVar1;
}

undefined4 json_array_get(int *param_1, uint param_2)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
        uVar1 = 0;
    } else if (param_2 < (uint)param_1[3]) {
        uVar1 = *(undefined4 *)(param_1[4] + param_2 * 4);
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

undefined4 json_array_set_new(int *param_1, uint param_2, int *param_3)

{
    if (param_3 != (int *)0x0) {
        if (((param_1 != (int *)0x0) && (*param_1 == 1)) &&
            (param_1 != param_3)) {
            if (param_2 < (uint)param_1[3]) {
                json_decref(*(undefined4 *)(param_1[4] + param_2 * 4));
                *(int **)(param_1[4] + param_2 * 4) = param_3;
                return 0;
            }
            json_decref(param_3);
            return 0xffffffff;
        }
        json_decref(param_3);
    }
    return 0xffffffff;
}

void array_move(int param_1, int param_2, int param_3, int param_4)

{
    memmove((void *)(*(int *)(param_1 + 0x10) + param_2 * 4),
            (void *)(*(int *)(param_1 + 0x10) + param_3 * 4), param_4 << 2);
    return;
}

void array_copy(int param_1, int param_2, int param_3, int param_4, int param_5)

{
    memcpy((void *)(param_1 + param_2 * 4), (void *)(param_3 + param_4 * 4),
           param_5 << 2);
    return;
}

undefined4 json_array_grow(int param_1, int param_2, int param_3)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    uint uVar4;

    if (*(uint *)(param_1 + 8) < (uint)(*(int *)(param_1 + 0xc) + param_2)) {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        uVar2 = *(int *)(param_1 + 8) << 1;
        uVar4 = *(int *)(param_1 + 8) + param_2;
        if (uVar4 <= uVar2) {
            uVar4 = uVar2;
        }
        iVar1 = jsonp_malloc(uVar4 << 2);
        if (iVar1 == 0) {
            uVar3 = 0;
        } else {
            *(uint *)(param_1 + 8) = uVar4;
            *(int *)(param_1 + 0x10) = iVar1;
            if (param_3 != 0) {
                array_copy(*(undefined4 *)(param_1 + 0x10), 0, uVar3, 0,
                           *(undefined4 *)(param_1 + 0xc));
                jsonp_free(uVar3);
                uVar3 = *(undefined4 *)(param_1 + 0x10);
            }
        }
    } else {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
    }
    return uVar3;
}

undefined4 json_array_append_new(int *param_1, int *param_2)

{
    int iVar1;

    if (param_2 != (int *)0x0) {
        if (((param_1 != (int *)0x0) && (*param_1 == 1)) &&
            (param_1 != param_2)) {
            iVar1 = json_array_grow(param_1, 1, 1);
            if (iVar1 != 0) {
                *(int **)(param_1[4] + param_1[3] * 4) = param_2;
                param_1[3] = param_1[3] + 1;
                return 0;
            }
            json_decref(param_2);
            return 0xffffffff;
        }
        json_decref(param_2);
    }
    return 0xffffffff;
}

undefined4 json_array_insert_new(int *param_1, uint param_2, int *param_3)

{
    int iVar1;

    if (param_3 != (int *)0x0) {
        if (((param_1 != (int *)0x0) && (*param_1 == 1)) &&
            (param_1 != param_3)) {
            if ((uint)param_1[3] < param_2) {
                json_decref(param_3);
                return 0xffffffff;
            }
            iVar1 = json_array_grow(param_1, 1, 0);
            if (iVar1 != 0) {
                if (param_1[4] == iVar1) {
                    array_move(param_1, param_2 + 1, param_2,
                               param_1[3] - param_2);
                } else {
                    array_copy(param_1[4], 0, iVar1, 0, param_2);
                    array_copy(param_1[4], param_2 + 1, iVar1, param_2,
                               param_1[3] - param_2);
                    jsonp_free(iVar1);
                }
                *(int **)(param_1[4] + param_2 * 4) = param_3;
                param_1[3] = param_1[3] + 1;
                return 0;
            }
            json_decref(param_3);
            return 0xffffffff;
        }
        json_decref(param_3);
    }
    return 0xffffffff;
}

undefined4 json_array_remove(int *param_1, uint param_2)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
        uVar1 = 0xffffffff;
    } else if (param_2 < (uint)param_1[3]) {
        json_decref(*(undefined4 *)(param_1[4] + param_2 * 4));
        if (param_2 < param_1[3] - 1U) {
            array_move(param_1, param_2, param_2 + 1,
                       (param_1[3] - param_2) + -1);
        }
        param_1[3] = param_1[3] + -1;
        uVar1 = 0;
    } else {
        uVar1 = 0xffffffff;
    }
    return uVar1;
}

undefined4 json_array_clear(int *param_1)

{
    undefined4 uVar1;
    uint local_c;

    if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
        uVar1 = 0xffffffff;
    } else {
        for (local_c = 0; local_c < (uint)param_1[3]; local_c = local_c + 1) {
            json_decref(*(undefined4 *)(param_1[4] + local_c * 4));
        }
        param_1[3] = 0;
        uVar1 = 0;
    }
    return uVar1;
}

undefined4 json_array_extend(int *param_1, int *param_2)

{
    int iVar1;
    undefined4 uVar2;
    uint local_c;

    if ((((param_1 == (int *)0x0) || (*param_1 != 1)) ||
         (param_2 == (int *)0x0)) ||
        (*param_2 != 1)) {
        uVar2 = 0xffffffff;
    } else {
        iVar1 = json_array_grow(param_1, param_2[3], 1);
        if (iVar1 == 0) {
            uVar2 = 0xffffffff;
        } else {
            for (local_c = 0; local_c < (uint)param_2[3];
                 local_c = local_c + 1) {
                json_incref(*(undefined4 *)(param_2[4] + local_c * 4));
            }
            array_copy(param_1[4], param_1[3], param_2[4], 0, param_2[3]);
            param_1[3] = param_1[3] + param_2[3];
            uVar2 = 0;
        }
    }
    return uVar2;
}

undefined4 json_array_equal(undefined4 param_1, undefined4 param_2)

{
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    uint local_c;

    uVar1 = json_array_size(param_1);
    uVar2 = json_array_size(param_2);
    if (uVar2 == uVar1) {
        for (local_c = 0; local_c < uVar1; local_c = local_c + 1) {
            uVar5 = json_array_get(param_1, local_c);
            uVar3 = json_array_get(param_2, local_c);
            iVar4 = json_equal(uVar5, uVar3);
            if (iVar4 == 0) {
                return 0;
            }
        }
        uVar5 = 1;
    } else {
        uVar5 = 0;
    }
    return uVar5;
}

int json_array_copy(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    uint local_c;

    iVar1 = json_array();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        for (local_c = 0; uVar3 = json_array_size(param_1), local_c < uVar3;
             local_c = local_c + 1) {
            uVar2 = json_array_get(param_1, local_c);
            json_array_append(iVar1, uVar2);
        }
    }
    return iVar1;
}

int json_array_deep_copy(undefined4 param_1)

{
    int iVar1;
    undefined4 uVar2;
    uint uVar3;
    uint local_c;

    iVar1 = json_array();
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        for (local_c = 0; uVar3 = json_array_size(param_1), local_c < uVar3;
             local_c = local_c + 1) {
            uVar2 = json_array_get(param_1, local_c);
            uVar2 = json_deep_copy(uVar2);
            json_array_append_new(iVar1, uVar2);
        }
    }
    return iVar1;
}

int json_string_nocheck(int param_1)

{
    undefined4 uVar1;
    int iVar2;

    if (param_1 == 0) {
        iVar2 = 0;
    } else {
        iVar2 = jsonp_malloc(0xc);
        if (iVar2 == 0) {
            iVar2 = 0;
        } else {
            json_init(iVar2, 2);
            uVar1 = jsonp_strdup(param_1);
            *(undefined4 *)(iVar2 + 8) = uVar1;
            if (*(int *)(iVar2 + 8) == 0) {
                jsonp_free(iVar2);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}

undefined4 json_string(int param_1)

{
    int iVar1;
    undefined4 uVar2;

    if ((param_1 == 0) ||
        (iVar1 = utf8_check_string(param_1, 0xffffffff), iVar1 == 0)) {
        uVar2 = 0;
    } else {
        uVar2 = json_string_nocheck(param_1);
    }
    return uVar2;
}

int json_string_value(int *param_1)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 2)) {
        iVar1 = 0;
    } else {
        iVar1 = param_1[2];
    }
    return iVar1;
}

undefined4 json_string_set_nocheck(int *param_1, int param_2)

{
    int iVar1;
    undefined4 uVar2;

    if (((param_1 == (int *)0x0) || (*param_1 != 2)) || (param_2 == 0)) {
        uVar2 = 0xffffffff;
    } else {
        iVar1 = jsonp_strdup(param_2);
        if (iVar1 == 0) {
            uVar2 = 0xffffffff;
        } else {
            jsonp_free(param_1[2]);
            param_1[2] = iVar1;
            uVar2 = 0;
        }
    }
    return uVar2;
}

undefined4 json_string_set(undefined4 param_1, int param_2)

{
    int iVar1;
    undefined4 uVar2;

    if ((param_2 == 0) ||
        (iVar1 = utf8_check_string(param_2, 0xffffffff), iVar1 == 0)) {
        uVar2 = 0xffffffff;
    } else {
        uVar2 = json_string_set_nocheck(param_1, param_2);
    }
    return uVar2;
}

void json_delete_string(int param_1)

{
    jsonp_free(*(undefined4 *)(param_1 + 8));
    jsonp_free(param_1);
    return;
}

undefined1 json_string_equal(undefined4 param_1, undefined4 param_2)

{
    char *__s1;
    char *__s2;
    int iVar1;
    undefined1 uVar2;
    bool bVar3;

    __s1 = (char *)json_string_value(param_1);
    __s2 = (char *)json_string_value(param_2);
    iVar1 = strcmp(__s1, __s2);
    bVar3 = iVar1 != 0;
    if (bVar3) {
        iVar1 = 0;
    }
    uVar2 = (undefined1)iVar1;
    if (!bVar3) {
        uVar2 = 1;
    }
    return uVar2;
}

undefined4 json_string_copy(undefined4 param_1)

{
    undefined4 uVar1;

    uVar1 = json_string_value(param_1);
    uVar1 = json_string_nocheck(uVar1);
    return uVar1;
}

int json_integer(undefined4 param_1, undefined4 param_2)

{
    int iVar1;

    iVar1 = jsonp_malloc(0x10);
    if (iVar1 == 0) {
        iVar1 = 0;
    } else {
        json_init(iVar1, 3);
        *(undefined4 *)(iVar1 + 8) = param_1;
        *(undefined4 *)(iVar1 + 0xc) = param_2;
    }
    return iVar1;
}

undefined8 json_integer_value(int *param_1)

{
    int iVar1;
    int iVar2;

    if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
        iVar1 = 0;
        iVar2 = 0;
    } else {
        iVar1 = param_1[2];
        iVar2 = param_1[3];
    }
    return CONCAT44(iVar2, iVar1);
}

undefined4 json_integer_set(int *param_1, undefined4 param_2, int param_3,
                            int param_4)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
        uVar1 = 0xffffffff;
    } else {
        param_1[2] = param_3;
        param_1[3] = param_4;
        uVar1 = 0;
    }
    return uVar1;
}

void json_delete_integer(undefined4 param_1)

{
    jsonp_free(param_1);
    return;
}

undefined1 json_integer_equal(undefined4 param_1, undefined4 param_2)

{
    undefined1 uVar1;
    int iVar2;
    bool bVar3;
    bool bVar4;
    undefined8 uVar5;
    undefined8 uVar6;

    uVar5 = json_integer_value(param_1);
    uVar6 = json_integer_value(param_2);
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    bVar3 = (int)((ulonglong)uVar5 >> 0x20) == iVar2;
    bVar4 = (int)uVar5 != (int)uVar6;
    if (!bVar3 || bVar4) {
        iVar2 = 0;
    }
    uVar1 = (undefined1)iVar2;
    if (bVar3 && !bVar4) {
        uVar1 = 1;
    }
    return uVar1;
}

undefined4 json_integer_copy(undefined4 param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;

    uVar2 = json_integer_value(param_1);
    uVar1 = json_integer((int)uVar2, (int)((ulonglong)uVar2 >> 0x20));
    return uVar1;
}

int json_real(void)

{
    int iVar1;
    double in_d0;
    undefined4 local_18;
    undefined4 uStack_14;

    iVar1 = __isnan(in_d0);
    if ((iVar1 == 0) && (iVar1 = __isinf(in_d0), iVar1 == 0)) {
        iVar1 = jsonp_malloc(0x10);
        if (iVar1 == 0) {
            iVar1 = 0;
        } else {
            json_init(iVar1, 4);
            local_18 = SUB84(in_d0, 0);
            uStack_14 = (undefined4)((ulonglong)in_d0 >> 0x20);
            *(undefined4 *)(iVar1 + 8) = local_18;
            *(undefined4 *)(iVar1 + 0xc) = uStack_14;
        }
    } else {
        iVar1 = 0;
    }
    return iVar1;
}

int json_real_value(int *param_1)

{
    int iVar1;

    if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
        iVar1 = 0;
    } else {
        iVar1 = param_1[2];
    }
    return iVar1;
}

undefined4 json_real_set(int *param_1)

{
    int iVar1;
    undefined4 uVar2;
    double in_d0;
    int local_18;
    int iStack_14;

    if ((((param_1 == (int *)0x0) || (*param_1 != 4)) ||
         (iVar1 = __isnan(in_d0), iVar1 != 0)) ||
        (iVar1 = __isinf(in_d0), iVar1 != 0)) {
        uVar2 = 0xffffffff;
    } else {
        local_18 = SUB84(in_d0, 0);
        iStack_14 = (int)((ulonglong)in_d0 >> 0x20);
        param_1[2] = local_18;
        param_1[3] = iStack_14;
        uVar2 = 0;
    }
    return uVar2;
}

void json_delete_real(undefined4 param_1)

{
    jsonp_free(param_1);
    return;
}

bool json_real_equal(undefined4 param_1, undefined4 param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 extraout_s1;
    undefined4 extraout_s1_00;

    uVar1 = json_real_value(param_1);
    uVar2 = json_real_value(param_2);
    return (double)CONCAT44(extraout_s1, uVar1) ==
           (double)CONCAT44(extraout_s1_00, uVar2);
}

undefined4 json_real_copy(undefined4 param_1)

{
    undefined4 uVar1;

    uVar1 = json_real_value(param_1);
    uVar1 = json_real(uVar1);
    return uVar1;
}

undefined4 json_number_value(int *param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;

    if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
        if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
            uVar1 = 0;
        } else {
            uVar1 = json_real_value(param_1);
        }
    } else {
        uVar2 = json_integer_value(param_1);
        uVar1 = __aeabi_l2d((int)uVar2, (int)((ulonglong)uVar2 >> 0x20));
    }
    return uVar1;
}

undefined8 *json_true(void)

{
    return &the_true_7280;
}

undefined8 *json_false(void)

{
    return &the_false_7284;
}

undefined1 *json_null(void)

{
    return &the_null_7288;
}

void json_delete(int *param_1)

{
    if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
            if ((param_1 == (int *)0x0) || (*param_1 != 2)) {
                if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
                    if ((param_1 != (int *)0x0) && (*param_1 == 4)) {
                        json_delete_real(param_1);
                    }
                } else {
                    json_delete_integer(param_1);
                }
            } else {
                json_delete_string(param_1);
            }
        } else {
            json_delete_array(param_1);
        }
    } else {
        json_delete_object(param_1);
    }
    return;
}

undefined4 json_equal(int *param_1, int *param_2)

{
    undefined4 uVar1;

    if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
        uVar1 = 0;
    } else if (*param_1 == *param_2) {
        if (param_1 == param_2) {
            uVar1 = 1;
        } else if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
            if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
                if ((param_1 == (int *)0x0) || (*param_1 != 2)) {
                    if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
                        if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
                            uVar1 = 0;
                        } else {
                            uVar1 = json_real_equal(param_1, param_2);
                        }
                    } else {
                        uVar1 = json_integer_equal(param_1, param_2);
                    }
                } else {
                    uVar1 = json_string_equal(param_1, param_2);
                }
            } else {
                uVar1 = json_array_equal(param_1, param_2);
            }
        } else {
            uVar1 = json_object_equal(param_1, param_2);
        }
    } else {
        uVar1 = 0;
    }
    return uVar1;
}

int *json_copy(int *param_1)

{
    if (param_1 == (int *)0x0) {
        param_1 = (int *)0x0;
    } else if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
            if ((param_1 == (int *)0x0) || (*param_1 != 2)) {
                if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
                    if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
                        if ((((param_1 == (int *)0x0) || (*param_1 != 5)) &&
                             ((param_1 == (int *)0x0 || (*param_1 != 6)))) &&
                            ((param_1 == (int *)0x0 || (*param_1 != 7)))) {
                            param_1 = (int *)0x0;
                        }
                    } else {
                        param_1 = (int *)json_real_copy(param_1);
                    }
                } else {
                    param_1 = (int *)json_integer_copy(param_1);
                }
            } else {
                param_1 = (int *)json_string_copy(param_1);
            }
        } else {
            param_1 = (int *)json_array_copy(param_1);
        }
    } else {
        param_1 = (int *)json_object_copy(param_1);
    }
    return param_1;
}

int *json_deep_copy(int *param_1)

{
    if (param_1 == (int *)0x0) {
        param_1 = (int *)0x0;
    } else if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
        if ((param_1 == (int *)0x0) || (*param_1 != 1)) {
            if ((param_1 == (int *)0x0) || (*param_1 != 2)) {
                if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
                    if ((param_1 == (int *)0x0) || (*param_1 != 4)) {
                        if ((((param_1 == (int *)0x0) || (*param_1 != 5)) &&
                             ((param_1 == (int *)0x0 || (*param_1 != 6)))) &&
                            ((param_1 == (int *)0x0 || (*param_1 != 7)))) {
                            param_1 = (int *)0x0;
                        }
                    } else {
                        param_1 = (int *)json_real_copy(param_1);
                    }
                } else {
                    param_1 = (int *)json_integer_copy(param_1);
                }
            } else {
                param_1 = (int *)json_string_copy(param_1);
            }
        } else {
            param_1 = (int *)json_array_deep_copy(param_1);
        }
    } else {
        param_1 = (int *)json_object_deep_copy(param_1);
    }
    return param_1;
}

void jsonp_error_init(undefined4 *param_1, int param_2)

{
    if (param_1 != (undefined4 *)0x0) {
        *(undefined1 *)(param_1 + 0x17) = 0;
        *param_1 = 0xffffffff;
        param_1[1] = 0xffffffff;
        param_1[2] = 0;
        if (param_2 == 0) {
            *(undefined1 *)(param_1 + 3) = 0;
        } else {
            jsonp_error_set_source(param_1, param_2);
        }
    }
    return;
}

void jsonp_error_set_source(int param_1, char *param_2)

{
    size_t sVar1;

    if ((param_1 != 0) && (param_2 != (char *)0x0)) {
        sVar1 = strlen(param_2);
        if (sVar1 < 0x50) {
            strcpy((char *)(param_1 + 0xc), param_2);
        } else {
            *(undefined4 *)(param_1 + 0xc) = 0x2e2e2e;
            strcpy((char *)(param_1 + 0xf), param_2 + (sVar1 - 0x4c));
        }
    }
    return;
}

void jsonp_error_set(undefined4 param_1, undefined4 param_2, undefined4 param_3,
                     undefined4 param_4, undefined4 param_5)

{
    jsonp_error_vset(param_1, param_2, param_3, param_4, param_5,
                     &stack0x00000004);
    return;
}

void jsonp_error_vset(undefined4 *param_1, undefined4 param_2,
                      undefined4 param_3, undefined4 param_4, char *param_5,
                      __gnuc_va_list param_6)

{
    if ((param_1 != (undefined4 *)0x0) && (*(char *)(param_1 + 0x17) == '\0')) {
        *param_1 = param_2;
        param_1[1] = param_3;
        param_1[2] = param_4;
        vsnprintf((char *)(param_1 + 0x17), 0xa0, param_5, param_6);
        *(undefined1 *)((int)param_1 + 0xfb) = 0;
    }
    return;
}

uint __udivsi3(uint param_1, uint param_2)

{
    uint uVar1;

    if (param_2 - 1 == 0) {
        return param_1;
    }
    if (param_2 == 0) {
        if (param_1 != 0) {
            param_1 = 0xffffffff;
        }
        uVar1 = __aeabi_idiv0(param_1);
        return uVar1;
    }
    if (param_1 <= param_2) {
        return (uint)(param_1 == param_2);
    }
    if ((param_2 & param_2 - 1) == 0) {
        return param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff);
    }
    /* WARNING: Could not recover jumptable at 0x00027990. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_00027998 +
                       (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))(
        param_1, param_2, 0);
    return uVar1;
}

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027961(void)

{
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

void __aeabi_uidivmod(int param_1, int param_2)

{
    if (param_2 != 0) {
        __udivsi3();
        return;
    }
    if (param_1 != 0) {
        param_1 = -1;
    }
    __aeabi_idiv0(param_1);
    return;
}

uint __aeabi_idiv(uint param_1, uint param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    bool bVar4;

    if (param_2 == 0) {
        bVar4 = (int)param_1 < 0;
        if (0 < (int)param_1) {
            param_1 = 0x7fffffff;
        }
        if (bVar4) {
            param_1 = 0x80000000;
        }
        uVar1 = __aeabi_idiv0(param_1);
        return uVar1;
    }
    uVar3 = param_1 ^ param_2;
    uVar1 = param_2;
    if ((int)param_2 < 0) {
        uVar1 = -param_2;
    }
    if (uVar1 - 1 == 0) {
        if ((int)param_2 < 0) {
            param_1 = -param_1;
        }
        return param_1;
    }
    uVar2 = param_1;
    if ((int)param_1 < 0) {
        uVar2 = -param_1;
    }
    if (uVar2 <= uVar1) {
        if (uVar2 < uVar1) {
            param_1 = 0;
        }
        if (uVar2 == uVar1) {
            param_1 = (int)uVar3 >> 0x1f | 1;
        }
        return param_1;
    }
    if ((uVar1 & uVar1 - 1) == 0) {
        uVar2 = uVar2 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
        if ((int)uVar3 < 0) {
            uVar2 = -uVar2;
        }
        return uVar2;
    }
    /* WARNING: Could not recover jumptable at 0x00027c18. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_00027c20 +
                       (0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar2))) * 0x10))(0);
    return uVar1;
}

/* WARNING: Control flow encountered bad instruction data */

void FUN_00027bd9(void)

{
    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
}

uint _divsi3_skip_div0_test(uint param_1, uint param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    char in_NG;

    uVar3 = param_1 ^ param_2;
    uVar1 = param_2;
    if (in_NG != '\0') {
        uVar1 = -param_2;
    }
    if (uVar1 - 1 == 0) {
        if ((int)param_2 < 0) {
            param_1 = -param_1;
        }
        return param_1;
    }
    uVar2 = param_1;
    if ((int)param_1 < 0) {
        uVar2 = -param_1;
    }
    if (uVar2 <= uVar1) {
        if (uVar2 < uVar1) {
            param_1 = 0;
        }
        if (uVar2 == uVar1) {
            param_1 = (int)uVar3 >> 0x1f | 1;
        }
        return param_1;
    }
    if ((uVar1 & uVar1 - 1) == 0) {
        uVar2 = uVar2 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
        if ((int)uVar3 < 0) {
            uVar2 = -uVar2;
        }
        return uVar2;
    }
    /* WARNING: Could not recover jumptable at 0x00027c18. Too many branches */
    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&UNK_00027c20 +
                       (0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar2))) * 0x10))(0);
    return uVar1;
}

void __aeabi_idivmod(int param_1, int param_2)

{
    bool bVar1;

    if (param_2 != 0) {
        _divsi3_skip_div0_test();
        return;
    }
    bVar1 = param_1 < 0;
    if (0 < param_1) {
        param_1 = 0x7fffffff;
    }
    if (bVar1) {
        param_1 = -0x80000000;
    }
    __aeabi_idiv0(param_1);
    return;
}

void __aeabi_drsub(undefined4 param_1, uint param_2)

{
    __aeabi_dadd(param_1, param_2 ^ 0x80000000);
    return;
}

ulonglong __subdf3(uint param_1, uint param_2, uint param_3, uint param_4)

{
    int iVar1;
    byte bVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;

    uVar6 = param_4 ^ 0x80000000;
    uVar9 = param_2 << 1;
    param_4 = param_4 << 1;
    bVar13 = ((param_2 ^ uVar6) & 0x7fffffff) == 0;
    bVar14 = bVar13 && param_1 == param_3;
    if (!bVar13 || param_1 != param_3) {
        bVar14 = uVar9 == 0 && param_1 == 0;
    }
    if (!bVar14) {
        bVar14 = param_4 == 0 && param_3 == 0;
    }
    iVar8 = (int)uVar9 >> 0x15;
    if (!bVar14) {
        bVar14 = iVar8 == -1;
    }
    iVar1 = (int)param_4 >> 0x15;
    if (!bVar14) {
        bVar14 = iVar1 == -1;
    }
    if (bVar14) {
        if (iVar8 == -1 || iVar1 == -1) {
            uVar9 = uVar6;
            uVar11 = param_3;
            if (iVar8 == -1) {
                uVar9 = param_2;
                uVar11 = param_1;
            }
            if (iVar8 != -1 || iVar1 != -1) {
                param_3 = uVar11;
                uVar6 = uVar9;
            }
            bVar14 = (uVar9 & 0xfffff) == 0;
            bVar13 = uVar11 == 0 && bVar14;
            if (uVar11 == 0 && bVar14) {
                bVar13 = param_3 == 0 && (uVar6 & 0xfffff) == 0;
            }
            if (bVar13) {
                bVar13 = uVar9 == uVar6;
            }
            if (!bVar13) {
                uVar9 = uVar9 | 0x80000;
            }
            return CONCAT44(uVar9, uVar11);
        }
        if (((param_2 ^ uVar6) & 0x7fffffff) != 0 || param_1 != param_3) {
            if (uVar9 == 0 && param_1 == 0) {
                param_1 = param_3;
                param_2 = uVar6;
            }
            return CONCAT44(param_2, param_1);
        }
        if (param_2 != uVar6) {
            return 0;
        }
        if (uVar9 >> 0x15 == 0) {
            bVar14 = (param_1 & 0x80000000) != 0;
            uVar6 = param_2 * 2 + (uint)bVar14;
            if (CARRY4(param_2, param_2) || CARRY4(param_2 * 2, (uint)bVar14)) {
                uVar6 = uVar6 | 0x80000000;
            }
            return CONCAT44(uVar6, param_1 << 1);
        }
        if (uVar9 < 0xffc00000) {
            return CONCAT44(param_2 + 0x100000, param_1);
        }
        param_2 = param_2 & 0x80000000;
    LAB_000280d4:
        return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
    }
    uVar9 = uVar9 >> 0x15;
    param_4 = param_4 >> 0x15;
    uVar11 = param_4 - uVar9;
    bVar14 = uVar11 != 0;
    if (param_4 < uVar9) {
        uVar11 = -uVar11;
    }
    uVar10 = param_1;
    uVar7 = param_2;
    if (bVar14 && uVar9 <= param_4) {
        uVar9 = uVar9 + uVar11;
        uVar10 = param_3;
        uVar7 = uVar6;
        param_3 = param_1;
        uVar6 = param_2;
    }
    if (0x36 < uVar11) {
        return CONCAT44(uVar7, uVar10);
    }
    uVar4 = uVar7 & 0xfffff | 0x100000;
    if ((uVar7 & 0x80000000) != 0) {
        bVar14 = uVar10 != 0;
        uVar10 = -uVar10;
        uVar4 = -uVar4 - (uint)bVar14;
    }
    uVar7 = uVar6 & 0xfffff | 0x100000;
    if ((uVar6 & 0x80000000) != 0) {
        bVar14 = param_3 != 0;
        param_3 = -param_3;
        uVar7 = -uVar7 - (uint)bVar14;
    }
    if (uVar9 == uVar11) {
        uVar7 = uVar7 ^ 0x100000;
        if (uVar9 == 0) {
            uVar4 = uVar4 ^ 0x100000;
            uVar9 = 1;
        } else {
            uVar11 = uVar11 - 1;
        }
    }
    uVar6 = -uVar11 + 0x20;
    if ((int)uVar11 < 0x21) {
        uVar12 = param_3 << (uVar6 & 0xff);
        param_3 = param_3 >> (uVar11 & 0xff);
        uVar3 = uVar10 + param_3;
        uVar5 = uVar7 << (uVar6 & 0xff);
        uVar6 = uVar3 + uVar5;
        uVar4 = uVar4 + CARRY4(uVar10, param_3) +
                ((int)uVar7 >> (uVar11 & 0xff)) + (uint)CARRY4(uVar3, uVar5);
    } else {
        uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
        if (param_3 != 0) {
            uVar12 = uVar12 | 2;
        }
        uVar7 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
        uVar6 = uVar10 + uVar7;
        uVar4 = uVar4 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10, uVar7);
    }
    param_2 = uVar4 & 0x80000000;
    uVar11 = uVar4;
    if ((int)uVar4 < 0) {
        bVar14 = uVar12 == 0;
        uVar12 = -uVar12;
        uVar11 = -uVar6;
        uVar6 = -(uint)!bVar14 - uVar6;
        uVar11 = -(uint)(bVar14 <= uVar11) - uVar4;
    }
    if (0xfffff < uVar11) {
        uVar10 = uVar9 - 1;
        if (0x1fffff < uVar11) {
            uVar10 = uVar11 & 1;
            uVar11 = uVar11 >> 1;
            bVar2 = (byte)uVar6;
            uVar6 = (uint)(uVar10 != 0) << 0x1f | uVar6 >> 1;
            uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
            uVar10 = uVar9;
            if (0xffbfffff < uVar9 * 0x200000)
                goto LAB_000280d4;
        }
    LAB_00027fa0:
        bVar14 = 0x7fffffff < uVar12;
        if (uVar12 == 0x80000000) {
            bVar14 = (uVar6 & 1) != 0;
        }
        return CONCAT44(uVar11 + uVar10 * 0x100000 +
                                (uint)CARRY4(uVar6, (uint)bVar14) |
                            param_2,
                        uVar6 + bVar14);
    }
    bVar13 = (uVar12 & 0x80000000) != 0;
    uVar12 = uVar12 << 1;
    uVar10 = uVar6 * 2;
    bVar14 = CARRY4(uVar6, uVar6);
    uVar6 = uVar6 * 2 + (uint)bVar13;
    uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10, (uint)bVar13));
    uVar10 = uVar9 - 2;
    if ((uVar11 & 0x100000) != 0)
        goto LAB_00027fa0;
    uVar7 = uVar6;
    uVar9 = uVar11;
    if (uVar11 == 0) {
        uVar7 = 0;
        uVar9 = uVar6;
    }
    iVar8 = LZCOUNT(uVar9);
    if (uVar11 == 0) {
        iVar8 = iVar8 + 0x20;
    }
    uVar11 = iVar8 - 0xb;
    bVar15 = SBORROW4(uVar11, 0x20);
    uVar6 = iVar8 - 0x2b;
    bVar14 = (int)uVar6 < 0;
    bVar13 = uVar6 == 0;
    if ((int)uVar11 < 0x20) {
        bVar15 = SCARRY4(uVar6, 0xc);
        iVar8 = iVar8 + -0x1f;
        bVar14 = iVar8 < 0;
        bVar13 = iVar8 == 0;
        uVar6 = uVar11;
        if (!bVar13 && bVar14 == bVar15) {
            uVar7 = uVar9 << (uVar11 & 0xff);
            uVar9 = uVar9 >> (0xcU - iVar8 & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar13 || bVar14 != bVar15) {
        uVar12 = 0x20 - uVar6;
    }
    uVar9 = uVar9 << (uVar6 & 0xff);
    if (bVar13 || bVar14 != bVar15) {
        uVar9 = uVar9 | uVar7 >> (uVar12 & 0xff);
        uVar7 = uVar7 << (uVar6 & 0xff);
    }
LAB_00028018:
    if ((int)uVar11 <= (int)uVar10) {
        return CONCAT44(uVar9 + (uVar10 - uVar11) * 0x100000 | param_2, uVar7);
    }
    uVar6 = ~(uVar10 - uVar11);
    if ((int)uVar6 < 0x1f) {
        iVar8 = uVar6 - 0x13;
        if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar6 - 0x1f, 0xc)) {
            return CONCAT44(uVar4, uVar7 >> (0x20 - (0xcU - iVar8) & 0xff) |
                                       uVar9 << (0xcU - iVar8 & 0xff)) &
                   0x80000000ffffffff;
        }
        uVar6 = uVar6 + 1;
        return CONCAT44(param_2 | uVar9 >> (uVar6 & 0xff),
                        uVar7 >> (uVar6 & 0xff) | uVar9
                                                      << (0x20 - uVar6 & 0xff));
    }
    return CONCAT44(uVar4, uVar9 >> (uVar6 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

ulonglong __aeabi_dadd(uint param_1, uint param_2, uint param_3, uint param_4)

{
    int iVar1;
    byte bVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    uint uVar12;
    bool bVar13;
    bool bVar14;
    bool bVar15;

    uVar7 = param_2 << 1;
    uVar9 = param_4 << 1;
    bVar13 = ((param_2 ^ param_4) & 0x7fffffff) == 0;
    bVar14 = bVar13 && param_1 == param_3;
    if (!bVar13 || param_1 != param_3) {
        bVar14 = uVar7 == 0 && param_1 == 0;
    }
    if (!bVar14) {
        bVar14 = uVar9 == 0 && param_3 == 0;
    }
    iVar6 = (int)uVar7 >> 0x15;
    if (!bVar14) {
        bVar14 = iVar6 == -1;
    }
    iVar1 = (int)uVar9 >> 0x15;
    if (!bVar14) {
        bVar14 = iVar1 == -1;
    }
    if (bVar14) {
        if (iVar6 == -1 || iVar1 == -1) {
            uVar9 = param_4;
            uVar7 = param_3;
            if (iVar6 == -1) {
                uVar9 = param_2;
                uVar7 = param_1;
            }
            if (iVar6 != -1 || iVar1 != -1) {
                param_3 = uVar7;
                param_4 = uVar9;
            }
            bVar14 = (uVar9 & 0xfffff) == 0;
            bVar13 = uVar7 == 0 && bVar14;
            if (uVar7 == 0 && bVar14) {
                bVar13 = param_3 == 0 && (param_4 & 0xfffff) == 0;
            }
            if (bVar13) {
                bVar13 = uVar9 == param_4;
            }
            if (!bVar13) {
                uVar9 = uVar9 | 0x80000;
            }
            return CONCAT44(uVar9, uVar7);
        }
        if (((param_2 ^ param_4) & 0x7fffffff) != 0 || param_1 != param_3) {
            if (uVar7 == 0 && param_1 == 0) {
                param_1 = param_3;
                param_2 = param_4;
            }
            return CONCAT44(param_2, param_1);
        }
        if (param_2 != param_4) {
            return 0;
        }
        if (uVar7 >> 0x15 == 0) {
            bVar14 = (param_1 & 0x80000000) != 0;
            uVar9 = param_2 * 2 + (uint)bVar14;
            if (CARRY4(param_2, param_2) || CARRY4(param_2 * 2, (uint)bVar14)) {
                uVar9 = uVar9 | 0x80000000;
            }
            return CONCAT44(uVar9, param_1 << 1);
        }
        if (uVar7 < 0xffc00000) {
            return CONCAT44(param_2 + 0x100000, param_1);
        }
        param_2 = param_2 & 0x80000000;
    LAB_000280d4:
        return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
    }
    uVar7 = uVar7 >> 0x15;
    uVar9 = uVar9 >> 0x15;
    uVar10 = uVar9 - uVar7;
    bVar14 = uVar10 != 0;
    if (uVar9 < uVar7) {
        uVar10 = -uVar10;
    }
    uVar8 = param_1;
    uVar5 = param_2;
    if (bVar14 && uVar7 <= uVar9) {
        uVar7 = uVar7 + uVar10;
        uVar8 = param_3;
        uVar5 = param_4;
        param_3 = param_1;
        param_4 = param_2;
    }
    if (0x36 < uVar10) {
        return CONCAT44(uVar5, uVar8);
    }
    uVar9 = uVar5 & 0xfffff | 0x100000;
    if ((uVar5 & 0x80000000) != 0) {
        bVar14 = uVar8 != 0;
        uVar8 = -uVar8;
        uVar9 = -uVar9 - (uint)bVar14;
    }
    uVar5 = param_4 & 0xfffff | 0x100000;
    if ((param_4 & 0x80000000) != 0) {
        bVar14 = param_3 != 0;
        param_3 = -param_3;
        uVar5 = -uVar5 - (uint)bVar14;
    }
    if (uVar7 == uVar10) {
        uVar5 = uVar5 ^ 0x100000;
        if (uVar7 == 0) {
            uVar9 = uVar9 ^ 0x100000;
            uVar7 = 1;
        } else {
            uVar10 = uVar10 - 1;
        }
    }
    uVar12 = -uVar10 + 0x20;
    if ((int)uVar10 < 0x21) {
        uVar11 = param_3 << (uVar12 & 0xff);
        param_3 = param_3 >> (uVar10 & 0xff);
        uVar3 = uVar8 + param_3;
        uVar4 = uVar5 << (uVar12 & 0xff);
        uVar12 = uVar3 + uVar4;
        uVar9 = uVar9 + CARRY4(uVar8, param_3) +
                ((int)uVar5 >> (uVar10 & 0xff)) + (uint)CARRY4(uVar3, uVar4);
    } else {
        uVar11 = uVar5 << (-uVar10 + 0x40 & 0xff);
        if (param_3 != 0) {
            uVar11 = uVar11 | 2;
        }
        uVar5 = (int)uVar5 >> (uVar10 - 0x20 & 0xff);
        uVar12 = uVar8 + uVar5;
        uVar9 = uVar9 + ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar8, uVar5);
    }
    param_2 = uVar9 & 0x80000000;
    uVar10 = uVar9;
    if ((int)uVar9 < 0) {
        bVar14 = uVar11 == 0;
        uVar11 = -uVar11;
        uVar10 = -uVar12;
        uVar12 = -(uint)!bVar14 - uVar12;
        uVar10 = -(uint)(bVar14 <= uVar10) - uVar9;
    }
    if (0xfffff < uVar10) {
        uVar8 = uVar7 - 1;
        if (0x1fffff < uVar10) {
            uVar9 = uVar10 & 1;
            uVar10 = uVar10 >> 1;
            bVar2 = (byte)uVar12;
            uVar12 = (uint)(uVar9 != 0) << 0x1f | uVar12 >> 1;
            uVar11 = (uint)(bVar2 & 1) << 0x1f | uVar11 >> 1;
            uVar8 = uVar7;
            if (0xffbfffff < uVar7 * 0x200000)
                goto LAB_000280d4;
        }
    LAB_00027fa0:
        bVar14 = 0x7fffffff < uVar11;
        if (uVar11 == 0x80000000) {
            bVar14 = (uVar12 & 1) != 0;
        }
        return CONCAT44(uVar10 + uVar8 * 0x100000 +
                                (uint)CARRY4(uVar12, (uint)bVar14) |
                            param_2,
                        uVar12 + bVar14);
    }
    bVar13 = (uVar11 & 0x80000000) != 0;
    uVar11 = uVar11 << 1;
    uVar8 = uVar12 * 2;
    bVar14 = CARRY4(uVar12, uVar12);
    uVar12 = uVar12 * 2 + (uint)bVar13;
    uVar10 = uVar10 * 2 + (uint)(bVar14 || CARRY4(uVar8, (uint)bVar13));
    uVar8 = uVar7 - 2;
    if ((uVar10 & 0x100000) != 0)
        goto LAB_00027fa0;
    uVar5 = uVar12;
    uVar7 = uVar10;
    if (uVar10 == 0) {
        uVar5 = 0;
        uVar7 = uVar12;
    }
    iVar6 = LZCOUNT(uVar7);
    if (uVar10 == 0) {
        iVar6 = iVar6 + 0x20;
    }
    uVar12 = iVar6 - 0xb;
    bVar15 = SBORROW4(uVar12, 0x20);
    uVar10 = iVar6 - 0x2b;
    bVar14 = (int)uVar10 < 0;
    bVar13 = uVar10 == 0;
    if ((int)uVar12 < 0x20) {
        bVar15 = SCARRY4(uVar10, 0xc);
        iVar6 = iVar6 + -0x1f;
        bVar14 = iVar6 < 0;
        bVar13 = iVar6 == 0;
        uVar10 = uVar12;
        if (!bVar13 && bVar14 == bVar15) {
            uVar5 = uVar7 << (uVar12 & 0xff);
            uVar7 = uVar7 >> (0xcU - iVar6 & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar13 || bVar14 != bVar15) {
        uVar11 = 0x20 - uVar10;
    }
    uVar7 = uVar7 << (uVar10 & 0xff);
    if (bVar13 || bVar14 != bVar15) {
        uVar7 = uVar7 | uVar5 >> (uVar11 & 0xff);
        uVar5 = uVar5 << (uVar10 & 0xff);
    }
LAB_00028018:
    if ((int)uVar12 <= (int)uVar8) {
        return CONCAT44(uVar7 + (uVar8 - uVar12) * 0x100000 | param_2, uVar5);
    }
    uVar10 = ~(uVar8 - uVar12);
    if ((int)uVar10 < 0x1f) {
        iVar6 = uVar10 - 0x13;
        if (iVar6 != 0 && iVar6 < 0 == SCARRY4(uVar10 - 0x1f, 0xc)) {
            return CONCAT44(uVar9, uVar5 >> (0x20 - (0xcU - iVar6) & 0xff) |
                                       uVar7 << (0xcU - iVar6 & 0xff)) &
                   0x80000000ffffffff;
        }
        uVar10 = uVar10 + 1;
        return CONCAT44(param_2 | uVar7 >> (uVar10 & 0xff),
                        uVar5 >> (uVar10 & 0xff) |
                            uVar7 << (0x20 - uVar10 & 0xff));
    }
    return CONCAT44(uVar9, uVar7 >> (uVar10 - 0x1f & 0xff)) &
           0x80000000ffffffff;
}

ulonglong __aeabi_ui2d(uint param_1)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    uint in_r12;
    bool bVar5;
    bool bVar6;
    bool bVar7;

    if (param_1 == 0) {
        return 0;
    }
    uVar1 = 0;
    iVar3 = LZCOUNT(param_1);
    uVar4 = iVar3 + 0x15;
    bVar7 = SBORROW4(uVar4, 0x20);
    uVar2 = iVar3 - 0xb;
    bVar5 = (int)uVar2 < 0;
    bVar6 = uVar2 == 0;
    if (uVar4 < 0x20) {
        bVar7 = SCARRY4(uVar2, 0xc);
        bVar5 = false;
        bVar6 = iVar3 + 1 == 0;
        uVar2 = uVar4;
        if (!bVar6 && !bVar7) {
            uVar1 = param_1 << uVar4;
            param_1 = param_1 >> (0xcU - (iVar3 + 1) & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar6 || bVar5 != bVar7) {
        in_r12 = 0x20 - uVar2;
    }
    param_1 = param_1 << (uVar2 & 0xff);
    if (bVar6 || bVar5 != bVar7) {
        param_1 = param_1 | 0U >> (in_r12 & 0xff);
        uVar1 = 0 << (uVar2 & 0xff);
    }
LAB_00028018:
    if (uVar4 < 0x433) {
        return CONCAT44(param_1 + (0x432 - uVar4) * 0x100000, uVar1);
    }
    uVar2 = ~(0x432 - uVar4);
    if (0x1e < (int)uVar2) {
        return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
    }
    iVar3 = uVar2 - 0x13;
    if (iVar3 == 0 || iVar3 < 0 != SCARRY4(uVar2 - 0x1f, 0xc)) {
        uVar2 = uVar2 + 1;
        return CONCAT44(param_1 >> (uVar2 & 0xff),
                        uVar1 >> (uVar2 & 0xff) | param_1
                                                      << (0x20 - uVar2 & 0xff));
    }
    return (ulonglong)(uVar1 >> (0x20 - (0xcU - iVar3) & 0xff) |
                       param_1 << (0xcU - iVar3 & 0xff));
}

ulonglong __floatsidf(uint param_1)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    uint uVar5;
    uint uVar6;
    uint in_r12;
    bool bVar7;
    bool bVar8;
    bool bVar9;

    if (param_1 == 0) {
        return 0;
    }
    uVar6 = param_1 & 0x80000000;
    uVar2 = param_1;
    if ((int)uVar6 < 0) {
        uVar2 = -param_1;
    }
    uVar1 = 0;
    iVar4 = LZCOUNT(uVar2);
    uVar5 = iVar4 + 0x15;
    bVar9 = SBORROW4(uVar5, 0x20);
    uVar3 = iVar4 - 0xb;
    bVar7 = (int)uVar3 < 0;
    bVar8 = uVar3 == 0;
    if (uVar5 < 0x20) {
        bVar9 = SCARRY4(uVar3, 0xc);
        bVar7 = false;
        bVar8 = iVar4 + 1 == 0;
        uVar3 = uVar5;
        if (!bVar8 && !bVar9) {
            uVar1 = uVar2 << uVar5;
            uVar2 = uVar2 >> (0xcU - (iVar4 + 1) & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar8 || bVar7 != bVar9) {
        in_r12 = 0x20 - uVar3;
    }
    uVar2 = uVar2 << (uVar3 & 0xff);
    if (bVar8 || bVar7 != bVar9) {
        uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
        uVar1 = 0 << (uVar3 & 0xff);
    }
LAB_00028018:
    if (uVar5 < 0x433) {
        return CONCAT44(uVar2 + (0x432 - uVar5) * 0x100000 | uVar6, uVar1);
    }
    uVar3 = ~(0x432 - uVar5);
    if (0x1e < (int)uVar3) {
        return CONCAT44(param_1, uVar2 >> (uVar3 - 0x1f & 0xff)) &
               0x80000000ffffffff;
    }
    iVar4 = uVar3 - 0x13;
    if (iVar4 == 0 || iVar4 < 0 != SCARRY4(uVar3 - 0x1f, 0xc)) {
        uVar3 = uVar3 + 1;
        return CONCAT44(uVar6 | uVar2 >> (uVar3 & 0xff),
                        uVar1 >> (uVar3 & 0xff) | uVar2
                                                      << (0x20 - uVar3 & 0xff));
    }
    return CONCAT44(param_1, uVar1 >> (0x20 - (0xcU - iVar4) & 0xff) |
                                 uVar2 << (0xcU - iVar4 & 0xff)) &
           0x80000000ffffffff;
}

ulonglong __extendsfdf2(uint param_1, undefined4 param_2, undefined4 param_3,
                        uint param_4)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    uint uVar7;
    uint in_r12;
    bool bVar8;
    bool bVar9;
    bool bVar10;

    uVar5 = param_1 << 1;
    bVar9 = uVar5 == 0;
    uVar1 = (uint)((param_1 & 0x80000000) != 0) << 0x1f;
    uVar4 = (uint)((int)uVar5 >> 3) >> 1;
    uVar3 = uVar1 | uVar4;
    param_1 = param_1 << 0x1d;
    if (!bVar9) {
        param_4 = uVar5 & 0xff000000;
        bVar9 = param_4 == 0;
    }
    if (!bVar9) {
        bVar9 = param_4 == 0xff000000;
    }
    if (!bVar9) {
        return CONCAT44(uVar3, param_1) ^ 0x3800000000000000;
    }
    if (uVar5 == 0 || param_4 == 0xff000000) {
        return CONCAT44(uVar3, param_1);
    }
    uVar2 = param_1;
    uVar5 = uVar4;
    if (uVar4 == 0) {
        uVar2 = 0;
        uVar5 = param_1;
    }
    iVar6 = LZCOUNT(uVar5);
    if (uVar4 == 0) {
        iVar6 = iVar6 + 0x20;
    }
    uVar7 = iVar6 - 0xb;
    bVar10 = SBORROW4(uVar7, 0x20);
    uVar4 = iVar6 - 0x2b;
    bVar9 = (int)uVar4 < 0;
    bVar8 = uVar4 == 0;
    if ((int)uVar7 < 0x20) {
        bVar10 = SCARRY4(uVar4, 0xc);
        iVar6 = iVar6 + -0x1f;
        bVar9 = iVar6 < 0;
        bVar8 = iVar6 == 0;
        uVar4 = uVar7;
        if (!bVar8 && bVar9 == bVar10) {
            uVar2 = uVar5 << (uVar7 & 0xff);
            uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar8 || bVar9 != bVar10) {
        in_r12 = 0x20 - uVar4;
    }
    uVar5 = uVar5 << (uVar4 & 0xff);
    if (bVar8 || bVar9 != bVar10) {
        uVar5 = uVar5 | uVar2 >> (in_r12 & 0xff);
        uVar2 = uVar2 << (uVar4 & 0xff);
    }
LAB_00028018:
    if ((int)uVar7 < 0x381) {
        return CONCAT44(uVar5 + (0x380 - uVar7) * 0x100000 | uVar1, uVar2);
    }
    uVar4 = ~(0x380 - uVar7);
    if ((int)uVar4 < 0x1f) {
        iVar6 = uVar4 - 0x13;
        if (iVar6 != 0 && iVar6 < 0 == SCARRY4(uVar4 - 0x1f, 0xc)) {
            return CONCAT44(uVar3, uVar2 >> (0x20 - (0xcU - iVar6) & 0xff) |
                                       uVar5 << (0xcU - iVar6 & 0xff)) &
                   0x80000000ffffffff;
        }
        uVar4 = uVar4 + 1;
        return CONCAT44(uVar1 | uVar5 >> (uVar4 & 0xff),
                        uVar2 >> (uVar4 & 0xff) | uVar5
                                                      << (0x20 - uVar4 & 0xff));
    }
    return CONCAT44(uVar3, uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

ulonglong __floatundidf(uint param_1, uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    bool bVar9;
    bool bVar10;
    bool bVar11;

    if (param_1 == 0 && param_2 == 0) {
        return CONCAT44(param_2, param_1);
    }
    iVar7 = 0x432;
    uVar8 = param_2 >> 0x16;
    if (uVar8 != 0) {
        iVar7 = 3;
        if (param_2 >> 0x19 != 0) {
            iVar7 = 6;
        }
        if (param_2 >> 0x1c != 0) {
            iVar7 = iVar7 + 3;
        }
        uVar4 = iVar7 - ((int)param_2 >> 0x1f);
        uVar8 = param_1 << (0x20 - uVar4 & 0xff);
        param_1 = param_1 >> (uVar4 & 0xff) | param_2 << (0x20 - uVar4 & 0xff);
        param_2 = param_2 >> (uVar4 & 0xff);
        iVar7 = uVar4 + 0x432;
    }
    if (0xfffff < param_2) {
        if (0x1fffff < param_2) {
            uVar4 = param_2 & 1;
            param_2 = param_2 >> 1;
            bVar1 = (byte)param_1;
            param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
            uVar8 = (uint)(bVar1 & 1) << 0x1f | uVar8 >> 1;
            iVar7 = iVar7 + 1;
            if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
                return 0x7ff0000000000000;
            }
        }
    LAB_00027fa0:
        bVar10 = 0x7fffffff < uVar8;
        if (uVar8 == 0x80000000) {
            bVar10 = (param_1 & 1) != 0;
        }
        return CONCAT44(param_2 + iVar7 * 0x100000 +
                            (uint)CARRY4(param_1, (uint)bVar10),
                        param_1 + bVar10);
    }
    bVar9 = (uVar8 & 0x80000000) != 0;
    uVar8 = uVar8 << 1;
    uVar4 = param_1 * 2;
    bVar10 = CARRY4(param_1, param_1);
    param_1 = param_1 * 2 + (uint)bVar9;
    param_2 = param_2 * 2 + (uint)(bVar10 || CARRY4(uVar4, (uint)bVar9));
    iVar7 = iVar7 + -1;
    if ((param_2 & 0x100000) != 0)
        goto LAB_00027fa0;
    uVar2 = param_1;
    uVar4 = param_2;
    if (param_2 == 0) {
        uVar2 = 0;
        uVar4 = param_1;
    }
    iVar5 = LZCOUNT(uVar4);
    if (param_2 == 0) {
        iVar5 = iVar5 + 0x20;
    }
    uVar6 = iVar5 - 0xb;
    bVar11 = SBORROW4(uVar6, 0x20);
    uVar3 = iVar5 - 0x2b;
    bVar10 = (int)uVar3 < 0;
    bVar9 = uVar3 == 0;
    if ((int)uVar6 < 0x20) {
        bVar11 = SCARRY4(uVar3, 0xc);
        iVar5 = iVar5 + -0x1f;
        bVar10 = iVar5 < 0;
        bVar9 = iVar5 == 0;
        uVar3 = uVar6;
        if (!bVar9 && bVar10 == bVar11) {
            uVar2 = uVar4 << (uVar6 & 0xff);
            uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar9 || bVar10 != bVar11) {
        uVar8 = 0x20 - uVar3;
    }
    uVar4 = uVar4 << (uVar3 & 0xff);
    if (bVar9 || bVar10 != bVar11) {
        uVar4 = uVar4 | uVar2 >> (uVar8 & 0xff);
        uVar2 = uVar2 << (uVar3 & 0xff);
    }
LAB_00028018:
    if ((int)uVar6 <= iVar7) {
        return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000, uVar2);
    }
    uVar8 = ~(iVar7 - uVar6);
    if (0x1e < (int)uVar8) {
        return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
    }
    iVar7 = uVar8 - 0x13;
    if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar8 - 0x1f, 0xc)) {
        uVar8 = uVar8 + 1;
        return CONCAT44(uVar4 >> (uVar8 & 0xff),
                        uVar2 >> (uVar8 & 0xff) | uVar4
                                                      << (0x20 - uVar8 & 0xff));
    }
    return (ulonglong)(uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                       uVar4 << (0xcU - iVar7 & 0xff));
}

ulonglong __aeabi_l2d(uint param_1, uint param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    bool bVar10;
    bool bVar11;
    bool bVar12;

    if (param_1 == 0 && param_2 == 0) {
        return CONCAT44(param_2, param_1);
    }
    uVar8 = param_2 & 0x80000000;
    uVar3 = param_2;
    if ((int)uVar8 < 0) {
        bVar11 = param_1 != 0;
        param_1 = -param_1;
        uVar3 = -param_2 - (uint)bVar11;
    }
    iVar7 = 0x432;
    uVar9 = uVar3 >> 0x16;
    if (uVar9 != 0) {
        iVar7 = 3;
        if (uVar3 >> 0x19 != 0) {
            iVar7 = 6;
        }
        if (uVar3 >> 0x1c != 0) {
            iVar7 = iVar7 + 3;
        }
        uVar4 = iVar7 - ((int)uVar3 >> 0x1f);
        uVar9 = param_1 << (0x20 - uVar4 & 0xff);
        param_1 = param_1 >> (uVar4 & 0xff) | uVar3 << (0x20 - uVar4 & 0xff);
        uVar3 = uVar3 >> (uVar4 & 0xff);
        iVar7 = uVar4 + 0x432;
    }
    if (0xfffff < uVar3) {
        if (0x1fffff < uVar3) {
            uVar4 = uVar3 & 1;
            uVar3 = uVar3 >> 1;
            bVar1 = (byte)param_1;
            param_1 = (uint)(uVar4 != 0) << 0x1f | param_1 >> 1;
            uVar9 = (uint)(bVar1 & 1) << 0x1f | uVar9 >> 1;
            iVar7 = iVar7 + 1;
            if (0xffbfffff < (uint)(iVar7 * 0x200000)) {
                return (ulonglong)(uVar8 | 0x7ff00000) << 0x20;
            }
        }
    LAB_00027fa0:
        bVar11 = 0x7fffffff < uVar9;
        if (uVar9 == 0x80000000) {
            bVar11 = (param_1 & 1) != 0;
        }
        return CONCAT44(uVar3 + iVar7 * 0x100000 +
                                (uint)CARRY4(param_1, (uint)bVar11) |
                            uVar8,
                        param_1 + bVar11);
    }
    bVar10 = (uVar9 & 0x80000000) != 0;
    uVar9 = uVar9 << 1;
    uVar4 = param_1 * 2;
    bVar11 = CARRY4(param_1, param_1);
    param_1 = param_1 * 2 + (uint)bVar10;
    uVar3 = uVar3 * 2 + (uint)(bVar11 || CARRY4(uVar4, (uint)bVar10));
    iVar7 = iVar7 + -1;
    if ((uVar3 & 0x100000) != 0)
        goto LAB_00027fa0;
    uVar2 = param_1;
    uVar4 = uVar3;
    if (uVar3 == 0) {
        uVar2 = 0;
        uVar4 = param_1;
    }
    iVar5 = LZCOUNT(uVar4);
    if (uVar3 == 0) {
        iVar5 = iVar5 + 0x20;
    }
    uVar6 = iVar5 - 0xb;
    bVar12 = SBORROW4(uVar6, 0x20);
    uVar3 = iVar5 - 0x2b;
    bVar11 = (int)uVar3 < 0;
    bVar10 = uVar3 == 0;
    if ((int)uVar6 < 0x20) {
        bVar12 = SCARRY4(uVar3, 0xc);
        iVar5 = iVar5 + -0x1f;
        bVar11 = iVar5 < 0;
        bVar10 = iVar5 == 0;
        uVar3 = uVar6;
        if (!bVar10 && bVar11 == bVar12) {
            uVar2 = uVar4 << (uVar6 & 0xff);
            uVar4 = uVar4 >> (0xcU - iVar5 & 0xff);
            goto LAB_00028018;
        }
    }
    if (bVar10 || bVar11 != bVar12) {
        uVar9 = 0x20 - uVar3;
    }
    uVar4 = uVar4 << (uVar3 & 0xff);
    if (bVar10 || bVar11 != bVar12) {
        uVar4 = uVar4 | uVar2 >> (uVar9 & 0xff);
        uVar2 = uVar2 << (uVar3 & 0xff);
    }
LAB_00028018:
    if ((int)uVar6 <= iVar7) {
        return CONCAT44(uVar4 + (iVar7 - uVar6) * 0x100000 | uVar8, uVar2);
    }
    uVar3 = ~(iVar7 - uVar6);
    if (0x1e < (int)uVar3) {
        return CONCAT44(param_2, uVar4 >> (uVar3 - 0x1f & 0xff)) &
               0x80000000ffffffff;
    }
    iVar7 = uVar3 - 0x13;
    if (iVar7 == 0 || iVar7 < 0 != SCARRY4(uVar3 - 0x1f, 0xc)) {
        uVar3 = uVar3 + 1;
        return CONCAT44(uVar8 | uVar4 >> (uVar3 & 0xff),
                        uVar2 >> (uVar3 & 0xff) | uVar4
                                                      << (0x20 - uVar3 & 0xff));
    }
    return CONCAT44(param_2, uVar2 >> (0x20 - (0xcU - iVar7) & 0xff) |
                                 uVar4 << (0xcU - iVar7 & 0xff)) &
           0x80000000ffffffff;
}

void __aeabi_idiv0(void)

{
    raise(8);
    return;
}

void __libc_csu_init(EVP_PKEY_CTX *param_1, undefined4 param_2,
                     undefined4 param_3, undefined4 param_4)

{
    int iVar1;
    undefined4 *puVar2;

    _init(param_1);
    puVar2 = (undefined4 *)0x35320;
    iVar1 = 0;
    do {
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + 1;
        (*(code *)*puVar2)(param_1, param_2, param_3, (code *)*puVar2, param_4);
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
