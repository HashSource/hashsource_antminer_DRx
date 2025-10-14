source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%stat = type { i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32 }

@global_var_1219c = local_unnamed_addr global i32 34560
@global_var_121a0 = local_unnamed_addr global i32 34560
@global_var_121a4 = local_unnamed_addr global i32 34560
@global_var_121a8 = local_unnamed_addr global i32 34560
@global_var_121ac = local_unnamed_addr global i32 34560
@global_var_121b0 = local_unnamed_addr global i32 34560
@global_var_121b4 = local_unnamed_addr global i32 34560
@global_var_121b8 = local_unnamed_addr global i32 34560
@global_var_121bc = local_unnamed_addr global i32 34560
@global_var_121c0 = local_unnamed_addr global i32 34560
@global_var_121c4 = local_unnamed_addr global i32 34560
@global_var_121c8 = local_unnamed_addr global i32 34560
@global_var_121cc = local_unnamed_addr global i32 34560
@global_var_121d0 = local_unnamed_addr global i32 34560
@global_var_121d4 = local_unnamed_addr global i32 34560
@global_var_121d8 = local_unnamed_addr global i32 34560
@global_var_121dc = local_unnamed_addr global i32 34560
@global_var_121e0 = local_unnamed_addr global i32 34560
@global_var_121e4 = local_unnamed_addr global i32 34560
@global_var_121e8 = local_unnamed_addr global i32 34560
@global_var_121ec = local_unnamed_addr global i32 34560
@global_var_121f0 = local_unnamed_addr global i32 34560
@global_var_121f4 = local_unnamed_addr global i32 34560
@global_var_884c = local_unnamed_addr constant i32 74256
@global_var_8850 = local_unnamed_addr constant i32 38256
@global_var_9570 = constant [14 x i8] c"%s\0A[line %d]\0A\00"
@global_var_8854 = local_unnamed_addr constant i32 38272
@global_var_9580 = constant [1221 x i8] c"eeprog 0.7.5, a 24Cxx EEPROM reader/writer\0ACopyright (c) 2003 by Stefano Barbato - All rights reserved.\0AUsage: eeprog [-fqxdh] [-16|-8] [ -r addr[:count] | -w addr ]  /dev/i2c-N  i2c-address\0A\0A  Address modes:\0A\09-8\09\09Use 8bit address mode for 24c0x...24C16 [default]\0A\09-16\09\09Use 16bit address mode for 24c32...24C256\0A  Actions:\0A\09-r addr[:count]\09Read [count] (1 if omitted) bytes from [addr]\0A\09\09\09and print them to the standard output\0A\09-w addr\09\09Write input (stdin) at address [addr] of the EEPROM\0A\09-h\09\09Print this help\0A  Options:\0A\09-x\09\09Set hex output mode\0A\09-d\09\09Dummy mode, display what *would* have been done\0A\09-f\09\09Disable warnings and don't ask confirmation\0A\09-q\09\09Quiet mode\0A\0AThe following environment variables could be set instead of the command\0Aline arguments:\0A\09EEPROG_DEV\09\09device name(/dev/i2c-N)\0A\09EEPROG_I2C_ADDR\09\09i2c-address\0A\0A\09Examples\0A\091- read 64 bytes from the EEPROM at address 0x54 on bus 0 starting\0A\09   at address 123 (decimal)\0A\09\09eeprog /dev/i2c-0 0x54 -r 123:64\0A\092- prints the hex codes of the first 32 bytes read from bus 1\0A\09   at address 0x22\0A\09\09eeprog /dev/i2c-1 0x51 -x -r 0x22:0x20\0A\093- write the current timestamp at address 0x200 of the EEPROM on\0A\09   bus 0 at address 0x33\0A\09\09date | eeprog /dev/i2c-0 0x33 -w 0x200\0A\00"
@global_var_8c30 = local_unnamed_addr constant i32 74280
@global_var_12228 = local_unnamed_addr global i32 0
@global_var_8c34 = local_unnamed_addr constant i32 74272
@global_var_8c38 = local_unnamed_addr constant i32 40132
@global_var_9cc4 = constant [13 x i8] c"1:8fr:qhw:xd\00"
@global_var_8c3c = local_unnamed_addr constant i32 40100
@global_var_9ca4 = constant [30 x i8] c"Both read and write requested\00"
@global_var_8c40 = local_unnamed_addr constant i32 40056
@global_var_9c78 = constant [42 x i8] c"EEPROM type switch (-8 or -16) used twice\00"
@global_var_8c44 = local_unnamed_addr constant i32 74248
@global_var_12208 = local_unnamed_addr global i32 0
@global_var_8c48 = local_unnamed_addr constant i32 40148
@global_var_9cd4 = constant [11 x i8] c"EEPROG_DEV\00"
@global_var_8c4c = local_unnamed_addr constant i32 40160
@global_var_9ce0 = constant [16 x i8] c"EEPROG_I2C_ADDR\00"
@global_var_8c50 = local_unnamed_addr constant i32 40368
@global_var_9db0 = constant [86 x i8] c"unable to open eeprom device file (check that the file exists and that it's readable)\00"
@global_var_8c54 = local_unnamed_addr constant i32 74256
@global_var_8c58 = local_unnamed_addr constant i32 40332
@global_var_9d8c = constant [36 x i8] c"Dummy mode selected, nothing done.\0A\00"
@global_var_8c5c = local_unnamed_addr constant i32 40176
@global_var_9cf0 = constant [41 x i8] c"eeprog %s, a 24Cxx EEPROM reader/writer\0A\00"
@global_var_8c60 = local_unnamed_addr constant i32 40220
@global_var_9d1c = constant [6 x i8] c"0.7.5\00"
@global_var_8c64 = local_unnamed_addr constant i32 40228
@global_var_9d24 = constant [62 x i8] c"Copyright (c) 2003 by Stefano Barbato - All rights reserved.\0A\00"
@global_var_8c68 = local_unnamed_addr constant i32 40292
@global_var_9d64 = constant [39 x i8] c"  Bus: %s, Address: 0x%x, Mode: %dbit\0A\00"
@global_var_8c6c = local_unnamed_addr constant i32 40456
@global_var_9e08 = constant [30 x i8] c"  Reading %d bytes from 0x%x\0A\00"
@global_var_8c70 = local_unnamed_addr constant i32 40488
@global_var_9e28 = constant [42 x i8] c"  Writing stdin starting at address 0x%x\0A\00"
@global_var_8ca4 = local_unnamed_addr constant i32 38240
@global_var_8ca8 = local_unnamed_addr constant i32 34904
@global_var_8858 = constant i32 -382906384
@global_var_8cac = local_unnamed_addr constant i32 38140
@global_var_8ccc = local_unnamed_addr constant i32 38096
@global_var_8cd0 = local_unnamed_addr constant i32 104
@global_var_120a8 = global i32 1
@global_var_12190 = local_unnamed_addr global i32* @global_var_120a8
@global_var_121f8 = local_unnamed_addr global i32 0
@global_var_8d00 = local_unnamed_addr constant i32 74244
@global_var_8d04 = local_unnamed_addr constant i32 74247
@global_var_8d08 = local_unnamed_addr constant i32 0
@global_var_8d40 = local_unnamed_addr constant i32 74244
@global_var_8d44 = local_unnamed_addr constant i32 74244
@global_var_8d48 = local_unnamed_addr constant i32 0
@global_var_8d70 = local_unnamed_addr constant i32 74276
@global_var_8da0 = local_unnamed_addr constant i32 73892
@global_var_120a4 = global i32 0
@global_var_8da4 = local_unnamed_addr constant i32 0
@global_var_8de4 = local_unnamed_addr constant i32 74256
@global_var_8de8 = local_unnamed_addr constant i32 39496
@global_var_9a48 = constant [22 x i8] c"Error at line %d: %s\0A\00"
@global_var_9a60 = constant [470 x i8] c"\0A____________________________WARNING____________________________\0AErroneously writing to a system EEPROM (like DIMM SPD modules)\0Acan break your system.  It will NOT boot anymore so you'll not\0Abe able to fix it.\0A\0AReading from 8bit EEPROMs (like that in your DIMM) without using\0Athe -8 switch can also UNEXPECTEDLY write to them, so be sure to\0Ause the -8 command param when required.\0A\0AUse -f to disable this warning message\0A\0APress ENTER to continue or hit CTRL-C to exit\0A\0A\00"
@global_var_8f88 = local_unnamed_addr constant i32 39992
@global_var_9c38 = constant [11 x i8] c"read error\00"
@global_var_8f8c = local_unnamed_addr constant i32 40004
@global_var_9c44 = constant [15 x i8] c"\0A %.4x|  %.2x \00"
@global_var_8f90 = local_unnamed_addr constant i32 74268
@global_var_8f94 = local_unnamed_addr constant i32 40036
@global_var_9c64 = constant [6 x i8] c"%.2x \00"
@global_var_8f98 = local_unnamed_addr constant i32 40944
@global_var_8f9c = local_unnamed_addr constant i32 40020
@global_var_9c54 = constant [10 x i8] c"\0A %.4x|  \00"
@global_var_8fa0 = local_unnamed_addr constant i32 40032
@global_var_9c60 = constant [3 x i8] c"  \00"
@global_var_9044 = local_unnamed_addr constant i32 74280
@global_var_9048 = local_unnamed_addr constant i32 74264
@global_var_904c = local_unnamed_addr constant i32 74256
@global_var_9050 = local_unnamed_addr constant i32 74268
@global_var_9054 = local_unnamed_addr constant i32 40044
@global_var_9c6c = constant [12 x i8] c"write error\00"
@global_var_9058 = local_unnamed_addr constant i32 41024
@global_var_a040 = constant [3 x i8] c"\0A\0A\00"
@global_var_90e4 = local_unnamed_addr constant i32 74256
@global_var_90e8 = local_unnamed_addr constant i32 40532
@global_var_9e54 = constant [24 x i8] c"Error i2c_write_2b: %s\0A\00"
@global_var_9250 = local_unnamed_addr constant i32 74256
@global_var_9254 = local_unnamed_addr constant i32 40632
@global_var_9eb8 = constant [74 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_BYTE function is required. Program halted.\0A\0A\00"
@global_var_9258 = local_unnamed_addr constant i32 40556
@global_var_9e6c = constant [73 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_BYTE function is required. Program halted.\0A\0A\00"
@global_var_925c = local_unnamed_addr constant i32 40948
@global_var_9ff4 = constant [79 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_WORD_DATA function is required. Program halted.\0A\0A\00"
@global_var_9260 = local_unnamed_addr constant i32 40868
@global_var_9fa4 = constant [78 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_WORD_DATA function is required. Program halted.\0A\0A\00"
@global_var_9264 = local_unnamed_addr constant i32 40788
@global_var_9f54 = constant [79 x i8] c"\0AError: I2C_FUNC_SMBUS_WRITE_BYTE_DATA function is required. Program halted.\0A\0A\00"
@global_var_9268 = local_unnamed_addr constant i32 40708
@global_var_9f04 = constant [78 x i8] c"\0AError: I2C_FUNC_SMBUS_READ_BYTE_DATA function is required. Program halted.\0A\0A\00"
@global_var_9408 = local_unnamed_addr constant i32 74256
@global_var_940c = local_unnamed_addr constant i32 41052
@global_var_a05c = constant [26 x i8] c"ERR: unknown eeprom type\0A\00"
@global_var_9410 = local_unnamed_addr constant i32 41028
@global_var_a044 = constant [24 x i8] c"Error i2c_write_1b: %s\0A\00"
@global_var_94f0 = local_unnamed_addr constant i32 74256
@global_var_94f4 = local_unnamed_addr constant i32 41080
@global_var_a078 = constant [24 x i8] c"Error i2c_write_3b: %s\0A\00"
@global_var_94f8 = local_unnamed_addr constant i32 41052
@global_var_9558 = local_unnamed_addr constant i32 35716
@global_var_8b84 = constant i32 -494075872
@global_var_955c = local_unnamed_addr constant i32 35704
@global_var_8b78 = constant i32 -494075872
@global_var_9524 = constant i32 -508534458
@0 = external global i32
@global_var_12210 = local_unnamed_addr global %_IO_FILE* null
@global_var_12220 = external local_unnamed_addr global i8*
@global_var_9560 = constant void ()* inttoptr (i32 -516948194 to void ()*)
@global_var_94fc = constant void ()* inttoptr (i32 -382908936 to void ()*)
@global_var_12224 = external local_unnamed_addr global i8*
@global_var_12218 = local_unnamed_addr global %_IO_FILE* null
@global_var_1221c = local_unnamed_addr global %_IO_FILE* null
@1 = internal constant [2 x i8] c"\0A\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_9ff0 = constant [2 x i8] c"\0A\00"

define i32 @function_86f4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_86f4:
  %0 = call i32 @function_8cb0(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @printf.3(i8* %format, ...) local_unnamed_addr {
dec_label_pc_8714:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @fflush.11(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8720:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @_IO_getc.16(%_IO_FILE* %fp) local_unnamed_addr {
dec_label_pc_872c:
  %0 = call i32 @_IO_getc(%_IO_FILE* %fp), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @__xstat.9(i32 %ver, i8* %filename, %stat* %stat_buf) local_unnamed_addr {
dec_label_pc_8738:
  %0 = call i32 @__xstat(i32 %ver, i8* %filename, %stat* %stat_buf), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define i32 @_IO_putc.22(i32 %c, %_IO_FILE* %fp) local_unnamed_addr {
dec_label_pc_8744:
  %0 = call i32 @_IO_putc(i32 %c, %_IO_FILE* %fp), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @fwrite.21(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_8750:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i32 @ioctl.19(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_875c:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @usleep.8(i32 %useconds) local_unnamed_addr {
dec_label_pc_8768:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i8* @getenv.4(i8* %name) local_unnamed_addr {
dec_label_pc_8774:
  %0 = call i8* @getenv(i8* %name), !insn.addr !10
  ret i8* %0, !insn.addr !10
}

define i32 @puts.10(i8* %s) local_unnamed_addr {
dec_label_pc_8780:
  %0 = call i32 @puts(i8* %s), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @__libc_start_main.7(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_878c:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i8* @strerror.2(i32 %errnum) local_unnamed_addr {
dec_label_pc_8798:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !13
  ret i8* %0, !insn.addr !13
}

define void @function_87a4() local_unnamed_addr {
dec_label_pc_87a4:
  call void @__gmon_start__(), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @open.18(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_87b0:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define void @exit.6(i32 %status) local_unnamed_addr {
dec_label_pc_87bc:
  call void @exit(i32 %status), !insn.addr !16
  ret void, !insn.addr !16
}

define i32 @strtoul.23(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_87c8:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @strlen.20(i8* %s) local_unnamed_addr {
dec_label_pc_87d4:
  %0 = call i32 @strlen(i8* %s), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @getopt.17(i32 %argc, i8** %argv, i8* %shortopts) local_unnamed_addr {
dec_label_pc_87e0:
  %0 = call i32 @getopt(i32 %argc, i8** %argv, i8* %shortopts), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @fprintf.13(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_87ec:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32* @__errno_location.12() local_unnamed_addr {
dec_label_pc_87f8:
  %0 = call i32* @__errno_location(), !insn.addr !21
  ret i32* %0, !insn.addr !21
}

define i32 @fputc.15(i32 %c, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8804:
  %0 = call i32 @fputc(i32 %c, %_IO_FILE* %stream), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @abort.5() local_unnamed_addr {
dec_label_pc_8810:
  call void @abort(), !insn.addr !23
  ret void, !insn.addr !23
}

define i32 @close.14(i32 %fd) local_unnamed_addr {
dec_label_pc_881c:
  %0 = call i32 @close(i32 %fd), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_8828(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8828:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !25
  %1 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %0, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_9570, i32 0, i32 0), i8* getelementptr inbounds ([1221 x i8], [1221 x i8]* @global_var_9580, i32 0, i32 0), i32 %arg1), !insn.addr !26
  call void @exit(i32 1), !insn.addr !27
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !27
}

define i32 @function_8858(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8858:
  %r6.0.reg2mem = alloca i32, !insn.addr !28
  %r5.0.reg2mem = alloca i32, !insn.addr !28
  %r3.0.reg2mem = alloca i32, !insn.addr !28
  %r2.0.reg2mem = alloca i32, !insn.addr !28
  %r4.0.ph17.be.reg2mem = alloca i32, !insn.addr !28
  %r0.2.reg2mem = alloca i32, !insn.addr !28
  %sl.0.ph25.reg2mem = alloca i32, !insn.addr !28
  %sl.0.ph23.reg2mem = alloca i32, !insn.addr !28
  %sb.0.ph22.reg2mem = alloca i32, !insn.addr !28
  %sl.0.ph20.reg2mem = alloca i32, !insn.addr !28
  %sb.0.ph19.reg2mem = alloca i32, !insn.addr !28
  %r4.0.ph17.reg2mem = alloca i32, !insn.addr !28
  %sl.0.ph15.reg2mem = alloca i32, !insn.addr !28
  %sb.0.ph14.reg2mem = alloca i32, !insn.addr !28
  %r4.0.ph12.reg2mem = alloca i32, !insn.addr !28
  %stack_var_-160.0.ph11.reg2mem = alloca i32, !insn.addr !28
  %sl.0.ph.reg2mem = alloca i32, !insn.addr !28
  %sb.0.ph.reg2mem = alloca i32, !insn.addr !28
  %r8.0.ph.reg2mem = alloca i32, !insn.addr !28
  %r4.0.ph.reg2mem = alloca i32, !insn.addr !28
  %stack_var_-160.0.ph.reg2mem = alloca i32, !insn.addr !28
  %stack_var_-156.0.ph.reg2mem = alloca i32, !insn.addr !28
  %stack_var_-148 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-128 = alloca i32, align 4
  %stack_var_-144 = alloca i32, align 4
  store i32 0, i32* @global_var_12228, align 4, !insn.addr !29
  %0 = inttoptr i32 %arg2 to i8**, !insn.addr !30
  store i32 0, i32* %stack_var_-156.0.ph.reg2mem, !insn.addr !31
  store i32 0, i32* %stack_var_-160.0.ph.reg2mem, !insn.addr !31
  store i32 0, i32* %r4.0.ph.reg2mem, !insn.addr !31
  store i32 0, i32* %r8.0.ph.reg2mem, !insn.addr !31
  store i32 0, i32* %sb.0.ph.reg2mem, !insn.addr !31
  store i32 0, i32* %sl.0.ph.reg2mem, !insn.addr !31
  br label %dec_label_pc_8890.outer, !insn.addr !31

dec_label_pc_8890.outer:                          ; preds = %dec_label_pc_88d4, %dec_label_pc_8858
  %sl.0.ph.reload = load i32, i32* %sl.0.ph.reg2mem
  %sb.0.ph.reload = load i32, i32* %sb.0.ph.reg2mem
  %r8.0.ph.reload = load i32, i32* %r8.0.ph.reg2mem
  %r4.0.ph.reload = load i32, i32* %r4.0.ph.reg2mem
  %stack_var_-160.0.ph.reload = load i32, i32* %stack_var_-160.0.ph.reg2mem
  %stack_var_-156.0.ph.reload = load i32, i32* %stack_var_-156.0.ph.reg2mem
  store i32 %stack_var_-160.0.ph.reload, i32* %stack_var_-160.0.ph11.reg2mem
  store i32 %r4.0.ph.reload, i32* %r4.0.ph12.reg2mem
  store i32 %sb.0.ph.reload, i32* %sb.0.ph14.reg2mem
  store i32 %sl.0.ph.reload, i32* %sl.0.ph15.reg2mem
  br label %dec_label_pc_8890.outer10

dec_label_pc_8890.outer10:                        ; preds = %dec_label_pc_8890.outer, %dec_label_pc_8918
  %sl.0.ph15.reload = load i32, i32* %sl.0.ph15.reg2mem
  %sb.0.ph14.reload = load i32, i32* %sb.0.ph14.reg2mem
  %r4.0.ph12.reload = load i32, i32* %r4.0.ph12.reg2mem
  %stack_var_-160.0.ph11.reload = load i32, i32* %stack_var_-160.0.ph11.reg2mem
  store i32 %r4.0.ph12.reload, i32* %r4.0.ph17.reg2mem
  store i32 %sb.0.ph14.reload, i32* %sb.0.ph19.reg2mem
  store i32 %sl.0.ph15.reload, i32* %sl.0.ph20.reg2mem
  br label %dec_label_pc_8890.outer16

dec_label_pc_8890.outer16:                        ; preds = %dec_label_pc_8890.outer16.backedge, %dec_label_pc_8890.outer10
  %sl.0.ph20.reload = load i32, i32* %sl.0.ph20.reg2mem
  %sb.0.ph19.reload = load i32, i32* %sb.0.ph19.reg2mem
  %r4.0.ph17.reload = load i32, i32* %r4.0.ph17.reg2mem
  store i32 %sb.0.ph19.reload, i32* %sb.0.ph22.reg2mem
  store i32 %sl.0.ph20.reload, i32* %sl.0.ph23.reg2mem
  br label %dec_label_pc_8890.outer21

dec_label_pc_8890.outer21:                        ; preds = %dec_label_pc_8890.outer16, %dec_label_pc_8938
  %sl.0.ph23.reload = load i32, i32* %sl.0.ph23.reg2mem
  %sb.0.ph22.reload = load i32, i32* %sb.0.ph22.reg2mem
  store i32 %sl.0.ph23.reload, i32* %sl.0.ph25.reg2mem
  br label %dec_label_pc_8890.outer24

dec_label_pc_8890.outer24:                        ; preds = %dec_label_pc_8890.outer21, %dec_label_pc_88c0
  %sl.0.ph25.reload = load i32, i32* %sl.0.ph25.reg2mem
  br label %dec_label_pc_8890

dec_label_pc_8890:                                ; preds = %dec_label_pc_8890.outer24, %dec_label_pc_8928
  %1 = call i32 @getopt(i32 %arg1, i8** %0, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_9cc4, i32 0, i32 0)), !insn.addr !30
  switch i32 %1, label %dec_label_pc_88b4 [
    i32 -1, label %dec_label_pc_898c
    i32 102, label %dec_label_pc_8938
  ]

dec_label_pc_88b4:                                ; preds = %dec_label_pc_8890
  %2 = icmp sgt i32 %1, 102, !insn.addr !32
  br i1 %2, label %dec_label_pc_88f8, label %dec_label_pc_88b8, !insn.addr !32

dec_label_pc_88b8:                                ; preds = %dec_label_pc_88b4
  %3 = icmp eq i32 %1, 56, !insn.addr !33
  br i1 %3, label %dec_label_pc_8974, label %dec_label_pc_88c0, !insn.addr !34

dec_label_pc_88c0:                                ; preds = %dec_label_pc_88b8
  %4 = add i32 %sl.0.ph25.reload, 1
  store i32 %4, i32* %sl.0.ph25.reg2mem
  switch i32 %1, label %dec_label_pc_88d4 [
    i32 100, label %dec_label_pc_8890.outer24
    i32 49, label %dec_label_pc_8940
  ]

dec_label_pc_88d4:                                ; preds = %dec_label_pc_88c0, %dec_label_pc_88f8
  %5 = icmp ne i32 %r8.0.ph.reload, 0, !insn.addr !35
  %spec.select4 = zext i1 %5 to i32
  %6 = call i32 @function_8dbc(i32 %spec.select4, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_9ca4, i32 0, i32 0), i32 208, i32 %1), !insn.addr !36
  %7 = load i8*, i8** @global_var_12220, align 4, !insn.addr !37
  %phitmp = ptrtoint i8* %7 to i32
  store i32 %phitmp, i32* %stack_var_-156.0.ph.reg2mem, !insn.addr !38
  store i32 %stack_var_-160.0.ph11.reload, i32* %stack_var_-160.0.ph.reg2mem, !insn.addr !38
  store i32 %r4.0.ph17.reload, i32* %r4.0.ph.reg2mem, !insn.addr !38
  store i32 %1, i32* %r8.0.ph.reg2mem, !insn.addr !38
  store i32 %sb.0.ph22.reload, i32* %sb.0.ph.reg2mem, !insn.addr !38
  store i32 %sl.0.ph25.reload, i32* %sl.0.ph.reg2mem, !insn.addr !38
  br label %dec_label_pc_8890.outer, !insn.addr !38

dec_label_pc_88f8:                                ; preds = %dec_label_pc_88b4
  switch i32 %1, label %dec_label_pc_88d4 [
    i32 113, label %dec_label_pc_8928
    i32 120, label %dec_label_pc_8918
    i32 104, label %dec_label_pc_8910
  ]

dec_label_pc_8910:                                ; preds = %dec_label_pc_88f8
  %8 = call i32 @function_8828(i32 205, i32 %arg2, i32 ptrtoint ([13 x i8]* @global_var_9cc4 to i32), i32 104), !insn.addr !39
  unreachable, !insn.addr !39

dec_label_pc_8918:                                ; preds = %dec_label_pc_88f8
  %9 = add i32 %stack_var_-160.0.ph11.reload, 1, !insn.addr !40
  store i32 %9, i32* %stack_var_-160.0.ph11.reg2mem, !insn.addr !41
  store i32 %r4.0.ph17.reload, i32* %r4.0.ph12.reg2mem, !insn.addr !41
  store i32 %sb.0.ph22.reload, i32* %sb.0.ph14.reg2mem, !insn.addr !41
  store i32 %sl.0.ph25.reload, i32* %sl.0.ph15.reg2mem, !insn.addr !41
  br label %dec_label_pc_8890.outer10, !insn.addr !41

dec_label_pc_8928:                                ; preds = %dec_label_pc_88f8
  %10 = load i32, i32* @global_var_12228, align 4, !insn.addr !42
  %11 = add i32 %10, 1, !insn.addr !43
  store i32 %11, i32* @global_var_12228, align 4, !insn.addr !44
  br label %dec_label_pc_8890, !insn.addr !45

dec_label_pc_8938:                                ; preds = %dec_label_pc_8890
  %12 = add i32 %sb.0.ph22.reload, 1, !insn.addr !46
  store i32 %12, i32* %sb.0.ph22.reg2mem, !insn.addr !47
  store i32 %sl.0.ph25.reload, i32* %sl.0.ph23.reg2mem, !insn.addr !47
  br label %dec_label_pc_8890.outer21, !insn.addr !47

dec_label_pc_8940:                                ; preds = %dec_label_pc_88c0
  %13 = load i8*, i8** @global_var_12220, align 4, !insn.addr !48
  %14 = load i8, i8* %13, align 1, !insn.addr !49
  %15 = icmp eq i8 %14, 54, !insn.addr !50
  store i32 1, i32* %r0.2.reg2mem, !insn.addr !51
  br i1 %15, label %dec_label_pc_8a60, label %dec_label_pc_8954, !insn.addr !51

dec_label_pc_8954:                                ; preds = %dec_label_pc_8a60, %dec_label_pc_8940
  %16 = zext i8 %14 to i32, !insn.addr !49
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %17 = call i32 @function_8da8(i32 %r0.2.reload, i32 184, i32 ptrtoint ([13 x i8]* @global_var_9cc4 to i32), i32 %16), !insn.addr !52
  %18 = call i32 @function_8dbc(i32 %r4.0.ph17.reload, i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_9c78, i32 0, i32 0), i32 185, i32 %16), !insn.addr !53
  store i32 2, i32* %r4.0.ph17.be.reg2mem, !insn.addr !54
  br label %dec_label_pc_8890.outer16.backedge, !insn.addr !54

dec_label_pc_8974:                                ; preds = %dec_label_pc_88b8
  %19 = call i32 @function_8dbc(i32 %r4.0.ph17.reload, i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_9c78, i32 0, i32 0), i32 195, i32 56), !insn.addr !55
  store i32 1, i32* %r4.0.ph17.be.reg2mem, !insn.addr !56
  br label %dec_label_pc_8890.outer16.backedge, !insn.addr !56

dec_label_pc_8890.outer16.backedge:               ; preds = %dec_label_pc_8974, %dec_label_pc_8954
  %r4.0.ph17.be.reload = load i32, i32* %r4.0.ph17.be.reg2mem
  store i32 %r4.0.ph17.be.reload, i32* %r4.0.ph17.reg2mem
  store i32 %sb.0.ph22.reload, i32* %sb.0.ph19.reg2mem
  store i32 %sl.0.ph25.reload, i32* %sl.0.ph20.reg2mem
  br label %dec_label_pc_8890.outer16

dec_label_pc_898c:                                ; preds = %dec_label_pc_8890
  %20 = icmp ugt i32 %r8.0.ph.reload, 1
  %21 = select i1 %20, i32 %r8.0.ph.reload, i32 1
  %22 = sub i32 %21, %r8.0.ph.reload
  %23 = call i32 @function_8da8(i32 %22, i32 216, i32 ptrtoint ([13 x i8]* @global_var_9cc4 to i32), i32 -1), !insn.addr !57
  %24 = load i32, i32* @global_var_12208, align 4, !insn.addr !58
  %25 = sub i32 %arg1, %24, !insn.addr !59
  switch i32 %25, label %dec_label_pc_8a70 [
    i32 1, label %dec_label_pc_8ab0
    i32 2, label %dec_label_pc_8a9c
    i32 0, label %dec_label_pc_89c8
  ]

dec_label_pc_89c8:                                ; preds = %dec_label_pc_898c
  %26 = call i8* @getenv(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_9cd4, i32 0, i32 0)), !insn.addr !60
  %27 = ptrtoint i8* %26 to i32, !insn.addr !60
  %28 = call i8* @getenv(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_9ce0, i32 0, i32 0)), !insn.addr !61
  %29 = ptrtoint i8* %28 to i32, !insn.addr !61
  store i32 ptrtoint ([13 x i8]* @global_var_9cc4 to i32), i32* %r2.0.reg2mem, !insn.addr !62
  store i32 %24, i32* %r3.0.reg2mem, !insn.addr !62
  store i32 %27, i32* %r5.0.reg2mem, !insn.addr !62
  store i32 %29, i32* %r6.0.reg2mem, !insn.addr !62
  br label %dec_label_pc_89e0, !insn.addr !62

dec_label_pc_89e0:                                ; preds = %dec_label_pc_8c18, %dec_label_pc_8ac8, %dec_label_pc_8a9c, %dec_label_pc_89c8
  %30 = icmp eq i32 %r4.0.ph17.reload, 0, !insn.addr !63
  %r4.1 = select i1 %30, i32 1, i32 %r4.0.ph17.reload
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %31 = icmp eq i32 %r5.0.reload, 0, !insn.addr !64
  %32 = icmp eq i32 %r6.0.reload, 0
  %spec.select7 = or i1 %31, %32
  %spec.select8 = zext i1 %spec.select7 to i32
  %33 = call i32 @function_8da8(i32 %spec.select8, i32 242, i32 %r2.0.reload, i32 %r3.0.reload), !insn.addr !65
  %34 = inttoptr i32 %r6.0.reload to i8*, !insn.addr !66
  %35 = call i32 @strtoul(i8* %34, i8** null, i32 0), !insn.addr !66
  %36 = load i32, i32* @global_var_12228, align 4, !insn.addr !67
  %37 = icmp eq i32 %36, 0, !insn.addr !68
  br i1 %37, label %dec_label_pc_8ae0, label %dec_label_pc_8a1c, !insn.addr !69

dec_label_pc_8a1c:                                ; preds = %dec_label_pc_8b08, %dec_label_pc_8ae0, %dec_label_pc_8b2c, %dec_label_pc_89e0
  %38 = icmp eq i32 %sl.0.ph25.reload, 0, !insn.addr !70
  br i1 %38, label %dec_label_pc_8a24, label %dec_label_pc_8a78, !insn.addr !71

dec_label_pc_8a24:                                ; preds = %dec_label_pc_8a1c
  %39 = ptrtoint i32* %stack_var_-144 to i32, !insn.addr !72
  %40 = call i32 @function_90ec(i32 %r5.0.reload, i32 %35, i32 %r4.1, i32* nonnull %stack_var_-144), !insn.addr !73
  %41 = icmp slt i32 %40, 0
  %42 = zext i1 %41 to i32, !insn.addr !74
  %43 = call i32 @function_8dbc(i32 %42, i8* getelementptr inbounds ([86 x i8], [86 x i8]* @global_var_9db0, i32 0, i32 0), i32 256, i32 %39), !insn.addr !75
  switch i32 %r8.0.ph.reload, label %dec_label_pc_8a58 [
    i32 114, label %dec_label_pc_8b90
    i32 119, label %dec_label_pc_8b54
  ]

dec_label_pc_8a58:                                ; preds = %dec_label_pc_8a24
  %44 = call i32 @function_8828(i32 276, i32 ptrtoint ([86 x i8]* @global_var_9db0 to i32), i32 256, i32 %39), !insn.addr !76
  unreachable, !insn.addr !76

dec_label_pc_8a60:                                ; preds = %dec_label_pc_8940
  %45 = call i32 @strlen(i8* %13), !insn.addr !77
  %46 = add i32 %45, -1, !insn.addr !78
  %47 = icmp eq i32 %45, 1, !insn.addr !78
  %spec.select = select i1 %47, i32 %46, i32 1
  store i32 %spec.select, i32* %r0.2.reg2mem, !insn.addr !79
  br label %dec_label_pc_8954, !insn.addr !79

dec_label_pc_8a70:                                ; preds = %dec_label_pc_898c
  %48 = call i32 @function_8828(i32 240, i32 216, i32 ptrtoint ([13 x i8]* @global_var_9cc4 to i32), i32 %24), !insn.addr !80
  unreachable, !insn.addr !80

dec_label_pc_8a78:                                ; preds = %dec_label_pc_8a1c
  %49 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !81
  %50 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_9d8c to i32*), i32 1, i32 35, %_IO_FILE* %49), !insn.addr !82
  br label %dec_label_pc_8a90, !insn.addr !82

dec_label_pc_8a90:                                ; preds = %dec_label_pc_8b84, %dec_label_pc_8a78
  ret i32 0, !insn.addr !83

dec_label_pc_8a9c:                                ; preds = %dec_label_pc_898c
  %51 = add i32 %24, 1, !insn.addr !84
  %52 = mul i32 %24, 4, !insn.addr !85
  %53 = add i32 %52, %arg2, !insn.addr !85
  %54 = inttoptr i32 %53 to i32*, !insn.addr !85
  %55 = load i32, i32* %54, align 4, !insn.addr !85
  store i32 %51, i32* @global_var_12208, align 4, !insn.addr !86
  %56 = mul i32 %51, 4, !insn.addr !87
  %57 = add i32 %56, %arg2, !insn.addr !87
  %58 = inttoptr i32 %57 to i32*, !insn.addr !87
  %59 = load i32, i32* %58, align 4, !insn.addr !87
  store i32 %51, i32* %r2.0.reg2mem, !insn.addr !88
  store i32 %24, i32* %r3.0.reg2mem, !insn.addr !88
  store i32 %55, i32* %r5.0.reg2mem, !insn.addr !88
  store i32 %59, i32* %r6.0.reg2mem, !insn.addr !88
  br label %dec_label_pc_89e0, !insn.addr !88

dec_label_pc_8ab0:                                ; preds = %dec_label_pc_898c
  %60 = mul i32 %24, 4, !insn.addr !89
  %61 = add i32 %60, %arg2, !insn.addr !89
  %62 = inttoptr i32 %61 to i32*, !insn.addr !89
  %63 = load i32, i32* %62, align 4, !insn.addr !89
  %64 = ptrtoint i32* %stack_var_-128 to i32, !insn.addr !90
  %65 = inttoptr i32 %63 to i8*, !insn.addr !91
  %66 = bitcast i32* %stack_var_-128 to %stat*, !insn.addr !91
  %67 = call i32 @__xstat(i32 3, i8* %65, %stat* nonnull %66), !insn.addr !91
  %68 = icmp eq i32 %67, -1, !insn.addr !92
  br i1 %68, label %dec_label_pc_8c18, label %dec_label_pc_8ac8, !insn.addr !93

dec_label_pc_8ac8:                                ; preds = %dec_label_pc_8ab0
  %69 = load i32, i32* @global_var_12208, align 4, !insn.addr !94
  %70 = mul i32 %69, 4, !insn.addr !95
  %71 = add i32 %70, %arg2, !insn.addr !95
  %72 = inttoptr i32 %71 to i32*, !insn.addr !95
  %73 = load i32, i32* %72, align 4, !insn.addr !95
  %74 = call i8* @getenv(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_9ce0, i32 0, i32 0)), !insn.addr !96
  %75 = ptrtoint i8* %74 to i32, !insn.addr !96
  store i32 %64, i32* %r2.0.reg2mem, !insn.addr !97
  store i32 %69, i32* %r3.0.reg2mem, !insn.addr !97
  store i32 %73, i32* %r5.0.reg2mem, !insn.addr !97
  store i32 %75, i32* %r6.0.reg2mem, !insn.addr !97
  br label %dec_label_pc_89e0, !insn.addr !97

dec_label_pc_8ae0:                                ; preds = %dec_label_pc_89e0
  %76 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !98
  %77 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %76, i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_var_9cf0, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_9d1c, i32 0, i32 0)), !insn.addr !99
  %78 = load i32, i32* @global_var_12228, align 4, !insn.addr !100
  %79 = icmp eq i32 %78, 0, !insn.addr !101
  br i1 %79, label %dec_label_pc_8b08, label %dec_label_pc_8a1c, !insn.addr !102

dec_label_pc_8b08:                                ; preds = %dec_label_pc_8ae0
  %80 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !103
  %81 = call i32 @fwrite(i32* bitcast ([62 x i8]* @global_var_9d24 to i32*), i32 1, i32 61, %_IO_FILE* %80), !insn.addr !104
  %82 = load i32, i32* @global_var_12228, align 4, !insn.addr !105
  %83 = icmp eq i32 %82, 0, !insn.addr !106
  br i1 %83, label %dec_label_pc_8b2c, label %dec_label_pc_8a1c, !insn.addr !107

dec_label_pc_8b2c:                                ; preds = %dec_label_pc_8b08
  %84 = icmp eq i32 %r4.1, 1, !insn.addr !108
  %85 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !109
  %r3.2 = select i1 %84, i32 8, i32 16
  %86 = inttoptr i32 %r5.0.reload to i8*, !insn.addr !110
  %87 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %85, i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_9d64, i32 0, i32 0), i8* %86, i32 %35, i32 %r3.2), !insn.addr !110
  br label %dec_label_pc_8a1c, !insn.addr !111

dec_label_pc_8b54:                                ; preds = %dec_label_pc_8a24
  %88 = icmp eq i32 %sb.0.ph22.reload, 0, !insn.addr !112
  br i1 %88, label %dec_label_pc_8c10, label %dec_label_pc_8b5c, !insn.addr !113

dec_label_pc_8b5c:                                ; preds = %dec_label_pc_8c10, %dec_label_pc_8b54
  %89 = call i32 @function_8dec(i32 %stack_var_-156.0.ph.reload, i32* nonnull %stack_var_-152, i32* nonnull %stack_var_-148), !insn.addr !114
  %90 = load i32, i32* @global_var_12228, align 4, !insn.addr !115
  %91 = icmp eq i32 %90, 0, !insn.addr !116
  br i1 %91, label %dec_label_pc_8bf8, label %dec_label_pc_8b78, !insn.addr !117

dec_label_pc_8b78:                                ; preds = %dec_label_pc_8bf8, %dec_label_pc_8b5c
  %92 = load i32, i32* %stack_var_-152, align 4, !insn.addr !118
  %93 = call i32 @function_8fa4(i32* nonnull %stack_var_-144, i32 %92), !insn.addr !119
  br label %dec_label_pc_8b84, !insn.addr !119

dec_label_pc_8b84:                                ; preds = %dec_label_pc_8bbc, %dec_label_pc_8b78
  %94 = call i32 @function_926c(i32* nonnull %stack_var_-144), !insn.addr !120
  br label %dec_label_pc_8a90, !insn.addr !121

dec_label_pc_8b90:                                ; preds = %dec_label_pc_8a24
  %95 = icmp eq i32 %sb.0.ph22.reload, 0, !insn.addr !122
  br i1 %95, label %dec_label_pc_8bf0, label %dec_label_pc_8b98, !insn.addr !123

dec_label_pc_8b98:                                ; preds = %dec_label_pc_8bf0, %dec_label_pc_8b90
  store i32 1, i32* %stack_var_-148, align 4, !insn.addr !124
  %96 = call i32 @function_8dec(i32 %stack_var_-156.0.ph.reload, i32* nonnull %stack_var_-152, i32* nonnull %stack_var_-148), !insn.addr !125
  %97 = load i32, i32* @global_var_12228, align 4, !insn.addr !126
  %98 = icmp eq i32 %97, 0, !insn.addr !127
  br i1 %98, label %dec_label_pc_8bd4, label %dec_label_pc_8bbc, !insn.addr !128

dec_label_pc_8bbc:                                ; preds = %dec_label_pc_8bd4, %dec_label_pc_8b98
  %99 = load i32, i32* %stack_var_-152, align 4, !insn.addr !129
  %100 = load i32, i32* %stack_var_-148, align 4, !insn.addr !130
  %101 = call i32 @function_8e7c(i32* nonnull %stack_var_-144, i32 %99, i32 %100, i32 %stack_var_-160.0.ph11.reload), !insn.addr !131
  br label %dec_label_pc_8b84, !insn.addr !132

dec_label_pc_8bd4:                                ; preds = %dec_label_pc_8b98
  %102 = load i32, i32* %stack_var_-148, align 4, !insn.addr !133
  %103 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !134
  %104 = load i32, i32* %stack_var_-152, align 4, !insn.addr !135
  %105 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %103, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_9e08, i32 0, i32 0), i32 %102, i32 %104), !insn.addr !136
  br label %dec_label_pc_8bbc, !insn.addr !137

dec_label_pc_8bf0:                                ; preds = %dec_label_pc_8b90
  %106 = call i32 @function_8e40(i32 %43, i32 ptrtoint ([86 x i8]* @global_var_9db0 to i32), i32 256, i32 %39), !insn.addr !138
  br label %dec_label_pc_8b98, !insn.addr !139

dec_label_pc_8bf8:                                ; preds = %dec_label_pc_8b5c
  %107 = load i32, i32* %stack_var_-152, align 4, !insn.addr !140
  %108 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !141
  %109 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %108, i8* getelementptr inbounds ([42 x i8], [42 x i8]* @global_var_9e28, i32 0, i32 0), i32 %107), !insn.addr !142
  br label %dec_label_pc_8b78, !insn.addr !143

dec_label_pc_8c10:                                ; preds = %dec_label_pc_8b54
  %110 = call i32 @function_8e40(i32 %43, i32 ptrtoint ([86 x i8]* @global_var_9db0 to i32), i32 256, i32 %39), !insn.addr !144
  br label %dec_label_pc_8b5c, !insn.addr !145

dec_label_pc_8c18:                                ; preds = %dec_label_pc_8ab0
  %111 = call i8* @getenv(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_9cd4, i32 0, i32 0)), !insn.addr !146
  %112 = ptrtoint i8* %111 to i32, !insn.addr !146
  %113 = load i32, i32* @global_var_12208, align 4, !insn.addr !147
  %114 = mul i32 %113, 4, !insn.addr !148
  %115 = add i32 %114, %arg2, !insn.addr !148
  %116 = inttoptr i32 %115 to i32*, !insn.addr !148
  %117 = load i32, i32* %116, align 4, !insn.addr !148
  store i32 %64, i32* %r2.0.reg2mem, !insn.addr !149
  store i32 %113, i32* %r3.0.reg2mem, !insn.addr !149
  store i32 %112, i32* %r5.0.reg2mem, !insn.addr !149
  store i32 %117, i32* %r6.0.reg2mem, !insn.addr !149
  br label %dec_label_pc_89e0, !insn.addr !149

; uselistorder directives
  uselistorder i32 %64, { 1, 0 }
  uselistorder i32 %45, { 1, 0 }
  uselistorder i32 %39, { 1, 2, 0, 3 }
  uselistorder i32 %35, { 1, 0 }
  uselistorder i32 %r5.0.reload, { 1, 2, 0 }
  uselistorder i32 %24, { 2, 1, 3, 5, 4, 0, 6 }
  uselistorder i8 %14, { 1, 0 }
  uselistorder i32 %1, { 4, 0, 1, 2, 3, 6, 5 }
  uselistorder i32 %sl.0.ph25.reload, { 1, 4, 5, 3, 2, 0 }
  uselistorder i32 %sb.0.ph22.reload, { 2, 1, 5, 0, 4, 3 }
  uselistorder i32 %r4.0.ph17.reload, { 2, 3, 1, 0, 5, 4 }
  uselistorder i32 %stack_var_-160.0.ph11.reload, { 1, 0, 2 }
  uselistorder i32 %r8.0.ph.reload, { 4, 3, 2, 1, 0 }
  uselistorder i32* %stack_var_-152, { 2, 3, 4, 0, 5, 1 }
  uselistorder i32* %stack_var_-148, { 2, 3, 0, 4, 1 }
  uselistorder i32* %stack_var_-156.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-160.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.ph.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-160.0.ph11.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.ph12.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sb.0.ph14.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph15.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.ph17.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sb.0.ph19.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph20.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sb.0.ph22.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph23.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.0.ph25.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r3.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r5.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32 (i32, i32, i32, i32)* @function_8e40, { 1, 0 }
  uselistorder i32 (i32, i32*, i32*)* @function_8dec, { 1, 0 }
  uselistorder i32 ptrtoint ([86 x i8]* @global_var_9db0 to i32), { 1, 2, 0 }
  uselistorder [86 x i8]* @global_var_9db0, { 1, 0 }
  uselistorder i8* (i8*)* @getenv, { 0, 3, 2, 1, 4 }
  uselistorder i32* @global_var_12208, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, i32, i32)* @function_8da8, { 2, 1, 0 }
  uselistorder i32 ptrtoint ([13 x i8]* @global_var_9cc4 to i32), { 3, 0, 4, 1, 2 }
  uselistorder i8** @global_var_12220, { 1, 0 }
  uselistorder i32 102, { 1, 0 }
  uselistorder [13 x i8]* @global_var_9cc4, { 1, 0 }
  uselistorder label %dec_label_pc_8a1c, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_88d4, { 1, 0 }
  uselistorder label %dec_label_pc_8890, { 1, 0 }
  uselistorder label %dec_label_pc_8890.outer24, { 1, 0 }
  uselistorder label %dec_label_pc_8890.outer21, { 1, 0 }
  uselistorder label %dec_label_pc_8890.outer10, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8c74:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !150
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !150
  %2 = call i32 @__libc_start_main(i32 ptrtoint (i32* @global_var_8858 to i32), i32 %arg2, i8** nonnull %0, void ()* bitcast (void ()** @global_var_94fc to void ()*), void ()* bitcast (void ()** @global_var_9560 to void ()*), void ()* %1), !insn.addr !150
  call void @abort(), !insn.addr !151
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !151
}

define i32 @function_8cb0() local_unnamed_addr {
dec_label_pc_8cb0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_121f8, align 4, !insn.addr !152
  %3 = icmp eq i32 %2, 0, !insn.addr !153
  br i1 %3, label %4, label %dec_label_pc_8cc8, !insn.addr !154

; <label>:4:                                      ; preds = %dec_label_pc_8cb0
  ret i32 %1, !insn.addr !154

dec_label_pc_8cc8:                                ; preds = %dec_label_pc_8cb0
  call void @__gmon_start__(), !insn.addr !155
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !155
}

define i32 @function_8cd4(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_8cd4:
  ret i32 74244, !insn.addr !156
}

define i32 @function_8d0c(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8d0c:
  ret i32 74244, !insn.addr !157
}

define i32 @function_8d4c() local_unnamed_addr {
dec_label_pc_8d4c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_12224 to i8*), align 4, !insn.addr !158
  %5 = icmp eq i8 %4, 0, !insn.addr !159
  br i1 %5, label %dec_label_pc_8d60, label %6, !insn.addr !160

; <label>:6:                                      ; preds = %dec_label_pc_8d4c
  ret i32 %3, !insn.addr !160

dec_label_pc_8d60:                                ; preds = %dec_label_pc_8d4c
  %7 = call i32 @function_8cd4(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !161
  store i8 1, i8* bitcast (i8** @global_var_12224 to i8*), align 4, !insn.addr !162
  ret i32 %7, !insn.addr !163

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_8d74(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8d74:
  %0 = call i32 @function_8d0c(i32* nonnull @global_var_120a4, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !164
  ret i32 %0, !insn.addr !164
}

define i32 @function_8da8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8da8:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !165
  br i1 %0, label %1, label %dec_label_pc_8db4, !insn.addr !166

; <label>:1:                                      ; preds = %dec_label_pc_8da8
  ret i32 0, !insn.addr !166

dec_label_pc_8db4:                                ; preds = %dec_label_pc_8da8
  %2 = call i32 @function_8828(i32 %arg2, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !167
  ret i32 %2, !insn.addr !167

; uselistorder directives
  uselistorder i32 (i32, i32, i32, i32)* @function_8828, { 3, 2, 1, 0 }
  uselistorder i32 %arg2, { 1, 0 }
}

define i32 @function_8dbc(i32 %arg1, i8* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8dbc:
  %0 = icmp eq i32 %arg1, 0, !insn.addr !168
  br i1 %0, label %1, label %dec_label_pc_8dc8, !insn.addr !169

; <label>:1:                                      ; preds = %dec_label_pc_8dbc
  ret i32 0, !insn.addr !169

dec_label_pc_8dc8:                                ; preds = %dec_label_pc_8dbc
  %2 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !170
  %3 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %2, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_9a48, i32 0, i32 0), i32 %arg3, i8* %arg2), !insn.addr !171
  call void @exit(i32 1), !insn.addr !172
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !172
}

define i32 @function_8dec(i32 %arg1, i32* %arg2, i32* %arg3) local_unnamed_addr {
dec_label_pc_8dec:
  %r0.0.reg2mem = alloca i32, !insn.addr !173
  %stack_var_-20 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !174
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-20, i32 0), !insn.addr !174
  %2 = load i8*, i8** %stack_var_-20, align 4, !insn.addr !175
  store i32 %1, i32* %arg2, align 4, !insn.addr !176
  %3 = load i8, i8* %2, align 1, !insn.addr !177
  %4 = icmp eq i8 %3, 58, !insn.addr !178
  store i32 %1, i32* %r0.0.reg2mem, !insn.addr !179
  br i1 %4, label %dec_label_pc_8e24, label %dec_label_pc_8e1c, !insn.addr !179

dec_label_pc_8e1c:                                ; preds = %dec_label_pc_8e24, %dec_label_pc_8dec
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !180

dec_label_pc_8e24:                                ; preds = %dec_label_pc_8dec
  %5 = ptrtoint i8* %2 to i32, !insn.addr !175
  %6 = add i32 %5, 1, !insn.addr !181
  %7 = inttoptr i32 %6 to i8*, !insn.addr !182
  store i8* %7, i8** %stack_var_-20, align 4, !insn.addr !182
  %8 = call i32 @strtoul(i8* %7, i8** null, i32 0), !insn.addr !183
  store i32 %8, i32* %arg3, align 4, !insn.addr !184
  store i32 %8, i32* %r0.0.reg2mem, !insn.addr !185
  br label %dec_label_pc_8e1c, !insn.addr !185

; uselistorder directives
  uselistorder i8* %2, { 1, 0 }
  uselistorder i8** %stack_var_-20, { 1, 0, 2 }
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i8*, i8**, i32)* @strtoul, { 2, 1, 0, 3 }
}

define i32 @function_8e40(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8e40:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !186
  %1 = call i32 @fwrite(i32* inttoptr (i32 and (i32 ptrtoint ([470 x i8]* @global_var_9a60 to i32), i32 65535) to i32*), i32 1, i32 469, %_IO_FILE* %0), !insn.addr !187
  %2 = load %_IO_FILE*, %_IO_FILE** @global_var_12218, align 4, !insn.addr !188
  %3 = call i32 @_IO_getc(%_IO_FILE* %2), !insn.addr !189
  ret i32 1, !insn.addr !190
}

define i32 @function_8e7c(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8e7c:
  %r7.1.reg2mem = alloca i32, !insn.addr !191
  %r6.1.reg2mem = alloca i32, !insn.addr !191
  %r4.1.in.reg2mem = alloca i32, !insn.addr !191
  %r4.05.reg2mem = alloca i32, !insn.addr !191
  %0 = ptrtoint i32* %arg1 to i32
  %1 = urem i32 %arg2, 65536, !insn.addr !192
  %2 = call i32 @function_92f0(i32 %0, i32 %1), !insn.addr !193
  %3 = icmp slt i32 %2, 0
  %4 = zext i1 %3 to i32, !insn.addr !194
  %5 = call i32 @function_8dbc(i32 %4, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_9c38, i32 0, i32 0), i32 127, i32 %arg4), !insn.addr !195
  %6 = icmp eq i32 %arg4, 0, !insn.addr !196
  br i1 %6, label %dec_label_pc_8f74, label %dec_label_pc_8eb4, !insn.addr !197

dec_label_pc_8eb4:                                ; preds = %dec_label_pc_8e7c
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_9c44, i32 0, i32 0), i32 %arg2, i32 %2), !insn.addr !198
  br label %dec_label_pc_8ec8, !insn.addr !198

dec_label_pc_8ec8:                                ; preds = %dec_label_pc_8f74, %dec_label_pc_8eb4
  %8 = icmp eq i32 %arg3, 1, !insn.addr !199
  store i32 %arg3, i32* %r4.05.reg2mem, !insn.addr !200
  br i1 %8, label %dec_label_pc_8f28, label %dec_label_pc_8ed8.preheader, !insn.addr !200

dec_label_pc_8ed8.preheader:                      ; preds = %dec_label_pc_8ec8, %dec_label_pc_8f48
  %r4.05.reload = load i32, i32* %r4.05.reg2mem
  store i32 %r4.05.reload, i32* %r4.1.in.reg2mem
  store i32 1, i32* %r6.1.reg2mem
  store i32 %arg2, i32* %r7.1.reg2mem
  br label %dec_label_pc_8ed8

dec_label_pc_8ed8:                                ; preds = %dec_label_pc_8ed8.preheader, %dec_label_pc_8f0c
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %r4.1 = add i32 %r4.1.in.reload, -1
  %9 = call i32 @function_9298(i32 %0), !insn.addr !201
  %10 = icmp slt i32 %9, 0
  %11 = zext i1 %10 to i32, !insn.addr !202
  %12 = call i32 @function_8dbc(i32 %11, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_9c38, i32 0, i32 0), i32 135, i32 %arg4), !insn.addr !203
  br i1 %6, label %dec_label_pc_8f48, label %dec_label_pc_8ef8, !insn.addr !204

dec_label_pc_8ef8:                                ; preds = %dec_label_pc_8ed8
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %13 = urem i32 %r6.1.reload, 16, !insn.addr !205
  %14 = icmp eq i32 %13, 0, !insn.addr !205
  %15 = add i32 %r7.1.reload, 1, !insn.addr !206
  br i1 %14, label %dec_label_pc_8f58, label %dec_label_pc_8f04, !insn.addr !207

dec_label_pc_8f04:                                ; preds = %dec_label_pc_8ef8
  %16 = urem i32 %r6.1.reload, 8, !insn.addr !208
  %17 = icmp eq i32 %16, 0, !insn.addr !208
  br i1 %17, label %dec_label_pc_8f68, label %dec_label_pc_8f0c, !insn.addr !209

dec_label_pc_8f0c:                                ; preds = %dec_label_pc_8f68, %dec_label_pc_8f58, %dec_label_pc_8f04
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_9c64, i32 0, i32 0), i32 %9), !insn.addr !210
  %19 = icmp eq i32 %r4.1, 1, !insn.addr !211
  %20 = add i32 %r6.1.reload, 1, !insn.addr !212
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !213
  store i32 %20, i32* %r6.1.reg2mem, !insn.addr !213
  store i32 %15, i32* %r7.1.reg2mem, !insn.addr !213
  br i1 %19, label %dec_label_pc_8f30, label %dec_label_pc_8ed8, !insn.addr !213

dec_label_pc_8f28:                                ; preds = %dec_label_pc_8ec8
  br i1 %6, label %dec_label_pc_8f38, label %dec_label_pc_8f30, !insn.addr !214

dec_label_pc_8f30:                                ; preds = %dec_label_pc_8f0c, %dec_label_pc_8f28
  %21 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_9ff0, i32 0, i32 0)), !insn.addr !215
  br label %dec_label_pc_8f38, !insn.addr !215

dec_label_pc_8f38:                                ; preds = %dec_label_pc_8f48, %dec_label_pc_8f30, %dec_label_pc_8f28
  %22 = load %_IO_FILE*, %_IO_FILE** @global_var_1221c, align 4
  %23 = call i32 @fflush(%_IO_FILE* %22), !insn.addr !216
  ret i32 0, !insn.addr !217

dec_label_pc_8f48:                                ; preds = %dec_label_pc_8ed8
  %24 = load %_IO_FILE*, %_IO_FILE** @global_var_1221c, align 4
  %25 = call i32 @_IO_putc(i32 %9, %_IO_FILE* %24), !insn.addr !218
  %26 = icmp eq i32 %r4.1, 1, !insn.addr !199
  store i32 %r4.1, i32* %r4.05.reg2mem, !insn.addr !200
  br i1 %26, label %dec_label_pc_8f38, label %dec_label_pc_8ed8.preheader, !insn.addr !200

dec_label_pc_8f58:                                ; preds = %dec_label_pc_8ef8
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_9c54, i32 0, i32 0), i32 %15), !insn.addr !219
  br label %dec_label_pc_8f0c, !insn.addr !220

dec_label_pc_8f68:                                ; preds = %dec_label_pc_8f04
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_9c60, i32 0, i32 0)), !insn.addr !221
  br label %dec_label_pc_8f0c, !insn.addr !222

dec_label_pc_8f74:                                ; preds = %dec_label_pc_8e7c
  %29 = load %_IO_FILE*, %_IO_FILE** @global_var_1221c, align 4, !insn.addr !223
  %30 = call i32 @_IO_putc(i32 %2, %_IO_FILE* %29), !insn.addr !224
  br label %dec_label_pc_8ec8, !insn.addr !225

; uselistorder directives
  uselistorder i32 %15, { 1, 0 }
  uselistorder i32 %r6.1.reload, { 0, 2, 1 }
  uselistorder i32 %9, { 1, 2, 0 }
  uselistorder i32 %r4.1, { 1, 2, 0, 3 }
  uselistorder i1 %6, { 1, 0, 2 }
  uselistorder i32 %2, { 2, 1, 0 }
  uselistorder i32* %r4.05.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, %_IO_FILE*)* @_IO_putc, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 3, 0, 1, 2, 4 }
  uselistorder i32 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_8f30, { 1, 0 }
  uselistorder label %dec_label_pc_8ed8, { 1, 0 }
  uselistorder label %dec_label_pc_8ed8.preheader, { 1, 0 }
}

define i32 @function_8fa4(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8fa4:
  %.lcssa.reg2mem = alloca i1, !insn.addr !226
  %r5.01.reg2mem = alloca i32, !insn.addr !226
  %.reg2mem7 = alloca i32, !insn.addr !226
  %.reg2mem5 = alloca i32, !insn.addr !226
  %.reg2mem = alloca i1, !insn.addr !226
  %0 = ptrtoint i32* %arg1 to i32
  %1 = load %_IO_FILE*, %_IO_FILE** @global_var_12218, align 4, !insn.addr !227
  %2 = call i32 @_IO_getc(%_IO_FILE* %1), !insn.addr !228
  %3 = load i32, i32* @global_var_12228, align 4, !insn.addr !229
  %4 = icmp eq i32 %2, -1, !insn.addr !230
  %5 = icmp eq i32 %3, 0
  store i1 %5, i1* %.reg2mem, !insn.addr !231
  store i32 %3, i32* %.reg2mem5, !insn.addr !231
  store i32 %2, i32* %.reg2mem7, !insn.addr !231
  store i32 %arg2, i32* %r5.01.reg2mem, !insn.addr !231
  store i1 %5, i1* %.lcssa.reg2mem, !insn.addr !231
  br i1 %4, label %dec_label_pc_901c, label %dec_label_pc_9004, !insn.addr !231

dec_label_pc_8fc4:                                ; preds = %dec_label_pc_9004, %dec_label_pc_900c
  %6 = load %_IO_FILE*, %_IO_FILE** @global_var_1221c, align 4, !insn.addr !232
  %7 = call i32 @fflush(%_IO_FILE* %6), !insn.addr !233
  %8 = urem i32 %r5.01.reload, 65536, !insn.addr !234
  %9 = urem i32 %.reload8, 256, !insn.addr !235
  %10 = call i32 @function_9414(i32 %0, i32 %8, i32 %9), !insn.addr !236
  %11 = add i32 %r5.01.reload, 1, !insn.addr !237
  %12 = call i32 @function_8dbc(i32 %10, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_9c6c, i32 0, i32 0), i32 162, i32 %.reload6), !insn.addr !238
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_12218, align 4, !insn.addr !227
  %14 = call i32 @_IO_getc(%_IO_FILE* %13), !insn.addr !228
  %15 = load i32, i32* @global_var_12228, align 4, !insn.addr !229
  %16 = icmp eq i32 %14, -1, !insn.addr !230
  %17 = icmp eq i32 %15, 0
  store i1 %17, i1* %.reg2mem, !insn.addr !231
  store i32 %15, i32* %.reg2mem5, !insn.addr !231
  store i32 %14, i32* %.reg2mem7, !insn.addr !231
  store i32 %11, i32* %r5.01.reg2mem, !insn.addr !231
  store i1 %17, i1* %.lcssa.reg2mem, !insn.addr !231
  br i1 %16, label %dec_label_pc_901c, label %dec_label_pc_9004, !insn.addr !231

dec_label_pc_9004:                                ; preds = %dec_label_pc_8fa4, %dec_label_pc_8fc4
  %r5.01.reload = load i32, i32* %r5.01.reg2mem
  %.reload8 = load i32, i32* %.reg2mem7
  %.reload6 = load i32, i32* %.reg2mem5
  %.reload = load i1, i1* %.reg2mem
  br i1 %.reload, label %dec_label_pc_900c, label %dec_label_pc_8fc4, !insn.addr !239

dec_label_pc_900c:                                ; preds = %dec_label_pc_9004
  %18 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !240
  %19 = call i32 @fputc(i32 46, %_IO_FILE* %18), !insn.addr !241
  br label %dec_label_pc_8fc4, !insn.addr !242

dec_label_pc_901c:                                ; preds = %dec_label_pc_8fc4, %dec_label_pc_8fa4
  %.lcssa.reload = load i1, i1* %.lcssa.reg2mem
  br i1 %.lcssa.reload, label %dec_label_pc_9024, label %dec_label_pc_903c, !insn.addr !243

dec_label_pc_9024:                                ; preds = %dec_label_pc_901c
  %20 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !244
  %21 = call i32 @fwrite(i32* bitcast ([3 x i8]* @global_var_a040 to i32*), i32 1, i32 2, %_IO_FILE* %20), !insn.addr !245
  br label %dec_label_pc_903c, !insn.addr !245

dec_label_pc_903c:                                ; preds = %dec_label_pc_901c, %dec_label_pc_9024
  ret i32 0, !insn.addr !246

; uselistorder directives
  uselistorder i32 %r5.01.reload, { 1, 0 }
  uselistorder i1* %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %.reg2mem5, { 0, 2, 1 }
  uselistorder i32* %.reg2mem7, { 0, 2, 1 }
  uselistorder i32* %r5.01.reg2mem, { 0, 2, 1 }
  uselistorder i32 (i32, i8*, i32, i32)* @function_8dbc, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder %_IO_FILE** @global_var_1221c, { 3, 2, 0, 1 }
  uselistorder i32* @global_var_12228, { 3, 0, 4, 5, 6, 7, 8, 1, 9, 2 }
  uselistorder i32 (%_IO_FILE*)* @_IO_getc, { 2, 0, 1, 3 }
  uselistorder %_IO_FILE** @global_var_12218, { 2, 0, 1 }
  uselistorder label %dec_label_pc_903c, { 1, 0 }
  uselistorder label %dec_label_pc_9004, { 1, 0 }
  uselistorder label %dec_label_pc_8fc4, { 1, 0 }
}

define i32 @function_905c(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_905c:
  %0 = add i32 %arg1, 8, !insn.addr !247
  %1 = inttoptr i32 %0 to i32*, !insn.addr !247
  %2 = load i32, i32* %1, align 4, !insn.addr !247
  %3 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 1824), !insn.addr !248
  %4 = icmp slt i32 %3, 0, !insn.addr !249
  br i1 %4, label %dec_label_pc_90bc, label %dec_label_pc_90a8, !insn.addr !250

dec_label_pc_90a8:                                ; preds = %dec_label_pc_90bc, %dec_label_pc_905c
  %5 = call i32 @usleep(i32 10), !insn.addr !251
  ret i32 %3, !insn.addr !252

dec_label_pc_90bc:                                ; preds = %dec_label_pc_905c
  %6 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !253
  %7 = call i32* @__errno_location(), !insn.addr !254
  %8 = load i32, i32* %7, align 4, !insn.addr !255
  %9 = call i8* @strerror(i32 %8), !insn.addr !256
  %10 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %6, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_9e54, i32 0, i32 0), i8* %9), !insn.addr !257
  br label %dec_label_pc_90a8, !insn.addr !258
}

define i32 @function_90ec(i32 %arg1, i32 %arg2, i32 %arg3, i32* %arg4) local_unnamed_addr {
dec_label_pc_90ec:
  %0 = alloca i32
  %storemerge1.reg2mem = alloca i32, !insn.addr !259
  %storemerge.reg2mem = alloca i32, !insn.addr !259
  %r0.0.reg2mem = alloca i32, !insn.addr !259
  %1 = ptrtoint i32* %arg4 to i32
  %2 = load i32, i32* %0
  %3 = add i32 %1, 4, !insn.addr !260
  %4 = inttoptr i32 %3 to i32*, !insn.addr !260
  store i32 0, i32* %4, align 4, !insn.addr !260
  %5 = add i32 %1, 8, !insn.addr !261
  %6 = inttoptr i32 %5 to i32*, !insn.addr !261
  store i32 0, i32* %6, align 4, !insn.addr !261
  store i32 0, i32* %arg4, align 4, !insn.addr !262
  %7 = inttoptr i32 %arg1 to i8*, !insn.addr !263
  %8 = call i32 (i8*, i32, ...) @open(i8* %7, i32 2), !insn.addr !263
  %9 = icmp slt i32 %8, 1, !insn.addr !264
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !264
  br i1 %9, label %dec_label_pc_9198, label %dec_label_pc_9124, !insn.addr !264

dec_label_pc_9124:                                ; preds = %dec_label_pc_90ec
  %10 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 1797), !insn.addr !265
  %11 = icmp slt i32 %10, 0, !insn.addr !266
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !266
  br i1 %11, label %dec_label_pc_9198, label %dec_label_pc_9138, !insn.addr !266

dec_label_pc_9138:                                ; preds = %dec_label_pc_9124
  %12 = and i32 %2, 131072, !insn.addr !267
  %13 = icmp eq i32 %12, 0, !insn.addr !267
  br i1 %13, label %dec_label_pc_91d0, label %dec_label_pc_9144, !insn.addr !268

dec_label_pc_9144:                                ; preds = %dec_label_pc_9138
  %14 = and i32 %2, 262144, !insn.addr !269
  %15 = icmp eq i32 %14, 0, !insn.addr !269
  br i1 %15, label %dec_label_pc_91b0, label %dec_label_pc_914c, !insn.addr !270

dec_label_pc_914c:                                ; preds = %dec_label_pc_9144
  %16 = and i32 %2, 524288, !insn.addr !271
  %17 = icmp eq i32 %16, 0, !insn.addr !271
  store i32 ptrtoint ([78 x i8]* @global_var_9f04 to i32), i32* %storemerge1.reg2mem, !insn.addr !272
  br i1 %17, label %dec_label_pc_921c, label %dec_label_pc_9154, !insn.addr !272

dec_label_pc_9154:                                ; preds = %dec_label_pc_914c
  %18 = and i32 %2, 1048576, !insn.addr !273
  %19 = icmp eq i32 %18, 0, !insn.addr !273
  store i32 ptrtoint ([79 x i8]* @global_var_9f54 to i32), i32* %storemerge.reg2mem, !insn.addr !274
  br i1 %19, label %dec_label_pc_91fc, label %dec_label_pc_915c, !insn.addr !274

dec_label_pc_915c:                                ; preds = %dec_label_pc_9154
  %20 = and i32 %2, 2097152, !insn.addr !275
  %21 = icmp eq i32 %20, 0, !insn.addr !275
  store i32 ptrtoint ([78 x i8]* @global_var_9fa4 to i32), i32* %storemerge1.reg2mem, !insn.addr !276
  br i1 %21, label %dec_label_pc_921c, label %dec_label_pc_9164, !insn.addr !276

dec_label_pc_9164:                                ; preds = %dec_label_pc_915c
  %22 = and i32 %2, 4194304, !insn.addr !277
  %23 = icmp eq i32 %22, 0, !insn.addr !277
  store i32 ptrtoint ([79 x i8]* @global_var_9ff4 to i32), i32* %storemerge.reg2mem, !insn.addr !278
  br i1 %23, label %dec_label_pc_91fc, label %dec_label_pc_916c, !insn.addr !278

dec_label_pc_916c:                                ; preds = %dec_label_pc_9164
  %24 = call i32 (i32, i32, ...) @ioctl(i32 %8, i32 1795), !insn.addr !279
  %25 = icmp slt i32 %24, 0, !insn.addr !280
  store i32 %24, i32* %r0.0.reg2mem, !insn.addr !281
  br i1 %25, label %dec_label_pc_9198, label %dec_label_pc_9184, !insn.addr !281

dec_label_pc_9184:                                ; preds = %dec_label_pc_916c
  store i32 %8, i32* %6, align 4, !insn.addr !282
  store i32 %arg2, i32* %4, align 4, !insn.addr !283
  store i32 %arg1, i32* %arg4, align 4, !insn.addr !284
  %26 = add i32 %1, 12, !insn.addr !285
  %27 = inttoptr i32 %26 to i32*, !insn.addr !285
  store i32 %arg3, i32* %27, align 4, !insn.addr !285
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !285
  br label %dec_label_pc_9198, !insn.addr !285

dec_label_pc_9198:                                ; preds = %dec_label_pc_90ec, %dec_label_pc_9124, %dec_label_pc_9184, %dec_label_pc_916c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !286

dec_label_pc_91b0:                                ; preds = %dec_label_pc_9144
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !287
  %29 = call i32 @fwrite(i32* bitcast ([74 x i8]* @global_var_9eb8 to i32*), i32 1, i32 73, %_IO_FILE* %28), !insn.addr !288
  call void @exit(i32 1), !insn.addr !289
  unreachable, !insn.addr !289

dec_label_pc_91d0:                                ; preds = %dec_label_pc_9138
  %30 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !290
  %31 = call i32 @fwrite(i32* bitcast ([73 x i8]* @global_var_9e6c to i32*), i32 1, i32 72, %_IO_FILE* %30), !insn.addr !291
  call void @exit(i32 1), !insn.addr !292
  unreachable, !insn.addr !292

dec_label_pc_91fc:                                ; preds = %dec_label_pc_9154, %dec_label_pc_9164
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4
  %33 = inttoptr i32 %storemerge.reload to i32*, !insn.addr !293
  %34 = call i32 @fwrite(i32* %33, i32 1, i32 78, %_IO_FILE* %32), !insn.addr !293
  call void @exit(i32 1), !insn.addr !294
  unreachable, !insn.addr !294

dec_label_pc_921c:                                ; preds = %dec_label_pc_914c, %dec_label_pc_915c
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %35 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4
  %36 = inttoptr i32 %storemerge1.reload to i32*, !insn.addr !295
  %37 = call i32 @fwrite(i32* %36, i32 1, i32 77, %_IO_FILE* %35), !insn.addr !295
  call void @exit(i32 1), !insn.addr !296
  unreachable, !insn.addr !296

; uselistorder directives
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %r0.0.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder void (i32)* @exit, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 4, { 5, 0, 1, 2, 3, 4 }
  uselistorder label %dec_label_pc_921c, { 1, 0 }
  uselistorder label %dec_label_pc_91fc, { 1, 0 }
  uselistorder label %dec_label_pc_9198, { 2, 3, 1, 0 }
}

define i32 @function_926c(i32* %arg1) local_unnamed_addr {
dec_label_pc_926c:
  %0 = ptrtoint i32* %arg1 to i32
  %1 = add i32 %0, 8, !insn.addr !297
  %2 = inttoptr i32 %1 to i32*, !insn.addr !297
  %3 = load i32, i32* %2, align 4, !insn.addr !297
  %4 = call i32 @close(i32 %3), !insn.addr !298
  store i32 0, i32* %arg1, align 4, !insn.addr !299
  store i32 -1, i32* %2, align 4, !insn.addr !300
  %5 = add i32 %0, 12, !insn.addr !301
  %6 = inttoptr i32 %5 to i32*, !insn.addr !301
  store i32 0, i32* %6, align 4, !insn.addr !301
  ret i32 0, !insn.addr !302
}

define i32 @function_9298(i32 %arg1) local_unnamed_addr {
dec_label_pc_9298:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = add i32 %arg1, 8, !insn.addr !303
  %3 = inttoptr i32 %2 to i32*, !insn.addr !303
  %4 = load i32, i32* %3, align 4, !insn.addr !303
  %5 = call i32 (i32, i32, ...) @ioctl(i32 %4, i32 4705), !insn.addr !304
  %6 = load i32, i32* %3, align 4, !insn.addr !305
  %7 = call i32 (i32, i32, ...) @ioctl(i32 %6, i32 1824), !insn.addr !306
  %8 = icmp eq i32 %7, 0, !insn.addr !307
  %9 = urem i32 %1, 256
  %r0.1 = select i1 %8, i32 %9, i32 -1
  ret i32 %r0.1, !insn.addr !308
}

define i32 @function_92f0(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_92f0:
  %r5.2.reg2mem = alloca i32, !insn.addr !309
  %r5.0.reg2mem = alloca i32, !insn.addr !309
  %stack_var_-52 = alloca i32, align 4
  %0 = add i32 %arg1, 8, !insn.addr !310
  %1 = inttoptr i32 %0 to i32*, !insn.addr !310
  %2 = load i32, i32* %1, align 4, !insn.addr !310
  %3 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 4705), !insn.addr !311
  %4 = add i32 %arg1, 12, !insn.addr !312
  %5 = inttoptr i32 %4 to i32*, !insn.addr !312
  %6 = load i32, i32* %5, align 4, !insn.addr !312
  switch i32 %6, label %dec_label_pc_93c0 [
    i32 1, label %dec_label_pc_9388
    i32 2, label %dec_label_pc_9320
  ]

dec_label_pc_9320:                                ; preds = %dec_label_pc_92f0
  %7 = mul i32 %arg2, 65536
  %8 = ashr i32 %7, 24, !insn.addr !313
  store i32 %8, i32* %stack_var_-52, align 4, !insn.addr !313
  %9 = call i32 @function_905c(i32 %arg1, i32* nonnull %stack_var_-52), !insn.addr !314
  store i32 %9, i32* %r5.0.reg2mem, !insn.addr !315
  br label %dec_label_pc_933c, !insn.addr !315

dec_label_pc_933c:                                ; preds = %dec_label_pc_93b4, %dec_label_pc_9320
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = icmp slt i32 %r5.0.reload, 0, !insn.addr !316
  store i32 %r5.0.reload, i32* %r5.2.reg2mem, !insn.addr !317
  br i1 %10, label %dec_label_pc_937c, label %dec_label_pc_9344, !insn.addr !317

dec_label_pc_9344:                                ; preds = %dec_label_pc_933c
  %11 = load i32, i32* %1, align 4, !insn.addr !318
  %12 = call i32 (i32, i32, ...) @ioctl(i32 %11, i32 1824), !insn.addr !319
  %13 = icmp eq i32 %12, 0, !insn.addr !320
  %14 = load i32, i32* %stack_var_-52, align 4
  %15 = urem i32 %14, 256
  %spec.select = select i1 %13, i32 %15, i32 -1
  ret i32 %spec.select

dec_label_pc_937c:                                ; preds = %dec_label_pc_93c0, %dec_label_pc_933c
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  ret i32 %r5.2.reload, !insn.addr !321

dec_label_pc_9388:                                ; preds = %dec_label_pc_92f0
  %16 = load i32, i32* %1, align 4, !insn.addr !322
  %17 = call i32 (i32, i32, ...) @ioctl(i32 %16, i32 1824), !insn.addr !323
  %18 = icmp slt i32 %17, 0, !insn.addr !324
  br i1 %18, label %dec_label_pc_93e0, label %dec_label_pc_93b4, !insn.addr !325

dec_label_pc_93b4:                                ; preds = %dec_label_pc_93e0, %dec_label_pc_9388
  %19 = call i32 @usleep(i32 10), !insn.addr !326
  store i32 %17, i32* %r5.0.reg2mem, !insn.addr !327
  br label %dec_label_pc_933c, !insn.addr !327

dec_label_pc_93c0:                                ; preds = %dec_label_pc_92f0
  %20 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !328
  %21 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_a05c to i32*), i32 1, i32 25, %_IO_FILE* %20), !insn.addr !329
  store i32 -1, i32* %r5.2.reg2mem, !insn.addr !330
  br label %dec_label_pc_937c, !insn.addr !330

dec_label_pc_93e0:                                ; preds = %dec_label_pc_9388
  %22 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !331
  %23 = call i32* @__errno_location(), !insn.addr !332
  %24 = load i32, i32* %23, align 4, !insn.addr !333
  %25 = call i8* @strerror(i32 %24), !insn.addr !334
  %26 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %22, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_a044, i32 0, i32 0), i8* %25), !insn.addr !335
  br label %dec_label_pc_93b4, !insn.addr !336

; uselistorder directives
  uselistorder i32* %1, { 1, 0, 2 }
  uselistorder i32* %stack_var_-52, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 1, 0, 2 }
  uselistorder i32 256, { 0, 1, 2, 4, 5, 3, 6 }
}

define i32 @function_9414(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_9414:
  %r4.0.reg2mem = alloca i32, !insn.addr !337
  %stack_var_-64 = alloca i32, align 4
  %0 = add i32 %arg1, 12, !insn.addr !337
  %1 = inttoptr i32 %0 to i32*, !insn.addr !337
  %2 = load i32, i32* %1, align 4, !insn.addr !337
  switch i32 %2, label %dec_label_pc_94d0 [
    i32 1, label %dec_label_pc_94b8
    i32 2, label %dec_label_pc_9438
  ]

dec_label_pc_9438:                                ; preds = %dec_label_pc_9414
  %3 = add i32 %arg1, 8, !insn.addr !338
  %4 = inttoptr i32 %3 to i32*, !insn.addr !338
  %5 = load i32, i32* %4, align 4, !insn.addr !338
  store i32 0, i32* %stack_var_-64, align 4, !insn.addr !339
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %5, i32 1824), !insn.addr !340
  %7 = icmp slt i32 %6, 0, !insn.addr !341
  br i1 %7, label %dec_label_pc_9490, label %dec_label_pc_947c, !insn.addr !342

dec_label_pc_947c:                                ; preds = %dec_label_pc_9490, %dec_label_pc_9438
  %8 = call i32 @usleep(i32 10), !insn.addr !343
  store i32 %6, i32* %r4.0.reg2mem, !insn.addr !343
  br label %dec_label_pc_9484, !insn.addr !343

dec_label_pc_9484:                                ; preds = %dec_label_pc_94d0, %dec_label_pc_94b8, %dec_label_pc_947c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !344

dec_label_pc_9490:                                ; preds = %dec_label_pc_9438
  %9 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !345
  %10 = call i32* @__errno_location(), !insn.addr !346
  %11 = load i32, i32* %10, align 4, !insn.addr !347
  %12 = call i8* @strerror(i32 %11), !insn.addr !348
  %13 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %9, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_a078, i32 0, i32 0), i8* %12), !insn.addr !349
  br label %dec_label_pc_947c, !insn.addr !350

dec_label_pc_94b8:                                ; preds = %dec_label_pc_9414
  %14 = mul i32 %arg2, 16777216
  %15 = ashr exact i32 %14, 24, !insn.addr !351
  store i32 %15, i32* %stack_var_-64, align 4, !insn.addr !351
  %16 = call i32 @function_905c(i32 %arg1, i32* nonnull %stack_var_-64), !insn.addr !352
  store i32 %16, i32* %r4.0.reg2mem, !insn.addr !353
  br label %dec_label_pc_9484, !insn.addr !353

dec_label_pc_94d0:                                ; preds = %dec_label_pc_9414
  %17 = load %_IO_FILE*, %_IO_FILE** @global_var_12210, align 4, !insn.addr !354
  %18 = call i32 @fwrite(i32* bitcast ([26 x i8]* @global_var_a05c to i32*), i32 1, i32 25, %_IO_FILE* %17), !insn.addr !355
  store i32 -1, i32* %r4.0.reg2mem, !insn.addr !356
  br label %dec_label_pc_9484, !insn.addr !356

; uselistorder directives
  uselistorder i32* %r4.0.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32 -1, { 0, 1, 5, 6, 12, 2, 9, 4, 8, 10, 11, 3, 7 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10 }
  uselistorder i32 (i32, i32*)* @function_905c, { 1, 0 }
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 6, 4, 5, 7, 3, 2, 8, 1, 0, 9 }
  uselistorder i8* (i32)* @strerror, { 1, 2, 0, 3 }
  uselistorder i32* ()* @__errno_location, { 0, 2, 1, 3 }
  uselistorder %_IO_FILE** @global_var_12210, { 19, 18, 17, 16, 0, 1, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 8, 6, 5, 4, 3, 2, 1, 0, 7, 9 }
  uselistorder i32 8, { 2, 4, 5, 6, 7, 3, 0, 1 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @function_94fc(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_94fc:
  %0 = call i32 @function_86f4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !357
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_8b84 to i32), i32 38172), i32 add (i32 ptrtoint (i32* @global_var_9524 to i32), i32 ptrtoint (i32* @global_var_8b78 to i32))), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !358

; uselistorder directives
  uselistorder i32 0, { 25, 26, 27, 87, 28, 29, 30, 89, 90, 91, 92, 7, 72, 71, 0, 93, 94, 95, 96, 97, 98, 99, 24, 75, 74, 73, 31, 32, 88, 8, 100, 33, 34, 18, 37, 38, 35, 36, 9, 16, 17, 39, 40, 101, 102, 13, 41, 42, 103, 43, 44, 14, 76, 77, 45, 46, 10, 104, 11, 105, 118, 53, 54, 51, 52, 106, 107, 108, 109, 20, 21, 110, 111, 47, 48, 49, 50, 12, 55, 56, 15, 112, 113, 78, 114, 115, 116, 57, 58, 59, 60, 19, 61, 62, 22, 23, 117, 63, 64, 1, 2, 3, 4, 5, 6, 79, 65, 66, 67, 68, 69, 70, 80, 81, 82, 83, 84, 85, 86 }
  uselistorder i32 2, { 4, 1, 2, 5, 6, 3, 0 }
}

define i32 @function_9560() local_unnamed_addr {
dec_label_pc_9560:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !359

; uselistorder directives
  uselistorder i32 1, { 4, 60, 51, 76, 5, 61, 52, 77, 7, 6, 3, 62, 56, 63, 57, 64, 65, 66, 67, 10, 58, 11, 9, 8, 2, 68, 83, 16, 15, 14, 13, 12, 87, 84, 85, 86, 18, 48, 21, 20, 19, 17, 47, 69, 88, 59, 22, 70, 1, 0, 78, 71, 89, 72, 90, 73, 55, 91, 54, 53, 50, 49, 27, 29, 92, 93, 94, 95, 82, 81, 80, 79, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 28, 26, 25, 24, 23, 74, 75 }
}

define i32 @function_9564(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9564:
  ret i32 %arg1, !insn.addr !360
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare i32 @_IO_getc(%_IO_FILE*) local_unnamed_addr

declare i32 @__xstat(i32, i8*, %stat*) local_unnamed_addr

declare i32 @_IO_putc(i32, %_IO_FILE*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i8* @getenv(i8*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strtoul(i8*, i8**, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @getopt(i32, i8**, i8*) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @fputc(i32, %_IO_FILE*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

!0 = !{i64 34552}
!1 = !{i64 34556}
!2 = !{i64 34588}
!3 = !{i64 34600}
!4 = !{i64 34612}
!5 = !{i64 34624}
!6 = !{i64 34636}
!7 = !{i64 34648}
!8 = !{i64 34660}
!9 = !{i64 34672}
!10 = !{i64 34684}
!11 = !{i64 34696}
!12 = !{i64 34708}
!13 = !{i64 34720}
!14 = !{i64 34732}
!15 = !{i64 34744}
!16 = !{i64 34756}
!17 = !{i64 34768}
!18 = !{i64 34780}
!19 = !{i64 34792}
!20 = !{i64 34804}
!21 = !{i64 34816}
!22 = !{i64 34828}
!23 = !{i64 34840}
!24 = !{i64 34852}
!25 = !{i64 34876}
!26 = !{i64 34880}
!27 = !{i64 34888}
!28 = !{i64 34904}
!29 = !{i64 34952}
!30 = !{i64 34972}
!31 = !{i64 34956}
!32 = !{i64 34996}
!33 = !{i64 35000}
!34 = !{i64 35004}
!35 = !{i64 35028}
!36 = !{i64 35048}
!37 = !{i64 35052}
!38 = !{i64 35060}
!39 = !{i64 35092}
!40 = !{i64 35100}
!41 = !{i64 35108}
!42 = !{i64 35112}
!43 = !{i64 35116}
!44 = !{i64 35120}
!45 = !{i64 35124}
!46 = !{i64 35128}
!47 = !{i64 35132}
!48 = !{i64 35136}
!49 = !{i64 35140}
!50 = !{i64 35144}
!51 = !{i64 35152}
!52 = !{i64 35160}
!53 = !{i64 35176}
!54 = !{i64 35184}
!55 = !{i64 35204}
!56 = !{i64 35208}
!57 = !{i64 35236}
!58 = !{i64 35240}
!59 = !{i64 35244}
!60 = !{i64 35276}
!61 = !{i64 35288}
!62 = !{i64 35292}
!63 = !{i64 35228}
!64 = !{i64 35296}
!65 = !{i64 35320}
!66 = !{i64 35336}
!67 = !{i64 35340}
!68 = !{i64 35344}
!69 = !{i64 35352}
!70 = !{i64 35356}
!71 = !{i64 35360}
!72 = !{i64 35372}
!73 = !{i64 35380}
!74 = !{i64 35392}
!75 = !{i64 35396}
!76 = !{i64 35420}
!77 = !{i64 35424}
!78 = !{i64 35428}
!79 = !{i64 35436}
!80 = !{i64 35444}
!81 = !{i64 35464}
!82 = !{i64 35468}
!83 = !{i64 35480}
!84 = !{i64 35484}
!85 = !{i64 35488}
!86 = !{i64 35492}
!87 = !{i64 35496}
!88 = !{i64 35500}
!89 = !{i64 35504}
!90 = !{i64 35512}
!91 = !{i64 35516}
!92 = !{i64 35520}
!93 = !{i64 35524}
!94 = !{i64 35528}
!95 = !{i64 35536}
!96 = !{i64 35540}
!97 = !{i64 35548}
!98 = !{i64 35564}
!99 = !{i64 35572}
!100 = !{i64 35576}
!101 = !{i64 35584}
!102 = !{i64 35588}
!103 = !{i64 35592}
!104 = !{i64 35608}
!105 = !{i64 35612}
!106 = !{i64 35620}
!107 = !{i64 35624}
!108 = !{i64 35628}
!109 = !{i64 35632}
!110 = !{i64 35660}
!111 = !{i64 35664}
!112 = !{i64 35668}
!113 = !{i64 35672}
!114 = !{i64 35688}
!115 = !{i64 35692}
!116 = !{i64 35696}
!117 = !{i64 35700}
!118 = !{i64 35708}
!119 = !{i64 35712}
!120 = !{i64 35720}
!121 = !{i64 35724}
!122 = !{i64 35728}
!123 = !{i64 35732}
!124 = !{i64 35752}
!125 = !{i64 35756}
!126 = !{i64 35760}
!127 = !{i64 35764}
!128 = !{i64 35768}
!129 = !{i64 35780}
!130 = !{i64 35784}
!131 = !{i64 35788}
!132 = !{i64 35792}
!133 = !{i64 35804}
!134 = !{i64 35808}
!135 = !{i64 35812}
!136 = !{i64 35816}
!137 = !{i64 35820}
!138 = !{i64 35824}
!139 = !{i64 35828}
!140 = !{i64 35840}
!141 = !{i64 35844}
!142 = !{i64 35848}
!143 = !{i64 35852}
!144 = !{i64 35856}
!145 = !{i64 35860}
!146 = !{i64 35868}
!147 = !{i64 35872}
!148 = !{i64 35876}
!149 = !{i64 35884}
!150 = !{i64 35996}
!151 = !{i64 36000}
!152 = !{i64 36028}
!153 = !{i64 36032}
!154 = !{i64 36036}
!155 = !{i64 36040}
!156 = !{i64 36072}
!157 = !{i64 36136}
!158 = !{i64 36180}
!159 = !{i64 36184}
!160 = !{i64 36188}
!161 = !{i64 36192}
!162 = !{i64 36200}
!163 = !{i64 36204}
!164 = !{i64 36252}
!165 = !{i64 36264}
!166 = !{i64 36272}
!167 = !{i64 36280}
!168 = !{i64 36284}
!169 = !{i64 36292}
!170 = !{i64 36308}
!171 = !{i64 36312}
!172 = !{i64 36320}
!173 = !{i64 36332}
!174 = !{i64 36356}
!175 = !{i64 36360}
!176 = !{i64 36364}
!177 = !{i64 36368}
!178 = !{i64 36372}
!179 = !{i64 36376}
!180 = !{i64 36384}
!181 = !{i64 36392}
!182 = !{i64 36400}
!183 = !{i64 36404}
!184 = !{i64 36408}
!185 = !{i64 36412}
!186 = !{i64 36440}
!187 = !{i64 36448}
!188 = !{i64 36460}
!189 = !{i64 36464}
!190 = !{i64 36472}
!191 = !{i64 36476}
!192 = !{i64 36484}
!193 = !{i64 36500}
!194 = !{i64 36516}
!195 = !{i64 36520}
!196 = !{i64 36524}
!197 = !{i64 36528}
!198 = !{i64 36548}
!199 = !{i64 36556}
!200 = !{i64 36564}
!201 = !{i64 36568}
!202 = !{i64 36584}
!203 = !{i64 36588}
!204 = !{i64 36596}
!205 = !{i64 36600}
!206 = !{i64 36604}
!207 = !{i64 36608}
!208 = !{i64 36612}
!209 = !{i64 36616}
!210 = !{i64 36628}
!211 = !{i64 36632}
!212 = !{i64 36636}
!213 = !{i64 36644}
!214 = !{i64 36652}
!215 = !{i64 36660}
!216 = !{i64 36668}
!217 = !{i64 36676}
!218 = !{i64 36688}
!219 = !{i64 36704}
!220 = !{i64 36708}
!221 = !{i64 36716}
!222 = !{i64 36720}
!223 = !{i64 36732}
!224 = !{i64 36736}
!225 = !{i64 36740}
!226 = !{i64 36772}
!227 = !{i64 36844}
!228 = !{i64 36848}
!229 = !{i64 36852}
!230 = !{i64 36856}
!231 = !{i64 36864}
!232 = !{i64 36804}
!233 = !{i64 36808}
!234 = !{i64 36812}
!235 = !{i64 36816}
!236 = !{i64 36824}
!237 = !{i64 36836}
!238 = !{i64 36840}
!239 = !{i64 36872}
!240 = !{i64 36876}
!241 = !{i64 36884}
!242 = !{i64 36888}
!243 = !{i64 36896}
!244 = !{i64 36916}
!245 = !{i64 36920}
!246 = !{i64 36928}
!247 = !{i64 36960}
!248 = !{i64 37020}
!249 = !{i64 37024}
!250 = !{i64 37028}
!251 = !{i64 37036}
!252 = !{i64 37048}
!253 = !{i64 37056}
!254 = !{i64 37060}
!255 = !{i64 37064}
!256 = !{i64 37068}
!257 = !{i64 37084}
!258 = !{i64 37088}
!259 = !{i64 37100}
!260 = !{i64 37116}
!261 = !{i64 37124}
!262 = !{i64 37132}
!263 = !{i64 37144}
!264 = !{i64 37152}
!265 = !{i64 37164}
!266 = !{i64 37172}
!267 = !{i64 37180}
!268 = !{i64 37184}
!269 = !{i64 37188}
!270 = !{i64 37192}
!271 = !{i64 37196}
!272 = !{i64 37200}
!273 = !{i64 37204}
!274 = !{i64 37208}
!275 = !{i64 37212}
!276 = !{i64 37216}
!277 = !{i64 37220}
!278 = !{i64 37224}
!279 = !{i64 37240}
!280 = !{i64 37244}
!281 = !{i64 37248}
!282 = !{i64 37256}
!283 = !{i64 37260}
!284 = !{i64 37264}
!285 = !{i64 37268}
!286 = !{i64 37276}
!287 = !{i64 37312}
!288 = !{i64 37316}
!289 = !{i64 37324}
!290 = !{i64 37344}
!291 = !{i64 37348}
!292 = !{i64 37356}
!293 = !{i64 37380}
!294 = !{i64 37388}
!295 = !{i64 37412}
!296 = !{i64 37420}
!297 = !{i64 37492}
!298 = !{i64 37496}
!299 = !{i64 37508}
!300 = !{i64 37512}
!301 = !{i64 37520}
!302 = !{i64 37524}
!303 = !{i64 37544}
!304 = !{i64 37548}
!305 = !{i64 37552}
!306 = !{i64 37592}
!307 = !{i64 37596}
!308 = !{i64 37612}
!309 = !{i64 37616}
!310 = !{i64 37632}
!311 = !{i64 37640}
!312 = !{i64 37644}
!313 = !{i64 37680}
!314 = !{i64 37684}
!315 = !{i64 37688}
!316 = !{i64 37692}
!317 = !{i64 37696}
!318 = !{i64 37700}
!319 = !{i64 37740}
!320 = !{i64 37744}
!321 = !{i64 37764}
!322 = !{i64 37768}
!323 = !{i64 37800}
!324 = !{i64 37804}
!325 = !{i64 37808}
!326 = !{i64 37816}
!327 = !{i64 37820}
!328 = !{i64 37844}
!329 = !{i64 37848}
!330 = !{i64 37852}
!331 = !{i64 37860}
!332 = !{i64 37864}
!333 = !{i64 37868}
!334 = !{i64 37872}
!335 = !{i64 37888}
!336 = !{i64 37892}
!337 = !{i64 37908}
!338 = !{i64 37948}
!339 = !{i64 37992}
!340 = !{i64 38000}
!341 = !{i64 38004}
!342 = !{i64 38008}
!343 = !{i64 38016}
!344 = !{i64 38028}
!345 = !{i64 38036}
!346 = !{i64 38040}
!347 = !{i64 38044}
!348 = !{i64 38048}
!349 = !{i64 38064}
!350 = !{i64 38068}
!351 = !{i64 38076}
!352 = !{i64 38084}
!353 = !{i64 38092}
!354 = !{i64 38116}
!355 = !{i64 38120}
!356 = !{i64 38124}
!357 = !{i64 38168}
!358 = !{i64 38184}
!359 = !{i64 38240}
!360 = !{i64 38248}
