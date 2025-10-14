source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%__dirstream = type { i32 }
%dirent = type { i32, i32, i16, i8, [256 x i8] }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@2 = external local_unnamed_addr global i32
@3 = external local_unnamed_addr global i32
@global_var_13124 = local_unnamed_addr global i32 35180
@global_var_13128 = local_unnamed_addr global i32 35180
@global_var_1312c = local_unnamed_addr global i32 35180
@global_var_13130 = local_unnamed_addr global i32 35180
@global_var_13134 = local_unnamed_addr global i32 35180
@global_var_13138 = local_unnamed_addr global i32 35180
@global_var_1313c = local_unnamed_addr global i32 35180
@global_var_13140 = local_unnamed_addr global i32 35180
@global_var_13144 = local_unnamed_addr global i32 35180
@global_var_13148 = local_unnamed_addr global i32 35180
@global_var_1314c = local_unnamed_addr global i32 35180
@global_var_13150 = local_unnamed_addr global i32 35180
@global_var_13154 = local_unnamed_addr global i32 35180
@global_var_13158 = local_unnamed_addr global i32 35180
@global_var_1315c = local_unnamed_addr global i32 35180
@global_var_13160 = local_unnamed_addr global i32 35180
@global_var_13164 = local_unnamed_addr global i32 35180
@global_var_13168 = local_unnamed_addr global i32 35180
@global_var_1316c = local_unnamed_addr global i32 35180
@global_var_13170 = local_unnamed_addr global i32 35180
@global_var_13174 = local_unnamed_addr global i32 35180
@global_var_13178 = local_unnamed_addr global i32 35180
@global_var_1317c = local_unnamed_addr global i32 35180
@global_var_13180 = local_unnamed_addr global i32 35180
@global_var_13184 = local_unnamed_addr global i32 35180
@global_var_13188 = local_unnamed_addr global i32 35180
@global_var_1318c = local_unnamed_addr global i32 35180
@global_var_13190 = local_unnamed_addr global i32 35180
@global_var_13194 = local_unnamed_addr global i32 35180
@global_var_13198 = local_unnamed_addr global i32 35180
@global_var_1319c = local_unnamed_addr global i32 35180
@global_var_131a0 = local_unnamed_addr global i32 35180
@global_var_131a4 = local_unnamed_addr global i32 35180
@global_var_131a8 = local_unnamed_addr global i32 35180
@global_var_131ac = local_unnamed_addr global i32 35180
@global_var_131b0 = local_unnamed_addr global i32 35180
@global_var_131b4 = local_unnamed_addr global i32 35180
@global_var_131b8 = local_unnamed_addr global i32 35180
@global_var_131bc = local_unnamed_addr global i32 35180
@global_var_9970 = local_unnamed_addr constant i32 78288
@global_var_9974 = local_unnamed_addr constant i32 43052
@global_var_a82c = constant [27 x i8] c"Error: Invalid mode '%s'!\0A\00"
@global_var_9978 = local_unnamed_addr constant i32 42956
@global_var_a7cc = constant [33 x i8] c"Error: Unsupported option \22%s\22!\0A\00"
@global_var_997c = local_unnamed_addr constant i32 42992
@global_var_a7f0 = constant [19 x i8] c"i2cset version %s\0A\00"
@global_var_9980 = local_unnamed_addr constant i32 43012
@global_var_a804 = constant [6 x i8] c"3.1.0\00"
@global_var_9984 = local_unnamed_addr constant i32 43020
@global_var_a80c = constant [30 x i8] c"Error: Data address invalid!\0A\00"
@global_var_9988 = local_unnamed_addr constant i32 43304
@global_var_a928 = constant [38 x i8] c"Error: Data value mask out of range!\0A\00"
@global_var_998c = local_unnamed_addr constant i32 43268
@global_var_a904 = constant [33 x i8] c"Error: Data value mask invalid!\0A\00"
@global_var_9990 = local_unnamed_addr constant i32 43176
@global_var_a8a8 = constant [28 x i8] c"Error: Too many arguments!\0A\00"
@global_var_9994 = local_unnamed_addr constant i32 43232
@global_var_a8e0 = constant [33 x i8] c"Error: Data value out of range!\0A\00"
@global_var_9998 = local_unnamed_addr constant i32 43204
@global_var_a8c4 = constant [28 x i8] c"Error: Data value invalid!\0A\00"
@global_var_999c = local_unnamed_addr constant i32 44184
@global_var_ac98 = constant [32 x i8] c"Error: Could not clear PEC: %s\0A\00"
@global_var_99a0 = local_unnamed_addr constant i32 43128
@global_var_a878 = constant [45 x i8] c"Error: Mask not supported for block writes!\0A\00"
@global_var_99a4 = local_unnamed_addr constant i32 43080
@global_var_a848 = constant [48 x i8] c"Error: PEC not supported for I2C block writes!\0A\00"
@global_var_99a8 = local_unnamed_addr constant i32 43540
@global_var_aa14 = constant [47 x i8] c"Warning: Adapter does not seem to support PEC\0A\00"
@global_var_99ac = local_unnamed_addr constant i32 44032
@global_var_ac00 = constant [75 x i8] c"Old value 0x%0*x, write mask 0x%0*x: Will write 0x%0*x to register 0x%02x\0A\00"
@global_var_99b0 = local_unnamed_addr constant i32 44108
@global_var_ac4c = constant [17 x i8] c"Continue? [Y/n] \00"
@global_var_99b4 = local_unnamed_addr constant i32 43344
@global_var_a950 = constant [59 x i8] c"Error: Could not get the adapter functionality matrix: %s\0A\00"
@global_var_99b8 = local_unnamed_addr constant i32 43588
@global_var_aa44 = constant [76 x i8] c"WARNING! This program can confuse your I2C bus, cause data loss and worse!\0A\00"
@global_var_99bc = local_unnamed_addr constant i32 43664
@global_var_aa90 = constant [120 x i8] c"DANGEROUS! Writing to a serial EEPROM on a memory DIMM\0Amay render your memory USELESS and make your system UNBOOTABLE!\0A\00"
@global_var_99c0 = local_unnamed_addr constant i32 43784
@global_var_ab08 = constant [75 x i8] c"I will write to device file %s, chip address 0x%02x, data address\0A0x%02x, \00"
@global_var_99c4 = local_unnamed_addr constant i32 43476
@global_var_a9d4 = constant [5 x i8] c"byte\00"
@global_var_99c8 = local_unnamed_addr constant i32 43496
@global_var_a9e8 = constant [5 x i8] c"word\00"
@global_var_99cc = local_unnamed_addr constant i32 42988
@global_var_99d0 = local_unnamed_addr constant i32 42936
@global_var_a7b8 = constant [10 x i8] c" (masked)\00"
@global_var_99d4 = local_unnamed_addr constant i32 43900
@global_var_ab7c = constant [25 x i8] c"data 0x%02x%s, mode %s.\0A\00"
@global_var_99d8 = local_unnamed_addr constant i32 43928
@global_var_ab98 = constant [23 x i8] c"PEC checking enabled.\0A\00"
@global_var_99dc = local_unnamed_addr constant i32 42948
@global_var_a7c4 = constant [4 x i8] c"y/N\00"
@global_var_99e0 = local_unnamed_addr constant i32 42952
@global_var_a7c8 = constant [4 x i8] c"Y/n\00"
@global_var_99e4 = local_unnamed_addr constant i32 43952
@global_var_abb0 = constant [16 x i8] c"Continue? [%s] \00"
@global_var_99e8 = local_unnamed_addr constant i32 43968
@global_var_abc0 = constant [27 x i8] c"Aborting on user request.\0A\00"
@global_var_99ec = local_unnamed_addr constant i32 43872
@global_var_ab60 = constant [5 x i8] c"data\00"
@global_var_99f0 = local_unnamed_addr constant i32 43880
@global_var_ab68 = constant [8 x i8] c" 0x%02x\00"
@global_var_99f4 = local_unnamed_addr constant i32 43860
@global_var_ab54 = constant [10 x i8] c"no data.\0A\00"
@global_var_99f8 = local_unnamed_addr constant i32 43996
@global_var_abdc = constant [33 x i8] c"Error: Failed to read old value\0A\00"
@global_var_99fc = local_unnamed_addr constant i32 43404
@global_var_a98c = constant [44 x i8] c"Error: Adapter does not have %s capability\0A\00"
@global_var_9a00 = local_unnamed_addr constant i32 43524
@global_var_aa04 = constant [16 x i8] c"I2C block write\00"
@global_var_9a04 = local_unnamed_addr constant i32 43504
@global_var_a9f0 = constant [18 x i8] c"SMBus block write\00"
@global_var_9a08 = local_unnamed_addr constant i32 43484
@global_var_a9dc = constant [17 x i8] c"SMBus write word\00"
@global_var_9a0c = local_unnamed_addr constant i32 43464
@global_var_a9c8 = constant [17 x i8] c"SMBus write byte\00"
@global_var_9a10 = local_unnamed_addr constant i32 44244
@global_var_acd4 = constant [58 x i8] c"Warning - data mismatch - wrote 0x%0*x, read back 0x%0*x\0A\00"
@global_var_9a14 = local_unnamed_addr constant i32 44304
@global_var_ad10 = constant [40 x i8] c"Value 0x%0*x written, readback matched\0A\00"
@global_var_9a18 = local_unnamed_addr constant i32 44216
@global_var_acb8 = constant [26 x i8] c"Warning - readback failed\00"
@global_var_9a1c = local_unnamed_addr constant i32 44160
@global_var_ac80 = constant [21 x i8] c"Error: Write failed\0A\00"
@global_var_9a20 = local_unnamed_addr constant i32 44128
@global_var_ac60 = constant [30 x i8] c"Error: Could not set PEC: %s\0A\00"
@global_var_9a24 = local_unnamed_addr constant i32 43448
@global_var_a9b8 = constant [16 x i8] c"SMBus send byte\00"
@global_var_9a28 = local_unnamed_addr constant i32 42924
@global_var_a7ac = constant [10 x i8] c"i2c block\00"
@global_var_9a2c = local_unnamed_addr constant i32 42912
@global_var_a7a0 = constant [12 x i8] c"smbus block\00"
@global_var_9a30 = local_unnamed_addr constant i32 43888
@global_var_ab70 = constant [12 x i8] c", mode %s.\0A\00"
@global_var_9a64 = local_unnamed_addr constant i32 42568
@global_var_9a68 = local_unnamed_addr constant i32 35768
@global_var_9a6c = local_unnamed_addr constant i32 42468
@global_var_9a8c = local_unnamed_addr constant i32 38552
@global_var_9698 = constant i32 -1174405041
@global_var_9a90 = local_unnamed_addr constant i32 168
@global_var_9a80 = constant i32 -481165312
@global_var_9ac0 = local_unnamed_addr constant i32 78284
@global_var_9ac4 = local_unnamed_addr constant i32 78287
@global_var_9ac8 = local_unnamed_addr constant i32 0
@global_var_9b00 = local_unnamed_addr constant i32 78284
@global_var_9b04 = local_unnamed_addr constant i32 78284
@global_var_9b08 = local_unnamed_addr constant i32 0
@global_var_9b30 = local_unnamed_addr constant i32 78300
@global_var_9b60 = local_unnamed_addr constant i32 77868
@global_var_1302c = global i32 0
@global_var_9b64 = local_unnamed_addr constant i32 0
@global_var_a658 = constant [328 x i8] c"Usage: i2cset [-f] [-y] [-m MASK] I2CBUS CHIP-ADDRESS DATA-ADDRESS [VALUE] ... [MODE]\0A  I2CBUS is an integer or an I2C bus name\0A  ADDRESS is an integer (0x03 - 0x77)\0A  MODE is one of:\0A    c (byte, no value)\0A    b (byte data, default)\0A    w (word data)\0A    i (I2C block data)\0A    s (SMBus block data)\0A    Append p for SMBus PEC\0A\00"
@global_var_9cfc = local_unnamed_addr constant i32 78288
@global_var_9d00 = local_unnamed_addr constant i32 44384
@global_var_ad60 = constant [38 x i8] c"Error: Chip address is not a number!\0A\00"
@global_var_9d04 = local_unnamed_addr constant i32 44424
@global_var_ad88 = constant [47 x i8] c"Error: Chip address out of range (0x03-0x77)!\0A\00"
@global_var_9e20 = local_unnamed_addr constant i32 44472
@global_var_adb8 = constant [12 x i8] c"/dev/i2c/%d\00"
@global_var_9e24 = local_unnamed_addr constant i32 78288
@global_var_9e28 = local_unnamed_addr constant i32 44560
@global_var_ae10 = constant [37 x i8] c"Error: Could not open file `%s': %s\0A\00"
@global_var_9e2c = local_unnamed_addr constant i32 44600
@global_var_ae38 = constant [14 x i8] c"Run as root?\0A\00"
@global_var_9e30 = local_unnamed_addr constant i32 44484
@global_var_adc4 = constant [12 x i8] c"/dev/i2c-%d\00"
@global_var_9e34 = local_unnamed_addr constant i32 44496
@global_var_add0 = constant [63 x i8] c"Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\0A\00"
@global_var_a34c = local_unnamed_addr constant i32 44616
@global_var_ae48 = constant [14 x i8] c"/proc/bus/i2c\00"
@global_var_a350 = local_unnamed_addr constant i32 45064
@global_var_a354 = local_unnamed_addr constant i32 44632
@global_var_ae58 = constant [7 x i8] c"i2c-%d\00"
@global_var_a358 = local_unnamed_addr constant i32 44640
@global_var_ae60 = constant [13 x i8] c"/proc/mounts\00"
@global_var_a35c = local_unnamed_addr constant i32 44656
@global_var_ae70 = constant [24 x i8] c"%*[^ ] %[^ ] %[^ ] %*s\0A\00"
@global_var_a360 = local_unnamed_addr constant i32 44680
@global_var_ae88 = constant [6 x i8] c"sysfs\00"
@global_var_a364 = local_unnamed_addr constant i32 44792
@global_var_aef8 = local_unnamed_addr constant [15 x i8] c"/class/i2c-dev\00"
@global_var_aefc = local_unnamed_addr constant [11 x i8] c"ss/i2c-dev\00"
@global_var_af00 = local_unnamed_addr constant [7 x i8] c"2c-dev\00"
@global_var_af04 = local_unnamed_addr constant [3 x i8] c"ev\00"
@global_var_a368 = local_unnamed_addr constant i32 44344
@global_var_afc4 = constant [6 x i8] c"dummy\00"
@global_var_afcc = constant [10 x i8] c"Dummy bus\00"
@global_var_afd8 = constant [4 x i8] c"isa\00"
@global_var_afdc = constant [8 x i8] c"ISA bus\00"
@global_var_afe4 = constant [4 x i8] c"i2c\00"
@global_var_afe8 = constant [12 x i8] c"I2C adapter\00"
@global_var_aff4 = constant [6 x i8] c"smbus\00"
@global_var_affc = constant [14 x i8] c"SMBus adapter\00"
@global_var_b00c = constant [8 x i8] c"unknown\00"
@global_var_b014 = constant [4 x i8] c"N/A\00"
@global_var_ad38 = constant [10 x i8*] [i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_afc4, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_afcc, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_afd8, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_afdc, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_afe4, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_afe8, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_aff4, i32 0, i32 0), i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_affc, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_b00c, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_b014, i32 0, i32 0)]
@global_var_a36c = local_unnamed_addr constant i32 78288
@global_var_a370 = local_unnamed_addr constant i32 44688
@global_var_ae90 = constant [11 x i8] c"%s/%s/name\00"
@global_var_a374 = local_unnamed_addr constant i32 44784
@global_var_aef0 = constant [5 x i8] c"ISA \00"
@global_var_a378 = local_unnamed_addr constant i32 44700
@global_var_ae9c = constant [18 x i8] c"%s/%s/device/name\00"
@global_var_a37c = local_unnamed_addr constant i32 44720
@global_var_aeb0 = constant [13 x i8] c"%s/%s/device\00"
@global_var_a380 = local_unnamed_addr constant i32 44736
@global_var_aec0 = constant [5 x i8] c"i2c-\00"
@global_var_a384 = local_unnamed_addr constant i32 44744
@global_var_aec8 = constant [21 x i8] c"%s/%s/device/%s/name\00"
@global_var_a388 = local_unnamed_addr constant i32 44768
@global_var_aee0 = constant [16 x i8] c"%s: read error\0A\00"
@global_var_a4c0 = local_unnamed_addr constant i32 78288
@global_var_a4c4 = local_unnamed_addr constant i32 44832
@global_var_af20 = constant [36 x i8] c"Error: I2C bus name is not unique!\0A\00"
@global_var_a4c8 = local_unnamed_addr constant i32 44868
@global_var_af44 = constant [52 x i8] c"Error: I2C bus name doesn't match any bus present!\0A\00"
@global_var_a4cc = local_unnamed_addr constant i32 44920
@global_var_af78 = constant [30 x i8] c"Error: I2C bus out of range!\0A\00"
@global_var_a4d0 = local_unnamed_addr constant i32 44808
@global_var_af08 = constant [23 x i8] c"Error: Out of memory!\0A\00"
@global_var_a53c = local_unnamed_addr constant i32 78288
@global_var_a540 = local_unnamed_addr constant i32 44952
@global_var_af98 = constant [44 x i8] c"Error: Could not set address to 0x%02x: %s\0A\00"
@global_var_a5e0 = local_unnamed_addr constant i32 78296
@global_var_a640 = local_unnamed_addr constant i32 35364
@global_var_a644 = local_unnamed_addr constant i32 35352
@global_var_13028 = global i32 39692
@global_var_13024 = global i32 39732
@4 = external global i32
@global_var_131d0 = global %_IO_FILE* null
@global_var_a7ec = external constant i8*
@global_var_a648 = constant void ()* inttoptr (i32 -516948194 to void ()*)
@global_var_a5e4 = constant void ()* inttoptr (i32 -382908936 to void ()*)
@global_var_131dc = external local_unnamed_addr global i8*
@5 = internal constant [2 x i8] c"r\00"
@6 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @5, i32 0, i32 0)
@global_var_af06 = local_unnamed_addr constant i8 0
@global_var_131d8 = local_unnamed_addr global %_IO_FILE* null
@global_var_b008 = constant [2 x i8] c"r\00"

define i32 @function_8960(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8960:
  %0 = call i32 @function_9a70(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @calloc.9(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_8980:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @strcmp.19(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_898c:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @strtol.34(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_8998:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @printf.29(i8* %format, ...) local_unnamed_addr {
dec_label_pc_89a4:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define %_IO_FILE* @fopen.32(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_89b0:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !6
  ret %_IO_FILE* %0, !insn.addr !6
}

define i32 @fflush.10(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_89bc:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @free.39(i32* %ptr) local_unnamed_addr {
dec_label_pc_89c8:
  call void @free(i32* %ptr), !insn.addr !8
  ret void, !insn.addr !8
}

define i8* @fgets.35(i8* %s, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_89d4:
  %0 = call i8* @fgets(i8* %s, i32 %n, %_IO_FILE* %stream), !insn.addr !9
  ret i8* %0, !insn.addr !9
}

define i32* @realloc.33(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_89e0:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @strcasecmp.12(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_89ec:
  %0 = call i32 @strcasecmp(i8* %s1, i8* %s2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @fwrite.25(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_89f8:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @ioctl.26(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_8a04:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @strcpy.36(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_8a10:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define %__dirstream* @opendir.17(i8* %name) local_unnamed_addr {
dec_label_pc_8a1c:
  %0 = call %__dirstream* @opendir(i8* %name), !insn.addr !15
  ret %__dirstream* %0, !insn.addr !15
}

define i32 @puts.8(i8* %s) local_unnamed_addr {
dec_label_pc_8a28:
  %0 = call i32 @puts(i8* %s), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32* @malloc.18(i32 %size) local_unnamed_addr {
dec_label_pc_8a34:
  %0 = call i32* @malloc(i32 %size), !insn.addr !17
  ret i32* %0, !insn.addr !17
}

define i32 @__libc_start_main.30(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_8a40:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i8* @strerror.20(i32 %errnum) local_unnamed_addr {
dec_label_pc_8a4c:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !19
  ret i8* %0, !insn.addr !19
}

define void @function_8a58() local_unnamed_addr {
dec_label_pc_8a58:
  call void @__gmon_start__(), !insn.addr !20
  ret void, !insn.addr !20
}

define i32 @open.6(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_8a64:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define void @exit.4(i32 %status) local_unnamed_addr {
dec_label_pc_8a70:
  call void @exit(i32 %status), !insn.addr !22
  ret void, !insn.addr !22
}

define i32 @strtoul.21(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_8a7c:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @strlen.37(i8* %s) local_unnamed_addr {
dec_label_pc_8a88:
  %0 = call i32 @strlen(i8* %s), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i8* @strchr.14(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_8a94:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !25
  ret i8* %0, !insn.addr !25
}

define i32 @fprintf.15(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8aa0:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32* @__errno_location.24() local_unnamed_addr {
dec_label_pc_8aac:
  %0 = call i32* @__errno_location(), !insn.addr !27
  ret i32* %0, !insn.addr !27
}

define i32 @snprintf.11(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8ab8:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @sscanf.22(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8ac4:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i8* @__strdup.27(i8* %string) local_unnamed_addr {
dec_label_pc_8ad0:
  %0 = call i8* @__strdup(i8* %string), !insn.addr !30
  ret i8* %0, !insn.addr !30
}

define i32* @memset.16(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_8adc:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !31
  ret i32* %0, !insn.addr !31
}

define i32 @fgetc.28(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8ae8:
  %0 = call i32 @fgetc(%_IO_FILE* %stream), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @fclose.23(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8af4:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define %dirent* @readdir.2(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_8b00:
  %0 = call %dirent* @readdir(%__dirstream* %dirp), !insn.addr !34
  ret %dirent* %0, !insn.addr !34
}

define i8* @strrchr.13(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_8b0c:
  %0 = call i8* @strrchr(i8* %s, i32 %c), !insn.addr !35
  ret i8* %0, !insn.addr !35
}

define i32 @sprintf.31(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8b18:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define i32 @strncmp.5(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_8b24:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define void @abort.38() local_unnamed_addr {
dec_label_pc_8b30:
  call void @abort(), !insn.addr !38
  ret void, !insn.addr !38
}

define i32 @close.7(i32 %fd) local_unnamed_addr {
dec_label_pc_8b3c:
  %0 = call i32 @close(i32 %fd), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @closedir.3(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_8b48:
  %0 = call i32 @closedir(%__dirstream* %dirp), !insn.addr !40
  ret i32 %0, !insn.addr !40
}

define i32 @function_8b54(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32* %arg5) local_unnamed_addr {
dec_label_pc_8b54:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 1824), !insn.addr !41
  ret i32 %0, !insn.addr !42
}

define i32 @function_8b84() local_unnamed_addr {
dec_label_pc_8b84:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_-44 = alloca i32, align 4
  %2 = call i32 @function_8b54(i32 %1, i32 1, i32 0, i32 1, i32* nonnull %stack_var_-44), !insn.addr !43
  %3 = icmp eq i32 %2, 0, !insn.addr !44
  %4 = load i32, i32* %stack_var_-44, align 4
  %5 = urem i32 %4, 256
  %spec.select = select i1 %3, i32 %5, i32 -1
  ret i32 %spec.select, !insn.addr !45

; uselistorder directives
  uselistorder i32* %stack_var_-44, { 1, 0 }
}

define i32 @function_8bb8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8bb8:
  %0 = alloca i32
  %r1.1844.reg2mem = alloca i32, !insn.addr !46
  %r3.645.reg2mem = alloca i32, !insn.addr !46
  %r1.1742.reg2mem = alloca i32, !insn.addr !46
  %r3.543.reg2mem = alloca i32, !insn.addr !46
  %r4.936.reg2mem = alloca i32, !insn.addr !46
  %fp.237.reg2mem = alloca i32, !insn.addr !46
  %r4.9.ph.reg2mem = alloca i32, !insn.addr !46
  %r7.3.reg2mem = alloca i32, !insn.addr !46
  %r0.1.reg2mem = alloca i32, !insn.addr !46
  %r4.846.reg2mem = alloca i32, !insn.addr !46
  %sl.4.reg2mem = alloca i32, !insn.addr !46
  %fp.1.reg2mem = alloca i32, !insn.addr !46
  %r3.332.reg2mem = alloca i32, !insn.addr !46
  %r2.7.in.reg2mem = alloca i1, !insn.addr !46
  %stack_var_-412.3.reg2mem = alloca i32, !insn.addr !46
  %storemerge4.in.reg2mem = alloca %_IO_FILE*, !insn.addr !46
  %storemerge8.in.reg2mem = alloca i8*, !insn.addr !46
  %storemerge9.reg2mem = alloca i32, !insn.addr !46
  %sb.147.reg2mem = alloca i32, !insn.addr !46
  %storemerge548.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-412.2.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-396.2.in.reg2mem = alloca i1, !insn.addr !46
  %sb.0.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-412.1.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-396.1.reg2mem = alloca i32, !insn.addr !46
  %storemerge6.reg2mem = alloca i32, !insn.addr !46
  %fp.0.reg2mem = alloca i32, !insn.addr !46
  %r4.2.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-412.0.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-396.0.reg2mem = alloca i32, !insn.addr !46
  %r3.2.reg2mem = alloca i32, !insn.addr !46
  %r2.3.reg2mem = alloca i32, !insn.addr !46
  %r1.3.reg2mem = alloca i32, !insn.addr !46
  %r0.0.reg2mem = alloca i32, !insn.addr !46
  %sl.2.reg2mem = alloca i32, !insn.addr !46
  %r8.2.reg2mem = alloca i32, !insn.addr !46
  %r7.2.reg2mem = alloca i32, !insn.addr !46
  %r6.2.reg2mem = alloca i32, !insn.addr !46
  %r4.1.reg2mem = alloca i32, !insn.addr !46
  %r3.1.reg2mem = alloca i32, !insn.addr !46
  %r2.2.reg2mem = alloca i32, !insn.addr !46
  %r1.2.reg2mem = alloca i32, !insn.addr !46
  %r3.0.reg2mem = alloca i32, !insn.addr !46
  %r2.1.reg2mem = alloca i32, !insn.addr !46
  %sl.1.reg2mem = alloca i32, !insn.addr !46
  %r8.1.reg2mem = alloca i32, !insn.addr !46
  %r7.1.reg2mem = alloca i32, !insn.addr !46
  %r6.1.reg2mem = alloca i32, !insn.addr !46
  %r1.1.reg2mem = alloca i32, !insn.addr !46
  %lr.1.reg2mem = alloca i32, !insn.addr !46
  %sl.0.reg2mem = alloca i32, !insn.addr !46
  %r8.0.reg2mem = alloca i32, !insn.addr !46
  %r7.0.reg2mem = alloca i32, !insn.addr !46
  %r6.0.reg2mem = alloca i32, !insn.addr !46
  %r4.0.reg2mem = alloca i32, !insn.addr !46
  %r2.0.reg2mem = alloca i32, !insn.addr !46
  %r1.0.reg2mem = alloca i32, !insn.addr !46
  %lr.0.reg2mem = alloca i32, !insn.addr !46
  %stack_var_-220 = alloca i32, align 4
  %stack_var_-361 = alloca i32, align 4
  %stack_var_-184 = alloca i32, align 4
  %stack_var_-148 = alloca i8, align 1
  %stack_var_-112 = alloca i32, align 4
  %stack_var_-76 = alloca i32, align 4
  %stack_var_-256 = alloca i16, align 2
  %stack_var_-328 = alloca i32, align 4
  %stack_var_-292 = alloca i32, align 4
  %stack_var_-360 = alloca i32, align 4
  %1 = load i32, i32* %0
  %stack_var_-380 = alloca i32, align 4
  %stack_var_-388 = alloca i8*, align 4
  %2 = icmp slt i32 %arg1, 2, !insn.addr !47
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !47
  store i32 %arg2, i32* %r1.3.reg2mem, !insn.addr !47
  br i1 %2, label %dec_label_pc_8e24, label %dec_label_pc_8bd0, !insn.addr !47

dec_label_pc_8bd0:                                ; preds = %dec_label_pc_8bb8
  %3 = add i32 %arg2, 4, !insn.addr !48
  %4 = inttoptr i32 %3 to i32*, !insn.addr !48
  %5 = load i32, i32* %4, align 4, !insn.addr !48
  %6 = inttoptr i32 %5 to i8*, !insn.addr !49
  %7 = load i8, i8* %6, align 1, !insn.addr !49
  %8 = icmp eq i8 %7, 45, !insn.addr !50
  store i32 0, i32* %lr.0.reg2mem, !insn.addr !51
  store i32 1, i32* %r1.0.reg2mem, !insn.addr !51
  store i32 %5, i32* %r2.0.reg2mem, !insn.addr !51
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !51
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !51
  store i32 0, i32* %r7.0.reg2mem, !insn.addr !51
  store i32 0, i32* %r8.0.reg2mem, !insn.addr !51
  store i32 0, i32* %sl.0.reg2mem, !insn.addr !51
  br i1 %8, label %dec_label_pc_8bfc, label %dec_label_pc_8e28, !insn.addr !51

dec_label_pc_8bfc:                                ; preds = %dec_label_pc_8bd0, %dec_label_pc_8cb8
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %r8.0.reload = load i32, i32* %r8.0.reg2mem
  %r7.0.reload = load i32, i32* %r7.0.reg2mem
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %lr.0.reload = load i32, i32* %lr.0.reg2mem
  %9 = add i32 %r2.0.reload, 1, !insn.addr !52
  %10 = inttoptr i32 %9 to i8*, !insn.addr !52
  %11 = load i8, i8* %10, align 1, !insn.addr !52
  %12 = zext i8 %11 to i32, !insn.addr !52
  %13 = add nsw i32 %12, -86, !insn.addr !53
  store i32 %13, i32* @0, align 4, !insn.addr !54
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !54
  store i32 %r4.0.reload, i32* %r1.1.reg2mem, !insn.addr !54
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !54
  store i32 1, i32* %r7.1.reg2mem, !insn.addr !54
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !54
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !54
  switch i8 %11, label %dec_label_pc_8ddc [
    i8 86, label %dec_label_pc_8dd0
    i8 121, label %dec_label_pc_8ca8
    i8 114, label %dec_label_pc_8da8
    i8 109, label %dec_label_pc_8db4
    i8 102, label %dec_label_pc_8dc4
  ], !insn.addr !54

dec_label_pc_8ca8:                                ; preds = %dec_label_pc_8bfc, %81, %dec_label_pc_8db4, %dec_label_pc_8dd0, %dec_label_pc_8dc4, %dec_label_pc_8da8
  %sl.1.reload = load i32, i32* %sl.1.reg2mem
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %lr.1.reload = load i32, i32* %lr.1.reg2mem
  %14 = add i32 %r1.1.reload, 1, !insn.addr !55
  %15 = add i32 %r1.1.reload, 2, !insn.addr !56
  %16 = icmp slt i32 %15, %arg1, !insn.addr !57
  store i32 %r2.0.reload, i32* %r2.1.reg2mem, !insn.addr !57
  store i32 %13, i32* %r3.0.reg2mem, !insn.addr !57
  br i1 %16, label %dec_label_pc_8cb8, label %dec_label_pc_8cc8, !insn.addr !57

dec_label_pc_8cb8:                                ; preds = %dec_label_pc_8ca8
  %17 = mul i32 %15, 4, !insn.addr !58
  %18 = add i32 %17, %arg2, !insn.addr !58
  %19 = inttoptr i32 %18 to i32*, !insn.addr !58
  %20 = load i32, i32* %19, align 4, !insn.addr !58
  %21 = inttoptr i32 %20 to i8*, !insn.addr !59
  %22 = load i8, i8* %21, align 1, !insn.addr !59
  %23 = icmp eq i8 %22, 45, !insn.addr !60
  store i32 %lr.1.reload, i32* %lr.0.reg2mem, !insn.addr !61
  store i32 %15, i32* %r1.0.reg2mem, !insn.addr !61
  store i32 %20, i32* %r2.0.reg2mem, !insn.addr !61
  store i32 %14, i32* %r4.0.reg2mem, !insn.addr !61
  store i32 %r6.1.reload, i32* %r6.0.reg2mem, !insn.addr !61
  store i32 %r7.1.reload, i32* %r7.0.reg2mem, !insn.addr !61
  store i32 %r8.1.reload, i32* %r8.0.reg2mem, !insn.addr !61
  store i32 %sl.1.reload, i32* %sl.0.reg2mem, !insn.addr !61
  br i1 %23, label %dec_label_pc_8bfc, label %dec_label_pc_8cc8.split.loop.exit49, !insn.addr !61

dec_label_pc_8cc8.split.loop.exit49:              ; preds = %dec_label_pc_8cb8
  %24 = zext i8 %22 to i32, !insn.addr !59
  store i32 %20, i32* %r2.1.reg2mem
  store i32 %24, i32* %r3.0.reg2mem
  br label %dec_label_pc_8cc8

dec_label_pc_8cc8:                                ; preds = %dec_label_pc_8ca8, %dec_label_pc_8cc8.split.loop.exit49
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.1.reload = load i32, i32* %r2.1.reg2mem
  %25 = icmp eq i32 %lr.1.reload, 0, !insn.addr !62
  store i32 %15, i32* %r1.2.reg2mem, !insn.addr !63
  store i32 %r2.1.reload, i32* %r2.2.reg2mem, !insn.addr !63
  store i32 %r3.0.reload, i32* %r3.1.reg2mem, !insn.addr !63
  store i32 %14, i32* %r4.1.reg2mem, !insn.addr !63
  store i32 %r6.1.reload, i32* %r6.2.reg2mem, !insn.addr !63
  store i32 %r7.1.reload, i32* %r7.2.reg2mem, !insn.addr !63
  store i32 %r8.1.reload, i32* %r8.2.reg2mem, !insn.addr !63
  store i32 %sl.1.reload, i32* %sl.2.reg2mem, !insn.addr !63
  br i1 %25, label %dec_label_pc_8cd0, label %dec_label_pc_8df0, !insn.addr !63

dec_label_pc_8cd0:                                ; preds = %dec_label_pc_8cc8, %dec_label_pc_8e28
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %r2.2.reload = load i32, i32* %r2.2.reg2mem
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %26 = add i32 %r4.1.reload, 3, !insn.addr !64
  %27 = icmp slt i32 %26, %arg1, !insn.addr !65
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !65
  store i32 %r1.2.reload, i32* %r1.3.reg2mem, !insn.addr !65
  store i32 %r2.2.reload, i32* %r2.3.reg2mem, !insn.addr !65
  store i32 %r3.1.reload, i32* %r3.2.reg2mem, !insn.addr !65
  br i1 %27, label %dec_label_pc_8cdc, label %dec_label_pc_8e24, !insn.addr !65

dec_label_pc_8cdc:                                ; preds = %dec_label_pc_8cd0
  %28 = add i32 %r4.1.reload, 1, !insn.addr !66
  %29 = mul i32 %28, 4, !insn.addr !67
  %30 = add i32 %29, %arg2, !insn.addr !67
  %31 = inttoptr i32 %30 to i32*, !insn.addr !67
  %32 = load i32, i32* %31, align 4, !insn.addr !67
  %33 = call i32 @function_a38c(i32 %32), !insn.addr !68
  %34 = icmp slt i32 %33, 0, !insn.addr !69
  store i32 %33, i32* %r0.0.reg2mem, !insn.addr !70
  store i32 %r1.2.reload, i32* %r1.3.reg2mem, !insn.addr !70
  store i32 %28, i32* %r2.3.reg2mem, !insn.addr !70
  store i32 %r3.1.reload, i32* %r3.2.reg2mem, !insn.addr !70
  br i1 %34, label %dec_label_pc_8e24, label %dec_label_pc_8cf4, !insn.addr !70

dec_label_pc_8cf4:                                ; preds = %dec_label_pc_8cdc
  %35 = add i32 %r4.1.reload, 2, !insn.addr !71
  %36 = mul i32 %35, 4, !insn.addr !72
  %37 = add i32 %36, %arg2, !insn.addr !72
  %38 = inttoptr i32 %37 to i32*, !insn.addr !72
  %39 = load i32, i32* %38, align 4, !insn.addr !72
  %40 = call i32 @function_9c74(i32 %39), !insn.addr !73
  %41 = icmp slt i32 %40, 0, !insn.addr !74
  store i32 %40, i32* %r0.0.reg2mem, !insn.addr !75
  store i32 %r1.2.reload, i32* %r1.3.reg2mem, !insn.addr !75
  store i32 %35, i32* %r2.3.reg2mem, !insn.addr !75
  store i32 %r3.1.reload, i32* %r3.2.reg2mem, !insn.addr !75
  br i1 %41, label %dec_label_pc_8e24, label %dec_label_pc_8d0c, !insn.addr !75

dec_label_pc_8d0c:                                ; preds = %dec_label_pc_8cf4
  %42 = mul i32 %26, 4, !insn.addr !76
  %43 = add i32 %42, %arg2, !insn.addr !76
  %44 = inttoptr i32 %43 to i32*, !insn.addr !76
  %45 = load i32, i32* %44, align 4, !insn.addr !76
  %46 = inttoptr i32 %45 to i8*, !insn.addr !77
  %47 = call i32 @strtol(i8* %46, i8** nonnull %stack_var_-388, i32 0), !insn.addr !77
  %48 = load i8*, i8** %stack_var_-388, align 4, !insn.addr !78
  %49 = load i8, i8* %48, align 1, !insn.addr !79
  %50 = icmp eq i8 %49, 0, !insn.addr !80
  br i1 %50, label %dec_label_pc_8d30, label %dec_label_pc_8e0c, !insn.addr !81

dec_label_pc_8d30:                                ; preds = %dec_label_pc_8d0c
  %51 = icmp ult i32 %47, 255, !insn.addr !82
  %52 = icmp ne i1 %51, true, !insn.addr !82
  %53 = icmp eq i32 %47, 255, !insn.addr !82
  %54 = icmp ne i1 %53, true, !insn.addr !83
  %55 = icmp eq i1 %52, %54, !insn.addr !83
  br i1 %55, label %dec_label_pc_8e0c, label %dec_label_pc_8d38, !insn.addr !83

dec_label_pc_8d38:                                ; preds = %dec_label_pc_8d30
  %sl.2.reload = load i32, i32* %sl.2.reg2mem
  %r8.2.reload = load i32, i32* %r8.2.reg2mem
  %r7.2.reload = load i32, i32* %r7.2.reg2mem
  %r6.2.reload = load i32, i32* %r6.2.reg2mem
  %56 = add i32 %r4.1.reload, 4, !insn.addr !84
  %57 = icmp eq i32 %56, %arg1, !insn.addr !85
  store i32 0, i32* %stack_var_-396.0.reg2mem, !insn.addr !86
  store i32 1, i32* %stack_var_-412.0.reg2mem, !insn.addr !86
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !86
  store i32 -1, i32* %fp.0.reg2mem, !insn.addr !86
  br i1 %57, label %dec_label_pc_8e54, label %dec_label_pc_8d44, !insn.addr !86

dec_label_pc_8d44:                                ; preds = %dec_label_pc_8d38
  %58 = add i32 %r4.1.reload, 5, !insn.addr !87
  %59 = icmp eq i32 %58, %arg1, !insn.addr !88
  br i1 %59, label %dec_label_pc_8ebc, label %dec_label_pc_8d50, !insn.addr !89

dec_label_pc_8d50:                                ; preds = %dec_label_pc_8d44
  %60 = mul i32 %arg1, 4, !insn.addr !90
  %61 = add i32 %60, -4, !insn.addr !91
  %62 = add i32 %61, %arg2, !insn.addr !91
  %63 = inttoptr i32 %62 to i32*, !insn.addr !91
  %64 = load i32, i32* %63, align 4, !insn.addr !91
  %65 = inttoptr i32 %64 to i8*, !insn.addr !92
  %66 = call i32 @strlen(i8* %65), !insn.addr !92
  %67 = icmp ult i32 %66, 2, !insn.addr !93
  %68 = icmp ne i1 %67, true, !insn.addr !93
  %69 = icmp eq i32 %66, 2, !insn.addr !93
  %70 = icmp ne i1 %69, true, !insn.addr !94
  %71 = icmp eq i1 %68, %70, !insn.addr !94
  br i1 %71, label %dec_label_pc_8d94, label %dec_label_pc_8d78, !insn.addr !94

dec_label_pc_8d78:                                ; preds = %dec_label_pc_8d50
  br i1 %69, label %dec_label_pc_8f70, label %dec_label_pc_8d7c, !insn.addr !95

dec_label_pc_8d7c:                                ; preds = %dec_label_pc_8f70, %dec_label_pc_8d78
  %72 = load i8, i8* %65, align 1, !insn.addr !96
  %73 = icmp eq i8 %72, 105, !insn.addr !97
  br i1 %73, label %dec_label_pc_91cc, label %dec_label_pc_8d88, !insn.addr !98

dec_label_pc_8d88:                                ; preds = %dec_label_pc_8d7c
  %74 = icmp ult i8 %72, 105, !insn.addr !97
  br i1 %74, label %dec_label_pc_8d8c, label %dec_label_pc_8f1c, !insn.addr !99

dec_label_pc_8d8c:                                ; preds = %dec_label_pc_8d88
  %75 = icmp eq i8 %72, 98, !insn.addr !100
  store i32 2, i32* %storemerge6.reg2mem, !insn.addr !101
  br i1 %75, label %dec_label_pc_8f34, label %dec_label_pc_8d94, !insn.addr !101

dec_label_pc_8d94:                                ; preds = %dec_label_pc_8f1c, %dec_label_pc_8f70, %dec_label_pc_8d8c, %dec_label_pc_8d50
  %76 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !102
  %77 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %76, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_a82c, i32 0, i32 0), i8* %65), !insn.addr !103
  %78 = call i32 @function_9b68(i32 %77, i32 ptrtoint ([27 x i8]* @global_var_a82c to i32), i32 %64, i32 ptrtoint (%_IO_FILE** @global_var_131d0 to i32)), !insn.addr !104
  unreachable, !insn.addr !104

dec_label_pc_8da8:                                ; preds = %dec_label_pc_8bfc
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !105
  store i32 %r4.0.reload, i32* %r1.1.reg2mem, !insn.addr !105
  store i32 1, i32* %r6.1.reg2mem, !insn.addr !105
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !105
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !105
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !105
  br label %dec_label_pc_8ca8, !insn.addr !105

dec_label_pc_8db4:                                ; preds = %dec_label_pc_8bfc
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %79 = add i32 %r4.0.reload, 2, !insn.addr !106
  %80 = icmp slt i32 %79, %arg1, !insn.addr !107
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !107
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !107
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !107
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !107
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !107
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !107
  br i1 %80, label %81, label %dec_label_pc_8ca8, !insn.addr !107

; <label>:81:                                     ; preds = %dec_label_pc_8db4
  %82 = mul i32 %79, 4, !insn.addr !107
  %83 = add i32 %82, %arg2, !insn.addr !107
  %84 = inttoptr i32 %83 to i32*, !insn.addr !107
  %85 = load i32, i32* %84, align 4, !insn.addr !107
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !107
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !107
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !107
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !107
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !107
  store i32 %85, i32* %sl.1.reg2mem, !insn.addr !107
  br label %dec_label_pc_8ca8, !insn.addr !107

dec_label_pc_8dc4:                                ; preds = %dec_label_pc_8bfc
  store i32 %lr.0.reload, i32* %lr.1.reg2mem, !insn.addr !108
  store i32 %r4.0.reload, i32* %r1.1.reg2mem, !insn.addr !108
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !108
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !108
  store i32 1, i32* %r8.1.reg2mem, !insn.addr !108
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !108
  br label %dec_label_pc_8ca8, !insn.addr !108

dec_label_pc_8dd0:                                ; preds = %dec_label_pc_8bfc
  store i32 1, i32* %lr.1.reg2mem, !insn.addr !109
  store i32 %r4.0.reload, i32* %r1.1.reg2mem, !insn.addr !109
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !109
  store i32 %r7.0.reload, i32* %r7.1.reg2mem, !insn.addr !109
  store i32 %r8.0.reload, i32* %r8.1.reg2mem, !insn.addr !109
  store i32 %sl.0.reload, i32* %sl.1.reg2mem, !insn.addr !109
  br label %dec_label_pc_8ca8, !insn.addr !109

dec_label_pc_8ddc:                                ; preds = %dec_label_pc_8bfc
  %86 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !110
  %87 = inttoptr i32 %r2.0.reload to i8*, !insn.addr !111
  %88 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %86, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_a7cc, i32 0, i32 0), i8* %87), !insn.addr !111
  %89 = call i32 @function_9b68(i32 %88, i32 ptrtoint ([33 x i8]* @global_var_a7cc to i32), i32 %r2.0.reload, i32 ptrtoint (%_IO_FILE** @global_var_131d0 to i32)), !insn.addr !112
  unreachable, !insn.addr !112

dec_label_pc_8df0:                                ; preds = %dec_label_pc_8cc8
  %90 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !113
  %91 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %90, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_a7f0, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_a804, i32 0, i32 0)), !insn.addr !114
  call void @exit(i32 0), !insn.addr !115
  unreachable, !insn.addr !115

dec_label_pc_8e0c:                                ; preds = %dec_label_pc_8d0c, %dec_label_pc_8d30
  %92 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !116
  %93 = ptrtoint %_IO_FILE* %92 to i32, !insn.addr !116
  %94 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_a80c to i32*), i32 1, i32 29, %_IO_FILE* %92), !insn.addr !117
  store i32 %94, i32* %r0.0.reg2mem, !insn.addr !117
  store i32 1, i32* %r1.3.reg2mem, !insn.addr !117
  store i32 29, i32* %r2.3.reg2mem, !insn.addr !117
  store i32 %93, i32* %r3.2.reg2mem, !insn.addr !117
  br label %dec_label_pc_8e24, !insn.addr !117

dec_label_pc_8e24:                                ; preds = %dec_label_pc_8cd0, %dec_label_pc_8e0c, %dec_label_pc_8cf4, %dec_label_pc_8cdc, %dec_label_pc_8bb8
  %r3.2.reload = load i32, i32* %r3.2.reg2mem
  %r2.3.reload = load i32, i32* %r2.3.reg2mem
  %r1.3.reload = load i32, i32* %r1.3.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %95 = call i32 @function_9b68(i32 %r0.0.reload, i32 %r1.3.reload, i32 %r2.3.reload, i32 %r3.2.reload), !insn.addr !118
  unreachable, !insn.addr !118

dec_label_pc_8e28:                                ; preds = %dec_label_pc_8bd0
  %96 = zext i8 %7 to i32, !insn.addr !49
  store i32 %arg2, i32* %r1.2.reg2mem, !insn.addr !119
  store i32 %5, i32* %r2.2.reg2mem, !insn.addr !119
  store i32 %96, i32* %r3.1.reg2mem, !insn.addr !119
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !119
  store i32 0, i32* %r6.2.reg2mem, !insn.addr !119
  store i32 0, i32* %r7.2.reg2mem, !insn.addr !119
  store i32 0, i32* %r8.2.reg2mem, !insn.addr !119
  store i32 0, i32* %sl.2.reg2mem, !insn.addr !119
  br label %dec_label_pc_8cd0, !insn.addr !119

dec_label_pc_8e54:                                ; preds = %dec_label_pc_9110, %dec_label_pc_90d0, %dec_label_pc_90a0, %dec_label_pc_8eec, %dec_label_pc_8d38, %dec_label_pc_8fd8
  %fp.0.reload = load i32, i32* %fp.0.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %stack_var_-412.0.reload = load i32, i32* %stack_var_-412.0.reg2mem
  %stack_var_-396.0.reload = load i32, i32* %stack_var_-396.0.reg2mem
  %97 = icmp eq i32 %sl.2.reload, 0, !insn.addr !120
  store i32 0, i32* %sb.0.reg2mem, !insn.addr !121
  br i1 %97, label %dec_label_pc_9028, label %dec_label_pc_8e5c, !insn.addr !121

dec_label_pc_8e5c:                                ; preds = %dec_label_pc_8e54
  %98 = inttoptr i32 %sl.2.reload to i8*, !insn.addr !122
  %99 = call i32 @strtol(i8* %98, i8** nonnull %stack_var_-388, i32 0), !insn.addr !122
  %100 = load i8*, i8** %stack_var_-388, align 4, !insn.addr !123
  %101 = load i8, i8* %100, align 1, !insn.addr !124
  %102 = icmp ne i8 %101, 0, !insn.addr !125
  %103 = icmp eq i32 %99, 0, !insn.addr !126
  %or.cond = or i1 %103, %102
  br i1 %or.cond, label %dec_label_pc_8f00, label %dec_label_pc_8e88, !insn.addr !127

dec_label_pc_8e88:                                ; preds = %dec_label_pc_8e5c
  %104 = add i32 %stack_var_-412.0.reload, -1, !insn.addr !128
  %105 = icmp eq i32 %104, 0, !insn.addr !129
  %106 = icmp ne i1 %105, true, !insn.addr !129
  %107 = icmp eq i32 %104, 1, !insn.addr !129
  %108 = icmp ne i1 %106, true, !insn.addr !130
  %109 = or i1 %107, %108, !insn.addr !130
  br i1 %109, label %dec_label_pc_9360, label %dec_label_pc_8e98, !insn.addr !130

dec_label_pc_8e98:                                ; preds = %dec_label_pc_8e88
  %110 = icmp slt i32 %99, 65536, !insn.addr !131
  store i32 %99, i32* %sb.0.reg2mem, !insn.addr !131
  br i1 %110, label %dec_label_pc_9028, label %dec_label_pc_8ea0, !insn.addr !131

dec_label_pc_8ea0:                                ; preds = %dec_label_pc_9360, %dec_label_pc_8e98
  %111 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !132
  %112 = ptrtoint %_IO_FILE* %111 to i32, !insn.addr !132
  %113 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_a928 to i32*), i32 1, i32 37, %_IO_FILE* %111), !insn.addr !133
  %114 = call i32 @function_9b68(i32 %113, i32 1, i32 37, i32 %112), !insn.addr !134
  unreachable, !insn.addr !134

dec_label_pc_8ebc:                                ; preds = %dec_label_pc_8d44
  %115 = mul i32 %56, 4, !insn.addr !135
  %116 = add i32 %115, %arg2, !insn.addr !135
  %117 = inttoptr i32 %116 to i32*, !insn.addr !135
  %118 = load i32, i32* %117, align 4, !insn.addr !135
  %119 = inttoptr i32 %118 to i8*, !insn.addr !136
  %120 = load i8, i8* %119, align 1, !insn.addr !136
  %121 = icmp eq i8 %120, 99, !insn.addr !137
  store i32 0, i32* %stack_var_-396.1.reg2mem, !insn.addr !138
  store i32 2, i32* %stack_var_-412.1.reg2mem, !insn.addr !138
  br i1 %121, label %dec_label_pc_8ecc, label %dec_label_pc_8f8c, !insn.addr !138

dec_label_pc_8ecc:                                ; preds = %dec_label_pc_8ebc
  %122 = add i32 %118, 1, !insn.addr !139
  %123 = inttoptr i32 %122 to i8*, !insn.addr !139
  %124 = load i8, i8* %123, align 1, !insn.addr !139
  store i32 0, i32* %stack_var_-396.1.reg2mem
  store i32 2, i32* %stack_var_-412.1.reg2mem
  switch i8 %124, label %dec_label_pc_8f8c [
    i8 0, label %dec_label_pc_8eec
    i8 112, label %dec_label_pc_8ee0
  ]

dec_label_pc_8ee0:                                ; preds = %dec_label_pc_8ecc
  %125 = add i32 %118, 2, !insn.addr !140
  %126 = inttoptr i32 %125 to i8*, !insn.addr !140
  %127 = load i8, i8* %126, align 1, !insn.addr !140
  %128 = icmp eq i8 %127, 0, !insn.addr !141
  store i32 0, i32* %stack_var_-396.1.reg2mem, !insn.addr !142
  store i32 2, i32* %stack_var_-412.1.reg2mem, !insn.addr !142
  br i1 %128, label %dec_label_pc_8eec, label %dec_label_pc_8f8c, !insn.addr !142

dec_label_pc_8eec:                                ; preds = %dec_label_pc_8ecc, %dec_label_pc_8ee0
  %129 = icmp ne i8 %124, 112, !insn.addr !143
  %130 = icmp ne i1 %129, true, !insn.addr !143
  %131 = zext i1 %130 to i32, !insn.addr !144
  store i32 %131, i32* %stack_var_-396.0.reg2mem, !insn.addr !145
  store i32 1, i32* %stack_var_-412.0.reg2mem, !insn.addr !145
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !145
  store i32 -1, i32* %fp.0.reg2mem, !insn.addr !145
  br label %dec_label_pc_8e54, !insn.addr !145

dec_label_pc_8f00:                                ; preds = %dec_label_pc_8e5c
  %132 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !146
  %133 = ptrtoint %_IO_FILE* %132 to i32, !insn.addr !146
  %134 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_a904 to i32*), i32 1, i32 32, %_IO_FILE* %132), !insn.addr !147
  %135 = call i32 @function_9b68(i32 %134, i32 1, i32 32, i32 %133), !insn.addr !148
  unreachable, !insn.addr !148

dec_label_pc_8f1c:                                ; preds = %dec_label_pc_8d88
  store i32 3, i32* %storemerge6.reg2mem
  switch i8 %72, label %dec_label_pc_8d94 [
    i8 115, label %dec_label_pc_9184
    i8 119, label %dec_label_pc_8f34
  ]

dec_label_pc_8f34:                                ; preds = %dec_label_pc_8f1c, %dec_label_pc_8d8c
  %storemerge6.reload = load i32, i32* %storemerge6.reg2mem
  %136 = add i32 %64, 1, !insn.addr !149
  %137 = inttoptr i32 %136 to i8*, !insn.addr !149
  %138 = load i8, i8* %137, align 1, !insn.addr !149
  %139 = add i32 %r4.1.reload, 6, !insn.addr !150
  %140 = icmp ne i8 %138, 112, !insn.addr !151
  %141 = icmp ne i1 %140, true, !insn.addr !151
  %142 = icmp eq i32 %139, %arg1, !insn.addr !152
  store i1 %141, i1* %stack_var_-396.2.in.reg2mem, !insn.addr !153
  store i32 %storemerge6.reload, i32* %stack_var_-412.2.reg2mem, !insn.addr !153
  br i1 %142, label %dec_label_pc_90a0, label %dec_label_pc_8f54, !insn.addr !153

dec_label_pc_8f54:                                ; preds = %dec_label_pc_9090, %dec_label_pc_8f34
  %143 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !154
  %144 = ptrtoint %_IO_FILE* %143 to i32, !insn.addr !154
  %145 = call i32 @fwrite(i32* bitcast ([28 x i8]* @global_var_a8a8 to i32*), i32 1, i32 27, %_IO_FILE* %143), !insn.addr !155
  %146 = call i32 @function_9b68(i32 %145, i32 1, i32 27, i32 %144), !insn.addr !156
  unreachable, !insn.addr !156

dec_label_pc_8f70:                                ; preds = %dec_label_pc_8d78
  %147 = add i32 %64, 1, !insn.addr !157
  %148 = inttoptr i32 %147 to i8*, !insn.addr !157
  %149 = load i8, i8* %148, align 1, !insn.addr !157
  %150 = icmp eq i8 %149, 112, !insn.addr !158
  br i1 %150, label %dec_label_pc_8d7c, label %dec_label_pc_8d94, !insn.addr !159

dec_label_pc_8f8c:                                ; preds = %dec_label_pc_8ee0, %dec_label_pc_8ecc, %dec_label_pc_8ebc, %dec_label_pc_90a0, %dec_label_pc_90a0
  %151 = mul i32 %56, 4, !insn.addr !160
  %152 = add i32 %151, %arg2, !insn.addr !160
  %153 = inttoptr i32 %152 to i32*, !insn.addr !160
  %154 = load i32, i32* %153, align 4, !insn.addr !160
  %155 = inttoptr i32 %154 to i8*, !insn.addr !161
  %156 = call i32 @strtol(i8* %155, i8** nonnull %stack_var_-388, i32 0), !insn.addr !161
  %157 = load i8*, i8** %stack_var_-388, align 4, !insn.addr !162
  %158 = load i8, i8* %157, align 1, !insn.addr !163
  %159 = icmp ne i8 %158, 0, !insn.addr !164
  %160 = icmp slt i32 %156, 0, !insn.addr !165
  %or.cond12 = or i1 %160, %159
  br i1 %or.cond12, label %dec_label_pc_9008, label %dec_label_pc_8fb8, !insn.addr !166

dec_label_pc_8fb8:                                ; preds = %dec_label_pc_8f8c
  %stack_var_-412.1.reload = load i32, i32* %stack_var_-412.1.reg2mem
  %161 = icmp slt i32 %156, 256, !insn.addr !167
  %162 = icmp ne i32 %stack_var_-412.1.reload, 2, !insn.addr !168
  %163 = or i1 %162, %161, !insn.addr !169
  br i1 %163, label %dec_label_pc_8fd8, label %dec_label_pc_8fec, !insn.addr !170

dec_label_pc_8fd8:                                ; preds = %dec_label_pc_8fb8
  %stack_var_-396.1.reload = load i32, i32* %stack_var_-396.1.reg2mem
  %164 = icmp eq i32 %156, 65536, !insn.addr !171
  %165 = icmp sgt i32 %156, 65535, !insn.addr !172
  %166 = icmp eq i32 %stack_var_-412.1.reload, 3
  %spec.select18 = select i1 %165, i1 %166, i1 %164
  store i32 %stack_var_-396.1.reload, i32* %stack_var_-396.0.reg2mem, !insn.addr !173
  store i32 %stack_var_-412.1.reload, i32* %stack_var_-412.0.reg2mem, !insn.addr !173
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !173
  store i32 %156, i32* %fp.0.reg2mem, !insn.addr !173
  br i1 %spec.select18, label %dec_label_pc_8fec, label %dec_label_pc_8e54, !insn.addr !173

dec_label_pc_8fec:                                ; preds = %dec_label_pc_9104, %dec_label_pc_8fd8, %dec_label_pc_8fb8
  %167 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !174
  %168 = ptrtoint %_IO_FILE* %167 to i32, !insn.addr !174
  %169 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_a8e0 to i32*), i32 1, i32 32, %_IO_FILE* %167), !insn.addr !175
  %170 = call i32 @function_9b68(i32 %169, i32 1, i32 32, i32 %168), !insn.addr !176
  unreachable, !insn.addr !176

dec_label_pc_9008:                                ; preds = %dec_label_pc_90dc, %dec_label_pc_8f8c
  %171 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !177
  %172 = ptrtoint %_IO_FILE* %171 to i32, !insn.addr !177
  %173 = call i32 @fwrite(i32* bitcast ([28 x i8]* @global_var_a8c4 to i32*), i32 1, i32 27, %_IO_FILE* %171), !insn.addr !178
  %174 = call i32 @function_9b68(i32 %173, i32 1, i32 27, i32 %172), !insn.addr !179
  unreachable, !insn.addr !179

dec_label_pc_9028:                                ; preds = %dec_label_pc_8e54, %dec_label_pc_9360, %dec_label_pc_8e98
  %175 = call i32 @function_9d08(i32 %33, i32* nonnull %stack_var_-380, i32 20, i32 0), !insn.addr !180
  %176 = icmp slt i32 %175, 0, !insn.addr !181
  br i1 %176, label %dec_label_pc_917c, label %dec_label_pc_9044, !insn.addr !182

dec_label_pc_9044:                                ; preds = %dec_label_pc_9028
  %177 = call i32 (i32, i32, ...) @ioctl(i32 %175, i32 1797), !insn.addr !183
  %178 = icmp slt i32 %177, 0, !insn.addr !184
  br i1 %178, label %dec_label_pc_9380, label %dec_label_pc_9058, !insn.addr !185

dec_label_pc_9058:                                ; preds = %dec_label_pc_9044
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %179 = add i32 %stack_var_-412.0.reload, -1, !insn.addr !186
  store i32 %179, i32* @1, align 4, !insn.addr !187
  switch i32 %stack_var_-412.0.reload, label %dec_label_pc_9208 [
    i32 1, label %dec_label_pc_991c
    i32 2, label %dec_label_pc_9648
    i32 3, label %dec_label_pc_9624
    i32 8, label %dec_label_pc_95dc
    i32 5, label %dec_label_pc_9600
  ], !insn.addr !187

dec_label_pc_9090:                                ; preds = %dec_label_pc_919c
  %r2.7.in.reload = load i1, i1* %r2.7.in.reg2mem
  %stack_var_-412.3.reload = load i32, i32* %stack_var_-412.3.reg2mem
  %180 = add i32 %r4.1.reload, 37, !insn.addr !188
  %181 = icmp slt i32 %180, %arg1, !insn.addr !189
  store i1 %r2.7.in.reload, i1* %stack_var_-396.2.in.reg2mem, !insn.addr !189
  store i32 %stack_var_-412.3.reload, i32* %stack_var_-412.2.reg2mem, !insn.addr !189
  br i1 %181, label %dec_label_pc_8f54, label %dec_label_pc_90a0, !insn.addr !189

dec_label_pc_90a0:                                ; preds = %dec_label_pc_9090, %dec_label_pc_8f34
  %stack_var_-412.2.reload = load i32, i32* %stack_var_-412.2.reg2mem
  %stack_var_-396.2.in.reload = load i1, i1* %stack_var_-396.2.in.reg2mem
  %stack_var_-396.2 = zext i1 %stack_var_-396.2.in.reload to i32
  %182 = add nsw i32 %stack_var_-412.2.reload, -2, !insn.addr !190
  store i32 %182, i32* @2, align 4, !insn.addr !191
  store i32 %stack_var_-396.2, i32* %stack_var_-396.0.reg2mem, !insn.addr !191
  store i32 %stack_var_-412.2.reload, i32* %stack_var_-412.0.reg2mem, !insn.addr !191
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !191
  store i32 -1, i32* %fp.0.reg2mem, !insn.addr !191
  store i32 %stack_var_-396.2, i32* %stack_var_-396.1.reg2mem, !insn.addr !191
  store i32 %stack_var_-396.2, i32* %stack_var_-396.1.reg2mem, !insn.addr !191
  store i32 %stack_var_-412.2.reload, i32* %stack_var_-412.1.reg2mem, !insn.addr !191
  store i32 %stack_var_-412.2.reload, i32* %stack_var_-412.1.reg2mem, !insn.addr !191
  switch i32 %stack_var_-412.2.reload, label %dec_label_pc_8e54 [
    i32 2, label %dec_label_pc_8f8c
    i32 3, label %dec_label_pc_8f8c
    i32 8, label %dec_label_pc_90d0
    i32 5, label %dec_label_pc_90d0
  ], !insn.addr !191

dec_label_pc_90d0:                                ; preds = %dec_label_pc_90a0, %dec_label_pc_90a0
  %183 = icmp slt i32 %58, %arg1, !insn.addr !192
  store i32 %stack_var_-396.2, i32* %stack_var_-396.0.reg2mem, !insn.addr !192
  store i32 %stack_var_-412.2.reload, i32* %stack_var_-412.0.reg2mem, !insn.addr !192
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !192
  store i32 -1, i32* %fp.0.reg2mem, !insn.addr !192
  br i1 %183, label %dec_label_pc_90dc.lr.ph, label %dec_label_pc_8e54, !insn.addr !192

dec_label_pc_90dc.lr.ph:                          ; preds = %dec_label_pc_90d0
  %184 = mul i32 %r4.1.reload, 4, !insn.addr !193
  %185 = add i32 %184, %arg2, !insn.addr !193
  %186 = ptrtoint i32* %stack_var_-360 to i32
  store i32 0, i32* %storemerge548.reg2mem
  store i32 %185, i32* %sb.147.reg2mem
  br label %dec_label_pc_90dc

dec_label_pc_90dc:                                ; preds = %dec_label_pc_90dc.lr.ph, %dec_label_pc_9110
  %sb.147.reload = load i32, i32* %sb.147.reg2mem
  %187 = add i32 %sb.147.reload, 16, !insn.addr !194
  %188 = inttoptr i32 %187 to i32*, !insn.addr !194
  %189 = load i32, i32* %188, align 4, !insn.addr !194
  %190 = inttoptr i32 %189 to i8*, !insn.addr !195
  %191 = call i32 @strtol(i8* %190, i8** nonnull %stack_var_-388, i32 0), !insn.addr !195
  %192 = load i8*, i8** %stack_var_-388, align 4, !insn.addr !196
  %193 = load i8, i8* %192, align 1, !insn.addr !197
  %194 = icmp ne i8 %193, 0, !insn.addr !198
  %195 = icmp slt i32 %191, 0, !insn.addr !199
  %or.cond14 = or i1 %195, %194
  br i1 %or.cond14, label %dec_label_pc_9008, label %dec_label_pc_9104, !insn.addr !200

dec_label_pc_9104:                                ; preds = %dec_label_pc_90dc
  %196 = icmp sgt i32 %191, 255, !insn.addr !201
  br i1 %196, label %dec_label_pc_8fec, label %dec_label_pc_9110, !insn.addr !201

dec_label_pc_9110:                                ; preds = %dec_label_pc_9104
  %storemerge548.reload = load i32, i32* %storemerge548.reg2mem
  %197 = add i32 %sb.147.reload, 4, !insn.addr !202
  %198 = trunc i32 %191 to i8, !insn.addr !203
  %199 = add i32 %storemerge548.reload, %186, !insn.addr !203
  %200 = inttoptr i32 %199 to i8*, !insn.addr !203
  store i8 %198, i8* %200, align 1, !insn.addr !203
  %201 = add i32 %storemerge548.reload, 1, !insn.addr !204
  %202 = add i32 %201, %58, !insn.addr !205
  %203 = icmp slt i32 %202, %arg1, !insn.addr !192
  store i32 %stack_var_-396.2, i32* %stack_var_-396.0.reg2mem, !insn.addr !192
  store i32 %stack_var_-412.2.reload, i32* %stack_var_-412.0.reg2mem, !insn.addr !192
  store i32 %201, i32* %r4.2.reg2mem, !insn.addr !192
  store i32 -1, i32* %fp.0.reg2mem, !insn.addr !192
  store i32 %201, i32* %storemerge548.reg2mem, !insn.addr !192
  store i32 %197, i32* %sb.147.reg2mem, !insn.addr !192
  br i1 %203, label %dec_label_pc_90dc, label %dec_label_pc_8e54, !insn.addr !192

dec_label_pc_9138:                                ; preds = %dec_label_pc_969c
  %204 = call i32 (i32, i32, ...) @ioctl(i32 %175, i32 1800), !insn.addr !206
  %205 = icmp slt i32 %204, 0, !insn.addr !207
  br i1 %205, label %dec_label_pc_9150, label %dec_label_pc_96a8, !insn.addr !208

dec_label_pc_9150:                                ; preds = %dec_label_pc_9138
  %206 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !209
  %207 = call i32* @__errno_location(), !insn.addr !210
  %208 = load i32, i32* %207, align 4, !insn.addr !211
  %209 = call i8* @strerror(i32 %208), !insn.addr !212
  store i32 ptrtoint ([32 x i8]* @global_var_ac98 to i32), i32* %storemerge9.reg2mem, !insn.addr !213
  store i8* %209, i8** %storemerge8.in.reg2mem, !insn.addr !213
  store %_IO_FILE* %206, %_IO_FILE** %storemerge4.in.reg2mem, !insn.addr !213
  br label %dec_label_pc_9170, !insn.addr !213

dec_label_pc_9170:                                ; preds = %dec_label_pc_9150, %dec_label_pc_9848
  %storemerge4.in.reload = load %_IO_FILE*, %_IO_FILE** %storemerge4.in.reg2mem
  %storemerge8.in.reload = load i8*, i8** %storemerge8.in.reg2mem
  %storemerge9.reload = load i32, i32* %storemerge9.reg2mem
  %210 = inttoptr i32 %storemerge9.reload to i8*, !insn.addr !214
  %211 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %storemerge4.in.reload, i8* %210, i8* %storemerge8.in.reload), !insn.addr !214
  %212 = call i32 @close(i32 %175), !insn.addr !215
  br label %dec_label_pc_917c, !insn.addr !215

dec_label_pc_917c:                                ; preds = %dec_label_pc_9238, %dec_label_pc_9928, %dec_label_pc_9654, %dec_label_pc_9630, %dec_label_pc_960c, %dec_label_pc_95e8, %dec_label_pc_9170, %dec_label_pc_9380, %dec_label_pc_9028
  call void @exit(i32 1), !insn.addr !216
  unreachable, !insn.addr !216

dec_label_pc_9184:                                ; preds = %dec_label_pc_8f1c
  %213 = add i32 %64, 1, !insn.addr !217
  %214 = inttoptr i32 %213 to i8*, !insn.addr !217
  %215 = load i8, i8* %214, align 1, !insn.addr !217
  %216 = icmp ne i8 %215, 112, !insn.addr !218
  %217 = icmp ne i1 %216, true, !insn.addr !218
  store i32 5, i32* %stack_var_-412.3.reg2mem, !insn.addr !219
  store i1 %217, i1* %r2.7.in.reg2mem, !insn.addr !219
  br label %dec_label_pc_919c, !insn.addr !219

dec_label_pc_919c:                                ; preds = %dec_label_pc_91cc, %dec_label_pc_9184
  %218 = icmp eq i32 %sl.2.reload, 0, !insn.addr !220
  br i1 %218, label %dec_label_pc_9090, label %dec_label_pc_91a4, !insn.addr !221

dec_label_pc_91a4:                                ; preds = %dec_label_pc_919c
  %219 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !222
  %220 = ptrtoint %_IO_FILE* %219 to i32, !insn.addr !222
  %221 = call i32 @fwrite(i32* bitcast ([45 x i8]* @global_var_a878 to i32*), i32 1, i32 44, %_IO_FILE* %219), !insn.addr !223
  %222 = call i32 @function_9b68(i32 %221, i32 1, i32 44, i32 %220), !insn.addr !224
  unreachable, !insn.addr !224

dec_label_pc_91cc:                                ; preds = %dec_label_pc_8d7c
  %223 = add i32 %64, 1, !insn.addr !225
  %224 = inttoptr i32 %223 to i8*, !insn.addr !225
  %225 = load i8, i8* %224, align 1, !insn.addr !225
  %226 = icmp ne i8 %225, 112, !insn.addr !226
  %227 = icmp ne i1 %226, true, !insn.addr !226
  %228 = icmp eq i1 %227, false, !insn.addr !227
  store i32 8, i32* %stack_var_-412.3.reg2mem, !insn.addr !228
  store i1 false, i1* %r2.7.in.reg2mem, !insn.addr !228
  br i1 %228, label %dec_label_pc_919c, label %dec_label_pc_91ec, !insn.addr !228

dec_label_pc_91ec:                                ; preds = %dec_label_pc_91cc
  %229 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !229
  %230 = ptrtoint %_IO_FILE* %229 to i32, !insn.addr !229
  %231 = call i32 @fwrite(i32* bitcast ([48 x i8]* @global_var_a848 to i32*), i32 1, i32 47, %_IO_FILE* %229), !insn.addr !230
  %232 = call i32 @function_9b68(i32 %231, i32 1, i32 47, i32 %230), !insn.addr !231
  unreachable, !insn.addr !231

dec_label_pc_9208:                                ; preds = %dec_label_pc_9058, %dec_label_pc_991c, %dec_label_pc_9648, %dec_label_pc_9624, %dec_label_pc_9600, %dec_label_pc_95dc
  %233 = icmp ne i32 %stack_var_-396.0.reload, 0, !insn.addr !232
  %234 = and i32 %1, 9, !insn.addr !233
  %235 = icmp eq i32 %234, 0, !insn.addr !233
  %or.cond22 = icmp eq i1 %235, %233
  br i1 %or.cond22, label %dec_label_pc_9220, label %dec_label_pc_9238, !insn.addr !234

dec_label_pc_9220:                                ; preds = %dec_label_pc_9208
  %236 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !235
  %237 = call i32 @fwrite(i32* bitcast ([47 x i8]* @global_var_aa14 to i32*), i32 1, i32 46, %_IO_FILE* %236), !insn.addr !236
  br label %dec_label_pc_9238, !insn.addr !236

dec_label_pc_9238:                                ; preds = %dec_label_pc_9208, %dec_label_pc_9220
  %238 = call i32 @function_a4d4(i32 %175, i32 %40, i32 %r8.2.reload), !insn.addr !237
  %239 = icmp eq i32 %238, 0, !insn.addr !238
  br i1 %239, label %dec_label_pc_9250, label %dec_label_pc_917c, !insn.addr !239

dec_label_pc_9250:                                ; preds = %dec_label_pc_9238
  %240 = icmp eq i32 %r7.2.reload, 0, !insn.addr !240
  br i1 %240, label %dec_label_pc_93a8, label %dec_label_pc_9258, !insn.addr !241

dec_label_pc_9258:                                ; preds = %dec_label_pc_9494, %dec_label_pc_9250
  %241 = icmp eq i32 %sb.0.reload, 0, !insn.addr !242
  store i32 %fp.0.reload, i32* %fp.1.reg2mem, !insn.addr !243
  br i1 %241, label %dec_label_pc_9324, label %dec_label_pc_9260, !insn.addr !243

dec_label_pc_9260:                                ; preds = %dec_label_pc_9258
  switch i32 %stack_var_-412.0.reload, label %dec_label_pc_9274 [
    i32 1, label %dec_label_pc_92a0
    i32 3, label %dec_label_pc_9590
  ]

dec_label_pc_9274:                                ; preds = %dec_label_pc_9260
  %242 = urem i32 %47, 256, !insn.addr !244
  %243 = call i32 @function_8b54(i32 %175, i32 1, i32 %242, i32 2, i32* nonnull %stack_var_-292), !insn.addr !245
  %244 = icmp eq i32 %243, 0, !insn.addr !246
  br i1 %244, label %dec_label_pc_929c, label %dec_label_pc_9570, !insn.addr !247

dec_label_pc_929c:                                ; preds = %dec_label_pc_9274
  %245 = load i32, i32* %stack_var_-292, align 4, !insn.addr !248
  %246 = urem i32 %245, 256, !insn.addr !248
  store i32 %246, i32* %r3.332.reg2mem, !insn.addr !248
  br label %dec_label_pc_92a8, !insn.addr !248

dec_label_pc_92a0:                                ; preds = %dec_label_pc_9260
  %247 = call i32 @function_8b84(), !insn.addr !249
  %248 = icmp slt i32 %247, 0, !insn.addr !250
  store i32 %247, i32* %r3.332.reg2mem, !insn.addr !251
  br i1 %248, label %dec_label_pc_9570, label %dec_label_pc_92a8, !insn.addr !251

dec_label_pc_92a8:                                ; preds = %dec_label_pc_929c, %dec_label_pc_95b8, %dec_label_pc_92a0
  %r3.332.reload = load i32, i32* %r3.332.reg2mem
  %249 = and i32 %sb.0.reload, %fp.0.reload, !insn.addr !252
  %250 = sub i32 0, %sb.0.reload
  %251 = sub i32 %250, 1
  %252 = and i32 %r3.332.reload, %251, !insn.addr !253
  %253 = or i32 %252, %249, !insn.addr !254
  store i32 %253, i32* %fp.1.reg2mem, !insn.addr !255
  br i1 %240, label %dec_label_pc_92bc, label %dec_label_pc_9324, !insn.addr !255

dec_label_pc_92bc:                                ; preds = %dec_label_pc_92a8
  %254 = icmp eq i32 %stack_var_-412.0.reload, 3, !insn.addr !256
  %r1.8 = select i1 %254, i32 4, i32 2
  %255 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !257
  %256 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %255, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_ac00, i32 0, i32 0), i32 %r1.8, i32 %r3.332.reload, i32 %r1.8, i32 %sb.0.reload, i32 %r1.8, i32 %253, i32 %47), !insn.addr !258
  %257 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !259
  %258 = call i32 @fwrite(i32* bitcast ([17 x i8]* @global_var_ac4c to i32*), i32 1, i32 16, %_IO_FILE* %257), !insn.addr !260
  %259 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !261
  %260 = call i32 @fflush(%_IO_FILE* %259), !insn.addr !262
  %261 = call i32 @function_a544(i32 1), !insn.addr !263
  %262 = icmp eq i32 %261, 0, !insn.addr !264
  store i32 %253, i32* %fp.1.reg2mem, !insn.addr !265
  br i1 %262, label %dec_label_pc_9554, label %dec_label_pc_9324, !insn.addr !265

dec_label_pc_9324:                                ; preds = %dec_label_pc_92a8, %dec_label_pc_92bc, %dec_label_pc_9258
  %fp.1.reload = load i32, i32* %fp.1.reg2mem
  %263 = icmp eq i32 %stack_var_-396.0.reload, 0, !insn.addr !266
  br i1 %263, label %dec_label_pc_9330, label %dec_label_pc_9830, !insn.addr !267

dec_label_pc_9330:                                ; preds = %dec_label_pc_9830, %dec_label_pc_9324
  store i32 %179, i32* @3, align 4, !insn.addr !268
  switch i32 %stack_var_-412.0.reload, label %dec_label_pc_9804 [
    i32 1, label %dec_label_pc_9730
    i32 8, label %dec_label_pc_986c
    i32 3, label %dec_label_pc_966c
    i32 5, label %dec_label_pc_98c4
  ], !insn.addr !268

dec_label_pc_9360:                                ; preds = %dec_label_pc_8e88
  %264 = icmp sgt i32 %99, 255, !insn.addr !269
  store i32 %99, i32* %sb.0.reg2mem, !insn.addr !269
  br i1 %264, label %dec_label_pc_8ea0, label %dec_label_pc_9028, !insn.addr !269

dec_label_pc_9380:                                ; preds = %dec_label_pc_9044
  %265 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !270
  %266 = call i32* @__errno_location(), !insn.addr !271
  %267 = load i32, i32* %266, align 4, !insn.addr !272
  %268 = call i8* @strerror(i32 %267), !insn.addr !273
  %269 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %265, i8* getelementptr inbounds ([59 x i8], [59 x i8]* @global_var_a950, i32 0, i32 0), i8* %268), !insn.addr !274
  br label %dec_label_pc_917c, !insn.addr !275

dec_label_pc_93a8:                                ; preds = %dec_label_pc_9250
  %270 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !276
  %271 = call i32 @fwrite(i32* bitcast ([76 x i8]* @global_var_aa44 to i32*), i32 1, i32 75, %_IO_FILE* %270), !insn.addr !277
  %272 = add i32 %40, -80, !insn.addr !278
  %273 = icmp ult i32 %272, 7, !insn.addr !279
  %274 = icmp ne i1 %273, true, !insn.addr !279
  %275 = icmp eq i32 %272, 7, !insn.addr !279
  %276 = icmp ne i1 %275, true, !insn.addr !280
  %277 = icmp eq i1 %274, %276, !insn.addr !280
  store i32 0, i32* %sl.4.reg2mem, !insn.addr !281
  br i1 %277, label %dec_label_pc_93ec, label %dec_label_pc_93d4, !insn.addr !281

dec_label_pc_93d4:                                ; preds = %dec_label_pc_93a8
  %278 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !282
  %279 = call i32 @fwrite(i32* bitcast ([120 x i8]* @global_var_aa90 to i32*), i32 1, i32 119, %_IO_FILE* %278), !insn.addr !283
  store i32 1, i32* %sl.4.reg2mem, !insn.addr !284
  br label %dec_label_pc_93ec, !insn.addr !284

dec_label_pc_93ec:                                ; preds = %dec_label_pc_93d4, %dec_label_pc_93a8
  %sl.4.reload = load i32, i32* %sl.4.reg2mem
  %280 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !285
  %281 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %280, i8* getelementptr inbounds ([75 x i8], [75 x i8]* @global_var_ab08, i32 0, i32 0), i32* nonnull %stack_var_-380, i32 %40, i32 %47), !insn.addr !286
  %282 = icmp eq i32 %stack_var_-412.0.reload, 1, !insn.addr !287
  br i1 %282, label %dec_label_pc_953c, label %dec_label_pc_9418, !insn.addr !288

dec_label_pc_9418:                                ; preds = %dec_label_pc_93ec
  %283 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4
  switch i32 %stack_var_-412.0.reload, label %dec_label_pc_943c [
    i32 8, label %dec_label_pc_94e8
    i32 5, label %dec_label_pc_94e8
  ]

dec_label_pc_943c:                                ; preds = %dec_label_pc_9418
  %284 = icmp eq i32 %stack_var_-412.0.reload, 2, !insn.addr !289
  %spec.select26 = select i1 %284, i32 ptrtoint ([5 x i8]* @global_var_a9d4 to i32), i32 ptrtoint ([5 x i8]* @global_var_a9e8 to i32)
  %285 = icmp eq i32 %sb.0.reload, 0, !insn.addr !290
  %286 = inttoptr i32 %spec.select26 to i8*, !insn.addr !291
  %r3.4 = select i1 %285, i32 ptrtoint (i8** @global_var_a7ec to i32), i32 ptrtoint ([10 x i8]* @global_var_a7b8 to i32)
  %287 = inttoptr i32 %r3.4 to i8*, !insn.addr !292
  %288 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %283, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_ab7c, i32 0, i32 0), i32 %fp.0.reload, i8* %287, i8* %286), !insn.addr !292
  br label %dec_label_pc_9474, !insn.addr !292

dec_label_pc_9474:                                ; preds = %dec_label_pc_9940, %dec_label_pc_953c, %dec_label_pc_943c
  %289 = icmp eq i32 %stack_var_-396.0.reload, 0, !insn.addr !293
  br i1 %289, label %dec_label_pc_9494, label %dec_label_pc_9480, !insn.addr !294

dec_label_pc_9480:                                ; preds = %dec_label_pc_9474
  %290 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !295
  %291 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_ab98 to i32*), i32 1, i32 22, %_IO_FILE* %290), !insn.addr !296
  br label %dec_label_pc_9494, !insn.addr !296

dec_label_pc_9494:                                ; preds = %dec_label_pc_9480, %dec_label_pc_9474
  %292 = icmp eq i32 %sl.4.reload, 0, !insn.addr !297
  %spec.select27 = select i1 %292, i32 ptrtoint ([4 x i8]* @global_var_a7c8 to i32), i32 ptrtoint ([4 x i8]* @global_var_a7c4 to i32)
  %293 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !298
  %294 = inttoptr i32 %spec.select27 to i8*, !insn.addr !299
  %295 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %293, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_abb0, i32 0, i32 0), i8* %294), !insn.addr !299
  %296 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !300
  %297 = call i32 @fflush(%_IO_FILE* %296), !insn.addr !301
  %298 = xor i32 %sl.4.reload, 1, !insn.addr !302
  %299 = call i32 @function_a544(i32 %298), !insn.addr !303
  %300 = icmp eq i32 %299, 0, !insn.addr !304
  br i1 %300, label %dec_label_pc_94cc, label %dec_label_pc_9258, !insn.addr !305

dec_label_pc_94cc:                                ; preds = %dec_label_pc_9494
  %301 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !306
  %302 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_abc0 to i32*), i32 1, i32 26, %_IO_FILE* %301), !insn.addr !307
  call void @exit(i32 0), !insn.addr !308
  unreachable, !insn.addr !308

dec_label_pc_94e8:                                ; preds = %dec_label_pc_9418, %dec_label_pc_9418
  %303 = call i32 @fwrite(i32* bitcast ([5 x i8]* @global_var_ab60 to i32*), i32 1, i32 4, %_IO_FILE* %283), !insn.addr !309
  %304 = icmp sgt i32 %r4.2.reload, 0, !insn.addr !310
  br i1 %304, label %dec_label_pc_9518.lr.ph, label %dec_label_pc_9940, !insn.addr !310

dec_label_pc_9518.lr.ph:                          ; preds = %dec_label_pc_94e8
  %305 = ptrtoint i32* %stack_var_-360 to i32, !insn.addr !311
  store i32 0, i32* %r4.846.reg2mem
  br label %dec_label_pc_9518

dec_label_pc_9518:                                ; preds = %dec_label_pc_9518.lr.ph, %dec_label_pc_9518
  %r4.846.reload = load i32, i32* %r4.846.reg2mem
  %306 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !312
  %307 = add i32 %r4.846.reload, %305, !insn.addr !313
  %308 = inttoptr i32 %307 to i8*, !insn.addr !313
  %309 = load i8, i8* %308, align 1, !insn.addr !313
  %310 = zext i8 %309 to i32, !insn.addr !313
  %311 = add nuw nsw i32 %r4.846.reload, 1, !insn.addr !314
  %312 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %306, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_ab68, i32 0, i32 0), i32 %310), !insn.addr !315
  %313 = icmp sgt i32 %r4.2.reload, %311, !insn.addr !310
  store i32 %311, i32* %r4.846.reg2mem, !insn.addr !310
  br i1 %313, label %dec_label_pc_9518, label %dec_label_pc_9940, !insn.addr !310

dec_label_pc_953c:                                ; preds = %dec_label_pc_93ec
  %314 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !316
  %315 = call i32 @fwrite(i32* bitcast ([10 x i8]* @global_var_ab54 to i32*), i32 1, i32 9, %_IO_FILE* %314), !insn.addr !317
  br label %dec_label_pc_9474, !insn.addr !318

dec_label_pc_9554:                                ; preds = %dec_label_pc_92bc
  %316 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !319
  %317 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_abc0 to i32*), i32 1, i32 26, %_IO_FILE* %316), !insn.addr !320
  call void @exit(i32 0), !insn.addr !321
  unreachable, !insn.addr !321

dec_label_pc_9570:                                ; preds = %dec_label_pc_9590, %dec_label_pc_9274, %dec_label_pc_92a0
  %318 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !322
  %319 = call i32 @fwrite(i32* bitcast ([33 x i8]* @global_var_abdc to i32*), i32 1, i32 32, %_IO_FILE* %318), !insn.addr !323
  call void @exit(i32 1), !insn.addr !324
  unreachable, !insn.addr !324

dec_label_pc_9590:                                ; preds = %dec_label_pc_9260
  %320 = urem i32 %47, 256, !insn.addr !325
  %321 = call i32 @function_8b54(i32 %175, i32 1, i32 %320, i32 3, i32* nonnull %stack_var_-328), !insn.addr !326
  %322 = icmp eq i32 %321, 0, !insn.addr !327
  br i1 %322, label %dec_label_pc_95b8, label %dec_label_pc_9570, !insn.addr !328

dec_label_pc_95b8:                                ; preds = %dec_label_pc_9590
  %323 = load i32, i32* %stack_var_-328, align 4, !insn.addr !329
  %324 = urem i32 %323, 65536, !insn.addr !329
  store i32 %324, i32* %r3.332.reg2mem, !insn.addr !330
  br label %dec_label_pc_92a8, !insn.addr !330

dec_label_pc_95dc:                                ; preds = %dec_label_pc_9058
  %325 = and i32 %1, 134217728, !insn.addr !331
  %326 = icmp eq i32 %325, 0, !insn.addr !331
  br i1 %326, label %dec_label_pc_95e8, label %dec_label_pc_9208, !insn.addr !332

dec_label_pc_95e8:                                ; preds = %dec_label_pc_95dc
  %327 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !333
  %328 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %327, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a98c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_aa04, i32 0, i32 0)), !insn.addr !334
  br label %dec_label_pc_917c, !insn.addr !335

dec_label_pc_9600:                                ; preds = %dec_label_pc_9058
  %329 = and i32 %1, 33554432, !insn.addr !336
  %330 = icmp eq i32 %329, 0, !insn.addr !336
  br i1 %330, label %dec_label_pc_960c, label %dec_label_pc_9208, !insn.addr !337

dec_label_pc_960c:                                ; preds = %dec_label_pc_9600
  %331 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !338
  %332 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %331, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a98c, i32 0, i32 0), i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_a9f0, i32 0, i32 0)), !insn.addr !339
  br label %dec_label_pc_917c, !insn.addr !340

dec_label_pc_9624:                                ; preds = %dec_label_pc_9058
  %333 = and i32 %1, 4194304, !insn.addr !341
  %334 = icmp eq i32 %333, 0, !insn.addr !341
  br i1 %334, label %dec_label_pc_9630, label %dec_label_pc_9208, !insn.addr !342

dec_label_pc_9630:                                ; preds = %dec_label_pc_9624
  %335 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !343
  %336 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %335, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a98c, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_a9dc, i32 0, i32 0)), !insn.addr !344
  br label %dec_label_pc_917c, !insn.addr !345

dec_label_pc_9648:                                ; preds = %dec_label_pc_9058
  %337 = and i32 %1, 1048576, !insn.addr !346
  %338 = icmp eq i32 %337, 0, !insn.addr !346
  br i1 %338, label %dec_label_pc_9654, label %dec_label_pc_9208, !insn.addr !347

dec_label_pc_9654:                                ; preds = %dec_label_pc_9648
  %339 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !348
  %340 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %339, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a98c, i32 0, i32 0), i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_a9c8, i32 0, i32 0)), !insn.addr !349
  br label %dec_label_pc_917c, !insn.addr !350

dec_label_pc_966c:                                ; preds = %dec_label_pc_9330
  %341 = trunc i32 %fp.1.reload to i16, !insn.addr !351
  store i16 %341, i16* %stack_var_-256, align 2, !insn.addr !351
  %342 = urem i32 %47, 256, !insn.addr !352
  %343 = bitcast i16* %stack_var_-256 to i32*
  %344 = call i32 @function_8b54(i32 %175, i32 0, i32 %342, i32 3, i32* nonnull %343), !insn.addr !353
  store i32 %344, i32* %r0.1.reg2mem, !insn.addr !353
  store i32 %342, i32* %r7.3.reg2mem, !insn.addr !353
  br label %dec_label_pc_9694, !insn.addr !353

dec_label_pc_9694:                                ; preds = %dec_label_pc_98fc, %dec_label_pc_98a4, %dec_label_pc_9730, %dec_label_pc_966c, %dec_label_pc_9804
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  %345 = icmp slt i32 %r0.1.reload, 0, !insn.addr !354
  br i1 %345, label %dec_label_pc_97dc, label %dec_label_pc_969c, !insn.addr !355

dec_label_pc_969c:                                ; preds = %dec_label_pc_9694
  %r7.3.reload = load i32, i32* %r7.3.reg2mem
  br i1 %263, label %dec_label_pc_96a8, label %dec_label_pc_9138, !insn.addr !356

dec_label_pc_96a8:                                ; preds = %dec_label_pc_9138, %dec_label_pc_969c
  %346 = icmp eq i32 %r6.2.reload, 0, !insn.addr !357
  br i1 %346, label %dec_label_pc_97cc, label %dec_label_pc_96b0, !insn.addr !358

dec_label_pc_96b0:                                ; preds = %dec_label_pc_96a8
  switch i32 %stack_var_-412.0.reload, label %dec_label_pc_96c4 [
    i32 1, label %dec_label_pc_96ec
    i32 3, label %dec_label_pc_9788
  ]

dec_label_pc_96c4:                                ; preds = %dec_label_pc_96b0
  %347 = call i32 @function_8b54(i32 %175, i32 1, i32 %r7.3.reload, i32 2, i32* nonnull %stack_var_-76), !insn.addr !359
  %348 = icmp eq i32 %347, 0, !insn.addr !360
  br i1 %348, label %dec_label_pc_96e8, label %dec_label_pc_96ec.thread, !insn.addr !361

dec_label_pc_96e8:                                ; preds = %dec_label_pc_96c4
  %349 = load i32, i32* %stack_var_-76, align 4, !insn.addr !362
  %350 = urem i32 %349, 256, !insn.addr !362
  store i32 %350, i32* %r4.9.ph.reg2mem, !insn.addr !362
  br label %dec_label_pc_96ec.thread34, !insn.addr !362

dec_label_pc_96ec.thread:                         ; preds = %dec_label_pc_9788, %dec_label_pc_96c4
  %351 = call i32 @close(i32 %175), !insn.addr !363
  br label %dec_label_pc_9774

dec_label_pc_96ec.thread34:                       ; preds = %dec_label_pc_97ac, %dec_label_pc_96e8
  %r4.9.ph.reload = load i32, i32* %r4.9.ph.reg2mem
  %352 = call i32 @close(i32 %175), !insn.addr !363
  store i32 %fp.1.reload, i32* %fp.237.reg2mem
  store i32 %r4.9.ph.reload, i32* %r4.936.reg2mem
  br label %dec_label_pc_96fc

dec_label_pc_96ec:                                ; preds = %dec_label_pc_96b0
  %353 = call i32 @function_8b84(), !insn.addr !364
  %354 = call i32 @close(i32 %175), !insn.addr !363
  %355 = icmp slt i32 %353, 0, !insn.addr !365
  store i32 %47, i32* %fp.237.reg2mem, !insn.addr !366
  store i32 %353, i32* %r4.936.reg2mem, !insn.addr !366
  br i1 %355, label %dec_label_pc_9774, label %dec_label_pc_96fc, !insn.addr !366

dec_label_pc_96fc:                                ; preds = %dec_label_pc_96ec.thread34, %dec_label_pc_96ec
  %r4.936.reload = load i32, i32* %r4.936.reg2mem
  %fp.237.reload = load i32, i32* %fp.237.reg2mem
  %356 = icmp eq i32 %r4.936.reload, %fp.237.reload, !insn.addr !367
  %357 = icmp eq i32 %stack_var_-412.0.reload, 3
  %r1.15 = select i1 %357, i32 4, i32 2
  br i1 %356, label %dec_label_pc_9758, label %dec_label_pc_9708, !insn.addr !368

dec_label_pc_9708:                                ; preds = %dec_label_pc_96fc
  %358 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([58 x i8], [58 x i8]* @global_var_acd4, i32 0, i32 0), i32 %r1.15, i32 %fp.237.reload, i32 %r1.15, i32 %r4.936.reload), !insn.addr !369
  br label %dec_label_pc_9728, !insn.addr !369

dec_label_pc_9728:                                ; preds = %dec_label_pc_9774, %dec_label_pc_9758, %dec_label_pc_9708
  call void @exit(i32 0), !insn.addr !370
  unreachable, !insn.addr !370

dec_label_pc_9730:                                ; preds = %dec_label_pc_9330
  %359 = urem i32 %47, 256, !insn.addr !371
  %360 = call i32 @function_8b54(i32 %175, i32 0, i32 %359, i32 1, i32* null), !insn.addr !372
  store i32 %360, i32* %r0.1.reg2mem, !insn.addr !373
  store i32 %359, i32* %r7.3.reg2mem, !insn.addr !373
  br label %dec_label_pc_9694, !insn.addr !373

dec_label_pc_9758:                                ; preds = %dec_label_pc_96fc
  %361 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([40 x i8], [40 x i8]* @global_var_ad10, i32 0, i32 0), i32 %r1.15, i32 %fp.237.reload), !insn.addr !374
  br label %dec_label_pc_9728, !insn.addr !375

dec_label_pc_9774:                                ; preds = %dec_label_pc_96ec.thread, %dec_label_pc_96ec
  %362 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_acb8, i32 0, i32 0)), !insn.addr !376
  br label %dec_label_pc_9728, !insn.addr !377

dec_label_pc_9788:                                ; preds = %dec_label_pc_96b0
  %363 = call i32 @function_8b54(i32 %175, i32 1, i32 %r7.3.reload, i32 3, i32* nonnull %stack_var_-112), !insn.addr !378
  %364 = icmp eq i32 %363, 0, !insn.addr !379
  br i1 %364, label %dec_label_pc_97ac, label %dec_label_pc_96ec.thread, !insn.addr !380

dec_label_pc_97ac:                                ; preds = %dec_label_pc_9788
  %365 = load i32, i32* %stack_var_-112, align 4, !insn.addr !381
  %366 = urem i32 %365, 65536, !insn.addr !381
  store i32 %366, i32* %r4.9.ph.reg2mem, !insn.addr !382
  br label %dec_label_pc_96ec.thread34, !insn.addr !382

dec_label_pc_97cc:                                ; preds = %dec_label_pc_96a8
  %367 = call i32 @close(i32 %175), !insn.addr !383
  call void @exit(i32 0), !insn.addr !384
  unreachable, !insn.addr !384

dec_label_pc_97dc:                                ; preds = %dec_label_pc_9694
  %368 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !385
  %369 = call i32 @fwrite(i32* bitcast ([21 x i8]* @global_var_ac80 to i32*), i32 1, i32 20, %_IO_FILE* %368), !insn.addr !386
  %370 = call i32 @close(i32 %175), !insn.addr !387
  call void @exit(i32 1), !insn.addr !388
  unreachable, !insn.addr !388

dec_label_pc_9804:                                ; preds = %dec_label_pc_9330
  %371 = trunc i32 %fp.1.reload to i8, !insn.addr !389
  store i8 %371, i8* %stack_var_-148, align 1, !insn.addr !389
  %372 = urem i32 %47, 256, !insn.addr !390
  %373 = bitcast i8* %stack_var_-148 to i32*
  %374 = call i32 @function_8b54(i32 %175, i32 0, i32 %372, i32 2, i32* nonnull %373), !insn.addr !391
  store i32 %374, i32* %r0.1.reg2mem, !insn.addr !392
  store i32 %372, i32* %r7.3.reg2mem, !insn.addr !392
  br label %dec_label_pc_9694, !insn.addr !392

dec_label_pc_9830:                                ; preds = %dec_label_pc_9324
  %375 = call i32 (i32, i32, ...) @ioctl(i32 %175, i32 1800), !insn.addr !393
  %376 = icmp slt i32 %375, 0, !insn.addr !394
  br i1 %376, label %dec_label_pc_9848, label %dec_label_pc_9330, !insn.addr !395

dec_label_pc_9848:                                ; preds = %dec_label_pc_9830
  %377 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !396
  %378 = call i32* @__errno_location(), !insn.addr !397
  %379 = load i32, i32* %378, align 4, !insn.addr !398
  %380 = call i8* @strerror(i32 %379), !insn.addr !399
  store i32 ptrtoint ([30 x i8]* @global_var_ac60 to i32), i32* %storemerge9.reg2mem, !insn.addr !400
  store i8* %380, i8** %storemerge8.in.reg2mem, !insn.addr !400
  store %_IO_FILE* %377, %_IO_FILE** %storemerge4.in.reg2mem, !insn.addr !400
  br label %dec_label_pc_9170, !insn.addr !400

dec_label_pc_986c:                                ; preds = %dec_label_pc_9330
  %381 = urem i32 %r4.2.reload, 256, !insn.addr !401
  %382 = icmp ult i32 %381, 32, !insn.addr !402
  %spec.select = select i1 %382, i32 %381, i32 32
  %383 = icmp slt i32 %spec.select, 1, !insn.addr !403
  br i1 %383, label %dec_label_pc_98a4, label %dec_label_pc_9890.lr.ph, !insn.addr !403

dec_label_pc_9890.lr.ph:                          ; preds = %dec_label_pc_986c
  %384 = ptrtoint i32* %stack_var_-184 to i32, !insn.addr !404
  %385 = ptrtoint i32* %stack_var_-361 to i32, !insn.addr !405
  store i32 1, i32* %r3.543.reg2mem
  store i32 %385, i32* %r1.1742.reg2mem
  br label %dec_label_pc_9890

dec_label_pc_9890:                                ; preds = %dec_label_pc_9890, %dec_label_pc_9890.lr.ph
  %r1.1742.reload = load i32, i32* %r1.1742.reg2mem
  %r3.543.reload = load i32, i32* %r3.543.reg2mem
  %386 = add i32 %r1.1742.reload, 1, !insn.addr !406
  %387 = inttoptr i32 %386 to i8*, !insn.addr !406
  %388 = load i8, i8* %387, align 1, !insn.addr !406
  %389 = add i32 %r3.543.reload, %384, !insn.addr !407
  %390 = inttoptr i32 %389 to i8*, !insn.addr !407
  store i8 %388, i8* %390, align 1, !insn.addr !407
  %391 = add nuw nsw i32 %r3.543.reload, 1, !insn.addr !408
  %392 = icmp ult i32 %r3.543.reload, %spec.select, !insn.addr !403
  store i32 %391, i32* %r3.543.reg2mem, !insn.addr !403
  store i32 %386, i32* %r1.1742.reg2mem, !insn.addr !403
  br i1 %392, label %dec_label_pc_9890, label %dec_label_pc_98a4, !insn.addr !403

dec_label_pc_98a4:                                ; preds = %dec_label_pc_9890, %dec_label_pc_986c
  %393 = urem i32 %47, 256, !insn.addr !409
  store i32 %spec.select, i32* %stack_var_-184, align 4, !insn.addr !410
  %394 = call i32 @function_8b54(i32 %175, i32 0, i32 %393, i32 6, i32* nonnull %stack_var_-184), !insn.addr !411
  store i32 %394, i32* %r0.1.reg2mem, !insn.addr !412
  store i32 %393, i32* %r7.3.reg2mem, !insn.addr !412
  br label %dec_label_pc_9694, !insn.addr !412

dec_label_pc_98c4:                                ; preds = %dec_label_pc_9330
  %395 = urem i32 %r4.2.reload, 256, !insn.addr !413
  %396 = icmp ult i32 %395, 32, !insn.addr !414
  %spec.select15 = select i1 %396, i32 %395, i32 32
  %397 = icmp slt i32 %spec.select15, 1, !insn.addr !415
  br i1 %397, label %dec_label_pc_98fc, label %dec_label_pc_98e8.lr.ph, !insn.addr !415

dec_label_pc_98e8.lr.ph:                          ; preds = %dec_label_pc_98c4
  %398 = ptrtoint i32* %stack_var_-220 to i32, !insn.addr !416
  %399 = ptrtoint i32* %stack_var_-361 to i32, !insn.addr !417
  store i32 1, i32* %r3.645.reg2mem
  store i32 %399, i32* %r1.1844.reg2mem
  br label %dec_label_pc_98e8

dec_label_pc_98e8:                                ; preds = %dec_label_pc_98e8, %dec_label_pc_98e8.lr.ph
  %r1.1844.reload = load i32, i32* %r1.1844.reg2mem
  %r3.645.reload = load i32, i32* %r3.645.reg2mem
  %400 = add i32 %r1.1844.reload, 1, !insn.addr !418
  %401 = inttoptr i32 %400 to i8*, !insn.addr !418
  %402 = load i8, i8* %401, align 1, !insn.addr !418
  %403 = add i32 %r3.645.reload, %398, !insn.addr !419
  %404 = inttoptr i32 %403 to i8*, !insn.addr !419
  store i8 %402, i8* %404, align 1, !insn.addr !419
  %405 = add nuw nsw i32 %r3.645.reload, 1, !insn.addr !420
  %406 = icmp ult i32 %r3.645.reload, %spec.select15, !insn.addr !415
  store i32 %405, i32* %r3.645.reg2mem, !insn.addr !415
  store i32 %400, i32* %r1.1844.reg2mem, !insn.addr !415
  br i1 %406, label %dec_label_pc_98e8, label %dec_label_pc_98fc, !insn.addr !415

dec_label_pc_98fc:                                ; preds = %dec_label_pc_98e8, %dec_label_pc_98c4
  %407 = urem i32 %47, 256, !insn.addr !421
  store i32 %spec.select15, i32* %stack_var_-220, align 4, !insn.addr !422
  %408 = call i32 @function_8b54(i32 %175, i32 0, i32 %407, i32 5, i32* nonnull %stack_var_-220), !insn.addr !423
  store i32 %408, i32* %r0.1.reg2mem, !insn.addr !424
  store i32 %407, i32* %r7.3.reg2mem, !insn.addr !424
  br label %dec_label_pc_9694, !insn.addr !424

dec_label_pc_991c:                                ; preds = %dec_label_pc_9058
  %409 = and i32 %1, 262144, !insn.addr !425
  %410 = icmp eq i32 %409, 0, !insn.addr !425
  br i1 %410, label %dec_label_pc_9928, label %dec_label_pc_9208, !insn.addr !426

dec_label_pc_9928:                                ; preds = %dec_label_pc_991c
  %411 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !427
  %412 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %411, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a98c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_a9b8, i32 0, i32 0)), !insn.addr !428
  br label %dec_label_pc_917c, !insn.addr !429

dec_label_pc_9940:                                ; preds = %dec_label_pc_9518, %dec_label_pc_94e8
  %413 = icmp ne i32 %stack_var_-412.0.reload, 5, !insn.addr !430
  %414 = icmp ne i1 %413, true, !insn.addr !430
  %415 = icmp eq i1 %414, false, !insn.addr !431
  %416 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !432
  %417 = select i1 %415, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_a7ac, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_a7a0, i32 0, i32 0), !insn.addr !433
  %418 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %416, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_ab70, i32 0, i32 0), i8* %417), !insn.addr !433
  br label %dec_label_pc_9474, !insn.addr !434

; uselistorder directives
  uselistorder i32 %r3.645.reload, { 1, 0, 2 }
  uselistorder i32 %spec.select15, { 2, 0, 1 }
  uselistorder i32 %395, { 1, 0 }
  uselistorder i32 %r3.543.reload, { 1, 0, 2 }
  uselistorder i32 %spec.select, { 2, 0, 1 }
  uselistorder i32 %381, { 1, 0 }
  uselistorder i32 %r1.15, { 2, 0, 1 }
  uselistorder i32 %fp.237.reload, { 2, 1, 0 }
  uselistorder i32 %r4.936.reload, { 1, 0 }
  uselistorder i32 %r7.3.reload, { 1, 0 }
  uselistorder %_IO_FILE* %283, { 1, 0 }
  uselistorder i32 %fp.1.reload, { 1, 0, 2 }
  uselistorder i32 %r1.8, { 1, 0, 2 }
  uselistorder i32 %253, { 1, 2, 0 }
  uselistorder i32 %stack_var_-396.2, { 2, 3, 0, 1, 4 }
  uselistorder i32 %stack_var_-412.2.reload, { 4, 3, 1, 6, 5, 2, 0 }
  uselistorder i32 %sb.0.reload, { 2, 1, 4, 3, 0 }
  uselistorder i32 %175, { 10, 12, 14, 2, 3, 4, 6, 13, 5, 0, 1, 7, 11, 16, 15, 17, 9, 8, 18, 19 }
  uselistorder i32 %stack_var_-412.1.reload, { 2, 1, 0 }
  uselistorder i32 %156, { 0, 3, 2, 1, 4 }
  uselistorder i8 %124, { 1, 0 }
  uselistorder i32 %104, { 1, 0 }
  uselistorder i32 %99, { 1, 4, 0, 3, 2 }
  uselistorder i32 %stack_var_-396.0.reload, { 1, 2, 0 }
  uselistorder i32 %stack_var_-412.0.reload, { 4, 2, 10, 5, 11, 1, 8, 3, 9, 7, 0, 6 }
  uselistorder i32 %r4.2.reload, { 3, 2, 0, 1 }
  uselistorder i32 %fp.0.reload, { 1, 2, 0 }
  uselistorder i32 %r1.0.reload, { 1, 0 }
  uselistorder i8 %72, { 0, 1, 3, 2 }
  uselistorder i32 %66, { 1, 0 }
  uselistorder i8* %65, { 1, 0, 2 }
  uselistorder i32 %64, { 2, 1, 3, 0, 4, 5 }
  uselistorder i32 %sl.2.reload, { 2, 0, 1 }
  uselistorder i32 %47, { 1, 2, 3, 4, 0, 5, 6, 9, 8, 7, 11, 10 }
  uselistorder i32 %40, { 1, 2, 3, 0, 4 }
  uselistorder i32 %33, { 1, 0, 2 }
  uselistorder i32 %r1.2.reload, { 1, 2, 0 }
  uselistorder i32 %r3.1.reload, { 1, 2, 0 }
  uselistorder i32 %r4.1.reload, { 7, 5, 6, 4, 3, 2, 1, 0 }
  uselistorder i32 %lr.0.reload, { 4, 3, 2, 1, 0 }
  uselistorder i32 %r2.0.reload, { 3, 2, 0, 1 }
  uselistorder i32 %r4.0.reload, { 1, 3, 4, 2, 0 }
  uselistorder i32 %r6.0.reload, { 1, 4, 3, 2, 0 }
  uselistorder i32 %r7.0.reload, { 0, 4, 3, 2, 1 }
  uselistorder i32 %r8.0.reload, { 1, 4, 3, 2, 0 }
  uselistorder i32 %sl.0.reload, { 1, 4, 3, 2, 0 }
  uselistorder i8 %7, { 1, 0 }
  uselistorder i8** %stack_var_-388, { 3, 7, 2, 6, 1, 5, 0, 4 }
  uselistorder i32* %stack_var_-292, { 1, 0 }
  uselistorder i32* %stack_var_-328, { 1, 0 }
  uselistorder i32* %stack_var_-76, { 1, 0 }
  uselistorder i32* %stack_var_-112, { 1, 0 }
  uselistorder i32* %lr.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r1.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r2.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r8.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %lr.1.reg2mem, { 2, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r1.1.reg2mem, { 2, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r6.1.reg2mem, { 2, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 2, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r8.1.reg2mem, { 2, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %sl.1.reg2mem, { 2, 6, 5, 4, 3, 0, 1 }
  uselistorder i32* %r2.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r2.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r6.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r8.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sl.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 3, 4, 1, 5 }
  uselistorder i32* %r1.3.reg2mem, { 0, 2, 3, 4, 1, 5 }
  uselistorder i32* %r2.3.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %r3.2.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %stack_var_-396.0.reg2mem, { 1, 2, 3, 6, 5, 0, 4 }
  uselistorder i32* %stack_var_-412.0.reg2mem, { 1, 2, 3, 6, 5, 0, 4 }
  uselistorder i32* %r4.2.reg2mem, { 1, 2, 3, 6, 5, 0, 4 }
  uselistorder i32* %fp.0.reg2mem, { 1, 2, 3, 6, 5, 0, 4 }
  uselistorder i32* %stack_var_-396.1.reg2mem, { 4, 5, 0, 1, 2, 3 }
  uselistorder i32* %stack_var_-412.1.reg2mem, { 4, 5, 0, 1, 2, 3 }
  uselistorder i32* %sb.0.reg2mem, { 3, 0, 2, 1 }
  uselistorder i1* %stack_var_-396.2.in.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-412.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge548.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sb.147.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge9.reg2mem, { 2, 0, 1 }
  uselistorder i8** %storemerge8.in.reg2mem, { 2, 0, 1 }
  uselistorder %_IO_FILE** %storemerge4.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-412.3.reg2mem, { 2, 1, 0 }
  uselistorder i1* %r2.7.in.reg2mem, { 2, 1, 0 }
  uselistorder i32* %r3.332.reg2mem, { 1, 0, 3, 2 }
  uselistorder i32* %fp.1.reg2mem, { 0, 2, 1, 3 }
  uselistorder i32* %r4.846.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.1.reg2mem, { 4, 2, 5, 1, 0, 3 }
  uselistorder i32* %r7.3.reg2mem, { 4, 2, 5, 1, 0, 3 }
  uselistorder i32* %r4.9.ph.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.543.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r1.1742.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.645.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r1.1844.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 1, 0, 2 }
  uselistorder i32* bitcast ([27 x i8]* @global_var_abc0 to i32*), { 1, 0 }
  uselistorder i32 (i32)* @function_a544, { 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 1, 0, 2 }
  uselistorder i32 ()* @function_8b84, { 1, 0 }
  uselistorder i32 (i32, i32, i32, i32, i32*)* @function_8b54, { 9, 8, 3, 5, 7, 4, 6, 2, 1, 0 }
  uselistorder i32 47, { 1, 0 }
  uselistorder i32 44, { 1, 0 }
  uselistorder i32 27, { 1, 0, 3, 2 }
  uselistorder i8 112, { 2, 3, 5, 4, 1, 0 }
  uselistorder i32 65536, { 0, 1, 3, 2 }
  uselistorder [33 x i8]* @global_var_a7cc, { 1, 0 }
  uselistorder i32 (i32, i32, i32, i32)* @function_9b68, { 8, 7, 6, 5, 4, 3, 2, 0, 9, 1 }
  uselistorder i32 ptrtoint (%_IO_FILE** @global_var_131d0 to i32), { 1, 0 }
  uselistorder [27 x i8]* @global_var_a82c, { 1, 0 }
  uselistorder i8 105, { 1, 0 }
  uselistorder i32 5, { 5, 6, 1, 2, 0, 4, 3, 7 }
  uselistorder i32 3, { 1, 9, 3, 8, 2, 5, 10, 4, 7, 6, 11, 0, 12 }
  uselistorder i32 %arg2, { 4, 2, 3, 1, 10, 5, 6, 7, 8, 9, 11, 0 }
  uselistorder i32 %arg1, { 6, 3, 5, 8, 4, 2, 9, 10, 0, 7, 11, 1, 12 }
  uselistorder label %dec_label_pc_9774, { 1, 0 }
  uselistorder label %dec_label_pc_96fc, { 1, 0 }
  uselistorder label %dec_label_pc_96a8, { 1, 0 }
  uselistorder label %dec_label_pc_9694, { 0, 1, 4, 2, 3 }
  uselistorder label %dec_label_pc_9570, { 0, 2, 1 }
  uselistorder label %dec_label_pc_9518, { 1, 0 }
  uselistorder label %dec_label_pc_9324, { 1, 0, 2 }
  uselistorder label %dec_label_pc_92a8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_9238, { 1, 0 }
  uselistorder label %dec_label_pc_9208, { 1, 2, 3, 4, 5, 0 }
  uselistorder label %dec_label_pc_917c, { 1, 2, 3, 4, 5, 7, 0, 6, 8 }
  uselistorder label %dec_label_pc_9170, { 1, 0 }
  uselistorder label %dec_label_pc_90dc, { 1, 0 }
  uselistorder label %dec_label_pc_90d0, { 1, 0 }
  uselistorder label %dec_label_pc_9028, { 1, 2, 0 }
  uselistorder label %dec_label_pc_8f8c, { 3, 4, 0, 1, 2 }
  uselistorder label %dec_label_pc_8eec, { 1, 0 }
  uselistorder label %dec_label_pc_8e54, { 0, 1, 2, 5, 3, 4 }
  uselistorder label %dec_label_pc_8e24, { 1, 2, 3, 0, 4 }
  uselistorder label %dec_label_pc_8e0c, { 1, 0 }
  uselistorder label %dec_label_pc_8d94, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_8cd0, { 1, 0 }
  uselistorder label %dec_label_pc_8cc8, { 1, 0 }
  uselistorder label %dec_label_pc_8ca8, { 3, 4, 1, 2, 5, 0 }
  uselistorder label %dec_label_pc_8bfc, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_9a34:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !435
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !435
  %2 = call i32 @__libc_start_main(i32 35768, i32 %arg2, i8** nonnull %0, void ()* bitcast (void ()** @global_var_a5e4 to void ()*), void ()* bitcast (void ()** @global_var_a648 to void ()*), void ()* %1), !insn.addr !435
  call void @abort(), !insn.addr !436
  ret i32 ptrtoint (i32* @4 to i32), !insn.addr !436
}

define i32 @function_9a70() local_unnamed_addr {
dec_label_pc_9a70:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_9a80 to i32), i32 ptrtoint (i32* @global_var_9698 to i32)), i32 168) to i32*), align 4, !insn.addr !437
  %3 = icmp eq i32 %2, 0, !insn.addr !438
  br i1 %3, label %4, label %dec_label_pc_9a88, !insn.addr !439

; <label>:4:                                      ; preds = %dec_label_pc_9a70
  ret i32 %1, !insn.addr !439

dec_label_pc_9a88:                                ; preds = %dec_label_pc_9a70
  call void @__gmon_start__(), !insn.addr !440
  ret i32 ptrtoint (i32* @4 to i32), !insn.addr !440
}

define i32 @function_9a94(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_9a94:
  ret i32 78284, !insn.addr !441
}

define i32 @function_9acc(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9acc:
  ret i32 78284, !insn.addr !442
}

define i32 @function_9b0c() local_unnamed_addr {
dec_label_pc_9b0c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_131dc to i8*), align 4, !insn.addr !443
  %5 = icmp eq i8 %4, 0, !insn.addr !444
  br i1 %5, label %dec_label_pc_9b20, label %6, !insn.addr !445

; <label>:6:                                      ; preds = %dec_label_pc_9b0c
  ret i32 %3, !insn.addr !445

dec_label_pc_9b20:                                ; preds = %dec_label_pc_9b0c
  %7 = call i32 @function_9a94(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !446
  store i8 1, i8* bitcast (i8** @global_var_131dc to i8*), align 4, !insn.addr !447
  ret i32 %7, !insn.addr !448

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_9b34(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9b34:
  %0 = call i32 @function_9acc(i32* nonnull @global_var_1302c, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !449
  ret i32 %0, !insn.addr !449
}

define i32 @function_9b68(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9b68:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !450
  %1 = call i32 @fwrite(i32* inttoptr (i32 and (i32 ptrtoint ([328 x i8]* @global_var_a658 to i32), i32 65535) to i32*), i32 1, i32 327, %_IO_FILE* %0), !insn.addr !451
  call void @exit(i32 1), !insn.addr !452
  unreachable, !insn.addr !452

; uselistorder directives
  uselistorder void (i32)* @exit, { 8, 6, 0, 5, 4, 7, 2, 3, 1, 9 }
}

define i32 @function_9b94(i32 %arg1) local_unnamed_addr {
dec_label_pc_9b94:
  %r3.1.reg2mem = alloca i32, !insn.addr !453
  %r0.02.reg2mem = alloca i32, !insn.addr !453
  %.reg2mem = alloca i32, !insn.addr !453
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !454
  %1 = call i32 @strlen(i8* %0), !insn.addr !454
  %2 = add i32 %1, -1, !insn.addr !455
  %3 = icmp slt i32 %2, 0, !insn.addr !455
  store i32 %2, i32* %r3.1.reg2mem, !insn.addr !456
  br i1 %3, label %dec_label_pc_9bf0, label %dec_label_pc_9ba8, !insn.addr !456

dec_label_pc_9ba8:                                ; preds = %dec_label_pc_9b94
  %4 = add i32 %2, %arg1, !insn.addr !457
  %5 = inttoptr i32 %4 to i8*
  %6 = load i8, i8* %5, align 1, !insn.addr !457
  store i32 %2, i32* %r3.1.reg2mem
  switch i8 %6, label %dec_label_pc_9bf0 [
    i8 32, label %dec_label_pc_9bbc
    i8 10, label %dec_label_pc_9bbc
  ]

dec_label_pc_9bbc:                                ; preds = %dec_label_pc_9ba8, %dec_label_pc_9ba8
  store i8 0, i8* %5, align 1, !insn.addr !458
  %7 = icmp eq i32 %2, 0, !insn.addr !459
  store i32 -1, i32* %r3.1.reg2mem, !insn.addr !460
  br i1 %7, label %dec_label_pc_9bf0, label %dec_label_pc_9bcc.lr.ph, !insn.addr !460

dec_label_pc_9bcc.lr.ph:                          ; preds = %dec_label_pc_9bbc
  %8 = add i32 %1, -2
  %9 = add i32 %8, %arg1, !insn.addr !461
  store i32 %8, i32* %.reg2mem
  store i32 %9, i32* %r0.02.reg2mem
  br label %dec_label_pc_9bcc

dec_label_pc_9bcc:                                ; preds = %dec_label_pc_9bcc.lr.ph, %dec_label_pc_9bdc.backedge
  %r0.02.reload = load i32, i32* %r0.02.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = inttoptr i32 %r0.02.reload to i8*
  %11 = load i8, i8* %10, align 1, !insn.addr !462
  store i32 %.reload, i32* %r3.1.reg2mem
  switch i8 %11, label %dec_label_pc_9bf0 [
    i8 32, label %dec_label_pc_9bdc.backedge
    i8 10, label %dec_label_pc_9bdc.backedge
  ]

dec_label_pc_9bdc.backedge:                       ; preds = %dec_label_pc_9bcc, %dec_label_pc_9bcc
  %12 = add i32 %r0.02.reload, -1, !insn.addr !462
  %13 = add i32 %.reload, -1, !insn.addr !463
  store i8 0, i8* %10, align 1, !insn.addr !458
  %14 = icmp eq i32 %.reload, 0, !insn.addr !459
  store i32 %13, i32* %.reg2mem, !insn.addr !460
  store i32 %12, i32* %r0.02.reg2mem, !insn.addr !460
  store i32 -1, i32* %r3.1.reg2mem, !insn.addr !460
  br i1 %14, label %dec_label_pc_9bf0, label %dec_label_pc_9bcc, !insn.addr !460

dec_label_pc_9bf0:                                ; preds = %dec_label_pc_9bdc.backedge, %dec_label_pc_9bcc, %dec_label_pc_9bbc, %dec_label_pc_9ba8, %dec_label_pc_9b94
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %15 = add i32 %r3.1.reload, 2, !insn.addr !464
  ret i32 %15, !insn.addr !465

; uselistorder directives
  uselistorder i32 %.reload, { 2, 1, 0 }
  uselistorder i32 %r0.02.reload, { 1, 0 }
  uselistorder i32 %2, { 3, 0, 2, 1, 4 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_9bcc, { 1, 0 }
}

define i32 @function_9bf8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9bf8:
  %r4.1.reg2mem = alloca i32, !insn.addr !466
  %r0.0.reg2mem = alloca i32, !insn.addr !466
  %0 = add i32 %arg1, 4, !insn.addr !467
  %1 = inttoptr i32 %0 to i32*, !insn.addr !467
  %2 = load i32, i32* %1, align 4, !insn.addr !467
  %3 = icmp eq i32 %2, 0, !insn.addr !468
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !469
  store i32 %arg1, i32* %r4.1.reg2mem, !insn.addr !469
  br i1 %3, label %dec_label_pc_9c24, label %dec_label_pc_9c10, !insn.addr !469

dec_label_pc_9c10:                                ; preds = %dec_label_pc_9bf8, %dec_label_pc_9c10
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %4 = add i32 %r4.1.reload, 16, !insn.addr !470
  %5 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !471
  call void @free(i32* %5), !insn.addr !471
  %6 = add i32 %r4.1.reload, 20, !insn.addr !472
  %7 = inttoptr i32 %6 to i32*, !insn.addr !472
  %8 = load i32, i32* %7, align 4, !insn.addr !472
  %9 = icmp eq i32 %8, 0, !insn.addr !473
  store i32 %8, i32* %r0.0.reg2mem, !insn.addr !474
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !474
  br i1 %9, label %dec_label_pc_9c24, label %dec_label_pc_9c10, !insn.addr !474

dec_label_pc_9c24:                                ; preds = %dec_label_pc_9c10, %dec_label_pc_9bf8
  %10 = inttoptr i32 %arg1 to i32*, !insn.addr !475
  call void @free(i32* %10), !insn.addr !475
  ret i32 ptrtoint (i32* @4 to i32), !insn.addr !475

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_9c10, { 1, 0 }
}

define i32 @function_9c30(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_9c30:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = mul i32 %arg2, 16, !insn.addr !476
  %4 = add i32 %3, 128, !insn.addr !477
  %5 = inttoptr i32 %arg1 to i32*, !insn.addr !478
  %6 = call i32* @realloc(i32* %5, i32 %4), !insn.addr !478
  %7 = ptrtoint i32* %6 to i32, !insn.addr !478
  %8 = icmp eq i32* %6, null, !insn.addr !479
  br i1 %8, label %dec_label_pc_9c68, label %dec_label_pc_9c50, !insn.addr !480

dec_label_pc_9c50:                                ; preds = %dec_label_pc_9c30
  %9 = add i32 %3, %7, !insn.addr !481
  %10 = inttoptr i32 %9 to i32*, !insn.addr !482
  %11 = call i32* @memset(i32* %10, i32 0, i32 128), !insn.addr !482
  br label %dec_label_pc_9c60, !insn.addr !482

dec_label_pc_9c60:                                ; preds = %dec_label_pc_9c68, %dec_label_pc_9c50
  ret i32 %7, !insn.addr !483

dec_label_pc_9c68:                                ; preds = %dec_label_pc_9c30
  %12 = call i32 @function_9bf8(i32 %arg1, i32 %4, i32 %2, i32 %1), !insn.addr !484
  br label %dec_label_pc_9c60, !insn.addr !485

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 128, { 1, 0 }
}

define i32 @function_9c74(i32 %arg1) local_unnamed_addr {
dec_label_pc_9c74:
  %.reg2mem = alloca i32, !insn.addr !486
  %stack_var_-12 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !487
  %1 = call i32 @strtol(i8* %0, i8** nonnull %stack_var_-12, i32 0), !insn.addr !487
  %2 = load i8*, i8** %stack_var_-12, align 4, !insn.addr !488
  %3 = load i8, i8* %2, align 1, !insn.addr !489
  %4 = icmp ne i8 %3, 0, !insn.addr !490
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !491
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_9cbc, label %dec_label_pc_9ca8, !insn.addr !492

dec_label_pc_9ca8:                                ; preds = %dec_label_pc_9c74
  %7 = add i32 %1, -3, !insn.addr !493
  %8 = icmp ult i32 %7, 116, !insn.addr !494
  %9 = icmp ne i1 %8, true, !insn.addr !494
  %10 = icmp eq i32 %7, 116, !insn.addr !494
  %11 = icmp ne i1 %10, true, !insn.addr !495
  %12 = icmp eq i1 %9, %11, !insn.addr !495
  store i32 %1, i32* %.reg2mem, !insn.addr !495
  br i1 %12, label %dec_label_pc_9cdc, label %dec_label_pc_9cb4, !insn.addr !495

dec_label_pc_9cb4:                                ; preds = %dec_label_pc_9cdc, %dec_label_pc_9cbc, %dec_label_pc_9ca8
  %.reload = load i32, i32* %.reg2mem, !insn.addr !496
  ret i32 %.reload, !insn.addr !496

dec_label_pc_9cbc:                                ; preds = %dec_label_pc_9c74
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !497
  %14 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_ad60 to i32*), i32 1, i32 37, %_IO_FILE* %13), !insn.addr !498
  store i32 -1, i32* %.reg2mem, !insn.addr !499
  br label %dec_label_pc_9cb4, !insn.addr !499

dec_label_pc_9cdc:                                ; preds = %dec_label_pc_9ca8
  %15 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !500
  %16 = call i32 @fwrite(i32* bitcast ([47 x i8]* @global_var_ad88 to i32*), i32 1, i32 46, %_IO_FILE* %15), !insn.addr !501
  store i32 -2, i32* %.reg2mem, !insn.addr !502
  br label %dec_label_pc_9cb4, !insn.addr !502

; uselistorder directives
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32 37, { 0, 3, 2, 1 }
  uselistorder i32 (i8*, i8**, i32)* @strtol, { 4, 3, 2, 1, 0, 5 }
}

define i32 @function_9d08(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9d08:
  %r5.1.reg2mem = alloca i32, !insn.addr !503
  %r5.0.reg2mem = alloca i32, !insn.addr !503
  %0 = ptrtoint i32* %arg2 to i32
  %1 = bitcast i32* %arg2 to i8*, !insn.addr !504
  %2 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %1, i32 %arg3, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_adb8, i32 0, i32 0), i32 %arg1), !insn.addr !504
  %3 = add i32 %arg3, -1, !insn.addr !505
  %4 = add i32 %3, %0, !insn.addr !506
  %5 = inttoptr i32 %4 to i8*, !insn.addr !506
  store i8 0, i8* %5, align 1, !insn.addr !506
  %6 = call i32 (i8*, i32, ...) @open(i8* %1, i32 2), !insn.addr !507
  %7 = icmp slt i32 %6, 0, !insn.addr !508
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !509
  br i1 %7, label %dec_label_pc_9d60, label %dec_label_pc_9d54, !insn.addr !509

dec_label_pc_9d54:                                ; preds = %dec_label_pc_9d94, %dec_label_pc_9df8, %dec_label_pc_9dc0, %dec_label_pc_9d78, %dec_label_pc_9d08
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  ret i32 %r5.0.reload, !insn.addr !510

dec_label_pc_9d60:                                ; preds = %dec_label_pc_9d08
  %8 = call i32* @__errno_location(), !insn.addr !511
  %9 = load i32, i32* %8, align 4, !insn.addr !512
  store i32 %6, i32* %r5.1.reg2mem
  switch i32 %9, label %dec_label_pc_9d78 [
    i32 20, label %dec_label_pc_9dd4
    i32 2, label %dec_label_pc_9dd4
  ]

dec_label_pc_9d78:                                ; preds = %dec_label_pc_9d60, %dec_label_pc_9dd4
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %10 = icmp ugt i32 %arg4, 1
  %11 = select i1 %10, i32 %arg4, i32 1
  %12 = sub i32 %11, %arg4
  %13 = icmp slt i32 %r5.1.reload, 0
  %14 = zext i1 %13 to i32, !insn.addr !513
  %15 = and i32 %12, %14, !insn.addr !513
  %16 = icmp eq i32 %15, 0, !insn.addr !513
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !514
  br i1 %16, label %dec_label_pc_9d54, label %dec_label_pc_9d88, !insn.addr !514

dec_label_pc_9d88:                                ; preds = %dec_label_pc_9d78
  %17 = load i32, i32* %8, align 4, !insn.addr !515
  %18 = icmp eq i32 %17, 2, !insn.addr !516
  %19 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4
  %20 = call i8* @strerror(i32 %17)
  br i1 %18, label %dec_label_pc_9df8, label %dec_label_pc_9d94, !insn.addr !517

dec_label_pc_9d94:                                ; preds = %dec_label_pc_9d88
  %21 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %19, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_ae10, i32 0, i32 0), i32* %arg2, i8* %20), !insn.addr !518
  %22 = load i32, i32* %8, align 4, !insn.addr !519
  %23 = icmp eq i32 %22, 13, !insn.addr !520
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !521
  br i1 %23, label %dec_label_pc_9dc0, label %dec_label_pc_9d54, !insn.addr !521

dec_label_pc_9dc0:                                ; preds = %dec_label_pc_9d94
  %24 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !522
  %25 = call i32 @fwrite(i32* bitcast ([14 x i8]* @global_var_ae38 to i32*), i32 1, i32 13, %_IO_FILE* %24), !insn.addr !523
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !524
  br label %dec_label_pc_9d54, !insn.addr !524

dec_label_pc_9dd4:                                ; preds = %dec_label_pc_9d60, %dec_label_pc_9d60
  %26 = call i32 (i8*, i8*, ...) @sprintf(i8* %1, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_adc4, i32 0, i32 0), i32 %arg1), !insn.addr !525
  %27 = call i32 (i8*, i32, ...) @open(i8* %1, i32 2), !insn.addr !526
  store i32 %27, i32* %r5.1.reg2mem, !insn.addr !527
  br label %dec_label_pc_9d78, !insn.addr !527

dec_label_pc_9df8:                                ; preds = %dec_label_pc_9d88
  %28 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %19, i8* getelementptr inbounds ([63 x i8], [63 x i8]* @global_var_add0, i32 0, i32 0), i32 %arg1, i32 %arg1, i8* %20), !insn.addr !528
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !529
  br label %dec_label_pc_9d54, !insn.addr !529

; uselistorder directives
  uselistorder i8* %20, { 1, 0 }
  uselistorder %_IO_FILE* %19, { 1, 0 }
  uselistorder i32 %r5.1.reload, { 2, 3, 4, 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 4, 3, 2, 5, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i8*, i32, ...)* @open, { 1, 0, 2 }
  uselistorder i32 %arg4, { 2, 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_9d78, { 1, 0 }
  uselistorder label %dec_label_pc_9d54, { 1, 2, 0, 3, 4 }
}

define i32 @function_9e38() local_unnamed_addr {
dec_label_pc_9e38:
  %0 = alloca i32
  %.in.reg2mem = alloca %dirent*, !insn.addr !530
  %stack_var_-976.4.reg2mem = alloca i32, !insn.addr !530
  %r1.1.reg2mem = alloca i32, !insn.addr !530
  %stack_var_-976.3.reg2mem = alloca i32, !insn.addr !530
  %r8.1.reg2mem = alloca i32, !insn.addr !530
  %r1.0.reg2mem = alloca i32, !insn.addr !530
  %sl.1.in.reg2mem = alloca %_IO_FILE*, !insn.addr !530
  %r5.1.reg2mem = alloca i32, !insn.addr !530
  %r0.0.in.reg2mem = alloca %dirent*, !insn.addr !530
  %stack_var_-976.2.reg2mem = alloca i32, !insn.addr !530
  %stack_var_-976.146.reg2mem = alloca i32, !insn.addr !530
  %r5.047.reg2mem = alloca i32, !insn.addr !530
  %.reg2mem137 = alloca %dirent*, !insn.addr !530
  %stack_var_-976.0.reg2mem = alloca i32, !insn.addr !530
  %sb.1.lcssa.reg2mem = alloca i32, !insn.addr !530
  %sb.0.reg2mem = alloca i32, !insn.addr !530
  %sb.149.reg2mem = alloca i32, !insn.addr !530
  %sl.050.reg2mem = alloca i32, !insn.addr !530
  %.reg2mem = alloca i32, !insn.addr !530
  %1 = load i32, i32* %0
  %stack_var_-948 = alloca i32, align 4
  %stack_var_-808 = alloca i32, align 4
  %stack_var_-552 = alloca i32, align 4
  %stack_var_-296 = alloca i32, align 4
  %stack_var_-956 = alloca i32, align 4
  %stack_var_-928 = alloca i32, align 4
  %2 = call i32* @calloc(i32 8, i32 16), !insn.addr !531
  %3 = ptrtoint i32* %2 to i32, !insn.addr !531
  %4 = icmp eq i32* %2, null, !insn.addr !532
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !533
  br i1 %4, label %dec_label_pc_9fac, label %dec_label_pc_9e58, !insn.addr !533

dec_label_pc_9e58:                                ; preds = %dec_label_pc_9e38
  %5 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_ae48, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_b008, i32 0, i32 0)), !insn.addr !534
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !535
  br i1 %6, label %dec_label_pc_9fe4, label %dec_label_pc_9f7c.preheader, !insn.addr !536

dec_label_pc_9f7c.preheader:                      ; preds = %dec_label_pc_9e58
  %7 = bitcast i32* %stack_var_-928 to i8*, !insn.addr !537
  %8 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !537
  %9 = icmp eq i8* %8, null, !insn.addr !538
  store i32 1, i32* %.reg2mem, !insn.addr !539
  store i32 0, i32* %sl.050.reg2mem, !insn.addr !539
  store i32 %3, i32* %sb.149.reg2mem, !insn.addr !539
  store i32 %3, i32* %sb.1.lcssa.reg2mem, !insn.addr !539
  br i1 %9, label %dec_label_pc_9fa0, label %dec_label_pc_9e84, !insn.addr !539

dec_label_pc_9e84:                                ; preds = %dec_label_pc_9f7c.preheader, %dec_label_pc_9f40
  %sb.149.reload = load i32, i32* %sb.149.reg2mem
  %sl.050.reload = load i32, i32* %sl.050.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !540
  store i8 0, i8* %10, align 1, !insn.addr !541
  %11 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !542
  store i8 0, i8* %11, align 1, !insn.addr !543
  %12 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !544
  store i8 0, i8* %12, align 1, !insn.addr !545
  %13 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %7, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_ae58, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !546
  %14 = urem i32 %.reload, 8, !insn.addr !547
  %15 = icmp eq i32 %14, 0, !insn.addr !547
  store i32 %sb.149.reload, i32* %sb.0.reg2mem, !insn.addr !548
  br i1 %15, label %dec_label_pc_9f14, label %dec_label_pc_9f20, !insn.addr !548

dec_label_pc_9f14:                                ; preds = %dec_label_pc_9e84
  %16 = call i32 @function_9c30(i32 %sb.149.reload, i32 %.reload), !insn.addr !549
  %17 = icmp eq i32 %16, 0, !insn.addr !550
  store i32 %16, i32* %sb.0.reg2mem, !insn.addr !551
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !551
  br i1 %17, label %dec_label_pc_9fac, label %dec_label_pc_9f20, !insn.addr !551

dec_label_pc_9f20:                                ; preds = %dec_label_pc_9e84, %dec_label_pc_9f14
  %18 = ptrtoint i8* %10 to i32, !insn.addr !540
  %19 = add i32 %18, 1, !insn.addr !541
  %20 = ptrtoint i8* %11 to i32, !insn.addr !542
  %21 = add i32 %20, 1, !insn.addr !543
  %22 = ptrtoint i8* %12 to i32, !insn.addr !544
  %23 = add i32 %22, 1, !insn.addr !545
  %24 = add i32 %23, %21, !insn.addr !552
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %25 = add i32 %24, %19, !insn.addr !553
  %26 = call i32* @malloc(i32 %25), !insn.addr !554
  %27 = icmp eq i32* %26, null, !insn.addr !555
  br i1 %27, label %dec_label_pc_9fcc, label %dec_label_pc_9f40, !insn.addr !556

dec_label_pc_9f40:                                ; preds = %dec_label_pc_9f20
  %28 = add i32 %sb.0.reload, %sl.050.reload, !insn.addr !557
  %29 = ptrtoint i32* %26 to i32, !insn.addr !554
  %30 = load i32, i32* %stack_var_-956, align 4, !insn.addr !558
  %31 = inttoptr i32 %28 to i32*, !insn.addr !559
  store i32 %30, i32* %31, align 4, !insn.addr !559
  %32 = add i32 %sl.050.reload, 16, !insn.addr !560
  %33 = bitcast i32* %26 to i8*, !insn.addr !561
  %34 = inttoptr i32 %21 to i8*, !insn.addr !561
  %35 = call i8* @strcpy(i8* %33, i8* %34), !insn.addr !561
  %36 = ptrtoint i8* %35 to i32, !insn.addr !561
  %37 = add i32 %28, 4, !insn.addr !562
  %38 = inttoptr i32 %37 to i32*, !insn.addr !562
  store i32 %36, i32* %38, align 4, !insn.addr !562
  %39 = add i32 %21, %29, !insn.addr !563
  %40 = inttoptr i32 %39 to i8*, !insn.addr !564
  %41 = inttoptr i32 %23 to i8*, !insn.addr !564
  %42 = call i8* @strcpy(i8* %40, i8* %41), !insn.addr !564
  %43 = ptrtoint i8* %42 to i32, !insn.addr !564
  %44 = add i32 %28, 8, !insn.addr !565
  %45 = inttoptr i32 %44 to i32*, !insn.addr !565
  store i32 %43, i32* %45, align 4, !insn.addr !565
  %46 = add i32 %24, %29, !insn.addr !566
  %47 = inttoptr i32 %46 to i8*, !insn.addr !567
  %48 = inttoptr i32 %19 to i8*, !insn.addr !567
  %49 = call i8* @strcpy(i8* %47, i8* %48), !insn.addr !567
  %50 = ptrtoint i8* %49 to i32, !insn.addr !567
  %51 = add i32 %28, 12, !insn.addr !568
  %52 = inttoptr i32 %51 to i32*, !insn.addr !568
  store i32 %50, i32* %52, align 4, !insn.addr !568
  %53 = add i32 %.reload, 1, !insn.addr !569
  %54 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !537
  %55 = icmp eq i8* %54, null, !insn.addr !538
  store i32 %53, i32* %.reg2mem, !insn.addr !539
  store i32 %32, i32* %sl.050.reg2mem, !insn.addr !539
  store i32 %sb.0.reload, i32* %sb.149.reg2mem, !insn.addr !539
  store i32 %sb.0.reload, i32* %sb.1.lcssa.reg2mem, !insn.addr !539
  br i1 %55, label %dec_label_pc_9fa0, label %dec_label_pc_9e84, !insn.addr !539

dec_label_pc_9fa0:                                ; preds = %dec_label_pc_9f40, %dec_label_pc_9f7c.preheader
  %sb.1.lcssa.reload = load i32, i32* %sb.1.lcssa.reg2mem
  %56 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !570
  store i32 %sb.1.lcssa.reload, i32* %stack_var_-976.0.reg2mem, !insn.addr !570
  br label %dec_label_pc_9fac, !insn.addr !570

dec_label_pc_9fac:                                ; preds = %dec_label_pc_9f14, %dec_label_pc_a160, %dec_label_pc_9fb8, %dec_label_pc_a1f4, %dec_label_pc_a1c4, %dec_label_pc_a038, %dec_label_pc_9fe4, %dec_label_pc_9fcc, %dec_label_pc_9fa0, %dec_label_pc_9e38
  %stack_var_-976.0.reload = load i32, i32* %stack_var_-976.0.reg2mem
  ret i32 %stack_var_-976.0.reload, !insn.addr !571

dec_label_pc_9fb8:                                ; preds = %dec_label_pc_a178
  %57 = call i32 @function_9bf8(i32 %stack_var_-976.3.reload, i32 %r1.1.reload, i32 %stack_var_-976.3.reload, i32 %115), !insn.addr !572
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !572
  br label %dec_label_pc_9fac, !insn.addr !572

dec_label_pc_9fcc:                                ; preds = %dec_label_pc_9f20
  %58 = call i32 @function_9bf8(i32 %sb.0.reload, i32 %21, i32 %19, i32 %24), !insn.addr !573
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !574
  br label %dec_label_pc_9fac, !insn.addr !574

dec_label_pc_9fe4:                                ; preds = %dec_label_pc_9e58
  %59 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_ae60, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_b008, i32 0, i32 0)), !insn.addr !575
  %60 = icmp eq %_IO_FILE* %59, null, !insn.addr !576
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !577
  br i1 %60, label %dec_label_pc_9fac, label %dec_label_pc_9ff8.preheader, !insn.addr !577

dec_label_pc_9ff8.preheader:                      ; preds = %dec_label_pc_9fe4
  %61 = bitcast i32* %stack_var_-296 to i8*
  %62 = bitcast i32* %stack_var_-808 to i8*
  br label %dec_label_pc_9ff8

dec_label_pc_9ff8:                                ; preds = %dec_label_pc_9ff8.preheader, %dec_label_pc_a020
  %63 = call i8* @fgets(i8* nonnull %61, i32 255, %_IO_FILE* nonnull %59), !insn.addr !578
  %64 = icmp eq i8* %63, null, !insn.addr !579
  br i1 %64, label %dec_label_pc_a1f4, label %dec_label_pc_a020, !insn.addr !580

dec_label_pc_a020:                                ; preds = %dec_label_pc_9ff8
  %65 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %61, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_ae70, i32 0, i32 0), i32* nonnull %stack_var_-552, i32* nonnull %stack_var_-808), !insn.addr !581
  %66 = call i32 @strcasecmp(i8* nonnull %62, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_ae88, i32 0, i32 0)), !insn.addr !582
  %67 = icmp eq i32 %66, 0, !insn.addr !583
  br i1 %67, label %dec_label_pc_a038, label %dec_label_pc_9ff8, !insn.addr !584

dec_label_pc_a038:                                ; preds = %dec_label_pc_a020
  %68 = ptrtoint i32* %stack_var_-552 to i32, !insn.addr !585
  %69 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !586
  %70 = bitcast i32* %stack_var_-552 to i8*, !insn.addr !587
  %71 = call i32 @strlen(i8* nonnull %70), !insn.addr !587
  %72 = add i32 %71, %68, !insn.addr !588
  %73 = inttoptr i32 %72 to i32*, !insn.addr !589
  store i32 1634493231, i32* %73, align 4, !insn.addr !589
  %74 = add i32 %72, 12, !insn.addr !590
  %75 = inttoptr i32 %74 to i16*, !insn.addr !590
  store i16 30309, i16* %75, align 2, !insn.addr !590
  %76 = add i32 %72, 4, !insn.addr !591
  %77 = inttoptr i32 %76 to i32*, !insn.addr !591
  store i32 1764717427, i32* %77, align 4, !insn.addr !591
  %78 = add i32 %72, 8, !insn.addr !592
  %79 = inttoptr i32 %78 to i32*, !insn.addr !592
  store i32 1680696114, i32* %79, align 4, !insn.addr !592
  %80 = add i32 %72, 14, !insn.addr !593
  %81 = inttoptr i32 %80 to i8*, !insn.addr !593
  store i8 0, i8* %81, align 1, !insn.addr !593
  %82 = call %__dirstream* @opendir(i8* nonnull %70), !insn.addr !594
  %83 = icmp eq %__dirstream* %82, null, !insn.addr !595
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !596
  br i1 %83, label %dec_label_pc_9fac, label %dec_label_pc_a098.preheader, !insn.addr !596

dec_label_pc_a098.preheader:                      ; preds = %dec_label_pc_a038
  %84 = call %dirent* @readdir(%__dirstream* nonnull %82), !insn.addr !597
  %85 = icmp eq %dirent* %84, null, !insn.addr !598
  store i32 %3, i32* %stack_var_-976.4.reg2mem, !insn.addr !599
  br i1 %85, label %dec_label_pc_a1c4, label %dec_label_pc_a0a8.preheader.lr.ph, !insn.addr !599

dec_label_pc_a0a8.preheader.lr.ph:                ; preds = %dec_label_pc_a098.preheader
  %86 = bitcast i32* %stack_var_-928 to i8*
  %87 = ptrtoint i32* %stack_var_-948 to i32
  %88 = urem i32 %1, 2
  %89 = icmp eq i32 %88, 0
  %90 = and i32 %1, 8257536
  %91 = icmp eq i32 %90, 0
  %spec.select8 = select i1 %91, i32 0, i32 24
  %spec.select = select i1 %89, i32 %spec.select8, i32 16
  store %dirent* %84, %dirent** %.reg2mem137
  store i32 0, i32* %r5.047.reg2mem
  store i32 %3, i32* %stack_var_-976.146.reg2mem
  br label %dec_label_pc_a0a8.preheader

dec_label_pc_a0a8.preheader:                      ; preds = %dec_label_pc_a0a8.preheader.lr.ph, %dec_label_pc_a098.backedge
  %stack_var_-976.146.reload = load i32, i32* %stack_var_-976.146.reg2mem
  %r5.047.reload = load i32, i32* %r5.047.reg2mem
  %.reload138 = load %dirent*, %dirent** %.reg2mem137
  store i32 %stack_var_-976.146.reload, i32* %stack_var_-976.2.reg2mem
  store %dirent* %.reload138, %dirent** %r0.0.in.reg2mem
  store i32 %r5.047.reload, i32* %r5.1.reg2mem
  br label %dec_label_pc_a0a8

dec_label_pc_a0a8:                                ; preds = %dec_label_pc_a0a8.preheader, %dec_label_pc_a19c
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r0.0.in.reload = load %dirent*, %dirent** %r0.0.in.reg2mem
  %stack_var_-976.2.reload = load i32, i32* %stack_var_-976.2.reg2mem
  %r0.0 = ptrtoint %dirent* %r0.0.in.reload to i32
  %92 = add i32 %r0.0, 11, !insn.addr !600
  %93 = inttoptr i32 %92 to i8*, !insn.addr !600
  %94 = load i8, i8* %93, align 1, !insn.addr !600
  %95 = icmp eq i8 %94, 46, !insn.addr !601
  br i1 %95, label %dec_label_pc_a1d0, label %dec_label_pc_a0b4, !insn.addr !602

dec_label_pc_a0b4:                                ; preds = %dec_label_pc_a1d0, %dec_label_pc_a1e4, %dec_label_pc_a0a8
  %96 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_ae90, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !603
  %97 = call %_IO_FILE* @fopen(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_b008, i32 0, i32 0)), !insn.addr !604
  %98 = icmp eq %_IO_FILE* %97, null, !insn.addr !605
  store %_IO_FILE* %97, %_IO_FILE** %sl.1.in.reg2mem, !insn.addr !606
  br i1 %98, label %dec_label_pc_a260, label %dec_label_pc_a0e0, !insn.addr !606

dec_label_pc_a0e0:                                ; preds = %dec_label_pc_a2e4, %dec_label_pc_a260, %dec_label_pc_a0b4
  %sl.1.in.reload = load %_IO_FILE*, %_IO_FILE** %sl.1.in.reg2mem
  %99 = call i8* @fgets(i8* nonnull %86, i32 120, %_IO_FILE* nonnull %sl.1.in.reload), !insn.addr !607
  %100 = call i32 @fclose(%_IO_FILE* nonnull %sl.1.in.reload), !insn.addr !608
  %101 = icmp eq i8* %99, null, !insn.addr !609
  br i1 %101, label %dec_label_pc_a338, label %dec_label_pc_a108, !insn.addr !610

dec_label_pc_a108:                                ; preds = %dec_label_pc_a0e0
  %102 = call i8* @strchr(i8* nonnull %86, i32 10), !insn.addr !611
  %103 = icmp eq i8* %102, null, !insn.addr !612
  br i1 %103, label %105, label %104, !insn.addr !613

; <label>:104:                                    ; preds = %dec_label_pc_a108
  store i8 0, i8* %102, align 1, !insn.addr !613
  br label %105, !insn.addr !613

; <label>:105:                                    ; preds = %dec_label_pc_a108, %104
  %106 = call i32 (i8*, i8*, ...) @sscanf(i8* %93, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_ae58, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !614
  %107 = icmp eq i32 %106, 0, !insn.addr !615
  br i1 %107, label %dec_label_pc_a098.backedge, label %dec_label_pc_a138, !insn.addr !616

dec_label_pc_a138:                                ; preds = %105
  %108 = call i32 @strncmp(i8* nonnull %86, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_aef0, i32 0, i32 0), i32 4), !insn.addr !617
  %109 = icmp eq i32 %108, 0, !insn.addr !618
  store i32 ptrtoint ([5 x i8]* @global_var_aef0 to i32), i32* %r1.0.reg2mem, !insn.addr !619
  store i32 8, i32* %r8.1.reg2mem, !insn.addr !619
  br i1 %109, label %dec_label_pc_a154, label %dec_label_pc_a200, !insn.addr !619

dec_label_pc_a154:                                ; preds = %dec_label_pc_a200, %dec_label_pc_a138, %dec_label_pc_a220
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %110 = add i32 %r5.1.reload, 1, !insn.addr !620
  %111 = urem i32 %110, 8, !insn.addr !621
  %112 = icmp eq i32 %111, 0, !insn.addr !621
  store i32 %stack_var_-976.2.reload, i32* %stack_var_-976.3.reg2mem, !insn.addr !622
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !622
  br i1 %112, label %dec_label_pc_a160, label %dec_label_pc_a178, !insn.addr !622

dec_label_pc_a160:                                ; preds = %dec_label_pc_a154
  %113 = call i32 @function_9c30(i32 %stack_var_-976.2.reload, i32 %110), !insn.addr !623
  %114 = icmp eq i32 %113, 0, !insn.addr !624
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !625
  store i32 %113, i32* %stack_var_-976.3.reg2mem, !insn.addr !625
  store i32 %110, i32* %r1.1.reg2mem, !insn.addr !625
  br i1 %114, label %dec_label_pc_9fac, label %dec_label_pc_a178, !insn.addr !625

dec_label_pc_a178:                                ; preds = %dec_label_pc_a154, %dec_label_pc_a160
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %stack_var_-976.3.reload = load i32, i32* %stack_var_-976.3.reg2mem
  %115 = load i32, i32* %stack_var_-956, align 4, !insn.addr !626
  %116 = mul i32 %r5.1.reload, 16, !insn.addr !627
  %117 = add i32 %stack_var_-976.3.reload, %116, !insn.addr !627
  %118 = inttoptr i32 %117 to i32*, !insn.addr !628
  store i32 %115, i32* %118, align 4, !insn.addr !628
  %119 = call i8* @__strdup(i8* nonnull %86), !insn.addr !629
  %120 = ptrtoint i8* %119 to i32, !insn.addr !629
  %121 = icmp eq i8* %119, null, !insn.addr !630
  %122 = add i32 %117, 4, !insn.addr !631
  %123 = inttoptr i32 %122 to i32*, !insn.addr !631
  store i32 %120, i32* %123, align 4, !insn.addr !631
  br i1 %121, label %dec_label_pc_9fb8, label %dec_label_pc_a19c, !insn.addr !632

dec_label_pc_a19c:                                ; preds = %dec_label_pc_a178
  %124 = add i32 %r8.1.reload, ptrtoint ([10 x i8*]* @global_var_ad38 to i32), !insn.addr !633
  %125 = inttoptr i32 %124 to i32*, !insn.addr !634
  %126 = load i32, i32* %125, align 8, !insn.addr !634
  %127 = add i32 %r8.1.reload, add (i32 ptrtoint ([10 x i8*]* @global_var_ad38 to i32), i32 4), !insn.addr !635
  %128 = inttoptr i32 %127 to i32*, !insn.addr !635
  %129 = load i32, i32* %128, align 4, !insn.addr !635
  %130 = add i32 %117, 8, !insn.addr !636
  %131 = inttoptr i32 %130 to i32*, !insn.addr !636
  store i32 %126, i32* %131, align 4, !insn.addr !636
  %132 = add i32 %117, 12, !insn.addr !637
  %133 = inttoptr i32 %132 to i32*, !insn.addr !637
  store i32 %129, i32* %133, align 4, !insn.addr !637
  %134 = call %dirent* @readdir(%__dirstream* nonnull %82), !insn.addr !638
  %135 = icmp eq %dirent* %134, null, !insn.addr !639
  store i32 %stack_var_-976.3.reload, i32* %stack_var_-976.2.reg2mem, !insn.addr !640
  store %dirent* %134, %dirent** %r0.0.in.reg2mem, !insn.addr !640
  store i32 %110, i32* %r5.1.reg2mem, !insn.addr !640
  store i32 %stack_var_-976.3.reload, i32* %stack_var_-976.4.reg2mem, !insn.addr !640
  br i1 %135, label %dec_label_pc_a1c4, label %dec_label_pc_a0a8, !insn.addr !640

dec_label_pc_a1c4:                                ; preds = %dec_label_pc_a098.backedge, %dec_label_pc_a19c, %dec_label_pc_a098.preheader
  %stack_var_-976.4.reload = load i32, i32* %stack_var_-976.4.reg2mem
  %136 = call i32 @closedir(%__dirstream* nonnull %82), !insn.addr !641
  store i32 %stack_var_-976.4.reload, i32* %stack_var_-976.0.reg2mem, !insn.addr !642
  br label %dec_label_pc_9fac, !insn.addr !642

dec_label_pc_a1d0:                                ; preds = %dec_label_pc_a0a8
  %137 = add i32 %r0.0, 12, !insn.addr !643
  %138 = inttoptr i32 %137 to i8*, !insn.addr !643
  %139 = load i8, i8* %138, align 1, !insn.addr !643
  switch i8 %139, label %dec_label_pc_a0b4 [
    i8 0, label %dec_label_pc_a098.backedge
    i8 46, label %dec_label_pc_a1e4
  ]

dec_label_pc_a1e4:                                ; preds = %dec_label_pc_a1d0
  %140 = add i32 %r0.0, 13, !insn.addr !644
  %141 = inttoptr i32 %140 to i8*, !insn.addr !644
  %142 = load i8, i8* %141, align 1, !insn.addr !644
  %143 = icmp eq i8 %142, 0, !insn.addr !645
  br i1 %143, label %dec_label_pc_a098.backedge, label %dec_label_pc_a0b4, !insn.addr !646

dec_label_pc_a1f4:                                ; preds = %dec_label_pc_9ff8
  %144 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !647
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !648
  br label %dec_label_pc_9fac, !insn.addr !648

dec_label_pc_a200:                                ; preds = %dec_label_pc_a138
  %145 = load i32, i32* %stack_var_-956, align 4, !insn.addr !649
  %146 = call i32 @function_9d08(i32 %145, i32* nonnull %stack_var_-948, i32 20, i32 1), !insn.addr !650
  %147 = icmp slt i32 %146, 0, !insn.addr !651
  %148 = icmp eq i1 %147, false, !insn.addr !652
  store i32 %87, i32* %r1.0.reg2mem, !insn.addr !652
  store i32 32, i32* %r8.1.reg2mem, !insn.addr !652
  br i1 %148, label %dec_label_pc_a220, label %dec_label_pc_a154, !insn.addr !652

dec_label_pc_a220:                                ; preds = %dec_label_pc_a200
  %149 = call i32 (i32, i32, ...) @ioctl(i32 %146, i32 1797), !insn.addr !653
  %150 = icmp slt i32 %149, 0, !insn.addr !654
  %151 = icmp eq i1 %150, false, !insn.addr !655
  %r8.6 = select i1 %151, i32 %spec.select, i32 32
  %152 = call i32 @close(i32 %146), !insn.addr !656
  store i32 1797, i32* %r1.0.reg2mem, !insn.addr !657
  store i32 %r8.6, i32* %r8.1.reg2mem, !insn.addr !657
  br label %dec_label_pc_a154, !insn.addr !657

dec_label_pc_a260:                                ; preds = %dec_label_pc_a0b4
  %153 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_ae9c, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !658
  %154 = call %_IO_FILE* @fopen(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_b008, i32 0, i32 0)), !insn.addr !659
  %155 = icmp eq %_IO_FILE* %154, null, !insn.addr !660
  store %_IO_FILE* %154, %_IO_FILE** %sl.1.in.reg2mem, !insn.addr !661
  br i1 %155, label %dec_label_pc_a288, label %dec_label_pc_a0e0, !insn.addr !661

dec_label_pc_a288:                                ; preds = %dec_label_pc_a260
  %156 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_aeb0, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !662
  %157 = call %__dirstream* @opendir(i8* nonnull %61), !insn.addr !663
  %158 = icmp eq %__dirstream* %157, null, !insn.addr !664
  br i1 %158, label %dec_label_pc_a098.backedge, label %dec_label_pc_a2ac.preheader, !insn.addr !665

dec_label_pc_a2ac.preheader:                      ; preds = %dec_label_pc_a288
  %159 = call %dirent* @readdir(%__dirstream* nonnull %157), !insn.addr !666
  %160 = icmp eq %dirent* %159, null, !insn.addr !667
  store %dirent* %159, %dirent** %.in.reg2mem, !insn.addr !668
  br i1 %160, label %dec_label_pc_a098.backedge, label %dec_label_pc_a2c8, !insn.addr !668

dec_label_pc_a2c8:                                ; preds = %dec_label_pc_a2ac.preheader, %dec_label_pc_a2ac.backedge
  %.in.reload = load %dirent*, %dirent** %.in.reg2mem
  %161 = ptrtoint %dirent* %.in.reload to i32
  %162 = add i32 %161, 11, !insn.addr !669
  %163 = inttoptr i32 %162 to i8*, !insn.addr !670
  %164 = load i8, i8* %163, align 1, !insn.addr !670
  %165 = icmp eq i8 %164, 46, !insn.addr !671
  br i1 %165, label %dec_label_pc_a314, label %dec_label_pc_a2d8, !insn.addr !672

dec_label_pc_a2d8:                                ; preds = %dec_label_pc_a314, %dec_label_pc_a328, %dec_label_pc_a2c8
  %166 = call i32 @strncmp(i8* %163, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_aec0, i32 0, i32 0), i32 4), !insn.addr !673
  %167 = icmp eq i32 %166, 0, !insn.addr !674
  br i1 %167, label %dec_label_pc_a2e4, label %dec_label_pc_a2ac.backedge, !insn.addr !675

dec_label_pc_a2e4:                                ; preds = %dec_label_pc_a2d8
  %168 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_aec8, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93, i8* %163), !insn.addr !676
  %169 = call %_IO_FILE* @fopen(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_b008, i32 0, i32 0)), !insn.addr !677
  %170 = icmp eq %_IO_FILE* %169, null, !insn.addr !678
  store %_IO_FILE* %169, %_IO_FILE** %sl.1.in.reg2mem, !insn.addr !679
  br i1 %170, label %dec_label_pc_a2ac.backedge, label %dec_label_pc_a0e0, !insn.addr !679

dec_label_pc_a2ac.backedge:                       ; preds = %dec_label_pc_a2e4, %dec_label_pc_a328, %dec_label_pc_a2d8, %dec_label_pc_a314
  %171 = call %dirent* @readdir(%__dirstream* nonnull %157), !insn.addr !666
  %172 = icmp eq %dirent* %171, null, !insn.addr !667
  store %dirent* %171, %dirent** %.in.reg2mem, !insn.addr !668
  br i1 %172, label %dec_label_pc_a098.backedge, label %dec_label_pc_a2c8, !insn.addr !668

dec_label_pc_a314:                                ; preds = %dec_label_pc_a2c8
  %173 = add i32 %161, 12, !insn.addr !680
  %174 = inttoptr i32 %173 to i8*, !insn.addr !680
  %175 = load i8, i8* %174, align 1, !insn.addr !680
  switch i8 %175, label %dec_label_pc_a2d8 [
    i8 0, label %dec_label_pc_a2ac.backedge
    i8 46, label %dec_label_pc_a328
  ]

dec_label_pc_a328:                                ; preds = %dec_label_pc_a314
  %176 = add i32 %161, 13, !insn.addr !681
  %177 = inttoptr i32 %176 to i8*, !insn.addr !681
  %178 = load i8, i8* %177, align 1, !insn.addr !681
  %179 = icmp eq i8 %178, 0, !insn.addr !682
  br i1 %179, label %dec_label_pc_a2ac.backedge, label %dec_label_pc_a2d8, !insn.addr !683

dec_label_pc_a338:                                ; preds = %dec_label_pc_a0e0
  %180 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !684
  %181 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %180, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_aee0, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !685
  br label %dec_label_pc_a098.backedge, !insn.addr !686

dec_label_pc_a098.backedge:                       ; preds = %dec_label_pc_a1d0, %dec_label_pc_a288, %dec_label_pc_a1e4, %105, %dec_label_pc_a2ac.preheader, %dec_label_pc_a2ac.backedge, %dec_label_pc_a338
  %182 = call %dirent* @readdir(%__dirstream* nonnull %82), !insn.addr !597
  %183 = icmp eq %dirent* %182, null, !insn.addr !598
  store %dirent* %182, %dirent** %.reg2mem137, !insn.addr !599
  store i32 %r5.1.reload, i32* %r5.047.reg2mem, !insn.addr !599
  store i32 %stack_var_-976.2.reload, i32* %stack_var_-976.146.reg2mem, !insn.addr !599
  store i32 %stack_var_-976.2.reload, i32* %stack_var_-976.4.reg2mem, !insn.addr !599
  br i1 %183, label %dec_label_pc_a1c4, label %dec_label_pc_a0a8.preheader, !insn.addr !599

; uselistorder directives
  uselistorder %__dirstream* %157, { 1, 0, 2 }
  uselistorder i32 %117, { 0, 1, 3, 2 }
  uselistorder i32 %115, { 1, 0 }
  uselistorder i32 %stack_var_-976.3.reload, { 0, 4, 1, 2, 3 }
  uselistorder i32 %110, { 1, 0, 3, 2 }
  uselistorder %_IO_FILE* %sl.1.in.reload, { 1, 0 }
  uselistorder i8* %93, { 1, 2, 3, 0, 4, 5 }
  uselistorder i32 %r0.0, { 2, 0, 1 }
  uselistorder i32 %stack_var_-976.2.reload, { 0, 3, 2, 1 }
  uselistorder i32 %r5.1.reload, { 2, 1, 0 }
  uselistorder %__dirstream* %82, { 3, 1, 2, 0, 4 }
  uselistorder i32 %72, { 4, 3, 2, 1, 0 }
  uselistorder i8* %61, { 7, 6, 5, 4, 3, 2, 1, 0, 8, 9 }
  uselistorder i32 %28, { 1, 2, 3, 0 }
  uselistorder i32* %26, { 0, 2, 1 }
  uselistorder i32 %sb.0.reload, { 2, 0, 3, 1 }
  uselistorder i32 %23, { 1, 0 }
  uselistorder i32 %21, { 0, 1, 3, 2 }
  uselistorder i32 %19, { 0, 2, 1 }
  uselistorder i8* %12, { 1, 0 }
  uselistorder i8* %11, { 1, 0 }
  uselistorder i8* %10, { 1, 0 }
  uselistorder i32 %.reload, { 1, 0, 2 }
  uselistorder i32 %sb.149.reload, { 1, 0 }
  uselistorder i8* %7, { 5, 2, 3, 4, 1, 0 }
  uselistorder %_IO_FILE* %5, { 1, 2, 0, 3 }
  uselistorder i32 %3, { 3, 1, 0, 2, 4, 6, 7, 5 }
  uselistorder i32* %stack_var_-956, { 2, 3, 0, 4, 1 }
  uselistorder i32* %stack_var_-552, { 2, 3, 4, 5, 6, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sl.050.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.149.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-976.0.reg2mem, { 8, 6, 2, 7, 9, 4, 3, 0, 5, 1, 10 }
  uselistorder %dirent** %.reg2mem137, { 1, 0, 2 }
  uselistorder i32* %r5.047.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-976.146.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-976.2.reg2mem, { 2, 0, 1 }
  uselistorder %dirent** %r0.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder %_IO_FILE** %sl.1.in.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32* %r1.0.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %r8.1.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %stack_var_-976.3.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-976.4.reg2mem, { 1, 0, 2, 3 }
  uselistorder %dirent** %.in.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32)* @close, { 6, 4, 2, 3, 0, 1, 5, 7 }
  uselistorder i32 32, { 1, 0, 2, 9, 3, 10, 4, 6, 5, 8, 7 }
  uselistorder i1 false, { 2, 3, 1, 0, 4 }
  uselistorder i32 (i32, i32*, i32, i32)* @function_9d08, { 1, 0 }
  uselistorder i32 13, { 1, 2, 0, 3 }
  uselistorder i32 (i8*, i8*, i32)* @strncmp, { 1, 0, 2 }
  uselistorder [5 x i8]* @global_var_aef0, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 3, 4, 2, 1, 0, 5 }
  uselistorder i8 46, { 0, 2, 1, 3 }
  uselistorder %dirent* null, { 4, 2, 1, 3, 0 }
  uselistorder %dirent* (%__dirstream*)* @readdir, { 2, 4, 1, 3, 0, 5 }
  uselistorder %__dirstream* (i8*)* @opendir, { 1, 0, 2 }
  uselistorder i32 (i8*)* @strlen, { 2, 1, 0, 3 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 3, 2, 1, 0, 4 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 2, 1, 0, 3 }
  uselistorder i32 (i32, i32)* @function_9c30, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 1, 2, 0, 3 }
  uselistorder i8* (i8*, i32)* @strrchr, { 2, 1, 0, 3 }
  uselistorder i32 9, { 2, 3, 1, 4, 0 }
  uselistorder i32 120, { 1, 2, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_b008, i32 0, i32 0), { 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 9, 2, 0, 10, 11, 3, 8, 4, 5, 1, 7, 6 }
  uselistorder label %dec_label_pc_a098.backedge, { 6, 5, 4, 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_a2ac.backedge, { 1, 3, 0, 2 }
  uselistorder label %dec_label_pc_a2d8, { 1, 0, 2 }
  uselistorder label %dec_label_pc_a2c8, { 1, 0 }
  uselistorder label %dec_label_pc_a178, { 1, 0 }
  uselistorder label %dec_label_pc_a154, { 2, 0, 1 }
  uselistorder label %105, { 1, 0 }
  uselistorder label %dec_label_pc_a0b4, { 1, 0, 2 }
  uselistorder label %dec_label_pc_a0a8, { 1, 0 }
  uselistorder label %dec_label_pc_a0a8.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_9ff8, { 1, 0 }
  uselistorder label %dec_label_pc_9fac, { 3, 4, 1, 5, 6, 7, 2, 8, 0, 9 }
  uselistorder label %dec_label_pc_9f20, { 1, 0 }
  uselistorder label %dec_label_pc_9e84, { 1, 0 }
}

define i32 @function_a38c(i32 %arg1) local_unnamed_addr {
dec_label_pc_a38c:
  %r6.5.reg2mem = alloca i32, !insn.addr !687
  %r3.1.reg2mem = alloca i32, !insn.addr !687
  %r2.0.reg2mem = alloca i32, !insn.addr !687
  %r1.0.reg2mem = alloca i32, !insn.addr !687
  %r6.4.reg2mem = alloca i32, !insn.addr !687
  %r6.3.reg2mem = alloca i32, !insn.addr !687
  %r4.1.in.reg2mem = alloca i32, !insn.addr !687
  %.reg2mem = alloca i32, !insn.addr !687
  %r6.1.reg2mem = alloca i32, !insn.addr !687
  %stack_var_-28 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !688
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-28, i32 0), !insn.addr !688
  %2 = load i8*, i8** %stack_var_-28, align 4, !insn.addr !689
  %3 = load i8, i8* %2, align 1, !insn.addr !690
  %4 = icmp ne i8 %3, 0, !insn.addr !691
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !692
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_a3d8, label %dec_label_pc_a3c0, !insn.addr !693

dec_label_pc_a3c0:                                ; preds = %dec_label_pc_a38c
  %7 = icmp ult i32 %1, 1048576, !insn.addr !694
  store i32 %1, i32* %r6.1.reg2mem, !insn.addr !695
  br i1 %7, label %dec_label_pc_a3cc, label %dec_label_pc_a480, !insn.addr !695

dec_label_pc_a3cc:                                ; preds = %dec_label_pc_a3c0, %dec_label_pc_a4a0, %dec_label_pc_a480, %dec_label_pc_a434
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  ret i32 %r6.1.reload, !insn.addr !696

dec_label_pc_a3d8:                                ; preds = %dec_label_pc_a38c
  %8 = call i32 @function_9e38(), !insn.addr !697
  %9 = icmp eq i32 %8, 0, !insn.addr !698
  br i1 %9, label %dec_label_pc_a4a0, label %dec_label_pc_a3e4, !insn.addr !699

dec_label_pc_a3e4:                                ; preds = %dec_label_pc_a3d8
  %r3.0 = zext i8 %3 to i32
  %10 = add i32 %8, 4, !insn.addr !700
  %11 = inttoptr i32 %10 to i32*, !insn.addr !700
  %12 = load i32, i32* %11, align 4, !insn.addr !700
  %13 = icmp eq i32 %12, 0, !insn.addr !701
  store i32 %12, i32* %.reg2mem, !insn.addr !702
  store i32 %8, i32* %r4.1.in.reg2mem, !insn.addr !702
  store i32 -1, i32* %r6.3.reg2mem, !insn.addr !702
  br i1 %13, label %dec_label_pc_a460, label %dec_label_pc_a3fc, !insn.addr !702

dec_label_pc_a3fc:                                ; preds = %dec_label_pc_a3e4, %dec_label_pc_a418
  %r6.3.reload = load i32, i32* %r6.3.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !703
  %14 = inttoptr i32 %.reload to i8*, !insn.addr !703
  %15 = call i32 @strcmp(i8* %14, i8* %0), !insn.addr !703
  %16 = icmp eq i32 %15, 0, !insn.addr !704
  store i32 %r6.3.reload, i32* %r6.4.reg2mem, !insn.addr !705
  br i1 %16, label %dec_label_pc_a40c, label %dec_label_pc_a418, !insn.addr !705

dec_label_pc_a40c:                                ; preds = %dec_label_pc_a3fc
  %17 = icmp slt i32 %r6.3.reload, 0, !insn.addr !706
  br i1 %17, label %dec_label_pc_a414, label %dec_label_pc_a440, !insn.addr !707

dec_label_pc_a414:                                ; preds = %dec_label_pc_a40c
  %18 = inttoptr i32 %r4.1.in.reload to i32*, !insn.addr !708
  %19 = load i32, i32* %18, align 4, !insn.addr !708
  store i32 %19, i32* %r6.4.reg2mem, !insn.addr !708
  br label %dec_label_pc_a418, !insn.addr !708

dec_label_pc_a418:                                ; preds = %dec_label_pc_a3fc, %dec_label_pc_a414
  %r4.1 = add i32 %r4.1.in.reload, 16
  %r6.4.reload = load i32, i32* %r6.4.reg2mem
  %20 = add i32 %r4.1.in.reload, 20, !insn.addr !709
  %21 = inttoptr i32 %20 to i32*, !insn.addr !709
  %22 = load i32, i32* %21, align 4, !insn.addr !709
  %23 = icmp eq i32 %22, 0, !insn.addr !710
  store i32 %22, i32* %.reg2mem, !insn.addr !711
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !711
  store i32 %r6.4.reload, i32* %r6.3.reg2mem, !insn.addr !711
  br i1 %23, label %dec_label_pc_a42c, label %dec_label_pc_a3fc, !insn.addr !711

dec_label_pc_a42c:                                ; preds = %dec_label_pc_a418
  %24 = icmp eq i32 %r6.4.reload, -1, !insn.addr !712
  store i32 %arg1, i32* %r1.0.reg2mem, !insn.addr !713
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !713
  store i32 %r3.0, i32* %r3.1.reg2mem, !insn.addr !713
  store i32 %r6.4.reload, i32* %r6.5.reg2mem, !insn.addr !713
  br i1 %24, label %dec_label_pc_a460, label %dec_label_pc_a434, !insn.addr !713

dec_label_pc_a434:                                ; preds = %dec_label_pc_a460, %dec_label_pc_a440, %dec_label_pc_a42c
  %r6.5.reload = load i32, i32* %r6.5.reg2mem
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %25 = call i32 @function_9bf8(i32 %8, i32 %r1.0.reload, i32 %r2.0.reload, i32 %r3.1.reload), !insn.addr !714
  store i32 %r6.5.reload, i32* %r6.1.reg2mem, !insn.addr !715
  br label %dec_label_pc_a3cc, !insn.addr !715

dec_label_pc_a440:                                ; preds = %dec_label_pc_a40c
  %26 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !716
  %27 = ptrtoint %_IO_FILE* %26 to i32, !insn.addr !716
  %28 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_af20 to i32*), i32 1, i32 35, %_IO_FILE* %26), !insn.addr !717
  store i32 1, i32* %r1.0.reg2mem, !insn.addr !718
  store i32 35, i32* %r2.0.reg2mem, !insn.addr !718
  store i32 %27, i32* %r3.1.reg2mem, !insn.addr !718
  store i32 -4, i32* %r6.5.reg2mem, !insn.addr !718
  br label %dec_label_pc_a434, !insn.addr !718

dec_label_pc_a460:                                ; preds = %dec_label_pc_a42c, %dec_label_pc_a3e4
  %29 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !719
  %30 = ptrtoint %_IO_FILE* %29 to i32, !insn.addr !719
  %31 = call i32 @fwrite(i32* bitcast ([52 x i8]* @global_var_af44 to i32*), i32 1, i32 51, %_IO_FILE* %29), !insn.addr !720
  store i32 1, i32* %r1.0.reg2mem, !insn.addr !721
  store i32 51, i32* %r2.0.reg2mem, !insn.addr !721
  store i32 %30, i32* %r3.1.reg2mem, !insn.addr !721
  store i32 -1, i32* %r6.5.reg2mem, !insn.addr !721
  br label %dec_label_pc_a434, !insn.addr !721

dec_label_pc_a480:                                ; preds = %dec_label_pc_a3c0
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !722
  %33 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_af78 to i32*), i32 1, i32 29, %_IO_FILE* %32), !insn.addr !723
  store i32 -2, i32* %r6.1.reg2mem, !insn.addr !724
  br label %dec_label_pc_a3cc, !insn.addr !724

dec_label_pc_a4a0:                                ; preds = %dec_label_pc_a3d8
  %34 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !725
  %35 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_af08 to i32*), i32 1, i32 22, %_IO_FILE* %34), !insn.addr !726
  store i32 -3, i32* %r6.1.reg2mem, !insn.addr !727
  br label %dec_label_pc_a3cc, !insn.addr !727

; uselistorder directives
  uselistorder i32 %r4.1.in.reload, { 1, 0, 2 }
  uselistorder i32 %r6.3.reload, { 1, 0 }
  uselistorder i32 %8, { 1, 0, 2, 3 }
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %r6.1.reg2mem, { 4, 2, 3, 0, 1 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r6.4.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r2.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r3.1.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r6.5.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32 29, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 26, 11, 10, 9, 8, 7, 6, 17, 16, 15, 14, 13, 12, 25, 24, 23, 22, 21, 20, 5, 4, 3, 2, 1, 0, 19, 18, 27 }
  uselistorder i32 20, { 1, 3, 0, 2, 4, 5 }
  uselistorder i32 16, { 3, 0, 2, 6, 4, 1, 7, 5, 8 }
  uselistorder i32 4, { 19, 12, 11, 15, 13, 16, 17, 18, 9, 14, 10, 20, 0, 1, 2, 3, 4, 21, 5, 6, 7, 8, 22 }
  uselistorder i8 0, { 0, 9, 11, 5, 10, 6, 4, 12, 13, 14, 15, 16, 1, 17, 8, 3, 2, 18, 21, 20, 19, 7, 22, 23, 24 }
  uselistorder label %dec_label_pc_a418, { 1, 0 }
  uselistorder label %dec_label_pc_a3fc, { 1, 0 }
  uselistorder label %dec_label_pc_a3cc, { 1, 2, 3, 0 }
}

define i32 @function_a4d4(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_a4d4:
  %0 = icmp eq i32 %arg3, 0, !insn.addr !728
  %spec.select = select i1 %0, i32 1795, i32 1798
  %1 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 %spec.select), !insn.addr !729
  %2 = icmp slt i32 %1, 0, !insn.addr !730
  br i1 %2, label %dec_label_pc_a504, label %dec_label_pc_a4fc, !insn.addr !731

dec_label_pc_a4fc:                                ; preds = %dec_label_pc_a4d4
  ret i32 0, !insn.addr !732

dec_label_pc_a504:                                ; preds = %dec_label_pc_a4d4
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_131d0, align 4, !insn.addr !733
  %4 = call i32* @__errno_location(), !insn.addr !734
  %5 = load i32, i32* %4, align 4, !insn.addr !735
  %6 = call i8* @strerror(i32 %5), !insn.addr !736
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_af98, i32 0, i32 0), i32 %arg2, i8* %6), !insn.addr !737
  %8 = load i32, i32* %4, align 4, !insn.addr !738
  %9 = sub i32 0, %8, !insn.addr !739
  ret i32 %9, !insn.addr !740

; uselistorder directives
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 4, 15, 1, 14, 9, 5, 13, 12, 11, 10, 7, 19, 2, 3, 16, 0, 8, 18, 17, 6, 20 }
  uselistorder i8* (i32)* @strerror, { 4, 3, 1, 0, 2, 5 }
  uselistorder i32* ()* @__errno_location, { 0, 4, 2, 3, 1, 5 }
  uselistorder %_IO_FILE** @global_var_131d0, { 48, 47, 46, 45, 44, 43, 41, 42, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 24, 23, 22, 21, 25, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 5, 4, 2, 3, 1, 0, 6 }
}

define i32 @function_a544(i32 %arg1) local_unnamed_addr {
dec_label_pc_a544:
  %r5.1.reg2mem = alloca i32, !insn.addr !741
  %r5.0.ph.reg2mem = alloca i32, !insn.addr !741
  %stack_var_-20 = alloca i32, align 4
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_131d8, align 4, !insn.addr !742
  %1 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !743
  %2 = call i8* @fgets(i8* nonnull %1, i32 2, %_IO_FILE* %0), !insn.addr !743
  %3 = icmp eq i8* %2, null, !insn.addr !744
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !745
  br i1 %3, label %dec_label_pc_a5b4, label %dec_label_pc_a56c, !insn.addr !745

dec_label_pc_a56c:                                ; preds = %dec_label_pc_a544
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !746
  %5 = urem i32 %4, 256, !insn.addr !746
  %6 = icmp eq i32 %5, 89, !insn.addr !747
  br i1 %6, label %dec_label_pc_a5d0, label %dec_label_pc_a578, !insn.addr !748

dec_label_pc_a578:                                ; preds = %dec_label_pc_a56c
  %7 = icmp ult i32 %5, 89, !insn.addr !747
  %trunc = trunc i32 %4 to i8
  br i1 %7, label %dec_label_pc_a57c, label %dec_label_pc_a5c0, !insn.addr !749

dec_label_pc_a57c:                                ; preds = %dec_label_pc_a578
  store i32 %arg1, i32* %r5.0.ph.reg2mem
  store i32 %arg1, i32* %r5.1.reg2mem
  switch i8 %trunc, label %dec_label_pc_a59c.preheader [
    i8 78, label %dec_label_pc_a5d8
    i8 10, label %dec_label_pc_a5b4
  ]

dec_label_pc_a59c.preheader:                      ; preds = %dec_label_pc_a5d0, %dec_label_pc_a5d8, %dec_label_pc_a57c, %dec_label_pc_a5c0
  %r5.0.ph.reload = load i32, i32* %r5.0.ph.reg2mem
  br label %dec_label_pc_a59c

dec_label_pc_a590:                                ; preds = %dec_label_pc_a59c
  %8 = urem i32 %13, 256, !insn.addr !750
  %9 = icmp eq i32 %8, 10, !insn.addr !751
  %10 = mul i32 %13, 16777216
  %11 = ashr exact i32 %10, 24, !insn.addr !752
  store i32 %11, i32* %stack_var_-20, align 4, !insn.addr !752
  store i32 %r5.0.ph.reload, i32* %r5.1.reg2mem, !insn.addr !753
  br i1 %9, label %dec_label_pc_a5b4, label %dec_label_pc_a59c, !insn.addr !753

dec_label_pc_a59c:                                ; preds = %dec_label_pc_a59c.preheader, %dec_label_pc_a590
  %12 = load %_IO_FILE*, %_IO_FILE** @global_var_131d8, align 4, !insn.addr !754
  %13 = call i32 @fgetc(%_IO_FILE* %12), !insn.addr !755
  %14 = icmp eq i32 %13, -1, !insn.addr !756
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !757
  br i1 %14, label %dec_label_pc_a5b4, label %dec_label_pc_a590, !insn.addr !757

dec_label_pc_a5b4:                                ; preds = %dec_label_pc_a59c, %dec_label_pc_a590, %dec_label_pc_a5c0, %dec_label_pc_a544, %dec_label_pc_a57c
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !758

dec_label_pc_a5c0:                                ; preds = %dec_label_pc_a578
  store i32 %arg1, i32* %r5.0.ph.reg2mem
  store i32 %arg1, i32* %r5.1.reg2mem
  switch i8 %trunc, label %dec_label_pc_a59c.preheader [
    i8 110, label %dec_label_pc_a5d8
    i8 121, label %dec_label_pc_a5d0
    i8 10, label %dec_label_pc_a5b4
  ]

dec_label_pc_a5d0:                                ; preds = %dec_label_pc_a5c0, %dec_label_pc_a56c
  store i32 1, i32* %r5.0.ph.reg2mem, !insn.addr !759
  br label %dec_label_pc_a59c.preheader, !insn.addr !759

dec_label_pc_a5d8:                                ; preds = %dec_label_pc_a5c0, %dec_label_pc_a57c
  store i32 0, i32* %r5.0.ph.reg2mem, !insn.addr !760
  br label %dec_label_pc_a59c.preheader, !insn.addr !760

; uselistorder directives
  uselistorder i32 %13, { 2, 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 2, 0 }
  uselistorder i32* %r5.0.ph.reg2mem, { 2, 1, 4, 0, 3 }
  uselistorder i32* %r5.1.reg2mem, { 3, 0, 1, 2, 5, 4 }
  uselistorder i32 -1, { 12, 0, 13, 1, 10, 2, 3, 15, 14, 4, 16, 5, 6, 7, 17, 9, 18, 8, 11 }
  uselistorder i32 24, { 1, 0 }
  uselistorder i32 10, { 1, 0 }
  uselistorder i8 10, { 2, 3, 0, 1 }
  uselistorder i32 89, { 1, 0 }
  uselistorder i32 256, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 14, 13 }
  uselistorder i8* null, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i8* (i8*, i32, %_IO_FILE*)* @fgets, { 4, 3, 2, 1, 0, 5 }
  uselistorder %_IO_FILE** @global_var_131d8, { 1, 0 }
  uselistorder i32 %arg1, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_a5b4, { 2, 0, 1, 4, 3 }
  uselistorder label %dec_label_pc_a59c, { 1, 0 }
  uselistorder label %dec_label_pc_a59c.preheader, { 1, 0, 3, 2 }
}

define i32 @function_a5e4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_a5e4:
  %0 = call i32 @function_8960(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !761
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_13028 to i32), i32 ptrtoint (i32* @global_var_13024 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !762

; uselistorder directives
  uselistorder i32 0, { 63, 2, 0, 1, 171, 64, 65, 35, 172, 173, 3, 188, 189, 190, 191, 192, 131, 72, 73, 66, 67, 174, 50, 51, 68, 69, 70, 71, 177, 178, 6, 179, 180, 181, 74, 75, 182, 76, 77, 4, 44, 175, 176, 183, 78, 79, 52, 53, 80, 81, 8, 7, 5, 184, 185, 82, 83, 9, 37, 38, 84, 85, 88, 89, 86, 87, 90, 91, 193, 36, 194, 92, 93, 132, 133, 186, 187, 195, 42, 196, 230, 111, 112, 45, 46, 47, 48, 103, 104, 197, 134, 135, 208, 136, 39, 202, 119, 120, 56, 57, 137, 138, 58, 59, 204, 205, 206, 207, 139, 105, 106, 198, 107, 108, 199, 109, 110, 200, 123, 124, 125, 126, 201, 209, 40, 113, 114, 10, 43, 41, 210, 54, 55, 211, 212, 115, 116, 213, 117, 118, 11, 101, 102, 214, 215, 121, 122, 34, 216, 217, 218, 219, 220, 49, 221, 223, 203, 60, 140, 12, 17, 18, 224, 225, 141, 21, 61, 142, 20, 14, 15, 16, 94, 62, 143, 13, 226, 23, 24, 25, 26, 27, 144, 97, 98, 99, 100, 95, 96, 127, 128, 19, 22, 145, 227, 228, 222, 28, 29, 30, 31, 32, 33, 229, 146, 129, 130, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170 }
  uselistorder i32 2, { 10, 12, 4, 13, 18, 5, 14, 19, 15, 7, 16, 20, 6, 17, 9, 8, 23, 0, 24, 1, 2, 21, 3, 25, 26, 27, 22, 11 }
}

define i32 @function_a648() local_unnamed_addr {
dec_label_pc_a648:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !763

; uselistorder directives
  uselistorder i32 1, { 6, 8, 177, 9, 7, 131, 132, 14, 133, 13, 134, 128, 20, 19, 18, 17, 16, 15, 12, 11, 10, 135, 197, 201, 198, 199, 200, 39, 183, 182, 181, 180, 179, 178, 40, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 5, 136, 125, 124, 42, 41, 137, 138, 129, 43, 4, 45, 44, 48, 47, 46, 139, 140, 3, 2, 184, 202, 203, 50, 121, 204, 205, 53, 120, 141, 142, 143, 144, 145, 122, 146, 147, 148, 149, 119, 207, 150, 151, 208, 152, 209, 61, 153, 154, 126, 155, 156, 118, 157, 123, 158, 160, 159, 211, 162, 161, 212, 163, 206, 127, 165, 164, 167, 166, 213, 169, 168, 214, 171, 170, 81, 215, 173, 172, 216, 86, 174, 107, 100, 104, 80, 217, 210, 102, 218, 115, 130, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 117, 116, 114, 113, 112, 111, 110, 109, 108, 106, 105, 103, 101, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 85, 84, 83, 82, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 60, 59, 58, 57, 56, 55, 54, 52, 51, 49, 1, 175, 176, 196, 0 }
}

define i32 @function_a64c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_a64c:
  ret i32 %arg1, !insn.addr !764
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @strtol(i8*, i8**, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i8* @fgets(i8*, i32, %_IO_FILE*) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32 @strcasecmp(i8*, i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare %__dirstream* @opendir(i8*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strtoul(i8*, i8**, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @snprintf(i8*, i32, i8*, ...) local_unnamed_addr

declare i32 @sscanf(i8*, i8*, ...) local_unnamed_addr

declare i8* @__strdup(i8*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @fgetc(%_IO_FILE*) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare %dirent* @readdir(%__dirstream*) local_unnamed_addr

declare i8* @strrchr(i8*, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @closedir(%__dirstream*) local_unnamed_addr

!0 = !{i64 35172}
!1 = !{i64 35176}
!2 = !{i64 35208}
!3 = !{i64 35220}
!4 = !{i64 35232}
!5 = !{i64 35244}
!6 = !{i64 35256}
!7 = !{i64 35268}
!8 = !{i64 35280}
!9 = !{i64 35292}
!10 = !{i64 35304}
!11 = !{i64 35316}
!12 = !{i64 35328}
!13 = !{i64 35340}
!14 = !{i64 35352}
!15 = !{i64 35364}
!16 = !{i64 35376}
!17 = !{i64 35388}
!18 = !{i64 35400}
!19 = !{i64 35412}
!20 = !{i64 35424}
!21 = !{i64 35436}
!22 = !{i64 35448}
!23 = !{i64 35460}
!24 = !{i64 35472}
!25 = !{i64 35484}
!26 = !{i64 35496}
!27 = !{i64 35508}
!28 = !{i64 35520}
!29 = !{i64 35532}
!30 = !{i64 35544}
!31 = !{i64 35556}
!32 = !{i64 35568}
!33 = !{i64 35580}
!34 = !{i64 35592}
!35 = !{i64 35604}
!36 = !{i64 35616}
!37 = !{i64 35628}
!38 = !{i64 35640}
!39 = !{i64 35652}
!40 = !{i64 35664}
!41 = !{i64 35704}
!42 = !{i64 35712}
!43 = !{i64 35744}
!44 = !{i64 35748}
!45 = !{i64 35764}
!46 = !{i64 35768}
!47 = !{i64 35788}
!48 = !{i64 35792}
!49 = !{i64 35796}
!50 = !{i64 35800}
!51 = !{i64 35804}
!52 = !{i64 35836}
!53 = !{i64 35840}
!54 = !{i64 35848}
!55 = !{i64 36008}
!56 = !{i64 36012}
!57 = !{i64 36020}
!58 = !{i64 36024}
!59 = !{i64 36028}
!60 = !{i64 36032}
!61 = !{i64 36036}
!62 = !{i64 36040}
!63 = !{i64 36044}
!64 = !{i64 36048}
!65 = !{i64 36056}
!66 = !{i64 36060}
!67 = !{i64 36064}
!68 = !{i64 36068}
!69 = !{i64 36072}
!70 = !{i64 36080}
!71 = !{i64 36084}
!72 = !{i64 36088}
!73 = !{i64 36092}
!74 = !{i64 36096}
!75 = !{i64 36104}
!76 = !{i64 36112}
!77 = !{i64 36120}
!78 = !{i64 36124}
!79 = !{i64 36128}
!80 = !{i64 36132}
!81 = !{i64 36140}
!82 = !{i64 36144}
!83 = !{i64 36148}
!84 = !{i64 36152}
!85 = !{i64 36156}
!86 = !{i64 36160}
!87 = !{i64 36164}
!88 = !{i64 36168}
!89 = !{i64 36172}
!90 = !{i64 36176}
!91 = !{i64 36180}
!92 = !{i64 36196}
!93 = !{i64 36208}
!94 = !{i64 36212}
!95 = !{i64 36216}
!96 = !{i64 36220}
!97 = !{i64 36224}
!98 = !{i64 36228}
!99 = !{i64 36232}
!100 = !{i64 36236}
!101 = !{i64 36240}
!102 = !{i64 36252}
!103 = !{i64 36256}
!104 = !{i64 36260}
!105 = !{i64 36272}
!106 = !{i64 36276}
!107 = !{i64 36284}
!108 = !{i64 36300}
!109 = !{i64 36312}
!110 = !{i64 36324}
!111 = !{i64 36328}
!112 = !{i64 36332}
!113 = !{i64 36348}
!114 = !{i64 36352}
!115 = !{i64 36360}
!116 = !{i64 36380}
!117 = !{i64 36384}
!118 = !{i64 36388}
!119 = !{i64 36412}
!120 = !{i64 36436}
!121 = !{i64 36440}
!122 = !{i64 36456}
!123 = !{i64 36460}
!124 = !{i64 36464}
!125 = !{i64 36468}
!126 = !{i64 36480}
!127 = !{i64 36476}
!128 = !{i64 36492}
!129 = !{i64 36496}
!130 = !{i64 36500}
!131 = !{i64 36508}
!132 = !{i64 36528}
!133 = !{i64 36532}
!134 = !{i64 36536}
!135 = !{i64 36540}
!136 = !{i64 36544}
!137 = !{i64 36548}
!138 = !{i64 36552}
!139 = !{i64 36556}
!140 = !{i64 36576}
!141 = !{i64 36580}
!142 = !{i64 36584}
!143 = !{i64 36592}
!144 = !{i64 36596}
!145 = !{i64 36604}
!146 = !{i64 36624}
!147 = !{i64 36628}
!148 = !{i64 36632}
!149 = !{i64 36660}
!150 = !{i64 36664}
!151 = !{i64 36672}
!152 = !{i64 36680}
!153 = !{i64 36688}
!154 = !{i64 36708}
!155 = !{i64 36712}
!156 = !{i64 36716}
!157 = !{i64 36720}
!158 = !{i64 36724}
!159 = !{i64 36728}
!160 = !{i64 36748}
!161 = !{i64 36760}
!162 = !{i64 36764}
!163 = !{i64 36768}
!164 = !{i64 36772}
!165 = !{i64 36784}
!166 = !{i64 36780}
!167 = !{i64 36804}
!168 = !{i64 36808}
!169 = !{i64 36816}
!170 = !{i64 36820}
!171 = !{i64 36824}
!172 = !{i64 36828}
!173 = !{i64 36840}
!174 = !{i64 36860}
!175 = !{i64 36864}
!176 = !{i64 36868}
!177 = !{i64 36888}
!178 = !{i64 36892}
!179 = !{i64 36896}
!180 = !{i64 36920}
!181 = !{i64 36924}
!182 = !{i64 36928}
!183 = !{i64 36940}
!184 = !{i64 36944}
!185 = !{i64 36948}
!186 = !{i64 36956}
!187 = !{i64 36968}
!188 = !{i64 37008}
!189 = !{i64 37020}
!190 = !{i64 37028}
!191 = !{i64 37036}
!192 = !{i64 37156}
!193 = !{i64 37072}
!194 = !{i64 37084}
!195 = !{i64 37096}
!196 = !{i64 37100}
!197 = !{i64 37104}
!198 = !{i64 37108}
!199 = !{i64 37116}
!200 = !{i64 37112}
!201 = !{i64 37132}
!202 = !{i64 37128}
!203 = !{i64 37140}
!204 = !{i64 37144}
!205 = !{i64 37148}
!206 = !{i64 37188}
!207 = !{i64 37192}
!208 = !{i64 37196}
!209 = !{i64 37204}
!210 = !{i64 37208}
!211 = !{i64 37212}
!212 = !{i64 37216}
!213 = !{i64 37228}
!214 = !{i64 37232}
!215 = !{i64 37240}
!216 = !{i64 37248}
!217 = !{i64 37252}
!218 = !{i64 37268}
!219 = !{i64 37272}
!220 = !{i64 37276}
!221 = !{i64 37280}
!222 = !{i64 37300}
!223 = !{i64 37304}
!224 = !{i64 37308}
!225 = !{i64 37324}
!226 = !{i64 37332}
!227 = !{i64 37340}
!228 = !{i64 37352}
!229 = !{i64 37372}
!230 = !{i64 37376}
!231 = !{i64 37380}
!232 = !{i64 37388}
!233 = !{i64 37400}
!234 = !{i64 37392}
!235 = !{i64 37424}
!236 = !{i64 37428}
!237 = !{i64 37444}
!238 = !{i64 37448}
!239 = !{i64 37452}
!240 = !{i64 37456}
!241 = !{i64 37460}
!242 = !{i64 37464}
!243 = !{i64 37468}
!244 = !{i64 37516}
!245 = !{i64 37520}
!246 = !{i64 37524}
!247 = !{i64 37528}
!248 = !{i64 37532}
!249 = !{i64 38352}
!250 = !{i64 37536}
!251 = !{i64 37540}
!252 = !{i64 37548}
!253 = !{i64 37552}
!254 = !{i64 37556}
!255 = !{i64 37560}
!256 = !{i64 37572}
!257 = !{i64 37600}
!258 = !{i64 37620}
!259 = !{i64 37624}
!260 = !{i64 37640}
!261 = !{i64 37644}
!262 = !{i64 37648}
!263 = !{i64 37656}
!264 = !{i64 37660}
!265 = !{i64 37664}
!266 = !{i64 37672}
!267 = !{i64 37676}
!268 = !{i64 37688}
!269 = !{i64 37732}
!270 = !{i64 37764}
!271 = !{i64 37768}
!272 = !{i64 37772}
!273 = !{i64 37776}
!274 = !{i64 37792}
!275 = !{i64 37796}
!276 = !{i64 37816}
!277 = !{i64 37820}
!278 = !{i64 37828}
!279 = !{i64 37832}
!280 = !{i64 37836}
!281 = !{i64 37840}
!282 = !{i64 37856}
!283 = !{i64 37860}
!284 = !{i64 37864}
!285 = !{i64 37888}
!286 = !{i64 37892}
!287 = !{i64 37904}
!288 = !{i64 37908}
!289 = !{i64 37964}
!290 = !{i64 37980}
!291 = !{i64 37988}
!292 = !{i64 38000}
!293 = !{i64 38008}
!294 = !{i64 38012}
!295 = !{i64 38028}
!296 = !{i64 38032}
!297 = !{i64 38040}
!298 = !{i64 38056}
!299 = !{i64 38060}
!300 = !{i64 38064}
!301 = !{i64 38068}
!302 = !{i64 38072}
!303 = !{i64 38076}
!304 = !{i64 38084}
!305 = !{i64 38088}
!306 = !{i64 38092}
!307 = !{i64 38108}
!308 = !{i64 38116}
!309 = !{i64 38136}
!310 = !{i64 38164}
!311 = !{i64 38168}
!312 = !{i64 38172}
!313 = !{i64 38180}
!314 = !{i64 38184}
!315 = !{i64 38192}
!316 = !{i64 38204}
!317 = !{i64 38220}
!318 = !{i64 38224}
!319 = !{i64 38228}
!320 = !{i64 38244}
!321 = !{i64 38252}
!322 = !{i64 38272}
!323 = !{i64 38276}
!324 = !{i64 38284}
!325 = !{i64 38312}
!326 = !{i64 38316}
!327 = !{i64 38320}
!328 = !{i64 38324}
!329 = !{i64 38340}
!330 = !{i64 38344}
!331 = !{i64 38368}
!332 = !{i64 38372}
!333 = !{i64 38388}
!334 = !{i64 38392}
!335 = !{i64 38396}
!336 = !{i64 38404}
!337 = !{i64 38408}
!338 = !{i64 38424}
!339 = !{i64 38428}
!340 = !{i64 38432}
!341 = !{i64 38440}
!342 = !{i64 38444}
!343 = !{i64 38460}
!344 = !{i64 38464}
!345 = !{i64 38468}
!346 = !{i64 38476}
!347 = !{i64 38480}
!348 = !{i64 38496}
!349 = !{i64 38500}
!350 = !{i64 38504}
!351 = !{i64 38524}
!352 = !{i64 38528}
!353 = !{i64 38544}
!354 = !{i64 38548}
!355 = !{i64 38552}
!356 = !{i64 38564}
!357 = !{i64 38568}
!358 = !{i64 38572}
!359 = !{i64 38620}
!360 = !{i64 38624}
!361 = !{i64 38628}
!362 = !{i64 38632}
!363 = !{i64 38640}
!364 = !{i64 38848}
!365 = !{i64 38644}
!366 = !{i64 38648}
!367 = !{i64 38652}
!368 = !{i64 38660}
!369 = !{i64 38692}
!370 = !{i64 38700}
!371 = !{i64 38728}
!372 = !{i64 38736}
!373 = !{i64 38740}
!374 = !{i64 38764}
!375 = !{i64 38768}
!376 = !{i64 38776}
!377 = !{i64 38780}
!378 = !{i64 38816}
!379 = !{i64 38820}
!380 = !{i64 38824}
!381 = !{i64 38832}
!382 = !{i64 38836}
!383 = !{i64 38864}
!384 = !{i64 38872}
!385 = !{i64 38892}
!386 = !{i64 38896}
!387 = !{i64 38904}
!388 = !{i64 38912}
!389 = !{i64 38932}
!390 = !{i64 38936}
!391 = !{i64 38952}
!392 = !{i64 38956}
!393 = !{i64 38972}
!394 = !{i64 38976}
!395 = !{i64 38980}
!396 = !{i64 38988}
!397 = !{i64 38992}
!398 = !{i64 38996}
!399 = !{i64 39000}
!400 = !{i64 39016}
!401 = !{i64 39024}
!402 = !{i64 39028}
!403 = !{i64 39072}
!404 = !{i64 39040}
!405 = !{i64 39048}
!406 = !{i64 39056}
!407 = !{i64 39060}
!408 = !{i64 39064}
!409 = !{i64 39044}
!410 = !{i64 39096}
!411 = !{i64 39100}
!412 = !{i64 39104}
!413 = !{i64 39112}
!414 = !{i64 39116}
!415 = !{i64 39160}
!416 = !{i64 39132}
!417 = !{i64 39124}
!418 = !{i64 39144}
!419 = !{i64 39148}
!420 = !{i64 39152}
!421 = !{i64 39136}
!422 = !{i64 39184}
!423 = !{i64 39188}
!424 = !{i64 39192}
!425 = !{i64 39200}
!426 = !{i64 39204}
!427 = !{i64 39220}
!428 = !{i64 39224}
!429 = !{i64 39228}
!430 = !{i64 37920}
!431 = !{i64 39252}
!432 = !{i64 39260}
!433 = !{i64 39272}
!434 = !{i64 39276}
!435 = !{i64 39516}
!436 = !{i64 39520}
!437 = !{i64 39548}
!438 = !{i64 39552}
!439 = !{i64 39556}
!440 = !{i64 39560}
!441 = !{i64 39592}
!442 = !{i64 39656}
!443 = !{i64 39700}
!444 = !{i64 39704}
!445 = !{i64 39708}
!446 = !{i64 39712}
!447 = !{i64 39720}
!448 = !{i64 39724}
!449 = !{i64 39772}
!450 = !{i64 39808}
!451 = !{i64 39816}
!452 = !{i64 39824}
!453 = !{i64 39828}
!454 = !{i64 39836}
!455 = !{i64 39840}
!456 = !{i64 39844}
!457 = !{i64 39848}
!458 = !{i64 39904}
!459 = !{i64 39908}
!460 = !{i64 39916}
!461 = !{i64 39876}
!462 = !{i64 39884}
!463 = !{i64 39900}
!464 = !{i64 39920}
!465 = !{i64 39924}
!466 = !{i64 39928}
!467 = !{i64 39936}
!468 = !{i64 39940}
!469 = !{i64 39948}
!470 = !{i64 39952}
!471 = !{i64 39956}
!472 = !{i64 39960}
!473 = !{i64 39964}
!474 = !{i64 39968}
!475 = !{i64 39980}
!476 = !{i64 39992}
!477 = !{i64 40000}
!478 = !{i64 40004}
!479 = !{i64 40008}
!480 = !{i64 40012}
!481 = !{i64 40016}
!482 = !{i64 40028}
!483 = !{i64 40036}
!484 = !{i64 40044}
!485 = !{i64 40048}
!486 = !{i64 40052}
!487 = !{i64 40072}
!488 = !{i64 40076}
!489 = !{i64 40080}
!490 = !{i64 40084}
!491 = !{i64 40096}
!492 = !{i64 40088}
!493 = !{i64 40104}
!494 = !{i64 40108}
!495 = !{i64 40112}
!496 = !{i64 40120}
!497 = !{i64 40140}
!498 = !{i64 40144}
!499 = !{i64 40152}
!500 = !{i64 40172}
!501 = !{i64 40176}
!502 = !{i64 40184}
!503 = !{i64 40200}
!504 = !{i64 40244}
!505 = !{i64 40216}
!506 = !{i64 40256}
!507 = !{i64 40264}
!508 = !{i64 40268}
!509 = !{i64 40272}
!510 = !{i64 40284}
!511 = !{i64 40288}
!512 = !{i64 40292}
!513 = !{i64 40320}
!514 = !{i64 40324}
!515 = !{i64 40328}
!516 = !{i64 40332}
!517 = !{i64 40336}
!518 = !{i64 40368}
!519 = !{i64 40372}
!520 = !{i64 40376}
!521 = !{i64 40380}
!522 = !{i64 40384}
!523 = !{i64 40396}
!524 = !{i64 40400}
!525 = !{i64 40416}
!526 = !{i64 40428}
!527 = !{i64 40436}
!528 = !{i64 40472}
!529 = !{i64 40476}
!530 = !{i64 40504}
!531 = !{i64 40520}
!532 = !{i64 40524}
!533 = !{i64 40532}
!534 = !{i64 40544}
!535 = !{i64 40548}
!536 = !{i64 40556}
!537 = !{i64 40844}
!538 = !{i64 40852}
!539 = !{i64 40860}
!540 = !{i64 40580}
!541 = !{i64 40592}
!542 = !{i64 40616}
!543 = !{i64 40628}
!544 = !{i64 40652}
!545 = !{i64 40664}
!546 = !{i64 40704}
!547 = !{i64 40708}
!548 = !{i64 40720}
!549 = !{i64 40724}
!550 = !{i64 40728}
!551 = !{i64 40732}
!552 = !{i64 40692}
!553 = !{i64 40748}
!554 = !{i64 40752}
!555 = !{i64 40760}
!556 = !{i64 40764}
!557 = !{i64 40740}
!558 = !{i64 40768}
!559 = !{i64 40772}
!560 = !{i64 40776}
!561 = !{i64 40780}
!562 = !{i64 40792}
!563 = !{i64 40796}
!564 = !{i64 40800}
!565 = !{i64 40812}
!566 = !{i64 40816}
!567 = !{i64 40820}
!568 = !{i64 40824}
!569 = !{i64 40840}
!570 = !{i64 40872}
!571 = !{i64 40884}
!572 = !{i64 40892}
!573 = !{i64 40920}
!574 = !{i64 40928}
!575 = !{i64 40940}
!576 = !{i64 40944}
!577 = !{i64 40948}
!578 = !{i64 40964}
!579 = !{i64 40980}
!580 = !{i64 40988}
!581 = !{i64 40992}
!582 = !{i64 41004}
!583 = !{i64 41008}
!584 = !{i64 41012}
!585 = !{i64 40972}
!586 = !{i64 41024}
!587 = !{i64 41032}
!588 = !{i64 41048}
!589 = !{i64 41068}
!590 = !{i64 41076}
!591 = !{i64 41080}
!592 = !{i64 41084}
!593 = !{i64 41088}
!594 = !{i64 41092}
!595 = !{i64 41096}
!596 = !{i64 41100}
!597 = !{i64 41116}
!598 = !{i64 41120}
!599 = !{i64 41124}
!600 = !{i64 41128}
!601 = !{i64 41132}
!602 = !{i64 41136}
!603 = !{i64 41160}
!604 = !{i64 41172}
!605 = !{i64 41176}
!606 = !{i64 41180}
!607 = !{i64 41200}
!608 = !{i64 41212}
!609 = !{i64 41216}
!610 = !{i64 41220}
!611 = !{i64 41232}
!612 = !{i64 41244}
!613 = !{i64 41252}
!614 = !{i64 41260}
!615 = !{i64 41264}
!616 = !{i64 41268}
!617 = !{i64 41284}
!618 = !{i64 41288}
!619 = !{i64 41296}
!620 = !{i64 41300}
!621 = !{i64 41304}
!622 = !{i64 41308}
!623 = !{i64 41320}
!624 = !{i64 41324}
!625 = !{i64 41332}
!626 = !{i64 41344}
!627 = !{i64 41348}
!628 = !{i64 41352}
!629 = !{i64 41356}
!630 = !{i64 41360}
!631 = !{i64 41364}
!632 = !{i64 41368}
!633 = !{i64 41372}
!634 = !{i64 41376}
!635 = !{i64 41388}
!636 = !{i64 41392}
!637 = !{i64 41396}
!638 = !{i64 41400}
!639 = !{i64 41404}
!640 = !{i64 41408}
!641 = !{i64 41416}
!642 = !{i64 41420}
!643 = !{i64 41424}
!644 = !{i64 41444}
!645 = !{i64 41448}
!646 = !{i64 41452}
!647 = !{i64 41464}
!648 = !{i64 41468}
!649 = !{i64 41472}
!650 = !{i64 41488}
!651 = !{i64 41492}
!652 = !{i64 41500}
!653 = !{i64 41512}
!654 = !{i64 41516}
!655 = !{i64 41524}
!656 = !{i64 41560}
!657 = !{i64 41564}
!658 = !{i64 41584}
!659 = !{i64 41596}
!660 = !{i64 41600}
!661 = !{i64 41604}
!662 = !{i64 41624}
!663 = !{i64 41632}
!664 = !{i64 41636}
!665 = !{i64 41640}
!666 = !{i64 41648}
!667 = !{i64 41660}
!668 = !{i64 41668}
!669 = !{i64 41664}
!670 = !{i64 41672}
!671 = !{i64 41680}
!672 = !{i64 41684}
!673 = !{i64 41688}
!674 = !{i64 41692}
!675 = !{i64 41696}
!676 = !{i64 41720}
!677 = !{i64 41732}
!678 = !{i64 41736}
!679 = !{i64 41740}
!680 = !{i64 41748}
!681 = !{i64 41768}
!682 = !{i64 41772}
!683 = !{i64 41776}
!684 = !{i64 41784}
!685 = !{i64 41796}
!686 = !{i64 41800}
!687 = !{i64 41868}
!688 = !{i64 41888}
!689 = !{i64 41892}
!690 = !{i64 41896}
!691 = !{i64 41900}
!692 = !{i64 41912}
!693 = !{i64 41904}
!694 = !{i64 41920}
!695 = !{i64 41928}
!696 = !{i64 41940}
!697 = !{i64 41944}
!698 = !{i64 41948}
!699 = !{i64 41952}
!700 = !{i64 41956}
!701 = !{i64 41960}
!702 = !{i64 41976}
!703 = !{i64 41984}
!704 = !{i64 41988}
!705 = !{i64 41992}
!706 = !{i64 41996}
!707 = !{i64 42000}
!708 = !{i64 42004}
!709 = !{i64 42016}
!710 = !{i64 42020}
!711 = !{i64 42024}
!712 = !{i64 42028}
!713 = !{i64 42032}
!714 = !{i64 42040}
!715 = !{i64 42044}
!716 = !{i64 42068}
!717 = !{i64 42072}
!718 = !{i64 42076}
!719 = !{i64 42100}
!720 = !{i64 42104}
!721 = !{i64 42108}
!722 = !{i64 42132}
!723 = !{i64 42136}
!724 = !{i64 42140}
!725 = !{i64 42164}
!726 = !{i64 42168}
!727 = !{i64 42172}
!728 = !{i64 42196}
!729 = !{i64 42224}
!730 = !{i64 42228}
!731 = !{i64 42232}
!732 = !{i64 42240}
!733 = !{i64 42248}
!734 = !{i64 42252}
!735 = !{i64 42260}
!736 = !{i64 42264}
!737 = !{i64 42284}
!738 = !{i64 42288}
!739 = !{i64 42292}
!740 = !{i64 42296}
!741 = !{i64 42308}
!742 = !{i64 42332}
!743 = !{i64 42336}
!744 = !{i64 42340}
!745 = !{i64 42344}
!746 = !{i64 42348}
!747 = !{i64 42352}
!748 = !{i64 42356}
!749 = !{i64 42360}
!750 = !{i64 42408}
!751 = !{i64 42384}
!752 = !{i64 42388}
!753 = !{i64 42392}
!754 = !{i64 42396}
!755 = !{i64 42400}
!756 = !{i64 42404}
!757 = !{i64 42412}
!758 = !{i64 42428}
!759 = !{i64 42452}
!760 = !{i64 42460}
!761 = !{i64 42496}
!762 = !{i64 42512}
!763 = !{i64 42568}
!764 = !{i64 42576}
