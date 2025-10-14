source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }

@0 = external local_unnamed_addr global i32
@global_var_11ce4 = local_unnamed_addr global i32 34220
@global_var_11ce8 = local_unnamed_addr global i32 34220
@global_var_11cec = local_unnamed_addr global i32 34220
@global_var_11cf0 = local_unnamed_addr global i32 34220
@global_var_11cf4 = local_unnamed_addr global i32 34220
@global_var_11cf8 = local_unnamed_addr global i32 34220
@global_var_11cfc = local_unnamed_addr global i32 34220
@global_var_11d00 = local_unnamed_addr global i32 34220
@global_var_11d04 = local_unnamed_addr global i32 34220
@global_var_11d08 = local_unnamed_addr global i32 34220
@global_var_11d0c = local_unnamed_addr global i32 34220
@global_var_11d10 = local_unnamed_addr global i32 34220
@global_var_11d14 = local_unnamed_addr global i32 34220
@global_var_11d18 = local_unnamed_addr global i32 34220
@global_var_11d1c = local_unnamed_addr global i32 34220
@global_var_11d20 = local_unnamed_addr global i32 34220
@global_var_11d24 = local_unnamed_addr global i32 34220
@global_var_8de8 = local_unnamed_addr constant i32 37852
@global_var_93dc = constant [11 x i8] c"/dev/i2c-0\00"
@global_var_8dec = local_unnamed_addr constant i32 73032
@global_var_8df0 = local_unnamed_addr constant i32 38628
@global_var_96e4 = constant [12 x i8] c"d:a:p:wyf:h\00"
@global_var_8df4 = local_unnamed_addr constant i32 38572
@global_var_96ac = constant [3 x i8] c"%d\00"
@global_var_8df8 = local_unnamed_addr constant i32 73016
@global_var_8dfc = local_unnamed_addr constant i32 38576
@global_var_96b0 = constant [50 x i8] c"Cannot parse '%s' as number of pages, example: 8\0A\00"
@global_var_8e00 = local_unnamed_addr constant i32 37880
@global_var_93f8 = constant [51 x i8] c"%s [-d dev] [-a adr] [-p pgs] [-w] [-y] [-f file]\0A\00"
@global_var_8e04 = local_unnamed_addr constant i32 37932
@global_var_942c = constant [40 x i8] c"\09dev: device, e.g. /dev/i2c-0    (def)\0A\00"
@global_var_8e08 = local_unnamed_addr constant i32 37972
@global_var_9454 = constant [45 x i8] c"\09adr: base address of eeprom, eg 0xA0 (def)\0A\00"
@global_var_8e0c = local_unnamed_addr constant i32 38020
@global_var_9484 = constant [43 x i8] c"\09pgs: number of pages to read, eg 8 (def)\0A\00"
@global_var_8e10 = local_unnamed_addr constant i32 38064
@global_var_94b0 = constant [45 x i8] c"\09-w : write to eeprom (default is reading!)\0A\00"
@global_var_8e14 = local_unnamed_addr constant i32 38112
@global_var_94e0 = constant [59 x i8] c"\09-y : suppress warning when writing (default is to warn!)\0A\00"
@global_var_8e18 = local_unnamed_addr constant i32 38172
@global_var_951c = constant [45 x i8] c"\09-f file: copy eeprom contents to/from file\0A\00"
@global_var_8e1c = local_unnamed_addr constant i32 38220
@global_var_954c = constant [67 x i8] c"\09         (default for read is test only; for write is all zeros)\0A\00"
@global_var_8e20 = local_unnamed_addr constant i32 38288
@global_var_9590 = constant [26 x i8] c"Note on pages/addresses:\0A\00"
@global_var_8e24 = local_unnamed_addr constant i32 38316
@global_var_95ac = constant [52 x i8] c"\09eeproms with more than 256 byte appear as if they\0A\00"
@global_var_8e28 = local_unnamed_addr constant i32 38368
@global_var_95e0 = constant [61 x i8] c"\09were several eeproms with consecutive addresses on the bus\0A\00"
@global_var_8e2c = local_unnamed_addr constant i32 38432
@global_var_9620 = constant [60 x i8] c"\09so we might as well address several separate eeproms with\0A\00"
@global_var_8e30 = local_unnamed_addr constant i32 38492
@global_var_965c = constant [28 x i8] c"\09increasing addresses....\0A\0A\00"
@global_var_8e34 = local_unnamed_addr constant i32 38520
@global_var_9678 = constant [5 x i8] c"0x%x\00"
@global_var_8e38 = local_unnamed_addr constant i32 38528
@global_var_9680 = constant [44 x i8] c"Cannot parse '%s' as addrs., example: 0xa0\0A\00"
@global_var_8e3c = local_unnamed_addr constant i32 38640
@global_var_96f0 = constant [40 x i8] c"base-address of eeproms       : 0x%02x\0A\00"
@global_var_8e40 = local_unnamed_addr constant i32 38680
@global_var_9718 = constant [55 x i8] c"number of pages to read       : %d (0x%02x .. 0x%02x)\0A\00"
@global_var_8e44 = local_unnamed_addr constant i32 37872
@global_var_93f0 = constant [8 x i8] c"writing\00"
@global_var_8e48 = local_unnamed_addr constant i32 37864
@global_var_93e8 = constant [8 x i8] c"reading\00"
@global_var_8e4c = local_unnamed_addr constant i32 38788
@global_var_9784 = constant [32 x i8] c"file opened for %7s       : %s\0A\00"
@global_var_8e50 = local_unnamed_addr constant i32 38820
@global_var_97a4 = constant [36 x i8] c"            on filedescriptor : %d\0A\00"
@global_var_8e54 = local_unnamed_addr constant i32 38884
@global_var_97e4 = constant [36 x i8] c"i2c-devicenode is             : %s\0A\00"
@global_var_8e58 = local_unnamed_addr constant i32 38920
@global_var_9808 = constant [37 x i8] c"            on filedescriptor : %d\0A\0A\00"
@global_var_8e5c = local_unnamed_addr constant i32 39816
@global_var_9b88 = constant [52 x i8] c"File '%s' is too small, padding eeprom with zeroes\0A\00"
@global_var_8e60 = local_unnamed_addr constant i32 39868
@global_var_9bbc = constant [27 x i8] c"Cannot write to file '%s'\0A\00"
@global_var_8e64 = local_unnamed_addr constant i32 38856
@global_var_97c8 = constant [26 x i8] c"Could not open i2c at %s\0A\00"
@global_var_8e68 = local_unnamed_addr constant i32 38960
@global_var_9830 = constant [13 x i8] c"**WARNING**\0A\00"
@global_var_8e6c = local_unnamed_addr constant i32 38976
@global_var_9840 = constant [46 x i8] c" - \09You have chosen to WRITE to this eeprom.\0A\00"
@global_var_8e70 = local_unnamed_addr constant i32 39024
@global_var_9870 = constant [54 x i8] c"\09Make sure that this tiny chip is *NOT* vital to the\0A\00"
@global_var_8e74 = local_unnamed_addr constant i32 39080
@global_var_98a8 = constant [55 x i8] c"\09operation of your computer as you can easily corrupt\0A\00"
@global_var_8e78 = local_unnamed_addr constant i32 39136
@global_var_98e0 = constant [56 x i8] c"\09the configuration memory of your SDRAM-memory-module,\0A\00"
@global_var_8e7c = local_unnamed_addr constant i32 39192
@global_var_9918 = constant [62 x i8] c"\09your IBM ThinkPad or whatnot...! Fixing these errors can be\0A\00"
@global_var_8e80 = local_unnamed_addr constant i32 39256
@global_var_9958 = constant [45 x i8] c"\09a time-consuming and very costly process!\0A\0A\00"
@global_var_8e84 = local_unnamed_addr constant i32 39304
@global_var_9988 = constant [21 x i8] c"Things to consider:\0A\00"
@global_var_8e88 = local_unnamed_addr constant i32 39328
@global_var_99a0 = constant [64 x i8] c" - \09You can have more than one i2c-bus, check in /proc/bus/i2c\0A\00"
@global_var_8e8c = local_unnamed_addr constant i32 39392
@global_var_99e0 = constant [38 x i8] c"\09and specify the correct one with -d\0A\00"
@global_var_8e90 = local_unnamed_addr constant i32 39432
@global_var_9a08 = constant [40 x i8] c"\09right now you have chosen to use '%s'\0A\00"
@global_var_8e94 = local_unnamed_addr constant i32 39472
@global_var_9a30 = constant [62 x i8] c" - \09A eeprom can occupy several i2c-addresses (one per page)\0A\00"
@global_var_8e98 = local_unnamed_addr constant i32 39536
@global_var_9a70 = constant [69 x i8] c"\09so please make sure that there is no vital eeprom in your computer\0A\00"
@global_var_8e9c = local_unnamed_addr constant i32 39608
@global_var_9ab8 = constant [49 x i8] c"\09sitting at addresses between 0x%02x and 0x%02x\0A\00"
@global_var_8ea0 = local_unnamed_addr constant i32 39660
@global_var_9aec = constant [25 x i8] c"Enter 'yes' to continue:\00"
@global_var_8ea4 = local_unnamed_addr constant i32 73024
@global_var_8ea8 = local_unnamed_addr constant i32 39732
@global_var_9b34 = constant [4 x i8] c"yes\00"
@global_var_8eac = local_unnamed_addr constant i32 39736
@global_var_9b38 = constant [50 x i8] c"\0A** ABORTING WRITE! **, you did not answer 'yes'\0A\00"
@global_var_8eb0 = local_unnamed_addr constant i32 38736
@global_var_9750 = constant [52 x i8] c"Could not open data-file %s for reading or writing\0A\00"
@global_var_8eb4 = local_unnamed_addr constant i32 39688
@global_var_9b08 = constant [42 x i8] c"\0ACould not read confirmation from stdin!\0A\00"
@global_var_8eb8 = local_unnamed_addr constant i32 39788
@global_var_9b6c = constant [28 x i8] c"Cannot read from file '%s'\0A\00"
@global_var_8eec = local_unnamed_addr constant i32 37548
@global_var_8ef0 = local_unnamed_addr constant i32 34444
@global_var_8ef4 = local_unnamed_addr constant i32 37448
@global_var_8f14 = local_unnamed_addr constant i32 36304
@global_var_8f18 = local_unnamed_addr constant i32 80
@global_var_11bf0 = global i32 1
@global_var_11cd8 = local_unnamed_addr global i32* @global_var_11bf0
@global_var_11d28 = local_unnamed_addr global i32 0
@global_var_8f48 = local_unnamed_addr constant i32 73012
@global_var_8f4c = local_unnamed_addr constant i32 73015
@global_var_8f50 = local_unnamed_addr constant i32 0
@global_var_8f88 = local_unnamed_addr constant i32 73012
@global_var_8f8c = local_unnamed_addr constant i32 73012
@global_var_8f90 = local_unnamed_addr constant i32 0
@global_var_8fb8 = local_unnamed_addr constant i32 73036
@global_var_8fe8 = local_unnamed_addr constant i32 72684
@global_var_11bec = global i32 0
@global_var_8fec = local_unnamed_addr constant i32 0
@global_var_9130 = local_unnamed_addr constant i32 73016
@global_var_9134 = local_unnamed_addr constant i32 37744
@global_var_9370 = constant [55 x i8] c"Positioned pointer in eeprom at 0x%02x to offset %08x\0A\00"
@global_var_9138 = local_unnamed_addr constant i32 37692
@global_var_933c = constant [49 x i8] c"Wrote %d bytes to eeprom at 0x%02x, offset %08x\0A\00"
@global_var_913c = local_unnamed_addr constant i32 37612
@global_var_92ec = constant [49 x i8] c"Sorry, len(%d)+offset(%d) > 256 (page boundary)\0A\00"
@global_var_9140 = local_unnamed_addr constant i32 37564
@global_var_92bc = constant [45 x i8] c"I can only write MAX_BYTES bytes at a time!\0A\00"
@global_var_9144 = local_unnamed_addr constant i32 37664
@global_var_9320 = constant [8 x i8] c"ioctl()\00"
@global_var_9148 = local_unnamed_addr constant i32 37672
@global_var_9328 = constant [19 x i8] c"ioctl returned %d\0A\00"
@global_var_9234 = local_unnamed_addr constant i32 73016
@global_var_9238 = local_unnamed_addr constant i32 37800
@global_var_93a8 = constant [50 x i8] c"Read %d bytes from eeprom at 0x%02x, offset %08x\0A\00"
@global_var_923c = local_unnamed_addr constant i32 37564
@global_var_9240 = local_unnamed_addr constant i32 37664
@global_var_9244 = local_unnamed_addr constant i32 37672
@global_var_92a4 = local_unnamed_addr constant i32 35200
@global_var_92a8 = local_unnamed_addr constant i32 35188
@global_var_11be8 = global i32 36756
@global_var_11be4 = global i32 36796
@1 = external global i32
@global_var_11d48 = external local_unnamed_addr global i8*
@global_var_11d38 = local_unnamed_addr global %_IO_FILE* null
@global_var_11d40 = local_unnamed_addr global %_IO_FILE* null
@global_var_92ac = constant void ()* inttoptr (i32 -516948194 to void ()*)
@global_var_9248 = constant void ()* inttoptr (i32 -382908936 to void ()*)
@global_var_11d4c = external local_unnamed_addr global i8*

define i32 @function_85a0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_85a0:
  %0 = call i32 @function_8ef8(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @read.4(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_85c0:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @fflush.3(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_85cc:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i8* @fgets.15(i8* %s, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_85d8:
  %0 = call i8* @fgets(i8* %s, i32 %n, %_IO_FILE* %stream), !insn.addr !4
  ret i8* %0, !insn.addr !4
}

define void @perror.6(i8* %s) local_unnamed_addr {
dec_label_pc_85e4:
  call void @perror(i8* %s), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @fwrite.17(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_85f0:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @ioctl.12(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_85fc:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @__libc_start_main.5(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_8608:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define void @function_8614() local_unnamed_addr {
dec_label_pc_8614:
  call void @__gmon_start__(), !insn.addr !9
  ret void, !insn.addr !9
}

define i32 @open.2(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_8620:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define void @exit.11(i32 %status) local_unnamed_addr {
dec_label_pc_862c:
  call void @exit(i32 %status), !insn.addr !11
  ret void, !insn.addr !11
}

define i32 @getopt.16(i32 %argc, i8** %argv, i8* %shortopts) local_unnamed_addr {
dec_label_pc_8638:
  %0 = call i32 @getopt(i32 %argc, i8** %argv, i8* %shortopts), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @fprintf.7(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8644:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i32 @sscanf.8(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8650:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i32 @write.14(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_865c:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @strncmp.13(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_8668:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @abort.9() local_unnamed_addr {
dec_label_pc_8674:
  call void @abort(), !insn.addr !17
  ret void, !insn.addr !17
}

define i32 @close.10(i32 %fd) local_unnamed_addr {
dec_label_pc_8680:
  %0 = call i32 @close(i32 %fd), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_868c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_868c:
  %r1.0.reg2mem = alloca i32, !insn.addr !19
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !19
  %r3.3.reg2mem = alloca i32, !insn.addr !19
  %r7.2.reg2mem = alloca i32, !insn.addr !19
  %r7.1.reg2mem = alloca i32, !insn.addr !19
  %r3.0.reg2mem = alloca i32, !insn.addr !19
  %r8.040.reg2mem = alloca i32, !insn.addr !19
  %stack_var_-320.0.reg2mem = alloca i32, !insn.addr !19
  %storemerge.reg2mem = alloca i32, !insn.addr !19
  %r7.0.ph19.lcssa.reg2mem = alloca i32, !insn.addr !19
  %r6.0.ph16.lcssa.reg2mem = alloca i32, !insn.addr !19
  %r5.0.ph12.lcssa.reg2mem = alloca i32, !insn.addr !19
  %r4.0.ph.lcssa.reg2mem = alloca i32, !insn.addr !19
  %.reg2mem193 = alloca i32, !insn.addr !19
  %r7.0.ph1949.reg2mem = alloca i32, !insn.addr !19
  %.reg2mem191 = alloca i32, !insn.addr !19
  %r6.0.ph1658.reg2mem = alloca i32, !insn.addr !19
  %r7.0.ph1759.reg2mem = alloca i32, !insn.addr !19
  %.reg2mem189 = alloca i32, !insn.addr !19
  %r5.0.ph1268.reg2mem = alloca i32, !insn.addr !19
  %r6.0.ph1369.reg2mem = alloca i32, !insn.addr !19
  %r7.0.ph1470.reg2mem = alloca i32, !insn.addr !19
  %.reg2mem187 = alloca i32, !insn.addr !19
  %r4.0.ph79.reg2mem = alloca i32, !insn.addr !19
  %r5.0.ph80.reg2mem = alloca i32, !insn.addr !19
  %r6.0.ph81.reg2mem = alloca i32, !insn.addr !19
  %r7.0.ph82.reg2mem = alloca i32, !insn.addr !19
  %.reg2mem = alloca i32, !insn.addr !19
  %stack_var_-297 = alloca i32, align 4
  %stack_var_-41 = alloca i32, align 4
  %stack_var_-296 = alloca i32, align 4
  %stack_var_-304 = alloca i32, align 4
  %stack_var_-300 = alloca i32, align 4
  store i32 8, i32* %stack_var_-300, align 4, !insn.addr !20
  store i32 80, i32* %stack_var_-304, align 4, !insn.addr !21
  %0 = inttoptr i32 %arg2 to i8**, !insn.addr !22
  %1 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0)), !insn.addr !22
  %2 = icmp slt i32 %1, 0, !insn.addr !23
  store i32 %1, i32* %.reg2mem, !insn.addr !24
  store i32 0, i32* %r7.0.ph82.reg2mem, !insn.addr !24
  store i32 0, i32* %r6.0.ph81.reg2mem, !insn.addr !24
  store i32 ptrtoint ([11 x i8]* @global_var_93dc to i32), i32* %r5.0.ph80.reg2mem, !insn.addr !24
  store i32 0, i32* %r4.0.ph79.reg2mem, !insn.addr !24
  store i32 0, i32* %r4.0.ph.lcssa.reg2mem, !insn.addr !24
  store i32 ptrtoint ([11 x i8]* @global_var_93dc to i32), i32* %r5.0.ph12.lcssa.reg2mem, !insn.addr !24
  store i32 0, i32* %r6.0.ph16.lcssa.reg2mem, !insn.addr !24
  store i32 0, i32* %r7.0.ph19.lcssa.reg2mem, !insn.addr !24
  br i1 %2, label %dec_label_pc_88ec, label %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph.lr.ph, !insn.addr !24

dec_label_pc_86dc.lr.ph.lr.ph.lr.ph.lr.ph:        ; preds = %dec_label_pc_868c, %dec_label_pc_8750
  %r4.0.ph79.reload = load i32, i32* %r4.0.ph79.reg2mem
  %r5.0.ph80.reload = load i32, i32* %r5.0.ph80.reg2mem
  %r6.0.ph81.reload = load i32, i32* %r6.0.ph81.reg2mem
  %r7.0.ph82.reload = load i32, i32* %r7.0.ph82.reg2mem
  %.reload = load i32, i32* %.reg2mem
  store i32 %.reload, i32* %.reg2mem187
  store i32 %r7.0.ph82.reload, i32* %r7.0.ph1470.reg2mem
  store i32 %r6.0.ph81.reload, i32* %r6.0.ph1369.reg2mem
  store i32 %r5.0.ph80.reload, i32* %r5.0.ph1268.reg2mem
  br label %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph

dec_label_pc_86dc.lr.ph.lr.ph.lr.ph:              ; preds = %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph.lr.ph, %dec_label_pc_88ac
  %r5.0.ph1268.reload = load i32, i32* %r5.0.ph1268.reg2mem
  %r6.0.ph1369.reload = load i32, i32* %r6.0.ph1369.reg2mem
  %r7.0.ph1470.reload = load i32, i32* %r7.0.ph1470.reg2mem
  %.reload188 = load i32, i32* %.reg2mem187
  store i32 %.reload188, i32* %.reg2mem189
  store i32 %r7.0.ph1470.reload, i32* %r7.0.ph1759.reg2mem
  store i32 %r6.0.ph1369.reload, i32* %r6.0.ph1658.reg2mem
  br label %dec_label_pc_86dc.lr.ph.lr.ph

dec_label_pc_86dc.lr.ph.lr.ph:                    ; preds = %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph, %dec_label_pc_8758
  %r6.0.ph1658.reload = load i32, i32* %r6.0.ph1658.reg2mem
  %r7.0.ph1759.reload = load i32, i32* %r7.0.ph1759.reg2mem
  %.reload190 = load i32, i32* %.reg2mem189
  store i32 %.reload190, i32* %.reg2mem191
  store i32 %r7.0.ph1759.reload, i32* %r7.0.ph1949.reg2mem
  br label %dec_label_pc_86dc.lr.ph

dec_label_pc_86dc.lr.ph:                          ; preds = %dec_label_pc_86dc.lr.ph.lr.ph, %dec_label_pc_88a4
  %r7.0.ph1949.reload = load i32, i32* %r7.0.ph1949.reg2mem
  %.reload192 = load i32, i32* %.reg2mem191
  store i32 %.reload192, i32* %.reg2mem193
  br label %dec_label_pc_86dc

dec_label_pc_86dc:                                ; preds = %dec_label_pc_86dc.lr.ph, %dec_label_pc_86c4.backedge
  %.reload194 = load i32, i32* %.reg2mem193
  %3 = add i32 %.reload194, -97, !insn.addr !25
  store i32 %3, i32* @0, align 4, !insn.addr !26
  switch i32 %.reload194, label %dec_label_pc_86c4.backedge [
    i32 97, label %dec_label_pc_88b4
    i32 121, label %dec_label_pc_8750
    i32 119, label %dec_label_pc_8758
    i32 100, label %dec_label_pc_88ac
    i32 112, label %dec_label_pc_8760
    i32 102, label %dec_label_pc_88a4
    i32 104, label %dec_label_pc_8798
  ], !insn.addr !26

dec_label_pc_8750:                                ; preds = %dec_label_pc_86dc
  %4 = add i32 %r4.0.ph79.reload, 1, !insn.addr !27
  %5 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0)), !insn.addr !22
  %6 = icmp slt i32 %5, 0, !insn.addr !23
  store i32 %5, i32* %.reg2mem, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph82.reg2mem, !insn.addr !24
  store i32 %r6.0.ph1658.reload, i32* %r6.0.ph81.reg2mem, !insn.addr !24
  store i32 %r5.0.ph1268.reload, i32* %r5.0.ph80.reg2mem, !insn.addr !24
  store i32 %4, i32* %r4.0.ph79.reg2mem, !insn.addr !24
  store i32 %4, i32* %r4.0.ph.lcssa.reg2mem, !insn.addr !24
  store i32 %r5.0.ph1268.reload, i32* %r5.0.ph12.lcssa.reg2mem, !insn.addr !24
  store i32 %r6.0.ph1658.reload, i32* %r6.0.ph16.lcssa.reg2mem, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph19.lcssa.reg2mem, !insn.addr !24
  br i1 %6, label %dec_label_pc_88ec, label %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph.lr.ph, !insn.addr !24

dec_label_pc_8758:                                ; preds = %dec_label_pc_86dc
  %7 = add i32 %r6.0.ph1658.reload, 1, !insn.addr !28
  %8 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0)), !insn.addr !22
  %9 = icmp slt i32 %8, 0, !insn.addr !23
  store i32 %8, i32* %.reg2mem189, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph1759.reg2mem, !insn.addr !24
  store i32 %7, i32* %r6.0.ph1658.reg2mem, !insn.addr !24
  store i32 %r4.0.ph79.reload, i32* %r4.0.ph.lcssa.reg2mem, !insn.addr !24
  store i32 %r5.0.ph1268.reload, i32* %r5.0.ph12.lcssa.reg2mem, !insn.addr !24
  store i32 %7, i32* %r6.0.ph16.lcssa.reg2mem, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph19.lcssa.reg2mem, !insn.addr !24
  br i1 %9, label %dec_label_pc_88ec, label %dec_label_pc_86dc.lr.ph.lr.ph, !insn.addr !24

dec_label_pc_8760:                                ; preds = %dec_label_pc_86dc
  %10 = load i8*, i8** @global_var_11d48, align 4, !insn.addr !29
  %11 = call i32 (i8*, i8*, ...) @sscanf(i8* %10, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_96ac, i32 0, i32 0), i32* nonnull %stack_var_-300), !insn.addr !30
  %12 = icmp eq i32 %11, 1, !insn.addr !31
  br i1 %12, label %dec_label_pc_86c4.backedge, label %dec_label_pc_877c, !insn.addr !32

dec_label_pc_86c4.backedge:                       ; preds = %dec_label_pc_8760, %dec_label_pc_88b4, %dec_label_pc_86dc
  %13 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0)), !insn.addr !22
  %14 = icmp slt i32 %13, 0, !insn.addr !23
  store i32 %13, i32* %.reg2mem193, !insn.addr !24
  store i32 %r4.0.ph79.reload, i32* %r4.0.ph.lcssa.reg2mem, !insn.addr !24
  store i32 %r5.0.ph1268.reload, i32* %r5.0.ph12.lcssa.reg2mem, !insn.addr !24
  store i32 %r6.0.ph1658.reload, i32* %r6.0.ph16.lcssa.reg2mem, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph19.lcssa.reg2mem, !insn.addr !24
  br i1 %14, label %dec_label_pc_88ec, label %dec_label_pc_86dc, !insn.addr !24

dec_label_pc_877c:                                ; preds = %dec_label_pc_8760
  %15 = load i8*, i8** @global_var_11d48, align 4, !insn.addr !33
  %16 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !34
  %17 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %16, i8* getelementptr inbounds ([50 x i8], [50 x i8]* @global_var_96b0, i32 0, i32 0), i8* %15), !insn.addr !35
  call void @exit(i32 1), !insn.addr !36
  unreachable, !insn.addr !36

dec_label_pc_8798:                                ; preds = %dec_label_pc_86dc
  %18 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !37
  %19 = inttoptr i32 %arg2 to i8*, !insn.addr !38
  %20 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %18, i8* getelementptr inbounds ([51 x i8], [51 x i8]* @global_var_93f8, i32 0, i32 0), i8* %19), !insn.addr !38
  %21 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !39
  %22 = call i32 @fwrite(i32* bitcast ([40 x i8]* @global_var_942c to i32*), i32 1, i32 39, %_IO_FILE* %21), !insn.addr !40
  %23 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !41
  %24 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_9454 to i32*), i32 1, i32 44, %_IO_FILE* %23), !insn.addr !42
  %25 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !43
  %26 = call i32 @fwrite(i32* bitcast ([43 x i8]* @global_var_9484 to i32*), i32 1, i32 42, %_IO_FILE* %25), !insn.addr !44
  %27 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !45
  %28 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_94b0 to i32*), i32 1, i32 44, %_IO_FILE* %27), !insn.addr !46
  %29 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !47
  %30 = call i32 @fwrite(i32* bitcast ([59 x i8]* @global_var_94e0 to i32*), i32 1, i32 58, %_IO_FILE* %29), !insn.addr !48
  %31 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !49
  %32 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_951c to i32*), i32 1, i32 44, %_IO_FILE* %31), !insn.addr !50
  %33 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !51
  %34 = call i32 @fwrite(i32* bitcast ([67 x i8]* @global_var_954c to i32*), i32 1, i32 66, %_IO_FILE* %33), !insn.addr !52
  %35 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !53
  %36 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_9590 to i32*), i32 1, i32 25, %_IO_FILE* %35), !insn.addr !54
  %37 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !55
  %38 = call i32 @fwrite(i32* bitcast ([52 x i8]* @global_var_95ac to i32*), i32 1, i32 51, %_IO_FILE* %37), !insn.addr !56
  %39 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !57
  %40 = call i32 @fwrite(i32* bitcast ([61 x i8]* @global_var_95e0 to i32*), i32 1, i32 60, %_IO_FILE* %39), !insn.addr !58
  %41 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !59
  %42 = call i32 @fwrite(i32* bitcast ([60 x i8]* @global_var_9620 to i32*), i32 1, i32 59, %_IO_FILE* %41), !insn.addr !60
  %43 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !61
  %44 = call i32 @fwrite(i32* bitcast ([28 x i8]* @global_var_965c to i32*), i32 1, i32 27, %_IO_FILE* %43), !insn.addr !62
  call void @exit(i32 1), !insn.addr !63
  unreachable, !insn.addr !63

dec_label_pc_88a4:                                ; preds = %dec_label_pc_86dc
  %45 = load i8*, i8** @global_var_11d48, align 4, !insn.addr !64
  %46 = ptrtoint i8* %45 to i32, !insn.addr !64
  %47 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0)), !insn.addr !22
  %48 = icmp slt i32 %47, 0, !insn.addr !23
  store i32 %47, i32* %.reg2mem191, !insn.addr !24
  store i32 %46, i32* %r7.0.ph1949.reg2mem, !insn.addr !24
  store i32 %r4.0.ph79.reload, i32* %r4.0.ph.lcssa.reg2mem, !insn.addr !24
  store i32 %r5.0.ph1268.reload, i32* %r5.0.ph12.lcssa.reg2mem, !insn.addr !24
  store i32 %r6.0.ph1658.reload, i32* %r6.0.ph16.lcssa.reg2mem, !insn.addr !24
  store i32 %46, i32* %r7.0.ph19.lcssa.reg2mem, !insn.addr !24
  br i1 %48, label %dec_label_pc_88ec, label %dec_label_pc_86dc.lr.ph, !insn.addr !24

dec_label_pc_88ac:                                ; preds = %dec_label_pc_86dc
  %49 = load i8*, i8** @global_var_11d48, align 4, !insn.addr !65
  %50 = ptrtoint i8* %49 to i32, !insn.addr !65
  %51 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0)), !insn.addr !22
  %52 = icmp slt i32 %51, 0, !insn.addr !23
  store i32 %51, i32* %.reg2mem187, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph1470.reg2mem, !insn.addr !24
  store i32 %r6.0.ph1658.reload, i32* %r6.0.ph1369.reg2mem, !insn.addr !24
  store i32 %50, i32* %r5.0.ph1268.reg2mem, !insn.addr !24
  store i32 %r4.0.ph79.reload, i32* %r4.0.ph.lcssa.reg2mem, !insn.addr !24
  store i32 %50, i32* %r5.0.ph12.lcssa.reg2mem, !insn.addr !24
  store i32 %r6.0.ph1658.reload, i32* %r6.0.ph16.lcssa.reg2mem, !insn.addr !24
  store i32 %r7.0.ph1949.reload, i32* %r7.0.ph19.lcssa.reg2mem, !insn.addr !24
  br i1 %52, label %dec_label_pc_88ec, label %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph, !insn.addr !24

dec_label_pc_88b4:                                ; preds = %dec_label_pc_86dc
  %53 = load i8*, i8** @global_var_11d48, align 4, !insn.addr !66
  %54 = call i32 (i8*, i8*, ...) @sscanf(i8* %53, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_9678, i32 0, i32 0), i32* nonnull %stack_var_-304), !insn.addr !67
  %55 = icmp eq i32 %54, 1, !insn.addr !68
  br i1 %55, label %dec_label_pc_86c4.backedge, label %dec_label_pc_88d0, !insn.addr !69

dec_label_pc_88d0:                                ; preds = %dec_label_pc_88b4
  %56 = load i8*, i8** @global_var_11d48, align 4, !insn.addr !70
  %57 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !71
  %58 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %57, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_9680, i32 0, i32 0), i8* %56), !insn.addr !72
  call void @exit(i32 1), !insn.addr !73
  unreachable, !insn.addr !73

dec_label_pc_88ec:                                ; preds = %dec_label_pc_8750, %dec_label_pc_88ac, %dec_label_pc_8758, %dec_label_pc_88a4, %dec_label_pc_86c4.backedge, %dec_label_pc_868c
  %r7.0.ph19.lcssa.reload = load i32, i32* %r7.0.ph19.lcssa.reg2mem
  %r6.0.ph16.lcssa.reload = load i32, i32* %r6.0.ph16.lcssa.reg2mem
  %r5.0.ph12.lcssa.reload = load i32, i32* %r5.0.ph12.lcssa.reg2mem
  %r4.0.ph.lcssa.reload = load i32, i32* %r4.0.ph.lcssa.reg2mem
  %59 = load i32, i32* %stack_var_-304, align 4, !insn.addr !74
  %60 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !75
  %61 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %60, i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_96f0, i32 0, i32 0), i32 %59), !insn.addr !76
  %62 = load i32, i32* %stack_var_-304, align 4, !insn.addr !77
  %63 = load i32, i32* %stack_var_-300, align 4, !insn.addr !78
  %64 = add i32 %62, -1, !insn.addr !79
  %65 = add i32 %64, %63, !insn.addr !80
  %66 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !81
  %67 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %66, i8* getelementptr inbounds ([55 x i8], [55 x i8]* @global_var_9718, i32 0, i32 0), i32 %63, i32 %62, i32 %65), !insn.addr !82
  %68 = icmp eq i32 %r7.0.ph19.lcssa.reload, 0, !insn.addr !83
  store i32 -1, i32* %stack_var_-320.0.reg2mem, !insn.addr !84
  br i1 %68, label %dec_label_pc_899c, label %dec_label_pc_8934, !insn.addr !84

dec_label_pc_8934:                                ; preds = %dec_label_pc_88ec
  %69 = icmp eq i32 %r6.0.ph16.lcssa.reload, 0, !insn.addr !85
  %70 = inttoptr i32 %r7.0.ph19.lcssa.reload to i8*
  br i1 %69, label %dec_label_pc_8940, label %dec_label_pc_8b34, !insn.addr !86

dec_label_pc_8940:                                ; preds = %dec_label_pc_8934
  %71 = call i32 (i8*, i32, ...) @open(i8* %70, i32 65), !insn.addr !87
  store i32 %71, i32* %storemerge.reg2mem, !insn.addr !88
  br label %dec_label_pc_8950, !insn.addr !88

dec_label_pc_8950:                                ; preds = %dec_label_pc_8b34, %dec_label_pc_8940
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %72 = icmp slt i32 %storemerge.reload, 0, !insn.addr !89
  store i8* %70, i8** %.pre-phi.reg2mem, !insn.addr !90
  store i32 ptrtoint ([52 x i8]* @global_var_9750 to i32), i32* %r1.0.reg2mem, !insn.addr !90
  br i1 %72, label %dec_label_pc_8ba8, label %dec_label_pc_895c, !insn.addr !90

dec_label_pc_895c:                                ; preds = %dec_label_pc_8950
  %spec.select = select i1 %69, i32 ptrtoint ([8 x i8]* @global_var_93f0 to i32), i32 ptrtoint ([8 x i8]* @global_var_93e8 to i32)
  %73 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !91
  %74 = inttoptr i32 %spec.select to i8*, !insn.addr !92
  %75 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %73, i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_9784, i32 0, i32 0), i8* %74, i8* %70), !insn.addr !92
  %76 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !93
  %77 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %76, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_97a4, i32 0, i32 0), i32 %storemerge.reload), !insn.addr !94
  store i32 %storemerge.reload, i32* %stack_var_-320.0.reg2mem, !insn.addr !94
  br label %dec_label_pc_899c, !insn.addr !94

dec_label_pc_899c:                                ; preds = %dec_label_pc_88ec, %dec_label_pc_895c
  %78 = inttoptr i32 %r5.0.ph12.lcssa.reload to i8*, !insn.addr !95
  %79 = call i32 (i8*, i32, ...) @open(i8* %78, i32 2), !insn.addr !95
  %80 = icmp slt i32 %79, 0, !insn.addr !96
  br i1 %80, label %dec_label_pc_8bb8, label %dec_label_pc_89b0, !insn.addr !97

dec_label_pc_89b0:                                ; preds = %dec_label_pc_899c
  %stack_var_-320.0.reload = load i32, i32* %stack_var_-320.0.reg2mem
  %81 = icmp eq i32 %r6.0.ph16.lcssa.reload, 0, !insn.addr !98
  %82 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !99
  %not. = icmp ne i1 %81, true
  %83 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %82, i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_97e4, i32 0, i32 0), i8* %78), !insn.addr !100
  %84 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !101
  %85 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %84, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_9808, i32 0, i32 0), i32 %79), !insn.addr !102
  %86 = icmp eq i32 %r4.0.ph.lcssa.reload, 0, !insn.addr !103
  %narrow = icmp eq i1 %86, %not.
  %87 = icmp eq i1 %narrow, false, !insn.addr !104
  br i1 %87, label %dec_label_pc_8a08, label %dec_label_pc_8be0, !insn.addr !105

dec_label_pc_8a08:                                ; preds = %dec_label_pc_89b0, %dec_label_pc_8d34
  %88 = load i32, i32* %stack_var_-300, align 4, !insn.addr !106
  %89 = icmp sgt i32 %88, 0, !insn.addr !107
  br i1 %89, label %dec_label_pc_8a44.lr.ph, label %dec_label_pc_8d8c, !insn.addr !107

dec_label_pc_8a44.lr.ph:                          ; preds = %dec_label_pc_8a08
  %90 = ptrtoint i32* %stack_var_-41 to i32, !insn.addr !108
  %91 = inttoptr i32 %r7.0.ph19.lcssa.reload to i8*
  %92 = icmp sgt i32 %stack_var_-320.0.reload, -1, !insn.addr !109
  %93 = icmp eq i32 %stack_var_-320.0.reload, -1
  %94 = ptrtoint i32* %stack_var_-296 to i32
  %95 = add i32 %94, -1
  %96 = ptrtoint i32* %stack_var_-297 to i32
  %narrow7 = icmp eq i1 %81, %92
  %97 = icmp eq i1 %narrow7, false
  store i32 0, i32* %r8.040.reg2mem
  br label %dec_label_pc_8a44

dec_label_pc_8a44:                                ; preds = %dec_label_pc_8a44.lr.ph, %dec_label_pc_8b5c
  %r8.040.reload = load i32, i32* %r8.040.reg2mem
  store i32 0, i32* %r7.2.reg2mem, !insn.addr !110
  br i1 %81, label %dec_label_pc_8b08, label %dec_label_pc_8a4c, !insn.addr !110

dec_label_pc_8a4c:                                ; preds = %dec_label_pc_8a44
  store i32 %96, i32* %r3.3.reg2mem, !insn.addr !111
  br i1 %93, label %dec_label_pc_8b68, label %dec_label_pc_8a58, !insn.addr !111

dec_label_pc_8a58:                                ; preds = %dec_label_pc_8a4c
  %98 = call i32 @read(i32 %stack_var_-320.0.reload, i32* nonnull %stack_var_-296, i32 256), !insn.addr !112
  %99 = icmp slt i32 %98, 0, !insn.addr !113
  store i8* %91, i8** %.pre-phi.reg2mem, !insn.addr !114
  store i32 ptrtoint ([28 x i8]* @global_var_9b6c to i32), i32* %r1.0.reg2mem, !insn.addr !114
  br i1 %99, label %dec_label_pc_8ba8, label %dec_label_pc_8a70, !insn.addr !114

dec_label_pc_8a70:                                ; preds = %dec_label_pc_8a58
  %100 = icmp eq i32 %98, 256, !insn.addr !115
  br i1 %100, label %dec_label_pc_8ab0, label %dec_label_pc_8a78, !insn.addr !116

dec_label_pc_8a78:                                ; preds = %dec_label_pc_8a70
  %101 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !117
  %102 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %101, i8* getelementptr inbounds ([52 x i8], [52 x i8]* @global_var_9b88, i32 0, i32 0), i8* %91), !insn.addr !118
  %103 = icmp ult i32 %98, 255, !insn.addr !119
  %104 = icmp ne i1 %103, true, !insn.addr !119
  %105 = icmp eq i32 %98, 255, !insn.addr !119
  %106 = icmp ne i1 %105, true, !insn.addr !120
  %107 = icmp eq i1 %104, %106, !insn.addr !120
  br i1 %107, label %dec_label_pc_8ab0, label %dec_label_pc_8a98, !insn.addr !120

dec_label_pc_8a98:                                ; preds = %dec_label_pc_8a78
  %108 = add i32 %95, %98, !insn.addr !121
  store i32 %108, i32* %r3.0.reg2mem, !insn.addr !121
  br label %dec_label_pc_8aa4, !insn.addr !121

dec_label_pc_8aa4:                                ; preds = %dec_label_pc_8aa4, %dec_label_pc_8a98
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %109 = add i32 %r3.0.reload, 1, !insn.addr !122
  %110 = inttoptr i32 %109 to i8*, !insn.addr !122
  store i8 0, i8* %110, align 1, !insn.addr !122
  %111 = icmp eq i32 %109, %90, !insn.addr !123
  store i32 %109, i32* %r3.0.reg2mem, !insn.addr !124
  br i1 %111, label %dec_label_pc_8ab0, label %dec_label_pc_8aa4, !insn.addr !124

dec_label_pc_8ab0:                                ; preds = %dec_label_pc_8aa4, %dec_label_pc_8b68, %dec_label_pc_8a78, %dec_label_pc_8a70
  store i32 0, i32* %r7.1.reg2mem, !insn.addr !125
  br label %dec_label_pc_8ac4, !insn.addr !125

dec_label_pc_8ab8:                                ; preds = %dec_label_pc_8ac4
  %112 = add nuw nsw i32 %r7.1.reload, 8, !insn.addr !126
  %113 = icmp eq i32 %112, 256, !insn.addr !127
  store i32 %112, i32* %r7.1.reg2mem, !insn.addr !128
  br i1 %113, label %dec_label_pc_8b44, label %dec_label_pc_8ac4, !insn.addr !128

dec_label_pc_8ac4:                                ; preds = %dec_label_pc_8ab8, %dec_label_pc_8ab0
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %114 = load i32, i32* %stack_var_-304, align 4, !insn.addr !129
  %115 = add i32 %114, %r8.040.reload, !insn.addr !130
  %116 = add i32 %r7.1.reload, %94, !insn.addr !131
  %117 = call i32 @function_8ff0(i32 %79, i32 %115, i32 %r7.1.reload, i32 %116, i32 8), !insn.addr !132
  %118 = icmp slt i32 %117, 0, !insn.addr !133
  br i1 %118, label %dec_label_pc_8aec, label %dec_label_pc_8ab8, !insn.addr !134

dec_label_pc_8aec:                                ; preds = %dec_label_pc_8ac4, %dec_label_pc_8b08, %dec_label_pc_8ba8
  call void @exit(i32 1), !insn.addr !135
  unreachable, !insn.addr !135

dec_label_pc_8afc:                                ; preds = %dec_label_pc_8b08
  %119 = add nuw nsw i32 %r7.2.reload, 8, !insn.addr !136
  %120 = icmp eq i32 %119, 256, !insn.addr !137
  store i32 %119, i32* %r7.2.reg2mem, !insn.addr !138
  br i1 %120, label %dec_label_pc_8b44, label %dec_label_pc_8b08, !insn.addr !138

dec_label_pc_8b08:                                ; preds = %dec_label_pc_8a44, %dec_label_pc_8afc
  %r7.2.reload = load i32, i32* %r7.2.reg2mem
  %121 = load i32, i32* %stack_var_-304, align 4, !insn.addr !139
  %122 = add i32 %121, %r8.040.reload, !insn.addr !140
  %123 = add i32 %r7.2.reload, %94, !insn.addr !141
  %124 = call i32 @function_914c(i32 %79, i32 %122, i32 %r7.2.reload, i32 %123, i32 8), !insn.addr !142
  %125 = icmp slt i32 %124, 0, !insn.addr !143
  br i1 %125, label %dec_label_pc_8aec, label %dec_label_pc_8afc, !insn.addr !144

dec_label_pc_8b34:                                ; preds = %dec_label_pc_8934
  %126 = call i32 (i8*, i32, ...) @open(i8* %70, i32 0), !insn.addr !145
  store i32 %126, i32* %storemerge.reg2mem, !insn.addr !146
  br label %dec_label_pc_8950, !insn.addr !146

dec_label_pc_8b44:                                ; preds = %dec_label_pc_8ab8, %dec_label_pc_8afc
  br i1 %97, label %dec_label_pc_8b5c, label %dec_label_pc_8b78, !insn.addr !147

dec_label_pc_8b5c:                                ; preds = %dec_label_pc_8b44, %dec_label_pc_8b78
  %127 = add nuw nsw i32 %r8.040.reload, 1, !insn.addr !148
  %128 = load i32, i32* %stack_var_-300, align 4, !insn.addr !106
  %129 = icmp slt i32 %127, %128, !insn.addr !107
  store i32 %127, i32* %r8.040.reg2mem, !insn.addr !107
  br i1 %129, label %dec_label_pc_8a44, label %dec_label_pc_8d8c, !insn.addr !107

dec_label_pc_8b68:                                ; preds = %dec_label_pc_8a4c, %dec_label_pc_8b68
  %r3.3.reload = load i32, i32* %r3.3.reg2mem
  %130 = add i32 %r3.3.reload, 1, !insn.addr !149
  %131 = inttoptr i32 %130 to i8*, !insn.addr !149
  store i8 0, i8* %131, align 1, !insn.addr !149
  %132 = icmp eq i32 %130, %90, !insn.addr !150
  store i32 %130, i32* %r3.3.reg2mem, !insn.addr !151
  br i1 %132, label %dec_label_pc_8ab0, label %dec_label_pc_8b68, !insn.addr !151

dec_label_pc_8b78:                                ; preds = %dec_label_pc_8b44
  %133 = call i32 @write(i32 %stack_var_-320.0.reload, i32* nonnull %stack_var_-296, i32 256), !insn.addr !152
  %134 = icmp eq i32 %133, 256, !insn.addr !153
  store i8* %91, i8** %.pre-phi.reg2mem, !insn.addr !154
  store i32 ptrtoint ([27 x i8]* @global_var_9bbc to i32), i32* %r1.0.reg2mem, !insn.addr !154
  br i1 %134, label %dec_label_pc_8b5c, label %dec_label_pc_8ba8, !insn.addr !154

dec_label_pc_8ba8:                                ; preds = %dec_label_pc_8a58, %dec_label_pc_8b78, %dec_label_pc_8950
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %r0.0.in = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4
  %135 = inttoptr i32 %r1.0.reload to i8*, !insn.addr !155
  %136 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %r0.0.in, i8* %135, i8* %.pre-phi.reload), !insn.addr !155
  call void @perror(i8* %.pre-phi.reload), !insn.addr !156
  br label %dec_label_pc_8aec, !insn.addr !157

dec_label_pc_8bb8:                                ; preds = %dec_label_pc_899c
  %137 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !158
  %138 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %137, i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_97c8, i32 0, i32 0), i8* %78), !insn.addr !159
  call void @perror(i8* %78), !insn.addr !160
  call void @exit(i32 1), !insn.addr !161
  unreachable, !insn.addr !161

dec_label_pc_8be0:                                ; preds = %dec_label_pc_89b0
  %139 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !162
  %140 = call i32 @fwrite(i32* bitcast ([13 x i8]* @global_var_9830 to i32*), i32 1, i32 12, %_IO_FILE* %139), !insn.addr !163
  %141 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !164
  %142 = call i32 @fwrite(i32* bitcast ([46 x i8]* @global_var_9840 to i32*), i32 1, i32 45, %_IO_FILE* %141), !insn.addr !165
  %143 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !166
  %144 = call i32 @fwrite(i32* bitcast ([54 x i8]* @global_var_9870 to i32*), i32 1, i32 53, %_IO_FILE* %143), !insn.addr !167
  %145 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !168
  %146 = call i32 @fwrite(i32* bitcast ([55 x i8]* @global_var_98a8 to i32*), i32 1, i32 54, %_IO_FILE* %145), !insn.addr !169
  %147 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !170
  %148 = call i32 @fwrite(i32* bitcast ([56 x i8]* @global_var_98e0 to i32*), i32 1, i32 55, %_IO_FILE* %147), !insn.addr !171
  %149 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !172
  %150 = call i32 @fwrite(i32* bitcast ([62 x i8]* @global_var_9918 to i32*), i32 1, i32 61, %_IO_FILE* %149), !insn.addr !173
  %151 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !174
  %152 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_9958 to i32*), i32 1, i32 44, %_IO_FILE* %151), !insn.addr !175
  %153 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !176
  %154 = call i32 @fwrite(i32* bitcast ([21 x i8]* @global_var_9988 to i32*), i32 1, i32 20, %_IO_FILE* %153), !insn.addr !177
  %155 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !178
  %156 = call i32 @fwrite(i32* bitcast ([64 x i8]* @global_var_99a0 to i32*), i32 1, i32 63, %_IO_FILE* %155), !insn.addr !179
  %157 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !180
  %158 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_99e0 to i32*), i32 1, i32 37, %_IO_FILE* %157), !insn.addr !181
  %159 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !182
  %160 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %159, i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_9a08, i32 0, i32 0), i8* %78), !insn.addr !183
  %161 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !184
  %162 = call i32 @fwrite(i32* bitcast ([62 x i8]* @global_var_9a30 to i32*), i32 1, i32 61, %_IO_FILE* %161), !insn.addr !185
  %163 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !186
  %164 = call i32 @fwrite(i32* bitcast ([69 x i8]* @global_var_9a70 to i32*), i32 1, i32 68, %_IO_FILE* %163), !insn.addr !187
  %165 = load i32, i32* %stack_var_-304, align 4, !insn.addr !188
  %166 = load i32, i32* %stack_var_-300, align 4, !insn.addr !189
  %167 = add i32 %165, -1, !insn.addr !190
  %168 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !191
  %169 = add i32 %167, %166, !insn.addr !192
  %170 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %168, i8* getelementptr inbounds ([49 x i8], [49 x i8]* @global_var_9ab8, i32 0, i32 0), i32 %165, i32 %169), !insn.addr !193
  %171 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !194
  %172 = call i32 @fwrite(i32* bitcast ([25 x i8]* @global_var_9aec to i32*), i32 1, i32 24, %_IO_FILE* %171), !insn.addr !195
  %173 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !196
  %174 = call i32 @fflush(%_IO_FILE* %173), !insn.addr !197
  %175 = load %_IO_FILE*, %_IO_FILE** @global_var_11d40, align 4, !insn.addr !198
  %176 = bitcast i32* %stack_var_-296 to i8*, !insn.addr !199
  %177 = call i8* @fgets(i8* nonnull %176, i32 4, %_IO_FILE* %175), !insn.addr !199
  %178 = icmp eq i8* %177, null, !insn.addr !200
  br i1 %178, label %dec_label_pc_8db0, label %dec_label_pc_8d34, !insn.addr !201

dec_label_pc_8d34:                                ; preds = %dec_label_pc_8be0
  %179 = call i32 @strncmp(i8* nonnull %176, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_9b34, i32 0, i32 0), i32 3), !insn.addr !202
  %180 = icmp eq i32 %179, 0, !insn.addr !203
  br i1 %180, label %dec_label_pc_8a08, label %dec_label_pc_8d4c, !insn.addr !204

dec_label_pc_8d4c:                                ; preds = %dec_label_pc_8d34
  %181 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !205
  %182 = call i32 @fwrite(i32* bitcast ([50 x i8]* @global_var_9b38 to i32*), i32 1, i32 49, %_IO_FILE* %181), !insn.addr !206
  call void @exit(i32 1), !insn.addr !207
  unreachable, !insn.addr !207

dec_label_pc_8d8c:                                ; preds = %dec_label_pc_8b5c, %dec_label_pc_8a08
  %183 = icmp eq i32 %stack_var_-320.0.reload, -1, !insn.addr !208
  br i1 %183, label %dec_label_pc_8da0, label %dec_label_pc_8d98, !insn.addr !209

dec_label_pc_8d98:                                ; preds = %dec_label_pc_8d8c
  %184 = call i32 @close(i32 %stack_var_-320.0.reload), !insn.addr !210
  br label %dec_label_pc_8da0, !insn.addr !210

dec_label_pc_8da0:                                ; preds = %dec_label_pc_8d98, %dec_label_pc_8d8c
  %185 = call i32 @close(i32 %79), !insn.addr !211
  call void @exit(i32 0), !insn.addr !212
  unreachable, !insn.addr !212

dec_label_pc_8db0:                                ; preds = %dec_label_pc_8be0
  %186 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !213
  %187 = call i32 @fwrite(i32* bitcast ([42 x i8]* @global_var_9b08 to i32*), i32 1, i32 41, %_IO_FILE* %186), !insn.addr !214
  call void @exit(i32 1), !insn.addr !215
  unreachable, !insn.addr !215

; uselistorder directives
  uselistorder i32 %165, { 1, 0 }
  uselistorder i32 %r7.2.reload, { 0, 2, 1 }
  uselistorder i32 %r7.1.reload, { 0, 2, 1 }
  uselistorder i32 %98, { 0, 2, 1, 3, 4 }
  uselistorder i32 %r8.040.reload, { 0, 2, 1 }
  uselistorder i8* %91, { 1, 2, 0 }
  uselistorder i32 %90, { 1, 0 }
  uselistorder i1 %81, { 2, 0, 1 }
  uselistorder i32 %stack_var_-320.0.reload, { 3, 4, 0, 1, 2, 5 }
  uselistorder i32 %79, { 0, 2, 1, 3, 4 }
  uselistorder i8* %78, { 0, 3, 2, 1, 4 }
  uselistorder i32 %storemerge.reload, { 0, 2, 1 }
  uselistorder i8* %70, { 2, 1, 0, 3 }
  uselistorder i32 %63, { 1, 0 }
  uselistorder i32 %62, { 1, 0 }
  uselistorder i32 %r7.0.ph19.lcssa.reload, { 2, 0, 1 }
  uselistorder i32 %r7.0.ph1949.reload, { 1, 5, 3, 2, 6, 0, 4 }
  uselistorder i32 %r6.0.ph1658.reload, { 1, 6, 2, 3, 4, 0, 5 }
  uselistorder i32 %r5.0.ph1268.reload, { 2, 3, 1, 0, 4 }
  uselistorder i32 %r4.0.ph79.reload, { 0, 2, 3, 1, 4 }
  uselistorder i8** %0, { 2, 4, 5, 3, 1, 0 }
  uselistorder i32* %stack_var_-300, { 2, 3, 0, 4, 1, 5 }
  uselistorder i32* %stack_var_-304, { 1, 2, 3, 4, 5, 0, 6 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.0.ph82.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.ph81.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.0.ph80.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.ph79.reg2mem, { 2, 0, 1 }
  uselistorder i32* %.reg2mem187, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph1470.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r6.0.ph1369.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.0.ph1268.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem189, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph1759.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r6.0.ph1658.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem191, { 1, 0, 2 }
  uselistorder i32* %r7.0.ph1949.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem193, { 1, 0, 2 }
  uselistorder i32* %r4.0.ph.lcssa.reg2mem, { 0, 2, 4, 5, 3, 1, 6 }
  uselistorder i32* %r5.0.ph12.lcssa.reg2mem, { 0, 2, 4, 5, 3, 1, 6 }
  uselistorder i32* %r6.0.ph16.lcssa.reg2mem, { 0, 2, 4, 5, 3, 1, 6 }
  uselistorder i32* %r7.0.ph19.lcssa.reg2mem, { 0, 2, 4, 5, 3, 1, 6 }
  uselistorder i32* %storemerge.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-320.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r8.040.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.3.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.pre-phi.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %r1.0.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32 (i32)* @close, { 1, 0, 2 }
  uselistorder i32 (i8*, i32, ...)* @open, { 2, 1, 0, 3 }
  uselistorder void (i32)* @exit, { 4, 3, 2, 1, 0, 7, 6, 5, 8 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 1, 0, 2 }
  uselistorder i8** @global_var_11d48, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (i32, i8**, i8*)* @getopt, { 2, 4, 5, 3, 1, 0, 6 }
  uselistorder i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_96e4, i32 0, i32 0), { 2, 4, 5, 3, 1, 0 }
  uselistorder i32 %arg1, { 2, 4, 5, 3, 1, 0 }
  uselistorder label %dec_label_pc_8ba8, { 1, 0, 2 }
  uselistorder label %dec_label_pc_8b68, { 1, 0 }
  uselistorder label %dec_label_pc_8b5c, { 1, 0 }
  uselistorder label %dec_label_pc_8b44, { 1, 0 }
  uselistorder label %dec_label_pc_8b08, { 1, 0 }
  uselistorder label %dec_label_pc_8aec, { 2, 1, 0 }
  uselistorder label %dec_label_pc_8ab0, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_8a44, { 1, 0 }
  uselistorder label %dec_label_pc_8a08, { 1, 0 }
  uselistorder label %dec_label_pc_899c, { 1, 0 }
  uselistorder label %dec_label_pc_88ec, { 1, 3, 4, 2, 0, 5 }
  uselistorder label %dec_label_pc_86c4.backedge, { 1, 0, 2 }
  uselistorder label %dec_label_pc_86dc, { 1, 0 }
  uselistorder label %dec_label_pc_86dc.lr.ph, { 1, 0 }
  uselistorder label %dec_label_pc_86dc.lr.ph.lr.ph, { 1, 0 }
  uselistorder label %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph, { 1, 0 }
  uselistorder label %dec_label_pc_86dc.lr.ph.lr.ph.lr.ph.lr.ph, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8ebc:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !216
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !216
  %2 = call i32 @__libc_start_main(i32 34444, i32 %arg2, i8** nonnull %0, void ()* bitcast (void ()** @global_var_9248 to void ()*), void ()* bitcast (void ()** @global_var_92ac to void ()*), void ()* %1), !insn.addr !216
  call void @abort(), !insn.addr !217
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !217
}

define i32 @function_8ef8() local_unnamed_addr {
dec_label_pc_8ef8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_11d28, align 4, !insn.addr !218
  %3 = icmp eq i32 %2, 0, !insn.addr !219
  br i1 %3, label %4, label %dec_label_pc_8f10, !insn.addr !220

; <label>:4:                                      ; preds = %dec_label_pc_8ef8
  ret i32 %1, !insn.addr !220

dec_label_pc_8f10:                                ; preds = %dec_label_pc_8ef8
  call void @__gmon_start__(), !insn.addr !221
  ret i32 ptrtoint (i32* @1 to i32), !insn.addr !221
}

define i32 @function_8f1c(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_8f1c:
  ret i32 73012, !insn.addr !222
}

define i32 @function_8f54(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8f54:
  ret i32 73012, !insn.addr !223
}

define i32 @function_8f94() local_unnamed_addr {
dec_label_pc_8f94:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_11d4c to i8*), align 4, !insn.addr !224
  %5 = icmp eq i8 %4, 0, !insn.addr !225
  br i1 %5, label %dec_label_pc_8fa8, label %6, !insn.addr !226

; <label>:6:                                      ; preds = %dec_label_pc_8f94
  ret i32 %3, !insn.addr !226

dec_label_pc_8fa8:                                ; preds = %dec_label_pc_8f94
  %7 = call i32 @function_8f1c(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !227
  store i8 1, i8* bitcast (i8** @global_var_11d4c to i8*), align 4, !insn.addr !228
  ret i32 %7, !insn.addr !229

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i8 0, { 0, 3, 1, 2 }
}

define i32 @function_8fbc(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8fbc:
  %0 = call i32 @function_8f54(i32* nonnull @global_var_11bec, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !230
  ret i32 %0, !insn.addr !230
}

define i32 @function_8ff0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_8ff0:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !231
  %ip.1.reg2mem = alloca i32, !insn.addr !231
  %lr.1.reg2mem = alloca i32, !insn.addr !231
  %1 = load i32, i32* %0
  %stack_var_-56 = alloca i32, align 4
  %2 = urem i32 %arg5, 256
  %3 = icmp ult i32 %2, 8, !insn.addr !232
  %4 = icmp ne i1 %3, true, !insn.addr !232
  %5 = icmp eq i32 %2, 8, !insn.addr !232
  %6 = icmp ne i1 %5, true, !insn.addr !233
  %7 = icmp eq i1 %4, %6, !insn.addr !233
  br i1 %7, label %dec_label_pc_90ec, label %dec_label_pc_900c, !insn.addr !233

dec_label_pc_900c:                                ; preds = %dec_label_pc_8ff0
  %8 = add i32 %2, %arg3, !insn.addr !234
  %9 = icmp ult i32 %8, 256, !insn.addr !235
  %10 = icmp ne i1 %9, true, !insn.addr !235
  %11 = icmp eq i32 %8, 256, !insn.addr !235
  %12 = icmp ne i1 %11, true, !insn.addr !236
  %13 = icmp eq i1 %10, %12, !insn.addr !236
  br i1 %13, label %dec_label_pc_90cc, label %dec_label_pc_9018, !insn.addr !236

dec_label_pc_9018:                                ; preds = %dec_label_pc_900c
  %14 = icmp eq i32 %2, 0, !insn.addr !237
  %15 = mul i32 %arg3, 16777216
  %16 = ashr exact i32 %15, 24, !insn.addr !238
  store i32 %16, i32* %stack_var_-56, align 4, !insn.addr !238
  br i1 %14, label %dec_label_pc_9044, label %dec_label_pc_9034.preheader, !insn.addr !239

dec_label_pc_9034.preheader:                      ; preds = %dec_label_pc_9018
  %17 = ptrtoint i32* %stack_var_-56 to i32, !insn.addr !240
  %18 = add i32 %2, %17
  %r5.0 = select i1 %14, i32 %1, i32 %18
  %19 = add i32 %arg4, -1
  store i32 %19, i32* %lr.1.reg2mem
  store i32 %17, i32* %ip.1.reg2mem
  br label %dec_label_pc_9034

dec_label_pc_9034:                                ; preds = %dec_label_pc_9034.preheader, %dec_label_pc_9034
  %ip.1.reload = load i32, i32* %ip.1.reg2mem
  %lr.1.reload = load i32, i32* %lr.1.reg2mem
  %20 = add i32 %lr.1.reload, 1, !insn.addr !241
  %21 = inttoptr i32 %20 to i8*, !insn.addr !241
  %22 = load i8, i8* %21, align 1, !insn.addr !241
  %23 = add i32 %ip.1.reload, 1, !insn.addr !242
  %24 = inttoptr i32 %23 to i8*, !insn.addr !242
  store i8 %22, i8* %24, align 1, !insn.addr !242
  %25 = icmp eq i32 %23, %r5.0, !insn.addr !243
  store i32 %20, i32* %lr.1.reg2mem, !insn.addr !244
  store i32 %23, i32* %ip.1.reg2mem, !insn.addr !244
  br i1 %25, label %dec_label_pc_9044, label %dec_label_pc_9034, !insn.addr !244

dec_label_pc_9044:                                ; preds = %dec_label_pc_9034, %dec_label_pc_9018
  %26 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 1799), !insn.addr !245
  %27 = icmp slt i32 %26, 0, !insn.addr !246
  br i1 %27, label %dec_label_pc_910c, label %dec_label_pc_9080, !insn.addr !247

dec_label_pc_9080:                                ; preds = %dec_label_pc_9044
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4
  br i1 %14, label %dec_label_pc_908c, label %dec_label_pc_90ac, !insn.addr !248

dec_label_pc_908c:                                ; preds = %dec_label_pc_9080
  %29 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %28, i8* getelementptr inbounds ([55 x i8], [55 x i8]* @global_var_9370, i32 0, i32 0), i32 %arg2, i32 %arg3), !insn.addr !249
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !250
  br label %dec_label_pc_90a4, !insn.addr !250

dec_label_pc_90a4:                                ; preds = %dec_label_pc_910c, %dec_label_pc_90ec, %dec_label_pc_90cc, %dec_label_pc_90ac, %dec_label_pc_908c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !251

dec_label_pc_90ac:                                ; preds = %dec_label_pc_9080
  %30 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %28, i8* getelementptr inbounds ([49 x i8], [49 x i8]* @global_var_933c, i32 0, i32 0), i32 %2, i32 %arg2, i32 %arg3), !insn.addr !252
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !253
  br label %dec_label_pc_90a4, !insn.addr !253

dec_label_pc_90cc:                                ; preds = %dec_label_pc_900c
  %31 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !254
  %32 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %31, i8* getelementptr inbounds ([49 x i8], [49 x i8]* @global_var_92ec, i32 0, i32 0), i32 %2, i32 %arg3), !insn.addr !255
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !256
  br label %dec_label_pc_90a4, !insn.addr !256

dec_label_pc_90ec:                                ; preds = %dec_label_pc_8ff0
  %33 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !257
  %34 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_92bc to i32*), i32 1, i32 44, %_IO_FILE* %33), !insn.addr !258
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !259
  br label %dec_label_pc_90a4, !insn.addr !259

dec_label_pc_910c:                                ; preds = %dec_label_pc_9044
  call void @perror(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_9320, i32 0, i32 0)), !insn.addr !260
  %35 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !261
  %36 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %35, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_9328, i32 0, i32 0), i32 %26), !insn.addr !262
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !263
  br label %dec_label_pc_90a4, !insn.addr !263

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %2, { 3, 4, 6, 2, 5, 1, 0 }
  uselistorder i32* %stack_var_-56, { 1, 0 }
  uselistorder i32* %lr.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %ip.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 3, 5, 4, 1, 0, 2 }
  uselistorder i32 %arg3, { 4, 2, 3, 0, 1 }
  uselistorder label %dec_label_pc_9034, { 1, 0 }
}

define i32 @function_914c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_914c:
  %r0.0.reg2mem = alloca i32, !insn.addr !264
  %0 = urem i32 %arg5, 256
  %1 = icmp ult i32 %0, 8, !insn.addr !265
  %2 = icmp ne i1 %1, true, !insn.addr !265
  %3 = icmp eq i32 %0, 8, !insn.addr !265
  %4 = icmp ne i1 %3, true, !insn.addr !266
  %5 = icmp eq i1 %2, %4, !insn.addr !266
  br i1 %5, label %dec_label_pc_91e8, label %dec_label_pc_9170, !insn.addr !266

dec_label_pc_9170:                                ; preds = %dec_label_pc_914c
  %6 = call i32 @function_8ff0(i32 %arg1, i32 %arg2, i32 %arg3, i32 0, i32 0), !insn.addr !267
  %7 = icmp slt i32 %6, 0, !insn.addr !268
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !268
  br i1 %7, label %dec_label_pc_91e0, label %dec_label_pc_9188, !insn.addr !268

dec_label_pc_9188:                                ; preds = %dec_label_pc_9170
  %8 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 1799), !insn.addr !269
  %9 = icmp slt i32 %8, 0, !insn.addr !270
  br i1 %9, label %dec_label_pc_9210, label %dec_label_pc_91c0, !insn.addr !271

dec_label_pc_91c0:                                ; preds = %dec_label_pc_9188
  %10 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !272
  %11 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %10, i8* getelementptr inbounds ([50 x i8], [50 x i8]* @global_var_93a8, i32 0, i32 0), i32 %0, i32 %arg2, i32 %arg3), !insn.addr !273
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !274
  br label %dec_label_pc_91e0, !insn.addr !274

dec_label_pc_91e0:                                ; preds = %dec_label_pc_9170, %dec_label_pc_9210, %dec_label_pc_91e8, %dec_label_pc_91c0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !275

dec_label_pc_91e8:                                ; preds = %dec_label_pc_914c
  %12 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !276
  %13 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_92bc to i32*), i32 1, i32 44, %_IO_FILE* %12), !insn.addr !277
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_91e0, !insn.addr !278

dec_label_pc_9210:                                ; preds = %dec_label_pc_9188
  call void @perror(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_9320, i32 0, i32 0)), !insn.addr !279
  %14 = load %_IO_FILE*, %_IO_FILE** @global_var_11d38, align 4, !insn.addr !280
  %15 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %14, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_9328, i32 0, i32 0), i32 %8), !insn.addr !281
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !282
  br label %dec_label_pc_91e0, !insn.addr !282

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 4, 0, 2, 1 }
  uselistorder void (i8*)* @perror, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 0, 28, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 29 }
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 1, 18, 0, 2, 19, 17, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 16, 15, 14, 20 }
  uselistorder %_IO_FILE** @global_var_11d38, { 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 0, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 1, 0, 2 }
  uselistorder i32 -1, { 1, 2, 0, 3, 5, 4, 8, 10, 9, 11, 12, 7, 6, 13 }
  uselistorder i32 (i32, i32, i32, i32, i32)* @function_8ff0, { 1, 0 }
  uselistorder i1 true, { 1, 2, 3, 4, 5, 6, 7, 8, 0 }
  uselistorder i32 8, { 3, 4, 5, 6, 1, 7, 0, 8, 2 }
  uselistorder i32 256, { 0, 4, 5, 1, 6, 2, 7, 8, 9, 3 }
  uselistorder label %dec_label_pc_91e0, { 1, 2, 3, 0 }
}

define i32 @function_9248(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9248:
  %0 = call i32 @function_85a0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !283
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_11be8 to i32), i32 ptrtoint (i32* @global_var_11be4 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !284

; uselistorder directives
  uselistorder i32 0, { 20, 0, 22, 23, 75, 66, 21, 67, 26, 27, 28, 29, 24, 25, 1, 30, 31, 2, 32, 33, 76, 77, 89, 68, 78, 36, 37, 38, 39, 40, 41, 34, 35, 69, 79, 80, 4, 42, 43, 81, 3, 5, 12, 82, 44, 45, 18, 19, 83, 84, 46, 47, 48, 49, 85, 86, 87, 50, 51, 52, 53, 54, 55, 56, 57, 15, 17, 58, 59, 60, 61, 88, 62, 63, 16, 14, 6, 7, 8, 9, 10, 11, 13, 64, 65, 70, 71, 72, 73, 74 }
}

define i32 @function_92ac() local_unnamed_addr {
dec_label_pc_92ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !285

; uselistorder directives
  uselistorder i32 1, { 3, 36, 4, 37, 80, 81, 73, 7, 6, 5, 2, 1, 0, 74, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 86, 87, 56, 88, 57, 82, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 83, 84, 85, 79, 78, 77, 76, 75, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 72 }
}

define i32 @function_92b0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_92b0:
  ret i32 %arg1, !insn.addr !286
}

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare i8* @fgets(i8*, i32, %_IO_FILE*) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @getopt(i32, i8**, i8*) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

!0 = !{i64 34212}
!1 = !{i64 34216}
!2 = !{i64 34248}
!3 = !{i64 34260}
!4 = !{i64 34272}
!5 = !{i64 34284}
!6 = !{i64 34296}
!7 = !{i64 34308}
!8 = !{i64 34320}
!9 = !{i64 34332}
!10 = !{i64 34344}
!11 = !{i64 34356}
!12 = !{i64 34368}
!13 = !{i64 34380}
!14 = !{i64 34392}
!15 = !{i64 34404}
!16 = !{i64 34416}
!17 = !{i64 34428}
!18 = !{i64 34440}
!19 = !{i64 34444}
!20 = !{i64 34488}
!21 = !{i64 34496}
!22 = !{i64 34512}
!23 = !{i64 34516}
!24 = !{i64 34520}
!25 = !{i64 34524}
!26 = !{i64 34532}
!27 = !{i64 34640}
!28 = !{i64 34648}
!29 = !{i64 34656}
!30 = !{i64 34668}
!31 = !{i64 34676}
!32 = !{i64 34680}
!33 = !{i64 34688}
!34 = !{i64 34696}
!35 = !{i64 34700}
!36 = !{i64 34708}
!37 = !{i64 34724}
!38 = !{i64 34728}
!39 = !{i64 34732}
!40 = !{i64 34748}
!41 = !{i64 34752}
!42 = !{i64 34768}
!43 = !{i64 34772}
!44 = !{i64 34788}
!45 = !{i64 34792}
!46 = !{i64 34808}
!47 = !{i64 34812}
!48 = !{i64 34828}
!49 = !{i64 34832}
!50 = !{i64 34848}
!51 = !{i64 34852}
!52 = !{i64 34868}
!53 = !{i64 34872}
!54 = !{i64 34888}
!55 = !{i64 34892}
!56 = !{i64 34908}
!57 = !{i64 34912}
!58 = !{i64 34928}
!59 = !{i64 34932}
!60 = !{i64 34948}
!61 = !{i64 34952}
!62 = !{i64 34968}
!63 = !{i64 34976}
!64 = !{i64 34980}
!65 = !{i64 34988}
!66 = !{i64 34996}
!67 = !{i64 35008}
!68 = !{i64 35016}
!69 = !{i64 35020}
!70 = !{i64 35028}
!71 = !{i64 35036}
!72 = !{i64 35040}
!73 = !{i64 35048}
!74 = !{i64 35064}
!75 = !{i64 35068}
!76 = !{i64 35072}
!77 = !{i64 35076}
!78 = !{i64 35080}
!79 = !{i64 35092}
!80 = !{i64 35096}
!81 = !{i64 35100}
!82 = !{i64 35112}
!83 = !{i64 35116}
!84 = !{i64 35120}
!85 = !{i64 35124}
!86 = !{i64 35132}
!87 = !{i64 35144}
!88 = !{i64 35148}
!89 = !{i64 35156}
!90 = !{i64 35160}
!91 = !{i64 35192}
!92 = !{i64 35200}
!93 = !{i64 35216}
!94 = !{i64 35224}
!95 = !{i64 35236}
!96 = !{i64 35240}
!97 = !{i64 35244}
!98 = !{i64 35256}
!99 = !{i64 35264}
!100 = !{i64 35280}
!101 = !{i64 35296}
!102 = !{i64 35304}
!103 = !{i64 35312}
!104 = !{i64 35328}
!105 = !{i64 35332}
!106 = !{i64 35384}
!107 = !{i64 35392}
!108 = !{i64 35352}
!109 = !{i64 35368}
!110 = !{i64 35400}
!111 = !{i64 35412}
!112 = !{i64 35428}
!113 = !{i64 35432}
!114 = !{i64 35436}
!115 = !{i64 35440}
!116 = !{i64 35444}
!117 = !{i64 35460}
!118 = !{i64 35468}
!119 = !{i64 35472}
!120 = !{i64 35476}
!121 = !{i64 35488}
!122 = !{i64 35492}
!123 = !{i64 35496}
!124 = !{i64 35500}
!125 = !{i64 35508}
!126 = !{i64 35512}
!127 = !{i64 35516}
!128 = !{i64 35520}
!129 = !{i64 35524}
!130 = !{i64 35544}
!131 = !{i64 35548}
!132 = !{i64 35552}
!133 = !{i64 35556}
!134 = !{i64 35560}
!135 = !{i64 35568}
!136 = !{i64 35580}
!137 = !{i64 35584}
!138 = !{i64 35588}
!139 = !{i64 35592}
!140 = !{i64 35612}
!141 = !{i64 35616}
!142 = !{i64 35620}
!143 = !{i64 35624}
!144 = !{i64 35628}
!145 = !{i64 35640}
!146 = !{i64 35648}
!147 = !{i64 35672}
!148 = !{i64 35676}
!149 = !{i64 35688}
!150 = !{i64 35692}
!151 = !{i64 35696}
!152 = !{i64 35716}
!153 = !{i64 35720}
!154 = !{i64 35724}
!155 = !{i64 35752}
!156 = !{i64 35760}
!157 = !{i64 35764}
!158 = !{i64 35780}
!159 = !{i64 35788}
!160 = !{i64 35796}
!161 = !{i64 35804}
!162 = !{i64 35816}
!163 = !{i64 35824}
!164 = !{i64 35836}
!165 = !{i64 35844}
!166 = !{i64 35856}
!167 = !{i64 35864}
!168 = !{i64 35876}
!169 = !{i64 35884}
!170 = !{i64 35896}
!171 = !{i64 35904}
!172 = !{i64 35916}
!173 = !{i64 35924}
!174 = !{i64 35936}
!175 = !{i64 35944}
!176 = !{i64 35956}
!177 = !{i64 35964}
!178 = !{i64 35976}
!179 = !{i64 35984}
!180 = !{i64 35988}
!181 = !{i64 36004}
!182 = !{i64 36016}
!183 = !{i64 36020}
!184 = !{i64 36032}
!185 = !{i64 36040}
!186 = !{i64 36052}
!187 = !{i64 36060}
!188 = !{i64 36064}
!189 = !{i64 36068}
!190 = !{i64 36072}
!191 = !{i64 36076}
!192 = !{i64 36080}
!193 = !{i64 36088}
!194 = !{i64 36100}
!195 = !{i64 36108}
!196 = !{i64 36112}
!197 = !{i64 36116}
!198 = !{i64 36132}
!199 = !{i64 36136}
!200 = !{i64 36140}
!201 = !{i64 36144}
!202 = !{i64 36160}
!203 = !{i64 36164}
!204 = !{i64 36168}
!205 = !{i64 36172}
!206 = !{i64 36188}
!207 = !{i64 36196}
!208 = !{i64 36240}
!209 = !{i64 36244}
!210 = !{i64 36252}
!211 = !{i64 36260}
!212 = !{i64 36268}
!213 = !{i64 36272}
!214 = !{i64 36288}
!215 = !{i64 36296}
!216 = !{i64 36580}
!217 = !{i64 36584}
!218 = !{i64 36612}
!219 = !{i64 36616}
!220 = !{i64 36620}
!221 = !{i64 36624}
!222 = !{i64 36656}
!223 = !{i64 36720}
!224 = !{i64 36764}
!225 = !{i64 36768}
!226 = !{i64 36772}
!227 = !{i64 36776}
!228 = !{i64 36784}
!229 = !{i64 36788}
!230 = !{i64 36836}
!231 = !{i64 36848}
!232 = !{i64 36868}
!233 = !{i64 36872}
!234 = !{i64 36876}
!235 = !{i64 36880}
!236 = !{i64 36884}
!237 = !{i64 36888}
!238 = !{i64 36896}
!239 = !{i64 36912}
!240 = !{i64 36892}
!241 = !{i64 36916}
!242 = !{i64 36920}
!243 = !{i64 36924}
!244 = !{i64 36928}
!245 = !{i64 36980}
!246 = !{i64 36984}
!247 = !{i64 36988}
!248 = !{i64 37000}
!249 = !{i64 37020}
!250 = !{i64 37024}
!251 = !{i64 37032}
!252 = !{i64 37056}
!253 = !{i64 37064}
!254 = !{i64 37084}
!255 = !{i64 37088}
!256 = !{i64 37096}
!257 = !{i64 37116}
!258 = !{i64 37120}
!259 = !{i64 37128}
!260 = !{i64 37136}
!261 = !{i64 37152}
!262 = !{i64 37156}
!263 = !{i64 37164}
!264 = !{i64 37196}
!265 = !{i64 37224}
!266 = !{i64 37228}
!267 = !{i64 37244}
!268 = !{i64 37252}
!269 = !{i64 37300}
!270 = !{i64 37304}
!271 = !{i64 37308}
!272 = !{i64 37332}
!273 = !{i64 37336}
!274 = !{i64 37340}
!275 = !{i64 37348}
!276 = !{i64 37368}
!277 = !{i64 37372}
!278 = !{i64 37380}
!279 = !{i64 37396}
!280 = !{i64 37412}
!281 = !{i64 37416}
!282 = !{i64 37424}
!283 = !{i64 37476}
!284 = !{i64 37492}
!285 = !{i64 37548}
!286 = !{i64 37556}
