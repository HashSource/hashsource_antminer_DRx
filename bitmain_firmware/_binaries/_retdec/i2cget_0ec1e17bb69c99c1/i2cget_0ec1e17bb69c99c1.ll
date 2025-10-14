source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%__dirstream = type { i32 }
%dirent = type { i32, i32, i16, i8, [256 x i8] }

@global_var_127a4 = local_unnamed_addr global i32 35124
@global_var_127a8 = local_unnamed_addr global i32 35124
@global_var_127ac = local_unnamed_addr global i32 35124
@global_var_127b0 = local_unnamed_addr global i32 35124
@global_var_127b4 = local_unnamed_addr global i32 35124
@global_var_127b8 = local_unnamed_addr global i32 35124
@global_var_127bc = local_unnamed_addr global i32 35124
@global_var_127c0 = local_unnamed_addr global i32 35124
@global_var_127c4 = local_unnamed_addr global i32 35124
@global_var_127c8 = local_unnamed_addr global i32 35124
@global_var_127cc = local_unnamed_addr global i32 35124
@global_var_127d0 = local_unnamed_addr global i32 35124
@global_var_127d4 = local_unnamed_addr global i32 35124
@global_var_127d8 = local_unnamed_addr global i32 35124
@global_var_127dc = local_unnamed_addr global i32 35124
@global_var_127e0 = local_unnamed_addr global i32 35124
@global_var_127e4 = local_unnamed_addr global i32 35124
@global_var_127e8 = local_unnamed_addr global i32 35124
@global_var_127ec = local_unnamed_addr global i32 35124
@global_var_127f0 = local_unnamed_addr global i32 35124
@global_var_127f4 = local_unnamed_addr global i32 35124
@global_var_127f8 = local_unnamed_addr global i32 35124
@global_var_127fc = local_unnamed_addr global i32 35124
@global_var_12800 = local_unnamed_addr global i32 35124
@global_var_12804 = local_unnamed_addr global i32 35124
@global_var_12808 = local_unnamed_addr global i32 35124
@global_var_1280c = local_unnamed_addr global i32 35124
@global_var_12810 = local_unnamed_addr global i32 35124
@global_var_12814 = local_unnamed_addr global i32 35124
@global_var_12818 = local_unnamed_addr global i32 35124
@global_var_1281c = local_unnamed_addr global i32 35124
@global_var_12820 = local_unnamed_addr global i32 35124
@global_var_12824 = local_unnamed_addr global i32 35124
@global_var_12828 = local_unnamed_addr global i32 35124
@global_var_1282c = local_unnamed_addr global i32 35124
@global_var_12830 = local_unnamed_addr global i32 35124
@global_var_12834 = local_unnamed_addr global i32 35124
@global_var_12838 = local_unnamed_addr global i32 35124
@global_var_91a4 = local_unnamed_addr constant i32 75848
@global_var_91a8 = local_unnamed_addr constant i32 40876
@global_var_9fac = constant [33 x i8] c"Error: Unsupported option \22%s\22!\0A\00"
@global_var_91ac = local_unnamed_addr constant i32 40972
@global_var_a00c = constant [22 x i8] c"Error: Invalid mode!\0A\00"
@global_var_91b0 = local_unnamed_addr constant i32 40912
@global_var_9fd0 = constant [19 x i8] c"i2cget version %s\0A\00"
@global_var_91b4 = local_unnamed_addr constant i32 40932
@global_var_9fe4 = constant [6 x i8] c"3.1.0\00"
@global_var_91b8 = local_unnamed_addr constant i32 40940
@global_var_9fec = constant [30 x i8] c"Error: Data address invalid!\0A\00"
@global_var_91bc = local_unnamed_addr constant i32 41168
@global_var_a0d0 = constant [47 x i8] c"Warning: Adapter does not seem to support PEC\0A\00"
@global_var_91c0 = local_unnamed_addr constant i32 41904
@global_var_a3b0 = constant [8 x i8] c"0x%0*x\0A\00"
@global_var_91c4 = local_unnamed_addr constant i32 41828
@global_var_a364 = constant [30 x i8] c"Error: Could not set PEC: %s\0A\00"
@global_var_91c8 = local_unnamed_addr constant i32 41056
@global_var_a060 = constant [44 x i8] c"Error: Adapter does not have %s capability\0A\00"
@global_var_91cc = local_unnamed_addr constant i32 41152
@global_var_a0c0 = constant [16 x i8] c"SMBus read word\00"
@global_var_91d0 = local_unnamed_addr constant i32 41136
@global_var_a0b0 = constant [16 x i8] c"SMBus read byte\00"
@global_var_91d4 = local_unnamed_addr constant i32 41216
@global_var_a100 = constant [76 x i8] c"WARNING! This program can confuse your I2C bus, cause data loss and worse!\0A\00"
@global_var_91d8 = local_unnamed_addr constant i32 41644
@global_var_a2ac = constant [55 x i8] c"I will read from device file %s, chip address 0x%02x, \00"
@global_var_91dc = local_unnamed_addr constant i32 41724
@global_var_a2fc = constant [20 x i8] c"data address\0A0x%02x\00"
@global_var_91e0 = local_unnamed_addr constant i32 40800
@global_var_9f60 = constant [21 x i8] c"write byte/read byte\00"
@global_var_91e4 = local_unnamed_addr constant i32 41744
@global_var_a310 = constant [13 x i8] c", using %s.\0A\00"
@global_var_91e8 = local_unnamed_addr constant i32 41760
@global_var_a320 = constant [23 x i8] c"PEC checking enabled.\0A\00"
@global_var_91ec = local_unnamed_addr constant i32 40868
@global_var_9fa4 = constant [4 x i8] c"y/N\00"
@global_var_91f0 = local_unnamed_addr constant i32 40872
@global_var_9fa8 = constant [4 x i8] c"Y/n\00"
@global_var_91f4 = local_unnamed_addr constant i32 41784
@global_var_a338 = constant [16 x i8] c"Continue? [%s] \00"
@global_var_91f8 = local_unnamed_addr constant i32 41800
@global_var_a348 = constant [27 x i8] c"Aborting on user request.\0A\00"
@global_var_91fc = local_unnamed_addr constant i32 41480
@global_var_a208 = constant [164 x i8] c"WARNING! All I2C chips and some SMBus chips will interpret a write\0Abyte command with PEC as awrite byte data command, effectively writing a\0Avalue into a register!\0A\00"
@global_var_9200 = local_unnamed_addr constant i32 41700
@global_var_a2e4 = constant [21 x i8] c"current data\0Aaddress\00"
@global_var_9204 = local_unnamed_addr constant i32 40840
@global_var_9f88 = constant [15 x i8] c"read byte data\00"
@global_var_9208 = local_unnamed_addr constant i32 40824
@global_var_9f78 = constant [15 x i8] c"read word data\00"
@global_var_920c = local_unnamed_addr constant i32 40856
@global_var_9f98 = constant [10 x i8] c"read byte\00"
@global_var_9210 = local_unnamed_addr constant i32 41292
@global_var_a14c = constant [185 x i8] c"STOP! EEPROMs are I2C devices, not SMBus devices. Using PEC\0Aon I2C devices may result in unexpected results, such as\0Atrashing the contents of EEPROMs. We can't let you do that, sorry.\0A\00"
@global_var_9214 = local_unnamed_addr constant i32 41860
@global_var_a384 = constant [24 x i8] c"Warning - write failed\0A\00"
@global_var_9218 = local_unnamed_addr constant i32 41884
@global_var_a39c = constant [20 x i8] c"Error: Read failed\0A\00"
@global_var_921c = local_unnamed_addr constant i32 41100
@global_var_a08c = constant [19 x i8] c"SMBus receive byte\00"
@global_var_9220 = local_unnamed_addr constant i32 40996
@global_var_a024 = constant [59 x i8] c"Error: Could not get the adapter functionality matrix: %s\0A\00"
@global_var_9224 = local_unnamed_addr constant i32 41120
@global_var_a0a0 = constant [16 x i8] c"SMBus send byte\00"
@global_var_9258 = local_unnamed_addr constant i32 40508
@global_var_925c = local_unnamed_addr constant i32 35600
@global_var_9260 = local_unnamed_addr constant i32 40408
@global_var_9280 = local_unnamed_addr constant i32 38180
@global_var_9284 = local_unnamed_addr constant i32 164
@global_var_126b0 = global i32 1
@global_var_12798 = local_unnamed_addr global i32* @global_var_126b0
@global_var_1283c = local_unnamed_addr global i32 0
@global_var_92b4 = local_unnamed_addr constant i32 75848
@global_var_92b8 = local_unnamed_addr constant i32 75851
@global_var_1284b = local_unnamed_addr global i32 0
@global_var_92bc = local_unnamed_addr constant i32 0
@global_var_92f4 = local_unnamed_addr constant i32 75848
@global_var_92f8 = local_unnamed_addr constant i32 75848
@global_var_92fc = local_unnamed_addr constant i32 0
@global_var_9324 = local_unnamed_addr constant i32 75860
@global_var_9354 = local_unnamed_addr constant i32 75436
@global_var_126ac = global i32 0
@global_var_9358 = local_unnamed_addr constant i32 0
@global_var_9e4c = constant [276 x i8] c"Usage: i2cget [-f] [-y] I2CBUS CHIP-ADDRESS [DATA-ADDRESS [MODE]]\0A  I2CBUS is an integer or an I2C bus name\0A  ADDRESS is an integer (0x03 - 0x77)\0A  MODE is one of:\0A    b (read byte data, default)\0A    w (read word data)\0A    c (write byte/read byte)\0A    Append p for SMBus PEC\0A\00"
@global_var_94f0 = local_unnamed_addr constant i32 75848
@global_var_94f4 = local_unnamed_addr constant i32 41952
@global_var_a3e0 = constant [38 x i8] c"Error: Chip address is not a number!\0A\00"
@global_var_94f8 = local_unnamed_addr constant i32 41992
@global_var_a408 = constant [47 x i8] c"Error: Chip address out of range (0x03-0x77)!\0A\00"
@global_var_9614 = local_unnamed_addr constant i32 42040
@global_var_a438 = constant [12 x i8] c"/dev/i2c/%d\00"
@global_var_9618 = local_unnamed_addr constant i32 75848
@global_var_961c = local_unnamed_addr constant i32 42128
@global_var_a490 = constant [37 x i8] c"Error: Could not open file `%s': %s\0A\00"
@global_var_9620 = local_unnamed_addr constant i32 42168
@global_var_a4b8 = constant [14 x i8] c"Run as root?\0A\00"
@global_var_9624 = local_unnamed_addr constant i32 42052
@global_var_a444 = constant [12 x i8] c"/dev/i2c-%d\00"
@global_var_9628 = local_unnamed_addr constant i32 42064
@global_var_a450 = constant [63 x i8] c"Error: Could not open file `/dev/i2c-%d' or `/dev/i2c/%d': %s\0A\00"
@global_var_9b40 = local_unnamed_addr constant i32 42184
@global_var_a4c8 = constant [14 x i8] c"/proc/bus/i2c\00"
@global_var_9b44 = local_unnamed_addr constant i32 42632
@global_var_9b48 = local_unnamed_addr constant i32 42200
@global_var_a4d8 = constant [7 x i8] c"i2c-%d\00"
@global_var_9b4c = local_unnamed_addr constant i32 42208
@global_var_a4e0 = constant [13 x i8] c"/proc/mounts\00"
@global_var_9b50 = local_unnamed_addr constant i32 42224
@global_var_a4f0 = constant [24 x i8] c"%*[^ ] %[^ ] %[^ ] %*s\0A\00"
@global_var_9b54 = local_unnamed_addr constant i32 42248
@global_var_a508 = constant [6 x i8] c"sysfs\00"
@global_var_9b58 = local_unnamed_addr constant i32 42360
@global_var_a578 = local_unnamed_addr constant [15 x i8] c"/class/i2c-dev\00"
@global_var_a57c = local_unnamed_addr constant [11 x i8] c"ss/i2c-dev\00"
@global_var_a580 = local_unnamed_addr constant [7 x i8] c"2c-dev\00"
@global_var_a584 = local_unnamed_addr constant [3 x i8] c"ev\00"
@global_var_9b5c = local_unnamed_addr constant i32 41912
@global_var_a644 = constant [6 x i8] c"dummy\00"
@global_var_a64c = constant [10 x i8] c"Dummy bus\00"
@global_var_a658 = constant [4 x i8] c"isa\00"
@global_var_a65c = constant [8 x i8] c"ISA bus\00"
@global_var_a664 = constant [4 x i8] c"i2c\00"
@global_var_a668 = constant [12 x i8] c"I2C adapter\00"
@global_var_a674 = constant [6 x i8] c"smbus\00"
@global_var_a67c = constant [14 x i8] c"SMBus adapter\00"
@global_var_a68c = constant [8 x i8] c"unknown\00"
@global_var_a694 = constant [4 x i8] c"N/A\00"
@global_var_a3b8 = constant [10 x i8*] [i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_a644, i32 0, i32 0), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_a64c, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_a658, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_a65c, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_a664, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_a668, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_a674, i32 0, i32 0), i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_a67c, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_a68c, i32 0, i32 0), i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_a694, i32 0, i32 0)]
@global_var_9b60 = local_unnamed_addr constant i32 75848
@global_var_9b64 = local_unnamed_addr constant i32 42256
@global_var_a510 = constant [11 x i8] c"%s/%s/name\00"
@global_var_9b68 = local_unnamed_addr constant i32 42352
@global_var_a570 = constant [5 x i8] c"ISA \00"
@global_var_9b6c = local_unnamed_addr constant i32 42268
@global_var_a51c = constant [18 x i8] c"%s/%s/device/name\00"
@global_var_9b70 = local_unnamed_addr constant i32 42288
@global_var_a530 = constant [13 x i8] c"%s/%s/device\00"
@global_var_9b74 = local_unnamed_addr constant i32 42304
@global_var_a540 = constant [5 x i8] c"i2c-\00"
@global_var_9b78 = local_unnamed_addr constant i32 42312
@global_var_a548 = constant [21 x i8] c"%s/%s/device/%s/name\00"
@global_var_9b7c = local_unnamed_addr constant i32 42336
@global_var_a560 = constant [16 x i8] c"%s: read error\0A\00"
@global_var_9cb4 = local_unnamed_addr constant i32 75848
@global_var_9cb8 = local_unnamed_addr constant i32 42400
@global_var_a5a0 = constant [36 x i8] c"Error: I2C bus name is not unique!\0A\00"
@global_var_9cbc = local_unnamed_addr constant i32 42436
@global_var_a5c4 = constant [52 x i8] c"Error: I2C bus name doesn't match any bus present!\0A\00"
@global_var_9cc0 = local_unnamed_addr constant i32 42488
@global_var_a5f8 = constant [30 x i8] c"Error: I2C bus out of range!\0A\00"
@global_var_9cc4 = local_unnamed_addr constant i32 42376
@global_var_a588 = constant [23 x i8] c"Error: Out of memory!\0A\00"
@global_var_9d30 = local_unnamed_addr constant i32 75848
@global_var_9d34 = local_unnamed_addr constant i32 42520
@global_var_a618 = constant [44 x i8] c"Error: Could not set address to 0x%02x: %s\0A\00"
@global_var_9dd4 = local_unnamed_addr constant i32 75856
@global_var_9e34 = local_unnamed_addr constant i32 34992
@global_var_88b0 = global i32 75776
@global_var_9e38 = local_unnamed_addr constant i32 34980
@global_var_88a4 = global i32 5910
@global_var_9e00 = constant i32 -508534458
@0 = external global i32
@global_var_12848 = global %_IO_FILE* null
@global_var_9e3c = constant void ()* inttoptr (i32 -516948194 to void ()*)
@global_var_9dd8 = constant void ()* inttoptr (i32 -382908936 to void ()*)
@global_var_12854 = external local_unnamed_addr global i8*
@1 = internal constant [2 x i8] c"r\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_a586 = local_unnamed_addr constant i8 0
@global_var_12850 = local_unnamed_addr global %_IO_FILE* null
@global_var_a688 = constant [2 x i8] c"r\00"

define i32 @function_8928(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8928:
  %0 = call i32 @function_9264(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @calloc.23(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_8948:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @strcmp.10(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_8954:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @strtol.32(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_8960:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @printf.14(i8* %format, ...) local_unnamed_addr {
dec_label_pc_896c:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define %_IO_FILE* @fopen.3(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_8978:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !6
  ret %_IO_FILE* %0, !insn.addr !6
}

define i32 @fflush.12(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8984:
  %0 = call i32 @fflush(%_IO_FILE* %stream), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define void @free.33(i32* %ptr) local_unnamed_addr {
dec_label_pc_8990:
  call void @free(i32* %ptr), !insn.addr !8
  ret void, !insn.addr !8
}

define i8* @fgets.6(i8* %s, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_899c:
  %0 = call i8* @fgets(i8* %s, i32 %n, %_IO_FILE* %stream), !insn.addr !9
  ret i8* %0, !insn.addr !9
}

define i32* @realloc.22(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_89a8:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @strcasecmp.20(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_89b4:
  %0 = call i32 @strcasecmp(i8* %s1, i8* %s2), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @fwrite.19(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_89c0:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32 @ioctl.36(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_89cc:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !13
  ret i32 %0, !insn.addr !13
}

define i8* @strcpy.29(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_89d8:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !14
  ret i8* %0, !insn.addr !14
}

define %__dirstream* @opendir.38(i8* %name) local_unnamed_addr {
dec_label_pc_89e4:
  %0 = call %__dirstream* @opendir(i8* %name), !insn.addr !15
  ret %__dirstream* %0, !insn.addr !15
}

define i32* @malloc.25(i32 %size) local_unnamed_addr {
dec_label_pc_89f0:
  %0 = call i32* @malloc(i32 %size), !insn.addr !16
  ret i32* %0, !insn.addr !16
}

define i32 @__libc_start_main.15(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_89fc:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i8* @strerror.24(i32 %errnum) local_unnamed_addr {
dec_label_pc_8a08:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !18
  ret i8* %0, !insn.addr !18
}

define void @function_8a14() local_unnamed_addr {
dec_label_pc_8a14:
  call void @__gmon_start__(), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @open.28(i8* %file, i32 %oflag, ...) local_unnamed_addr {
dec_label_pc_8a20:
  %0 = call i32 (i8*, i32, ...) @open(i8* %file, i32 %oflag), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define void @exit.31(i32 %status) local_unnamed_addr {
dec_label_pc_8a2c:
  call void @exit(i32 %status), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @strtoul.7(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_8a38:
  %0 = call i32 @strtoul(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @strlen.21(i8* %s) local_unnamed_addr {
dec_label_pc_8a44:
  %0 = call i32 @strlen(i8* %s), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i8* @strchr.37(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_8a50:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !24
  ret i8* %0, !insn.addr !24
}

define i32 @fprintf.2(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8a5c:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32* @__errno_location.27() local_unnamed_addr {
dec_label_pc_8a68:
  %0 = call i32* @__errno_location(), !insn.addr !26
  ret i32* %0, !insn.addr !26
}

define i32 @snprintf.5(i8* %s, i32 %maxlen, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8a74:
  %0 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %s, i32 %maxlen, i8* %format), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @sscanf.8(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8a80:
  %0 = call i32 (i8*, i8*, ...) @sscanf(i8* %s, i8* %format), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i8* @__strdup.17(i8* %string) local_unnamed_addr {
dec_label_pc_8a8c:
  %0 = call i8* @__strdup(i8* %string), !insn.addr !29
  ret i8* %0, !insn.addr !29
}

define i32* @memset.9(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_8a98:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !30
  ret i32* %0, !insn.addr !30
}

define i32 @fgetc.35(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8aa4:
  %0 = call i32 @fgetc(%_IO_FILE* %stream), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @fclose.34(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8ab0:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define %dirent* @readdir.4(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_8abc:
  %0 = call %dirent* @readdir(%__dirstream* %dirp), !insn.addr !33
  ret %dirent* %0, !insn.addr !33
}

define i8* @strrchr.30(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_8ac8:
  %0 = call i8* @strrchr(i8* %s, i32 %c), !insn.addr !34
  ret i8* %0, !insn.addr !34
}

define i32 @sprintf.26(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8ad4:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define i32 @strncmp.18(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_8ae0:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !36
  ret i32 %0, !insn.addr !36
}

define void @abort.11() local_unnamed_addr {
dec_label_pc_8aec:
  call void @abort(), !insn.addr !37
  ret void, !insn.addr !37
}

define i32 @close.13(i32 %fd) local_unnamed_addr {
dec_label_pc_8af8:
  %0 = call i32 @close(i32 %fd), !insn.addr !38
  ret i32 %0, !insn.addr !38
}

define i32 @closedir.16(%__dirstream* %dirp) local_unnamed_addr {
dec_label_pc_8b04:
  %0 = call i32 @closedir(%__dirstream* %dirp), !insn.addr !39
  ret i32 %0, !insn.addr !39
}

define i32 @function_8b10(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8b10:
  %0 = alloca i32
  %r7.4.reg2mem = alloca i32, !insn.addr !40
  %r0.5.reg2mem = alloca i32, !insn.addr !40
  %r0.4.reg2mem = alloca i32, !insn.addr !40
  %r7.3.reg2mem = alloca i32, !insn.addr !40
  %r2.2.reg2mem = alloca i32, !insn.addr !40
  %r0.3.reg2mem = alloca i32, !insn.addr !40
  %storemerge2.reg2mem = alloca i32, !insn.addr !40
  %r8.6.reg2mem = alloca i32, !insn.addr !40
  %storemerge.reg2mem = alloca i32, !insn.addr !40
  %r4.0.reg2mem = alloca i32, !insn.addr !40
  %storemerge3.reg2mem = alloca i32, !insn.addr !40
  %r8.5.reg2mem = alloca i32, !insn.addr !40
  %r3.2.reg2mem = alloca i32, !insn.addr !40
  %r2.1.reg2mem = alloca i32, !insn.addr !40
  %r1.2.reg2mem = alloca i32, !insn.addr !40
  %r0.2.reg2mem = alloca i32, !insn.addr !40
  %sb.1.reg2mem = alloca i32, !insn.addr !40
  %r8.4.reg2mem = alloca i32, !insn.addr !40
  %r0.111.reg2mem = alloca i32, !insn.addr !40
  %r1.112.reg2mem = alloca i32, !insn.addr !40
  %r2.013.reg2mem = alloca i32, !insn.addr !40
  %r3.114.reg2mem = alloca i32, !insn.addr !40
  %r6.215.reg2mem = alloca i32, !insn.addr !40
  %r7.216.reg2mem = alloca i32, !insn.addr !40
  %fp.118.reg2mem = alloca i32, !insn.addr !40
  %.lcssa20.reg2mem = alloca i32, !insn.addr !40
  %.lcssa22.reg2mem = alloca i32, !insn.addr !40
  %r8.1.reg2mem = alloca i32, !insn.addr !40
  %r7.1.reg2mem = alloca i32, !insn.addr !40
  %r6.1.reg2mem = alloca i32, !insn.addr !40
  %r1.024.reg2mem = alloca i32, !insn.addr !40
  %r6.025.reg2mem = alloca i32, !insn.addr !40
  %r7.026.reg2mem = alloca i32, !insn.addr !40
  %r8.027.reg2mem = alloca i32, !insn.addr !40
  %.reg2mem79 = alloca i32, !insn.addr !40
  %.reg2mem77 = alloca i32, !insn.addr !40
  %.reg2mem = alloca i8*, !insn.addr !40
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %stack_var_-168 = alloca i32, align 4
  %stack_var_-188 = alloca i8*, align 4
  %5 = icmp slt i32 %arg1, 2, !insn.addr !41
  store i32 0, i32* %fp.118.reg2mem, !insn.addr !41
  store i32 0, i32* %r7.216.reg2mem, !insn.addr !41
  store i32 0, i32* %r6.215.reg2mem, !insn.addr !41
  store i32 1, i32* %r1.112.reg2mem, !insn.addr !41
  store i32 %arg2, i32* %r0.111.reg2mem, !insn.addr !41
  br i1 %5, label %dec_label_pc_8b9c, label %dec_label_pc_8b40.preheader, !insn.addr !41

dec_label_pc_8b40.preheader:                      ; preds = %dec_label_pc_8b10
  %6 = add i32 %arg2, 4, !insn.addr !42
  %7 = inttoptr i32 %6 to i32*, !insn.addr !42
  %8 = load i32, i32* %7, align 4, !insn.addr !42
  %9 = inttoptr i32 %8 to i8*, !insn.addr !43
  %10 = load i8, i8* %9, align 1, !insn.addr !43
  %11 = icmp eq i8 %10, 45, !insn.addr !44
  store i8* %9, i8** %.reg2mem, !insn.addr !45
  store i32 %8, i32* %.reg2mem77, !insn.addr !45
  store i32 %6, i32* %.reg2mem79, !insn.addr !45
  store i32 0, i32* %r8.027.reg2mem, !insn.addr !45
  store i32 0, i32* %r7.026.reg2mem, !insn.addr !45
  store i32 0, i32* %r6.025.reg2mem, !insn.addr !45
  store i32 1, i32* %r1.024.reg2mem, !insn.addr !45
  store i32 0, i32* %fp.118.reg2mem, !insn.addr !45
  store i32 0, i32* %r7.216.reg2mem, !insn.addr !45
  store i32 0, i32* %r6.215.reg2mem, !insn.addr !45
  store i32 %8, i32* %r2.013.reg2mem, !insn.addr !45
  store i32 1, i32* %r1.112.reg2mem, !insn.addr !45
  store i32 %6, i32* %r0.111.reg2mem, !insn.addr !45
  br i1 %11, label %dec_label_pc_8b50, label %dec_label_pc_8b9c, !insn.addr !45

dec_label_pc_8b40:                                ; preds = %dec_label_pc_8b84
  %12 = add i32 %.reload80, 4, !insn.addr !42
  %13 = inttoptr i32 %12 to i32*, !insn.addr !42
  %14 = load i32, i32* %13, align 4, !insn.addr !42
  %15 = inttoptr i32 %14 to i8*, !insn.addr !43
  %16 = load i8, i8* %15, align 1, !insn.addr !43
  %17 = icmp eq i8 %16, 45, !insn.addr !44
  store i8* %15, i8** %.reg2mem, !insn.addr !45
  store i32 %14, i32* %.reg2mem77, !insn.addr !45
  store i32 %12, i32* %.reg2mem79, !insn.addr !45
  store i32 %r8.1.reload, i32* %r8.027.reg2mem, !insn.addr !45
  store i32 %r7.1.reload, i32* %r7.026.reg2mem, !insn.addr !45
  store i32 %r6.1.reload, i32* %r6.025.reg2mem, !insn.addr !45
  store i32 %24, i32* %r1.024.reg2mem, !insn.addr !45
  store i32 %12, i32* %.lcssa22.reg2mem, !insn.addr !45
  store i32 %14, i32* %.lcssa20.reg2mem, !insn.addr !45
  br i1 %17, label %dec_label_pc_8b50, label %dec_label_pc_8b94, !insn.addr !45

dec_label_pc_8b50:                                ; preds = %dec_label_pc_8b40.preheader, %dec_label_pc_8b40
  %r1.024.reload = load i32, i32* %r1.024.reg2mem
  %r6.025.reload = load i32, i32* %r6.025.reg2mem
  %r7.026.reload = load i32, i32* %r7.026.reg2mem
  %r8.027.reload = load i32, i32* %r8.027.reg2mem
  %.reload80 = load i32, i32* %.reg2mem79
  %.reload78 = load i32, i32* %.reg2mem77
  %18 = add i32 %.reload78, 1, !insn.addr !46
  %19 = inttoptr i32 %18 to i8*, !insn.addr !46
  %20 = load i8, i8* %19, align 1, !insn.addr !46
  store i32 1, i32* %r6.1.reg2mem
  store i32 %r7.026.reload, i32* %r7.1.reg2mem
  store i32 %r8.027.reload, i32* %r8.1.reg2mem
  switch i8 %20, label %dec_label_pc_8b6c [
    i8 102, label %dec_label_pc_8b84
    i8 121, label %dec_label_pc_8c30
    i8 86, label %dec_label_pc_8c28
  ]

dec_label_pc_8b6c:                                ; preds = %dec_label_pc_8b50
  %.reload = load i8*, i8** %.reg2mem
  %21 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !47
  %22 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %21, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_9fac, i32 0, i32 0), i8* %.reload), !insn.addr !48
  %23 = call i32 @function_935c(i32 %22, i32 ptrtoint ([33 x i8]* @global_var_9fac to i32), i32 %.reload78, i32 ptrtoint (%_IO_FILE** @global_var_12848 to i32)), !insn.addr !49
  unreachable, !insn.addr !49

dec_label_pc_8b84:                                ; preds = %dec_label_pc_8b50, %dec_label_pc_8c30, %dec_label_pc_8c28
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %24 = add nuw nsw i32 %r1.024.reload, 1, !insn.addr !50
  %25 = icmp slt i32 %24, %arg1, !insn.addr !51
  store i32 %.reload80, i32* %.lcssa22.reg2mem, !insn.addr !51
  store i32 %.reload78, i32* %.lcssa20.reg2mem, !insn.addr !51
  br i1 %25, label %dec_label_pc_8b40, label %dec_label_pc_8b94, !insn.addr !51

dec_label_pc_8b94:                                ; preds = %dec_label_pc_8b84, %dec_label_pc_8b40
  %.lcssa20.reload = load i32, i32* %.lcssa20.reg2mem
  %.lcssa22.reload = load i32, i32* %.lcssa22.reg2mem
  %26 = zext i8 %20 to i32, !insn.addr !46
  %27 = icmp eq i32 %r8.1.reload, 0, !insn.addr !52
  store i32 %r1.024.reload, i32* %fp.118.reg2mem, !insn.addr !53
  store i32 %r7.1.reload, i32* %r7.216.reg2mem, !insn.addr !53
  store i32 %r6.1.reload, i32* %r6.215.reg2mem, !insn.addr !53
  store i32 %26, i32* %r3.114.reg2mem, !insn.addr !53
  store i32 %.lcssa20.reload, i32* %r2.013.reg2mem, !insn.addr !53
  store i32 %24, i32* %r1.112.reg2mem, !insn.addr !53
  store i32 %.lcssa22.reload, i32* %r0.111.reg2mem, !insn.addr !53
  br i1 %27, label %dec_label_pc_8b9c, label %dec_label_pc_8c38, !insn.addr !53

dec_label_pc_8b9c:                                ; preds = %dec_label_pc_8b40.preheader, %dec_label_pc_8b10, %dec_label_pc_8b94
  %r0.111.reload = load i32, i32* %r0.111.reg2mem
  %r1.112.reload = load i32, i32* %r1.112.reg2mem
  %r2.013.reload = load i32, i32* %r2.013.reg2mem
  %r3.114.reload = load i32, i32* %r3.114.reg2mem
  %fp.118.reload = load i32, i32* %fp.118.reg2mem
  %28 = add nuw i32 %fp.118.reload, 2, !insn.addr !54
  %29 = icmp slt i32 %28, %arg1, !insn.addr !55
  store i32 %r0.111.reload, i32* %r0.2.reg2mem, !insn.addr !55
  store i32 %r1.112.reload, i32* %r1.2.reg2mem, !insn.addr !55
  store i32 %r2.013.reload, i32* %r2.1.reg2mem, !insn.addr !55
  store i32 %r3.114.reload, i32* %r3.2.reg2mem, !insn.addr !55
  br i1 %29, label %dec_label_pc_8ba8, label %dec_label_pc_8c6c, !insn.addr !55

dec_label_pc_8ba8:                                ; preds = %dec_label_pc_8b9c
  %30 = mul i32 %r1.112.reload, 4, !insn.addr !56
  %31 = add i32 %30, %arg2, !insn.addr !56
  %32 = inttoptr i32 %31 to i32*, !insn.addr !56
  %33 = load i32, i32* %32, align 4, !insn.addr !56
  %34 = call i32 @function_9b80(i32 %33), !insn.addr !57
  %35 = icmp slt i32 %34, 0, !insn.addr !58
  store i32 %34, i32* %r0.2.reg2mem, !insn.addr !59
  store i32 %r1.112.reload, i32* %r1.2.reg2mem, !insn.addr !59
  store i32 %r2.013.reload, i32* %r2.1.reg2mem, !insn.addr !59
  store i32 %r3.114.reload, i32* %r3.2.reg2mem, !insn.addr !59
  br i1 %35, label %dec_label_pc_8c6c, label %dec_label_pc_8bb8, !insn.addr !59

dec_label_pc_8bb8:                                ; preds = %dec_label_pc_8ba8
  %36 = mul i32 %28, 4, !insn.addr !60
  %37 = add i32 %36, %arg2, !insn.addr !60
  %38 = inttoptr i32 %37 to i32*, !insn.addr !60
  %39 = load i32, i32* %38, align 4, !insn.addr !60
  %40 = call i32 @function_9468(i32 %39), !insn.addr !61
  %41 = icmp slt i32 %40, 0, !insn.addr !62
  store i32 %40, i32* %r0.2.reg2mem, !insn.addr !63
  store i32 %r1.112.reload, i32* %r1.2.reg2mem, !insn.addr !63
  store i32 %r2.013.reload, i32* %r2.1.reg2mem, !insn.addr !63
  store i32 %r3.114.reload, i32* %r3.2.reg2mem, !insn.addr !63
  br i1 %41, label %dec_label_pc_8c6c, label %dec_label_pc_8bcc, !insn.addr !63

dec_label_pc_8bcc:                                ; preds = %dec_label_pc_8bb8
  %r6.215.reload = load i32, i32* %r6.215.reg2mem
  %r7.216.reload = load i32, i32* %r7.216.reg2mem
  %42 = add nuw i32 %fp.118.reload, 3, !insn.addr !64
  %43 = icmp slt i32 %42, %arg1, !insn.addr !65
  store i32 1, i32* %r8.4.reg2mem, !insn.addr !66
  store i32 -1, i32* %sb.1.reg2mem, !insn.addr !66
  br i1 %43, label %dec_label_pc_8c70, label %dec_label_pc_8be0, !insn.addr !66

dec_label_pc_8be0:                                ; preds = %dec_label_pc_8c94, %dec_label_pc_8bcc
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %r8.4.reload = load i32, i32* %r8.4.reg2mem
  %44 = add nuw i32 %fp.118.reload, 4, !insn.addr !67
  %45 = icmp slt i32 %44, %arg1, !insn.addr !68
  store i32 %r8.4.reload, i32* %r8.5.reg2mem, !insn.addr !68
  store i32 0, i32* %storemerge3.reg2mem, !insn.addr !68
  br i1 %45, label %dec_label_pc_8bec, label %dec_label_pc_8ca8, !insn.addr !68

dec_label_pc_8bec:                                ; preds = %dec_label_pc_8be0
  %46 = mul i32 %44, 4, !insn.addr !69
  %47 = add i32 %46, %arg2, !insn.addr !69
  %48 = inttoptr i32 %47 to i32*, !insn.addr !69
  %49 = load i32, i32* %48, align 4, !insn.addr !69
  %50 = inttoptr i32 %49 to i8*, !insn.addr !70
  %51 = load i8, i8* %50, align 1, !insn.addr !70
  store i32 1, i32* %r8.6.reg2mem
  switch i8 %51, label %dec_label_pc_8c0c [
    i8 99, label %dec_label_pc_8e0c
    i8 119, label %dec_label_pc_8e28
    i8 98, label %dec_label_pc_8e20
  ]

dec_label_pc_8c0c:                                ; preds = %dec_label_pc_8bec
  %52 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !71
  %53 = ptrtoint %_IO_FILE* %52 to i32, !insn.addr !71
  %54 = call i32 @fwrite(i32* bitcast ([22 x i8]* @global_var_a00c to i32*), i32 1, i32 21, %_IO_FILE* %52), !insn.addr !72
  %55 = call i32 @function_935c(i32 %54, i32 1, i32 21, i32 %53), !insn.addr !73
  unreachable, !insn.addr !73

dec_label_pc_8c28:                                ; preds = %dec_label_pc_8b50
  store i32 %r6.025.reload, i32* %r6.1.reg2mem, !insn.addr !74
  store i32 %r7.026.reload, i32* %r7.1.reg2mem, !insn.addr !74
  store i32 1, i32* %r8.1.reg2mem, !insn.addr !74
  br label %dec_label_pc_8b84, !insn.addr !74

dec_label_pc_8c30:                                ; preds = %dec_label_pc_8b50
  store i32 %r6.025.reload, i32* %r6.1.reg2mem, !insn.addr !75
  store i32 1, i32* %r7.1.reg2mem, !insn.addr !75
  store i32 %r8.027.reload, i32* %r8.1.reg2mem, !insn.addr !75
  br label %dec_label_pc_8b84, !insn.addr !75

dec_label_pc_8c38:                                ; preds = %dec_label_pc_8b94
  %56 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !76
  %57 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %56, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_9fd0, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_9fe4, i32 0, i32 0)), !insn.addr !77
  call void @exit(i32 0), !insn.addr !78
  unreachable, !insn.addr !78

dec_label_pc_8c54:                                ; preds = %dec_label_pc_8c70, %dec_label_pc_8c94
  %58 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !79
  %59 = ptrtoint %_IO_FILE* %58 to i32, !insn.addr !79
  %60 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_9fec to i32*), i32 1, i32 29, %_IO_FILE* %58), !insn.addr !80
  store i32 %60, i32* %r0.2.reg2mem, !insn.addr !80
  store i32 1, i32* %r1.2.reg2mem, !insn.addr !80
  store i32 29, i32* %r2.1.reg2mem, !insn.addr !80
  store i32 %59, i32* %r3.2.reg2mem, !insn.addr !80
  br label %dec_label_pc_8c6c, !insn.addr !80

dec_label_pc_8c6c:                                ; preds = %dec_label_pc_8b9c, %dec_label_pc_8c54, %dec_label_pc_8bb8, %dec_label_pc_8ba8
  %r3.2.reload = load i32, i32* %r3.2.reg2mem
  %r2.1.reload = load i32, i32* %r2.1.reg2mem
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %r0.2.reload = load i32, i32* %r0.2.reg2mem
  %61 = call i32 @function_935c(i32 %r0.2.reload, i32 %r1.2.reload, i32 %r2.1.reload, i32 %r3.2.reload), !insn.addr !81
  unreachable, !insn.addr !81

dec_label_pc_8c70:                                ; preds = %dec_label_pc_8bcc
  %62 = mul i32 %42, 4, !insn.addr !82
  %63 = add i32 %62, %arg2, !insn.addr !82
  %64 = inttoptr i32 %63 to i32*, !insn.addr !82
  %65 = load i32, i32* %64, align 4, !insn.addr !82
  %66 = inttoptr i32 %65 to i8*, !insn.addr !83
  %67 = call i32 @strtol(i8* %66, i8** nonnull %stack_var_-188, i32 0), !insn.addr !83
  %68 = load i8*, i8** %stack_var_-188, align 4, !insn.addr !84
  %69 = load i8, i8* %68, align 1, !insn.addr !85
  %70 = icmp eq i8 %69, 0, !insn.addr !86
  br i1 %70, label %dec_label_pc_8c94, label %dec_label_pc_8c54, !insn.addr !87

dec_label_pc_8c94:                                ; preds = %dec_label_pc_8c70
  %71 = icmp ult i32 %67, 255, !insn.addr !88
  %72 = icmp ne i1 %71, true, !insn.addr !88
  %73 = icmp eq i32 %67, 255, !insn.addr !88
  %74 = icmp ne i1 %73, true, !insn.addr !89
  %75 = icmp eq i1 %72, %74, !insn.addr !89
  store i32 2, i32* %r8.4.reg2mem, !insn.addr !89
  store i32 %67, i32* %sb.1.reg2mem, !insn.addr !89
  br i1 %75, label %dec_label_pc_8c54, label %dec_label_pc_8be0, !insn.addr !89

dec_label_pc_8ca8:                                ; preds = %dec_label_pc_8be0, %dec_label_pc_8e0c
  %76 = call i32 @function_94fc(i32 %34, i32* nonnull %stack_var_-168, i32 20, i32 0), !insn.addr !90
  %77 = icmp slt i32 %76, 0, !insn.addr !91
  br i1 %77, label %dec_label_pc_8e00, label %dec_label_pc_8cc4, !insn.addr !92

dec_label_pc_8cc4:                                ; preds = %dec_label_pc_8ca8
  %78 = call i32 (i32, i32, ...) @ioctl(i32 %76, i32 1797), !insn.addr !93
  %79 = icmp slt i32 %78, 0, !insn.addr !94
  br i1 %79, label %dec_label_pc_9164, label %dec_label_pc_8cd8, !insn.addr !95

dec_label_pc_8cd8:                                ; preds = %dec_label_pc_8cc4
  %storemerge3.reload = load i32, i32* %storemerge3.reg2mem
  %r8.5.reload = load i32, i32* %r8.5.reg2mem
  switch i32 %r8.5.reload, label %dec_label_pc_8cec [
    i32 2, label %dec_label_pc_8e50
    i32 3, label %dec_label_pc_8e30
  ]

dec_label_pc_8cec:                                ; preds = %dec_label_pc_8cd8
  %80 = and i32 %4, 131072, !insn.addr !96
  %81 = icmp eq i32 %80, 0, !insn.addr !96
  br i1 %81, label %dec_label_pc_914c, label %dec_label_pc_8cf4, !insn.addr !97

dec_label_pc_8cf4:                                ; preds = %dec_label_pc_8cec
  %82 = icmp ne i32 %sb.1.reload, -1, !insn.addr !98
  %83 = and i32 %4, 262144, !insn.addr !99
  %84 = icmp eq i32 %83, 0, !insn.addr !99
  %or.cond = icmp eq i1 %84, %82
  br i1 %or.cond, label %dec_label_pc_918c, label %dec_label_pc_8d04, !insn.addr !100

dec_label_pc_8d04:                                ; preds = %dec_label_pc_8cf4, %dec_label_pc_8e50, %dec_label_pc_8e30
  %85 = icmp ne i32 %storemerge3.reload, 0, !insn.addr !101
  %86 = and i32 %4, 9, !insn.addr !102
  %87 = icmp eq i32 %86, 0, !insn.addr !102
  %or.cond6 = icmp eq i1 %87, %85
  br i1 %or.cond6, label %dec_label_pc_8d14, label %dec_label_pc_8d2c, !insn.addr !103

dec_label_pc_8d14:                                ; preds = %dec_label_pc_8d04
  %88 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !104
  %89 = call i32 @fwrite(i32* bitcast ([47 x i8]* @global_var_a0d0 to i32*), i32 1, i32 46, %_IO_FILE* %88), !insn.addr !105
  br label %dec_label_pc_8d2c, !insn.addr !105

dec_label_pc_8d2c:                                ; preds = %dec_label_pc_8d04, %dec_label_pc_8d14
  %90 = call i32 @function_9cc8(i32 %76, i32 %40, i32 %r6.215.reload), !insn.addr !106
  %91 = icmp eq i32 %90, 0, !insn.addr !107
  br i1 %91, label %dec_label_pc_8d44, label %dec_label_pc_8e00, !insn.addr !108

dec_label_pc_8d44:                                ; preds = %dec_label_pc_8d2c
  %92 = icmp eq i32 %r7.216.reload, 0, !insn.addr !109
  br i1 %92, label %dec_label_pc_8f30, label %dec_label_pc_8d4c, !insn.addr !110

dec_label_pc_8d4c:                                ; preds = %dec_label_pc_8fd4, %dec_label_pc_8d44
  %93 = icmp eq i32 %storemerge3.reload, 0, !insn.addr !111
  br i1 %93, label %dec_label_pc_8d54, label %dec_label_pc_8dbc, !insn.addr !112

dec_label_pc_8d54:                                ; preds = %dec_label_pc_8dbc, %dec_label_pc_8d4c
  %94 = icmp eq i32 %r8.5.reload, 1, !insn.addr !113
  br i1 %94, label %dec_label_pc_8eb4, label %dec_label_pc_8d5c, !insn.addr !114

dec_label_pc_8d5c:                                ; preds = %dec_label_pc_8d54
  %95 = icmp eq i32 %r8.5.reload, 3, !insn.addr !115
  %96 = call i32 (i32, i32, ...) @ioctl(i32 %76, i32 1824)
  %97 = icmp eq i32 %96, 0
  br i1 %95, label %dec_label_pc_8e70, label %dec_label_pc_8d64, !insn.addr !116

dec_label_pc_8d64:                                ; preds = %dec_label_pc_8d5c
  br i1 %97, label %dec_label_pc_8d98, label %dec_label_pc_9128, !insn.addr !117

dec_label_pc_8d98:                                ; preds = %dec_label_pc_8d64
  %98 = urem i32 %3, 256, !insn.addr !118
  %99 = call i32 @close(i32 %76), !insn.addr !119
  store i32 %98, i32* %r4.0.reg2mem, !insn.addr !119
  store i32 2, i32* %storemerge.reg2mem, !insn.addr !119
  br label %dec_label_pc_8da8, !insn.addr !119

dec_label_pc_8da8:                                ; preds = %dec_label_pc_8d98, %dec_label_pc_8f24, %dec_label_pc_8ea0
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %100 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_a3b0, i32 0, i32 0), i32 %storemerge.reload, i32 %r4.0.reload), !insn.addr !120
  call void @exit(i32 0), !insn.addr !121
  unreachable, !insn.addr !121

dec_label_pc_8dbc:                                ; preds = %dec_label_pc_8d4c
  %101 = call i32 (i32, i32, ...) @ioctl(i32 %76, i32 1800), !insn.addr !122
  %102 = icmp slt i32 %101, 0, !insn.addr !123
  br i1 %102, label %dec_label_pc_8dd4, label %dec_label_pc_8d54, !insn.addr !124

dec_label_pc_8dd4:                                ; preds = %dec_label_pc_8dbc
  %103 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !125
  %104 = call i32* @__errno_location(), !insn.addr !126
  %105 = load i32, i32* %104, align 4, !insn.addr !127
  %106 = call i8* @strerror(i32 %105), !insn.addr !128
  %107 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %103, i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_a364, i32 0, i32 0), i8* %106), !insn.addr !129
  %108 = call i32 @close(i32 %76), !insn.addr !130
  br label %dec_label_pc_8e00, !insn.addr !130

dec_label_pc_8e00:                                ; preds = %dec_label_pc_8d2c, %dec_label_pc_918c, %dec_label_pc_9164, %dec_label_pc_914c, %dec_label_pc_8e58, %dec_label_pc_8e38, %dec_label_pc_8dd4, %dec_label_pc_8ca8
  call void @exit(i32 1), !insn.addr !131
  unreachable, !insn.addr !131

dec_label_pc_8e0c:                                ; preds = %dec_label_pc_8bec, %dec_label_pc_8e28, %dec_label_pc_8e20
  %r8.6.reload = load i32, i32* %r8.6.reg2mem
  %109 = add i32 %49, 1, !insn.addr !132
  %110 = inttoptr i32 %109 to i8*, !insn.addr !132
  %111 = load i8, i8* %110, align 1, !insn.addr !132
  %112 = icmp ne i8 %111, 112, !insn.addr !133
  %113 = icmp ne i1 %112, true, !insn.addr !133
  %114 = zext i1 %113 to i32, !insn.addr !134
  store i32 %r8.6.reload, i32* %r8.5.reg2mem, !insn.addr !135
  store i32 %114, i32* %storemerge3.reg2mem, !insn.addr !135
  br label %dec_label_pc_8ca8, !insn.addr !135

dec_label_pc_8e20:                                ; preds = %dec_label_pc_8bec
  store i32 2, i32* %r8.6.reg2mem, !insn.addr !136
  br label %dec_label_pc_8e0c, !insn.addr !136

dec_label_pc_8e28:                                ; preds = %dec_label_pc_8bec
  store i32 3, i32* %r8.6.reg2mem, !insn.addr !137
  br label %dec_label_pc_8e0c, !insn.addr !137

dec_label_pc_8e30:                                ; preds = %dec_label_pc_8cd8
  %115 = and i32 %4, 2097152, !insn.addr !138
  %116 = icmp eq i32 %115, 0, !insn.addr !138
  br i1 %116, label %dec_label_pc_8e38, label %dec_label_pc_8d04, !insn.addr !139

dec_label_pc_8e38:                                ; preds = %dec_label_pc_8e30
  %117 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !140
  %118 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %117, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a060, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_a0c0, i32 0, i32 0)), !insn.addr !141
  br label %dec_label_pc_8e00, !insn.addr !142

dec_label_pc_8e50:                                ; preds = %dec_label_pc_8cd8
  %119 = and i32 %4, 524288, !insn.addr !143
  %120 = icmp eq i32 %119, 0, !insn.addr !143
  br i1 %120, label %dec_label_pc_8e58, label %dec_label_pc_8d04, !insn.addr !144

dec_label_pc_8e58:                                ; preds = %dec_label_pc_8e50
  %121 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !145
  %122 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %121, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a060, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_a0b0, i32 0, i32 0)), !insn.addr !146
  br label %dec_label_pc_8e00, !insn.addr !147

dec_label_pc_8e70:                                ; preds = %dec_label_pc_8d5c
  br i1 %97, label %dec_label_pc_8ea0, label %dec_label_pc_9128, !insn.addr !148

dec_label_pc_8ea0:                                ; preds = %dec_label_pc_8e70
  %123 = urem i32 %2, 65536, !insn.addr !149
  %124 = call i32 @close(i32 %76), !insn.addr !150
  store i32 %123, i32* %r4.0.reg2mem, !insn.addr !151
  store i32 4, i32* %storemerge.reg2mem, !insn.addr !151
  br label %dec_label_pc_8da8, !insn.addr !151

dec_label_pc_8eb4:                                ; preds = %dec_label_pc_8d54
  %125 = icmp eq i32 %sb.1.reload, -1, !insn.addr !152
  br i1 %125, label %dec_label_pc_8eec, label %dec_label_pc_8ec0, !insn.addr !153

dec_label_pc_8ec0:                                ; preds = %dec_label_pc_8eb4
  %126 = call i32 (i32, i32, ...) @ioctl(i32 %76, i32 1824), !insn.addr !154
  %127 = icmp slt i32 %126, 0, !insn.addr !155
  br i1 %127, label %dec_label_pc_9108, label %dec_label_pc_8eec, !insn.addr !156

dec_label_pc_8eec:                                ; preds = %dec_label_pc_9108, %dec_label_pc_8ec0, %dec_label_pc_8eb4
  %128 = call i32 (i32, i32, ...) @ioctl(i32 %76, i32 1824), !insn.addr !157
  %129 = icmp eq i32 %128, 0, !insn.addr !158
  br i1 %129, label %dec_label_pc_8f24, label %dec_label_pc_9128, !insn.addr !159

dec_label_pc_8f24:                                ; preds = %dec_label_pc_8eec
  %130 = urem i32 %1, 256, !insn.addr !160
  %131 = call i32 @close(i32 %76), !insn.addr !161
  store i32 %130, i32* %r4.0.reg2mem, !insn.addr !162
  store i32 2, i32* %storemerge.reg2mem, !insn.addr !162
  br label %dec_label_pc_8da8, !insn.addr !162

dec_label_pc_8f30:                                ; preds = %dec_label_pc_8d44
  %132 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !163
  %133 = call i32 @fwrite(i32* bitcast ([76 x i8]* @global_var_a100 to i32*), i32 1, i32 75, %_IO_FILE* %132), !insn.addr !164
  %134 = add i32 %40, -80, !insn.addr !165
  %135 = icmp ult i32 %134, 7, !insn.addr !166
  %136 = icmp ne i1 %135, true, !insn.addr !166
  %137 = icmp eq i32 %134, 7, !insn.addr !166
  %138 = icmp ne i1 %137, true, !insn.addr !167
  %139 = icmp eq i1 %136, %138, !insn.addr !167
  br i1 %139, label %dec_label_pc_9028, label %dec_label_pc_8f58, !insn.addr !167

dec_label_pc_8f58:                                ; preds = %dec_label_pc_8f30
  %140 = icmp eq i32 %storemerge3.reload, 0, !insn.addr !168
  br i1 %140, label %dec_label_pc_8f60, label %dec_label_pc_90f0, !insn.addr !169

dec_label_pc_8f60:                                ; preds = %dec_label_pc_8f58
  %141 = icmp slt i32 %sb.1.reload, 0, !insn.addr !170
  %142 = icmp eq i32 %sb.1.reload, 0, !insn.addr !170
  %143 = icmp eq i32 %r8.5.reload, 1
  %spec.select7 = select i1 %141, i1 %142, i1 %143
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !171
  br i1 %spec.select7, label %dec_label_pc_8f7c, label %dec_label_pc_9064, !insn.addr !171

dec_label_pc_8f7c:                                ; preds = %dec_label_pc_9040, %dec_label_pc_8f60, %dec_label_pc_9048
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  %144 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !172
  %145 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %144, i8* getelementptr inbounds ([55 x i8], [55 x i8]* @global_var_a2ac, i32 0, i32 0), i32* nonnull %stack_var_-168, i32 %40), !insn.addr !173
  %146 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !174
  %147 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %146, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_a2fc, i32 0, i32 0), i32 %sb.1.reload), !insn.addr !175
  %148 = icmp eq i32 %sb.1.reload, -1, !insn.addr !176
  %149 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !177
  %150 = ptrtoint %_IO_FILE* %149 to i32, !insn.addr !177
  store i32 %150, i32* %r0.3.reg2mem, !insn.addr !178
  store i32 ptrtoint ([21 x i8]* @global_var_9f60 to i32), i32* %r2.2.reg2mem, !insn.addr !178
  store i32 %storemerge2.reload, i32* %r7.3.reg2mem, !insn.addr !178
  store i32 %150, i32* %r0.5.reg2mem, !insn.addr !178
  store i32 %storemerge2.reload, i32* %r7.4.reg2mem, !insn.addr !178
  br i1 %148, label %dec_label_pc_90e8, label %dec_label_pc_8fb0, !insn.addr !178

dec_label_pc_8fb0:                                ; preds = %dec_label_pc_90a4, %dec_label_pc_90bc, %dec_label_pc_8f7c, %dec_label_pc_90e8
  %r7.3.reload = load i32, i32* %r7.3.reg2mem
  %r2.2.reload = load i32, i32* %r2.2.reg2mem
  %r0.3.reload = load i32, i32* %r0.3.reg2mem
  %151 = inttoptr i32 %r0.3.reload to %_IO_FILE*, !insn.addr !179
  %152 = inttoptr i32 %r2.2.reload to i8*, !insn.addr !179
  %153 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %151, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_a310, i32 0, i32 0), i8* %152), !insn.addr !179
  %154 = icmp eq i32 %storemerge3.reload, 0, !insn.addr !180
  br i1 %154, label %dec_label_pc_8fd4, label %dec_label_pc_8fc0, !insn.addr !181

dec_label_pc_8fc0:                                ; preds = %dec_label_pc_8fb0
  %155 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !182
  %156 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_a320 to i32*), i32 1, i32 22, %_IO_FILE* %155), !insn.addr !183
  br label %dec_label_pc_8fd4, !insn.addr !183

dec_label_pc_8fd4:                                ; preds = %dec_label_pc_8fc0, %dec_label_pc_8fb0
  %157 = icmp eq i32 %r7.3.reload, 0, !insn.addr !184
  %spec.select8 = select i1 %157, i32 ptrtoint ([4 x i8]* @global_var_9fa8 to i32), i32 ptrtoint ([4 x i8]* @global_var_9fa4 to i32)
  %158 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !185
  %159 = inttoptr i32 %spec.select8 to i8*, !insn.addr !186
  %160 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %158, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_a338, i32 0, i32 0), i8* %159), !insn.addr !186
  %161 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !187
  %162 = call i32 @fflush(%_IO_FILE* %161), !insn.addr !188
  %163 = xor i32 %r7.3.reload, 1, !insn.addr !189
  %164 = call i32 @function_9d38(i32 %163), !insn.addr !190
  %165 = icmp eq i32 %164, 0, !insn.addr !191
  br i1 %165, label %dec_label_pc_900c, label %dec_label_pc_8d4c, !insn.addr !192

dec_label_pc_900c:                                ; preds = %dec_label_pc_8fd4
  %166 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !193
  %167 = call i32 @fwrite(i32* bitcast ([27 x i8]* @global_var_a348 to i32*), i32 1, i32 26, %_IO_FILE* %166), !insn.addr !194
  br label %dec_label_pc_9020, !insn.addr !194

dec_label_pc_9020:                                ; preds = %dec_label_pc_90f0, %dec_label_pc_900c
  call void @exit(i32 0), !insn.addr !195
  unreachable, !insn.addr !195

dec_label_pc_9028:                                ; preds = %dec_label_pc_8f30
  %168 = icmp slt i32 %sb.1.reload, 0, !insn.addr !196
  %169 = icmp eq i32 %sb.1.reload, 0, !insn.addr !196
  %170 = icmp eq i32 %r8.5.reload, 1
  %spec.select9 = select i1 %168, i1 %169, i1 %170
  br i1 %spec.select9, label %dec_label_pc_9040, label %dec_label_pc_9064, !insn.addr !197

dec_label_pc_9040:                                ; preds = %dec_label_pc_9028
  %171 = icmp eq i32 %storemerge3.reload, 0, !insn.addr !198
  store i32 0, i32* %storemerge2.reg2mem, !insn.addr !199
  br i1 %171, label %dec_label_pc_8f7c, label %dec_label_pc_9048, !insn.addr !199

dec_label_pc_9048:                                ; preds = %dec_label_pc_9040
  %172 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !200
  %173 = call i32 @fwrite(i32* bitcast ([164 x i8]* @global_var_a208 to i32*), i32 1, i32 163, %_IO_FILE* %172), !insn.addr !201
  store i32 1, i32* %storemerge2.reg2mem, !insn.addr !202
  br label %dec_label_pc_8f7c, !insn.addr !202

dec_label_pc_9064:                                ; preds = %dec_label_pc_9028, %dec_label_pc_8f60
  %sl.0.in.in = icmp ne i32 %r8.5.reload, 1
  %sl.0.in = icmp ne i1 %sl.0.in.in, true
  %174 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !203
  %175 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %174, i8* getelementptr inbounds ([55 x i8], [55 x i8]* @global_var_a2ac, i32 0, i32 0), i32* nonnull %stack_var_-168, i32 %40), !insn.addr !204
  %176 = icmp eq i32 %sb.1.reload, -1, !insn.addr !205
  %177 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4
  br i1 %176, label %dec_label_pc_9084, label %dec_label_pc_90bc, !insn.addr !206

dec_label_pc_9084:                                ; preds = %dec_label_pc_9064
  %178 = call i32 @fwrite(i32* bitcast ([21 x i8]* @global_var_a2e4 to i32*), i32 1, i32 20, %_IO_FILE* %177), !insn.addr !207
  %179 = icmp eq i1 %sl.0.in, false, !insn.addr !208
  %180 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !209
  %181 = ptrtoint %_IO_FILE* %180 to i32, !insn.addr !209
  store i32 %181, i32* %r0.4.reg2mem, !insn.addr !210
  store i32 %181, i32* %r0.5.reg2mem, !insn.addr !210
  store i32 0, i32* %r7.4.reg2mem, !insn.addr !210
  br i1 %179, label %dec_label_pc_90a4, label %dec_label_pc_90e8, !insn.addr !210

dec_label_pc_90a4:                                ; preds = %dec_label_pc_9084, %dec_label_pc_90bc
  %r0.4.reload = load i32, i32* %r0.4.reg2mem
  %182 = icmp eq i32 %r8.5.reload, 2, !insn.addr !211
  %spec.select10 = select i1 %182, i32 ptrtoint ([15 x i8]* @global_var_9f88 to i32), i32 ptrtoint ([15 x i8]* @global_var_9f78 to i32)
  store i32 %r0.4.reload, i32* %r0.3.reg2mem
  store i32 %spec.select10, i32* %r2.2.reg2mem
  store i32 0, i32* %r7.3.reg2mem
  br label %dec_label_pc_8fb0

dec_label_pc_90bc:                                ; preds = %dec_label_pc_9064
  %183 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %177, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_a2fc, i32 0, i32 0), i32 %sb.1.reload), !insn.addr !212
  %184 = icmp eq i1 %sl.0.in, false, !insn.addr !213
  %185 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !214
  %186 = ptrtoint %_IO_FILE* %185 to i32, !insn.addr !214
  store i32 %186, i32* %r0.3.reg2mem, !insn.addr !215
  store i32 ptrtoint ([21 x i8]* @global_var_9f60 to i32), i32* %r2.2.reg2mem, !insn.addr !215
  store i32 0, i32* %r7.3.reg2mem, !insn.addr !215
  store i32 %186, i32* %r0.4.reg2mem, !insn.addr !215
  br i1 %184, label %dec_label_pc_90a4, label %dec_label_pc_8fb0, !insn.addr !215

dec_label_pc_90e8:                                ; preds = %dec_label_pc_9084, %dec_label_pc_8f7c
  %r7.4.reload = load i32, i32* %r7.4.reg2mem
  %r0.5.reload = load i32, i32* %r0.5.reg2mem
  store i32 %r0.5.reload, i32* %r0.3.reg2mem, !insn.addr !216
  store i32 ptrtoint ([10 x i8]* @global_var_9f98 to i32), i32* %r2.2.reg2mem, !insn.addr !216
  store i32 %r7.4.reload, i32* %r7.3.reg2mem, !insn.addr !216
  br label %dec_label_pc_8fb0, !insn.addr !216

dec_label_pc_90f0:                                ; preds = %dec_label_pc_8f58
  %187 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !217
  %188 = call i32 @fwrite(i32* bitcast ([185 x i8]* @global_var_a14c to i32*), i32 1, i32 184, %_IO_FILE* %187), !insn.addr !218
  br label %dec_label_pc_9020, !insn.addr !219

dec_label_pc_9108:                                ; preds = %dec_label_pc_8ec0
  %189 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !220
  %190 = call i32 @fwrite(i32* bitcast ([24 x i8]* @global_var_a384 to i32*), i32 1, i32 23, %_IO_FILE* %189), !insn.addr !221
  br label %dec_label_pc_8eec, !insn.addr !222

dec_label_pc_9128:                                ; preds = %dec_label_pc_8d64, %dec_label_pc_8e70, %dec_label_pc_8eec
  %191 = call i32 @close(i32 %76), !insn.addr !223
  %192 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !224
  %193 = call i32 @fwrite(i32* bitcast ([20 x i8]* @global_var_a39c to i32*), i32 1, i32 19, %_IO_FILE* %192), !insn.addr !225
  call void @exit(i32 2), !insn.addr !226
  unreachable, !insn.addr !226

dec_label_pc_914c:                                ; preds = %dec_label_pc_8cec
  %194 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !227
  %195 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %194, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a060, i32 0, i32 0), i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_a08c, i32 0, i32 0)), !insn.addr !228
  br label %dec_label_pc_8e00, !insn.addr !229

dec_label_pc_9164:                                ; preds = %dec_label_pc_8cc4
  %196 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !230
  %197 = call i32* @__errno_location(), !insn.addr !231
  %198 = load i32, i32* %197, align 4, !insn.addr !232
  %199 = call i8* @strerror(i32 %198), !insn.addr !233
  %200 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %196, i8* getelementptr inbounds ([59 x i8], [59 x i8]* @global_var_a024, i32 0, i32 0), i8* %199), !insn.addr !234
  br label %dec_label_pc_8e00, !insn.addr !235

dec_label_pc_918c:                                ; preds = %dec_label_pc_8cf4
  %201 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !236
  %202 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %201, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a060, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_a0a0, i32 0, i32 0)), !insn.addr !237
  br label %dec_label_pc_8e00, !insn.addr !238

; uselistorder directives
  uselistorder i32 %r7.3.reload, { 1, 0 }
  uselistorder i1 %97, { 1, 0 }
  uselistorder i32 %r8.5.reload, { 2, 5, 3, 4, 0, 1, 6 }
  uselistorder i32 %storemerge3.reload, { 1, 2, 4, 3, 0 }
  uselistorder i32 %76, { 0, 7, 8, 6, 4, 1, 2, 3, 5, 9, 10, 11 }
  uselistorder i32 %67, { 0, 2, 1 }
  uselistorder i32 %sb.1.reload, { 5, 6, 1, 0, 2, 3, 8, 7, 4, 9 }
  uselistorder i32 %40, { 1, 2, 3, 4, 0, 5 }
  uselistorder i32 %34, { 1, 0, 2 }
  uselistorder i32 %fp.118.reload, { 2, 1, 0 }
  uselistorder i32 %r3.114.reload, { 1, 2, 0 }
  uselistorder i32 %r2.013.reload, { 1, 2, 0 }
  uselistorder i32 %r1.112.reload, { 1, 2, 3, 0 }
  uselistorder i32 %24, { 0, 2, 1 }
  uselistorder i32 %.reload78, { 0, 2, 1 }
  uselistorder i32 %r8.027.reload, { 1, 0 }
  uselistorder i32 %r7.026.reload, { 1, 0 }
  uselistorder i32 %r6.025.reload, { 1, 0 }
  uselistorder i32 %4, { 2, 0, 4, 3, 1 }
  uselistorder i8** %.reg2mem, { 0, 2, 1 }
  uselistorder i32* %.reg2mem77, { 0, 2, 1 }
  uselistorder i32* %.reg2mem79, { 0, 2, 1 }
  uselistorder i32* %r8.027.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r7.026.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r6.025.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.024.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r6.1.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %r8.1.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %fp.118.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %r7.216.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %r6.215.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %r2.013.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r1.112.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %r0.111.reg2mem, { 0, 3, 1, 2 }
  uselistorder i32* %r8.4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %sb.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.2.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %r1.2.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %r2.1.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %r3.2.reg2mem, { 0, 2, 3, 4, 1 }
  uselistorder i32* %r8.5.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge3.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %storemerge.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %r8.6.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 3, 1, 0, 2 }
  uselistorder i32* %r0.3.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %r2.2.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %r7.3.reg2mem, { 4, 1, 2, 0, 3 }
  uselistorder i32* %r0.4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a060, i32 0, i32 0), { 3, 2, 0, 1 }
  uselistorder i32 21, { 1, 0 }
  uselistorder i32 3, { 0, 2, 1, 3 }
  uselistorder i32 (i32, i32, i32, i32)* @function_935c, { 2, 1, 0 }
  uselistorder [33 x i8]* @global_var_9fac, { 1, 0 }
  uselistorder i8 45, { 1, 0 }
  uselistorder i32 %arg2, { 2, 1, 3, 4, 5, 0 }
  uselistorder label %dec_label_pc_9128, { 2, 1, 0 }
  uselistorder label %dec_label_pc_90a4, { 1, 0 }
  uselistorder label %dec_label_pc_8fb0, { 3, 1, 0, 2 }
  uselistorder label %dec_label_pc_8f7c, { 2, 0, 1 }
  uselistorder label %dec_label_pc_8e0c, { 1, 2, 0 }
  uselistorder label %dec_label_pc_8e00, { 1, 2, 3, 4, 5, 6, 0, 7 }
  uselistorder label %dec_label_pc_8da8, { 1, 2, 0 }
  uselistorder label %dec_label_pc_8d2c, { 1, 0 }
  uselistorder label %dec_label_pc_8d04, { 1, 2, 0 }
  uselistorder label %dec_label_pc_8ca8, { 1, 0 }
  uselistorder label %dec_label_pc_8c6c, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_8c54, { 1, 0 }
  uselistorder label %dec_label_pc_8b9c, { 2, 0, 1 }
  uselistorder label %dec_label_pc_8b84, { 1, 2, 0 }
  uselistorder label %dec_label_pc_8b50, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_9228:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !239
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !239
  %2 = call i32 @__libc_start_main(i32 35600, i32 %arg2, i8** nonnull %0, void ()* bitcast (void ()** @global_var_9dd8 to void ()*), void ()* bitcast (void ()** @global_var_9e3c to void ()*), void ()* %1), !insn.addr !239
  call void @abort(), !insn.addr !240
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !240
}

define i32 @function_9264() local_unnamed_addr {
dec_label_pc_9264:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_1283c, align 4, !insn.addr !241
  %3 = icmp eq i32 %2, 0, !insn.addr !242
  br i1 %3, label %4, label %dec_label_pc_927c, !insn.addr !243

; <label>:4:                                      ; preds = %dec_label_pc_9264
  ret i32 %1, !insn.addr !243

dec_label_pc_927c:                                ; preds = %dec_label_pc_9264
  call void @__gmon_start__(), !insn.addr !244
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !244
}

define i32 @function_9288(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_9288:
  ret i32 ptrtoint (%_IO_FILE** @global_var_12848 to i32), !insn.addr !245
}

define i32 @function_92c0(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_92c0:
  ret i32 ptrtoint (%_IO_FILE** @global_var_12848 to i32), !insn.addr !246
}

define i32 @function_9300() local_unnamed_addr {
dec_label_pc_9300:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_12854 to i8*), align 4, !insn.addr !247
  %5 = icmp eq i8 %4, 0, !insn.addr !248
  br i1 %5, label %dec_label_pc_9314, label %6, !insn.addr !249

; <label>:6:                                      ; preds = %dec_label_pc_9300
  ret i32 %3, !insn.addr !249

dec_label_pc_9314:                                ; preds = %dec_label_pc_9300
  %7 = call i32 @function_9288(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !250
  store i8 1, i8* bitcast (i8** @global_var_12854 to i8*), align 4, !insn.addr !251
  ret i32 %7, !insn.addr !252

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
}

define i32 @function_9328(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9328:
  %0 = call i32 @function_92c0(i32* nonnull @global_var_126ac, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !253
  ret i32 %0, !insn.addr !253
}

define i32 @function_935c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_935c:
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !254
  %1 = call i32 @fwrite(i32* inttoptr (i32 and (i32 ptrtoint ([276 x i8]* @global_var_9e4c to i32), i32 65535) to i32*), i32 1, i32 275, %_IO_FILE* %0), !insn.addr !255
  call void @exit(i32 1), !insn.addr !256
  unreachable, !insn.addr !256

; uselistorder directives
  uselistorder void (i32)* @exit, { 5, 4, 3, 2, 1, 0, 6 }
}

define i32 @function_9388(i32 %arg1) local_unnamed_addr {
dec_label_pc_9388:
  %r3.1.reg2mem = alloca i32, !insn.addr !257
  %r0.02.reg2mem = alloca i32, !insn.addr !257
  %.reg2mem = alloca i32, !insn.addr !257
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !258
  %1 = call i32 @strlen(i8* %0), !insn.addr !258
  %2 = add i32 %1, -1, !insn.addr !259
  %3 = icmp slt i32 %2, 0, !insn.addr !259
  store i32 %2, i32* %r3.1.reg2mem, !insn.addr !260
  br i1 %3, label %dec_label_pc_93e4, label %dec_label_pc_939c, !insn.addr !260

dec_label_pc_939c:                                ; preds = %dec_label_pc_9388
  %4 = add i32 %2, %arg1, !insn.addr !261
  %5 = inttoptr i32 %4 to i8*
  %6 = load i8, i8* %5, align 1, !insn.addr !261
  store i32 %2, i32* %r3.1.reg2mem
  switch i8 %6, label %dec_label_pc_93e4 [
    i8 32, label %dec_label_pc_93b0
    i8 10, label %dec_label_pc_93b0
  ]

dec_label_pc_93b0:                                ; preds = %dec_label_pc_939c, %dec_label_pc_939c
  store i8 0, i8* %5, align 1, !insn.addr !262
  %7 = icmp eq i32 %2, 0, !insn.addr !263
  store i32 -1, i32* %r3.1.reg2mem, !insn.addr !264
  br i1 %7, label %dec_label_pc_93e4, label %dec_label_pc_93c0.lr.ph, !insn.addr !264

dec_label_pc_93c0.lr.ph:                          ; preds = %dec_label_pc_93b0
  %8 = add i32 %1, -2
  %9 = add i32 %8, %arg1, !insn.addr !265
  store i32 %8, i32* %.reg2mem
  store i32 %9, i32* %r0.02.reg2mem
  br label %dec_label_pc_93c0

dec_label_pc_93c0:                                ; preds = %dec_label_pc_93c0.lr.ph, %dec_label_pc_93d0.backedge
  %r0.02.reload = load i32, i32* %r0.02.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = inttoptr i32 %r0.02.reload to i8*
  %11 = load i8, i8* %10, align 1, !insn.addr !266
  store i32 %.reload, i32* %r3.1.reg2mem
  switch i8 %11, label %dec_label_pc_93e4 [
    i8 32, label %dec_label_pc_93d0.backedge
    i8 10, label %dec_label_pc_93d0.backedge
  ]

dec_label_pc_93d0.backedge:                       ; preds = %dec_label_pc_93c0, %dec_label_pc_93c0
  %12 = add i32 %r0.02.reload, -1, !insn.addr !266
  %13 = add i32 %.reload, -1, !insn.addr !267
  store i8 0, i8* %10, align 1, !insn.addr !262
  %14 = icmp eq i32 %.reload, 0, !insn.addr !263
  store i32 %13, i32* %.reg2mem, !insn.addr !264
  store i32 %12, i32* %r0.02.reg2mem, !insn.addr !264
  store i32 -1, i32* %r3.1.reg2mem, !insn.addr !264
  br i1 %14, label %dec_label_pc_93e4, label %dec_label_pc_93c0, !insn.addr !264

dec_label_pc_93e4:                                ; preds = %dec_label_pc_93d0.backedge, %dec_label_pc_93c0, %dec_label_pc_93b0, %dec_label_pc_939c, %dec_label_pc_9388
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %15 = add i32 %r3.1.reload, 2, !insn.addr !268
  ret i32 %15, !insn.addr !269

; uselistorder directives
  uselistorder i32 %.reload, { 2, 1, 0 }
  uselistorder i32 %r0.02.reload, { 1, 0 }
  uselistorder i32 %2, { 3, 0, 2, 1, 4 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.02.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_93c0, { 1, 0 }
}

define i32 @function_93ec(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_93ec:
  %r4.1.reg2mem = alloca i32, !insn.addr !270
  %r0.0.reg2mem = alloca i32, !insn.addr !270
  %0 = add i32 %arg1, 4, !insn.addr !271
  %1 = inttoptr i32 %0 to i32*, !insn.addr !271
  %2 = load i32, i32* %1, align 4, !insn.addr !271
  %3 = icmp eq i32 %2, 0, !insn.addr !272
  store i32 %2, i32* %r0.0.reg2mem, !insn.addr !273
  store i32 %arg1, i32* %r4.1.reg2mem, !insn.addr !273
  br i1 %3, label %dec_label_pc_9418, label %dec_label_pc_9404, !insn.addr !273

dec_label_pc_9404:                                ; preds = %dec_label_pc_93ec, %dec_label_pc_9404
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %4 = add i32 %r4.1.reload, 16, !insn.addr !274
  %5 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !275
  call void @free(i32* %5), !insn.addr !275
  %6 = add i32 %r4.1.reload, 20, !insn.addr !276
  %7 = inttoptr i32 %6 to i32*, !insn.addr !276
  %8 = load i32, i32* %7, align 4, !insn.addr !276
  %9 = icmp eq i32 %8, 0, !insn.addr !277
  store i32 %8, i32* %r0.0.reg2mem, !insn.addr !278
  store i32 %4, i32* %r4.1.reg2mem, !insn.addr !278
  br i1 %9, label %dec_label_pc_9418, label %dec_label_pc_9404, !insn.addr !278

dec_label_pc_9418:                                ; preds = %dec_label_pc_9404, %dec_label_pc_93ec
  %10 = inttoptr i32 %arg1 to i32*, !insn.addr !279
  call void @free(i32* %10), !insn.addr !279
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !279

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 0, 1 }
  uselistorder void (i32*)* @free, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_9404, { 1, 0 }
}

define i32 @function_9424(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_9424:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = mul i32 %arg2, 16, !insn.addr !280
  %4 = add i32 %3, 128, !insn.addr !281
  %5 = inttoptr i32 %arg1 to i32*, !insn.addr !282
  %6 = call i32* @realloc(i32* %5, i32 %4), !insn.addr !282
  %7 = ptrtoint i32* %6 to i32, !insn.addr !282
  %8 = icmp eq i32* %6, null, !insn.addr !283
  br i1 %8, label %dec_label_pc_945c, label %dec_label_pc_9444, !insn.addr !284

dec_label_pc_9444:                                ; preds = %dec_label_pc_9424
  %9 = add i32 %3, %7, !insn.addr !285
  %10 = inttoptr i32 %9 to i32*, !insn.addr !286
  %11 = call i32* @memset(i32* %10, i32 0, i32 128), !insn.addr !286
  br label %dec_label_pc_9454, !insn.addr !286

dec_label_pc_9454:                                ; preds = %dec_label_pc_945c, %dec_label_pc_9444
  ret i32 %7, !insn.addr !287

dec_label_pc_945c:                                ; preds = %dec_label_pc_9424
  %12 = call i32 @function_93ec(i32 %arg1, i32 %4, i32 %2, i32 %1), !insn.addr !288
  br label %dec_label_pc_9454, !insn.addr !289

; uselistorder directives
  uselistorder i32 %7, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 1, 0 }
  uselistorder i32 128, { 1, 0 }
}

define i32 @function_9468(i32 %arg1) local_unnamed_addr {
dec_label_pc_9468:
  %.reg2mem = alloca i32, !insn.addr !290
  %stack_var_-12 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !291
  %1 = call i32 @strtol(i8* %0, i8** nonnull %stack_var_-12, i32 0), !insn.addr !291
  %2 = load i8*, i8** %stack_var_-12, align 4, !insn.addr !292
  %3 = load i8, i8* %2, align 1, !insn.addr !293
  %4 = icmp ne i8 %3, 0, !insn.addr !294
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !295
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_94b0, label %dec_label_pc_949c, !insn.addr !296

dec_label_pc_949c:                                ; preds = %dec_label_pc_9468
  %7 = add i32 %1, -3, !insn.addr !297
  %8 = icmp ult i32 %7, 116, !insn.addr !298
  %9 = icmp ne i1 %8, true, !insn.addr !298
  %10 = icmp eq i32 %7, 116, !insn.addr !298
  %11 = icmp ne i1 %10, true, !insn.addr !299
  %12 = icmp eq i1 %9, %11, !insn.addr !299
  store i32 %1, i32* %.reg2mem, !insn.addr !299
  br i1 %12, label %dec_label_pc_94d0, label %dec_label_pc_94a8, !insn.addr !299

dec_label_pc_94a8:                                ; preds = %dec_label_pc_94d0, %dec_label_pc_94b0, %dec_label_pc_949c
  %.reload = load i32, i32* %.reg2mem, !insn.addr !300
  ret i32 %.reload, !insn.addr !300

dec_label_pc_94b0:                                ; preds = %dec_label_pc_9468
  %13 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !301
  %14 = call i32 @fwrite(i32* bitcast ([38 x i8]* @global_var_a3e0 to i32*), i32 1, i32 37, %_IO_FILE* %13), !insn.addr !302
  store i32 -1, i32* %.reg2mem, !insn.addr !303
  br label %dec_label_pc_94a8, !insn.addr !303

dec_label_pc_94d0:                                ; preds = %dec_label_pc_949c
  %15 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !304
  %16 = call i32 @fwrite(i32* bitcast ([47 x i8]* @global_var_a408 to i32*), i32 1, i32 46, %_IO_FILE* %15), !insn.addr !305
  store i32 -2, i32* %.reg2mem, !insn.addr !306
  br label %dec_label_pc_94a8, !insn.addr !306

; uselistorder directives
  uselistorder i32 %1, { 0, 2, 1 }
  uselistorder i32* %.reg2mem, { 3, 2, 0, 1 }
  uselistorder i1 true, { 1, 2, 0, 3, 4, 5, 6, 7 }
  uselistorder i32 (i8*, i8**, i32)* @strtol, { 1, 0, 2 }
}

define i32 @function_94fc(i32 %arg1, i32* %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_94fc:
  %r5.1.reg2mem = alloca i32, !insn.addr !307
  %r5.0.reg2mem = alloca i32, !insn.addr !307
  %0 = ptrtoint i32* %arg2 to i32
  %1 = bitcast i32* %arg2 to i8*, !insn.addr !308
  %2 = call i32 (i8*, i32, i8*, ...) @snprintf(i8* %1, i32 %arg3, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_a438, i32 0, i32 0), i32 %arg1), !insn.addr !308
  %3 = add i32 %arg3, -1, !insn.addr !309
  %4 = add i32 %3, %0, !insn.addr !310
  %5 = inttoptr i32 %4 to i8*, !insn.addr !310
  store i8 0, i8* %5, align 1, !insn.addr !310
  %6 = call i32 (i8*, i32, ...) @open(i8* %1, i32 2), !insn.addr !311
  %7 = icmp slt i32 %6, 0, !insn.addr !312
  store i32 %6, i32* %r5.0.reg2mem, !insn.addr !313
  br i1 %7, label %dec_label_pc_9554, label %dec_label_pc_9548, !insn.addr !313

dec_label_pc_9548:                                ; preds = %dec_label_pc_9588, %dec_label_pc_95ec, %dec_label_pc_95b4, %dec_label_pc_956c, %dec_label_pc_94fc
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  ret i32 %r5.0.reload, !insn.addr !314

dec_label_pc_9554:                                ; preds = %dec_label_pc_94fc
  %8 = call i32* @__errno_location(), !insn.addr !315
  %9 = load i32, i32* %8, align 4, !insn.addr !316
  store i32 %6, i32* %r5.1.reg2mem
  switch i32 %9, label %dec_label_pc_956c [
    i32 20, label %dec_label_pc_95c8
    i32 2, label %dec_label_pc_95c8
  ]

dec_label_pc_956c:                                ; preds = %dec_label_pc_9554, %dec_label_pc_95c8
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %10 = icmp ugt i32 %arg4, 1
  %11 = select i1 %10, i32 %arg4, i32 1
  %12 = sub i32 %11, %arg4
  %13 = icmp slt i32 %r5.1.reload, 0
  %14 = zext i1 %13 to i32, !insn.addr !317
  %15 = and i32 %12, %14, !insn.addr !317
  %16 = icmp eq i32 %15, 0, !insn.addr !317
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !318
  br i1 %16, label %dec_label_pc_9548, label %dec_label_pc_957c, !insn.addr !318

dec_label_pc_957c:                                ; preds = %dec_label_pc_956c
  %17 = load i32, i32* %8, align 4, !insn.addr !319
  %18 = icmp eq i32 %17, 2, !insn.addr !320
  %19 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4
  %20 = call i8* @strerror(i32 %17)
  br i1 %18, label %dec_label_pc_95ec, label %dec_label_pc_9588, !insn.addr !321

dec_label_pc_9588:                                ; preds = %dec_label_pc_957c
  %21 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %19, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_a490, i32 0, i32 0), i32* %arg2, i8* %20), !insn.addr !322
  %22 = load i32, i32* %8, align 4, !insn.addr !323
  %23 = icmp eq i32 %22, 13, !insn.addr !324
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !325
  br i1 %23, label %dec_label_pc_95b4, label %dec_label_pc_9548, !insn.addr !325

dec_label_pc_95b4:                                ; preds = %dec_label_pc_9588
  %24 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !326
  %25 = call i32 @fwrite(i32* bitcast ([14 x i8]* @global_var_a4b8 to i32*), i32 1, i32 13, %_IO_FILE* %24), !insn.addr !327
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !328
  br label %dec_label_pc_9548, !insn.addr !328

dec_label_pc_95c8:                                ; preds = %dec_label_pc_9554, %dec_label_pc_9554
  %26 = call i32 (i8*, i8*, ...) @sprintf(i8* %1, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_a444, i32 0, i32 0), i32 %arg1), !insn.addr !329
  %27 = call i32 (i8*, i32, ...) @open(i8* %1, i32 2), !insn.addr !330
  store i32 %27, i32* %r5.1.reg2mem, !insn.addr !331
  br label %dec_label_pc_956c, !insn.addr !331

dec_label_pc_95ec:                                ; preds = %dec_label_pc_957c
  %28 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %19, i8* getelementptr inbounds ([63 x i8], [63 x i8]* @global_var_a450, i32 0, i32 0), i32 %arg1, i32 %arg1, i8* %20), !insn.addr !332
  store i32 %r5.1.reload, i32* %r5.0.reg2mem, !insn.addr !333
  br label %dec_label_pc_9548, !insn.addr !333

; uselistorder directives
  uselistorder i8* %20, { 1, 0 }
  uselistorder %_IO_FILE* %19, { 1, 0 }
  uselistorder i32 %r5.1.reload, { 2, 3, 4, 1, 0 }
  uselistorder i32* %r5.0.reg2mem, { 4, 3, 2, 5, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i8*, i32, ...)* @open, { 1, 0, 2 }
  uselistorder i32 %arg4, { 2, 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_956c, { 1, 0 }
  uselistorder label %dec_label_pc_9548, { 1, 2, 0, 3, 4 }
}

define i32 @function_962c() local_unnamed_addr {
dec_label_pc_962c:
  %0 = alloca i32
  %.in.reg2mem = alloca %dirent*, !insn.addr !334
  %stack_var_-976.4.reg2mem = alloca i32, !insn.addr !334
  %r1.1.reg2mem = alloca i32, !insn.addr !334
  %stack_var_-976.3.reg2mem = alloca i32, !insn.addr !334
  %r8.1.reg2mem = alloca i32, !insn.addr !334
  %r1.0.reg2mem = alloca i32, !insn.addr !334
  %sl.1.in.reg2mem = alloca %_IO_FILE*, !insn.addr !334
  %r5.1.reg2mem = alloca i32, !insn.addr !334
  %r0.0.in.reg2mem = alloca %dirent*, !insn.addr !334
  %stack_var_-976.2.reg2mem = alloca i32, !insn.addr !334
  %stack_var_-976.146.reg2mem = alloca i32, !insn.addr !334
  %r5.047.reg2mem = alloca i32, !insn.addr !334
  %.reg2mem137 = alloca %dirent*, !insn.addr !334
  %stack_var_-976.0.reg2mem = alloca i32, !insn.addr !334
  %sb.1.lcssa.reg2mem = alloca i32, !insn.addr !334
  %sb.0.reg2mem = alloca i32, !insn.addr !334
  %sb.149.reg2mem = alloca i32, !insn.addr !334
  %sl.050.reg2mem = alloca i32, !insn.addr !334
  %.reg2mem = alloca i32, !insn.addr !334
  %1 = load i32, i32* %0
  %stack_var_-948 = alloca i32, align 4
  %stack_var_-808 = alloca i32, align 4
  %stack_var_-552 = alloca i32, align 4
  %stack_var_-296 = alloca i32, align 4
  %stack_var_-956 = alloca i32, align 4
  %stack_var_-928 = alloca i32, align 4
  %2 = call i32* @calloc(i32 8, i32 16), !insn.addr !335
  %3 = ptrtoint i32* %2 to i32, !insn.addr !335
  %4 = icmp eq i32* %2, null, !insn.addr !336
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !337
  br i1 %4, label %dec_label_pc_97a0, label %dec_label_pc_964c, !insn.addr !337

dec_label_pc_964c:                                ; preds = %dec_label_pc_962c
  %5 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_a4c8, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_a688, i32 0, i32 0)), !insn.addr !338
  %6 = icmp eq %_IO_FILE* %5, null, !insn.addr !339
  br i1 %6, label %dec_label_pc_97d8, label %dec_label_pc_9770.preheader, !insn.addr !340

dec_label_pc_9770.preheader:                      ; preds = %dec_label_pc_964c
  %7 = bitcast i32* %stack_var_-928 to i8*, !insn.addr !341
  %8 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !341
  %9 = icmp eq i8* %8, null, !insn.addr !342
  store i32 1, i32* %.reg2mem, !insn.addr !343
  store i32 0, i32* %sl.050.reg2mem, !insn.addr !343
  store i32 %3, i32* %sb.149.reg2mem, !insn.addr !343
  store i32 %3, i32* %sb.1.lcssa.reg2mem, !insn.addr !343
  br i1 %9, label %dec_label_pc_9794, label %dec_label_pc_9678, !insn.addr !343

dec_label_pc_9678:                                ; preds = %dec_label_pc_9770.preheader, %dec_label_pc_9734
  %sb.149.reload = load i32, i32* %sb.149.reg2mem
  %sl.050.reload = load i32, i32* %sl.050.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %10 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !344
  store i8 0, i8* %10, align 1, !insn.addr !345
  %11 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !346
  store i8 0, i8* %11, align 1, !insn.addr !347
  %12 = call i8* @strrchr(i8* nonnull %7, i32 9), !insn.addr !348
  store i8 0, i8* %12, align 1, !insn.addr !349
  %13 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %7, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_a4d8, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !350
  %14 = urem i32 %.reload, 8, !insn.addr !351
  %15 = icmp eq i32 %14, 0, !insn.addr !351
  store i32 %sb.149.reload, i32* %sb.0.reg2mem, !insn.addr !352
  br i1 %15, label %dec_label_pc_9708, label %dec_label_pc_9714, !insn.addr !352

dec_label_pc_9708:                                ; preds = %dec_label_pc_9678
  %16 = call i32 @function_9424(i32 %sb.149.reload, i32 %.reload), !insn.addr !353
  %17 = icmp eq i32 %16, 0, !insn.addr !354
  store i32 %16, i32* %sb.0.reg2mem, !insn.addr !355
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !355
  br i1 %17, label %dec_label_pc_97a0, label %dec_label_pc_9714, !insn.addr !355

dec_label_pc_9714:                                ; preds = %dec_label_pc_9678, %dec_label_pc_9708
  %18 = ptrtoint i8* %10 to i32, !insn.addr !344
  %19 = add i32 %18, 1, !insn.addr !345
  %20 = ptrtoint i8* %11 to i32, !insn.addr !346
  %21 = add i32 %20, 1, !insn.addr !347
  %22 = ptrtoint i8* %12 to i32, !insn.addr !348
  %23 = add i32 %22, 1, !insn.addr !349
  %24 = add i32 %23, %21, !insn.addr !356
  %sb.0.reload = load i32, i32* %sb.0.reg2mem
  %25 = add i32 %24, %19, !insn.addr !357
  %26 = call i32* @malloc(i32 %25), !insn.addr !358
  %27 = icmp eq i32* %26, null, !insn.addr !359
  br i1 %27, label %dec_label_pc_97c0, label %dec_label_pc_9734, !insn.addr !360

dec_label_pc_9734:                                ; preds = %dec_label_pc_9714
  %28 = add i32 %sb.0.reload, %sl.050.reload, !insn.addr !361
  %29 = ptrtoint i32* %26 to i32, !insn.addr !358
  %30 = load i32, i32* %stack_var_-956, align 4, !insn.addr !362
  %31 = inttoptr i32 %28 to i32*, !insn.addr !363
  store i32 %30, i32* %31, align 4, !insn.addr !363
  %32 = add i32 %sl.050.reload, 16, !insn.addr !364
  %33 = bitcast i32* %26 to i8*, !insn.addr !365
  %34 = inttoptr i32 %21 to i8*, !insn.addr !365
  %35 = call i8* @strcpy(i8* %33, i8* %34), !insn.addr !365
  %36 = ptrtoint i8* %35 to i32, !insn.addr !365
  %37 = add i32 %28, 4, !insn.addr !366
  %38 = inttoptr i32 %37 to i32*, !insn.addr !366
  store i32 %36, i32* %38, align 4, !insn.addr !366
  %39 = add i32 %21, %29, !insn.addr !367
  %40 = inttoptr i32 %39 to i8*, !insn.addr !368
  %41 = inttoptr i32 %23 to i8*, !insn.addr !368
  %42 = call i8* @strcpy(i8* %40, i8* %41), !insn.addr !368
  %43 = ptrtoint i8* %42 to i32, !insn.addr !368
  %44 = add i32 %28, 8, !insn.addr !369
  %45 = inttoptr i32 %44 to i32*, !insn.addr !369
  store i32 %43, i32* %45, align 4, !insn.addr !369
  %46 = add i32 %24, %29, !insn.addr !370
  %47 = inttoptr i32 %46 to i8*, !insn.addr !371
  %48 = inttoptr i32 %19 to i8*, !insn.addr !371
  %49 = call i8* @strcpy(i8* %47, i8* %48), !insn.addr !371
  %50 = ptrtoint i8* %49 to i32, !insn.addr !371
  %51 = add i32 %28, 12, !insn.addr !372
  %52 = inttoptr i32 %51 to i32*, !insn.addr !372
  store i32 %50, i32* %52, align 4, !insn.addr !372
  %53 = add i32 %.reload, 1, !insn.addr !373
  %54 = call i8* @fgets(i8* nonnull %7, i32 120, %_IO_FILE* nonnull %5), !insn.addr !341
  %55 = icmp eq i8* %54, null, !insn.addr !342
  store i32 %53, i32* %.reg2mem, !insn.addr !343
  store i32 %32, i32* %sl.050.reg2mem, !insn.addr !343
  store i32 %sb.0.reload, i32* %sb.149.reg2mem, !insn.addr !343
  store i32 %sb.0.reload, i32* %sb.1.lcssa.reg2mem, !insn.addr !343
  br i1 %55, label %dec_label_pc_9794, label %dec_label_pc_9678, !insn.addr !343

dec_label_pc_9794:                                ; preds = %dec_label_pc_9734, %dec_label_pc_9770.preheader
  %sb.1.lcssa.reload = load i32, i32* %sb.1.lcssa.reg2mem
  %56 = call i32 @fclose(%_IO_FILE* nonnull %5), !insn.addr !374
  store i32 %sb.1.lcssa.reload, i32* %stack_var_-976.0.reg2mem, !insn.addr !374
  br label %dec_label_pc_97a0, !insn.addr !374

dec_label_pc_97a0:                                ; preds = %dec_label_pc_9708, %dec_label_pc_9954, %dec_label_pc_97ac, %dec_label_pc_99e8, %dec_label_pc_99b8, %dec_label_pc_982c, %dec_label_pc_97d8, %dec_label_pc_97c0, %dec_label_pc_9794, %dec_label_pc_962c
  %stack_var_-976.0.reload = load i32, i32* %stack_var_-976.0.reg2mem
  ret i32 %stack_var_-976.0.reload, !insn.addr !375

dec_label_pc_97ac:                                ; preds = %dec_label_pc_996c
  %57 = call i32 @function_93ec(i32 %stack_var_-976.3.reload, i32 %r1.1.reload, i32 %stack_var_-976.3.reload, i32 %115), !insn.addr !376
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !376
  br label %dec_label_pc_97a0, !insn.addr !376

dec_label_pc_97c0:                                ; preds = %dec_label_pc_9714
  %58 = call i32 @function_93ec(i32 %sb.0.reload, i32 %21, i32 %19, i32 %24), !insn.addr !377
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !378
  br label %dec_label_pc_97a0, !insn.addr !378

dec_label_pc_97d8:                                ; preds = %dec_label_pc_964c
  %59 = call %_IO_FILE* @fopen(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_a4e0, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_a688, i32 0, i32 0)), !insn.addr !379
  %60 = icmp eq %_IO_FILE* %59, null, !insn.addr !380
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !381
  br i1 %60, label %dec_label_pc_97a0, label %dec_label_pc_97ec.preheader, !insn.addr !381

dec_label_pc_97ec.preheader:                      ; preds = %dec_label_pc_97d8
  %61 = bitcast i32* %stack_var_-296 to i8*
  %62 = bitcast i32* %stack_var_-808 to i8*
  br label %dec_label_pc_97ec

dec_label_pc_97ec:                                ; preds = %dec_label_pc_97ec.preheader, %dec_label_pc_9814
  %63 = call i8* @fgets(i8* nonnull %61, i32 255, %_IO_FILE* nonnull %59), !insn.addr !382
  %64 = icmp eq i8* %63, null, !insn.addr !383
  br i1 %64, label %dec_label_pc_99e8, label %dec_label_pc_9814, !insn.addr !384

dec_label_pc_9814:                                ; preds = %dec_label_pc_97ec
  %65 = call i32 (i8*, i8*, ...) @sscanf(i8* nonnull %61, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_a4f0, i32 0, i32 0), i32* nonnull %stack_var_-552, i32* nonnull %stack_var_-808), !insn.addr !385
  %66 = call i32 @strcasecmp(i8* nonnull %62, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_a508, i32 0, i32 0)), !insn.addr !386
  %67 = icmp eq i32 %66, 0, !insn.addr !387
  br i1 %67, label %dec_label_pc_982c, label %dec_label_pc_97ec, !insn.addr !388

dec_label_pc_982c:                                ; preds = %dec_label_pc_9814
  %68 = ptrtoint i32* %stack_var_-552 to i32, !insn.addr !389
  %69 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !390
  %70 = bitcast i32* %stack_var_-552 to i8*, !insn.addr !391
  %71 = call i32 @strlen(i8* nonnull %70), !insn.addr !391
  %72 = add i32 %71, %68, !insn.addr !392
  %73 = inttoptr i32 %72 to i32*, !insn.addr !393
  store i32 1634493231, i32* %73, align 4, !insn.addr !393
  %74 = add i32 %72, 12, !insn.addr !394
  %75 = inttoptr i32 %74 to i16*, !insn.addr !394
  store i16 30309, i16* %75, align 2, !insn.addr !394
  %76 = add i32 %72, 4, !insn.addr !395
  %77 = inttoptr i32 %76 to i32*, !insn.addr !395
  store i32 1764717427, i32* %77, align 4, !insn.addr !395
  %78 = add i32 %72, 8, !insn.addr !396
  %79 = inttoptr i32 %78 to i32*, !insn.addr !396
  store i32 1680696114, i32* %79, align 4, !insn.addr !396
  %80 = add i32 %72, 14, !insn.addr !397
  %81 = inttoptr i32 %80 to i8*, !insn.addr !397
  store i8 0, i8* %81, align 1, !insn.addr !397
  %82 = call %__dirstream* @opendir(i8* nonnull %70), !insn.addr !398
  %83 = icmp eq %__dirstream* %82, null, !insn.addr !399
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !400
  br i1 %83, label %dec_label_pc_97a0, label %dec_label_pc_988c.preheader, !insn.addr !400

dec_label_pc_988c.preheader:                      ; preds = %dec_label_pc_982c
  %84 = call %dirent* @readdir(%__dirstream* nonnull %82), !insn.addr !401
  %85 = icmp eq %dirent* %84, null, !insn.addr !402
  store i32 %3, i32* %stack_var_-976.4.reg2mem, !insn.addr !403
  br i1 %85, label %dec_label_pc_99b8, label %dec_label_pc_989c.preheader.lr.ph, !insn.addr !403

dec_label_pc_989c.preheader.lr.ph:                ; preds = %dec_label_pc_988c.preheader
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
  br label %dec_label_pc_989c.preheader

dec_label_pc_989c.preheader:                      ; preds = %dec_label_pc_989c.preheader.lr.ph, %dec_label_pc_988c.backedge
  %stack_var_-976.146.reload = load i32, i32* %stack_var_-976.146.reg2mem
  %r5.047.reload = load i32, i32* %r5.047.reg2mem
  %.reload138 = load %dirent*, %dirent** %.reg2mem137
  store i32 %stack_var_-976.146.reload, i32* %stack_var_-976.2.reg2mem
  store %dirent* %.reload138, %dirent** %r0.0.in.reg2mem
  store i32 %r5.047.reload, i32* %r5.1.reg2mem
  br label %dec_label_pc_989c

dec_label_pc_989c:                                ; preds = %dec_label_pc_989c.preheader, %dec_label_pc_9990
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  %r0.0.in.reload = load %dirent*, %dirent** %r0.0.in.reg2mem
  %stack_var_-976.2.reload = load i32, i32* %stack_var_-976.2.reg2mem
  %r0.0 = ptrtoint %dirent* %r0.0.in.reload to i32
  %92 = add i32 %r0.0, 11, !insn.addr !404
  %93 = inttoptr i32 %92 to i8*, !insn.addr !404
  %94 = load i8, i8* %93, align 1, !insn.addr !404
  %95 = icmp eq i8 %94, 46, !insn.addr !405
  br i1 %95, label %dec_label_pc_99c4, label %dec_label_pc_98a8, !insn.addr !406

dec_label_pc_98a8:                                ; preds = %dec_label_pc_99c4, %dec_label_pc_99d8, %dec_label_pc_989c
  %96 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_a510, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !407
  %97 = call %_IO_FILE* @fopen(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_a688, i32 0, i32 0)), !insn.addr !408
  %98 = icmp eq %_IO_FILE* %97, null, !insn.addr !409
  store %_IO_FILE* %97, %_IO_FILE** %sl.1.in.reg2mem, !insn.addr !410
  br i1 %98, label %dec_label_pc_9a54, label %dec_label_pc_98d4, !insn.addr !410

dec_label_pc_98d4:                                ; preds = %dec_label_pc_9ad8, %dec_label_pc_9a54, %dec_label_pc_98a8
  %sl.1.in.reload = load %_IO_FILE*, %_IO_FILE** %sl.1.in.reg2mem
  %99 = call i8* @fgets(i8* nonnull %86, i32 120, %_IO_FILE* nonnull %sl.1.in.reload), !insn.addr !411
  %100 = call i32 @fclose(%_IO_FILE* nonnull %sl.1.in.reload), !insn.addr !412
  %101 = icmp eq i8* %99, null, !insn.addr !413
  br i1 %101, label %dec_label_pc_9b2c, label %dec_label_pc_98fc, !insn.addr !414

dec_label_pc_98fc:                                ; preds = %dec_label_pc_98d4
  %102 = call i8* @strchr(i8* nonnull %86, i32 10), !insn.addr !415
  %103 = icmp eq i8* %102, null, !insn.addr !416
  br i1 %103, label %105, label %104, !insn.addr !417

; <label>:104:                                    ; preds = %dec_label_pc_98fc
  store i8 0, i8* %102, align 1, !insn.addr !417
  br label %105, !insn.addr !417

; <label>:105:                                    ; preds = %dec_label_pc_98fc, %104
  %106 = call i32 (i8*, i8*, ...) @sscanf(i8* %93, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_a4d8, i32 0, i32 0), i32* nonnull %stack_var_-956), !insn.addr !418
  %107 = icmp eq i32 %106, 0, !insn.addr !419
  br i1 %107, label %dec_label_pc_988c.backedge, label %dec_label_pc_992c, !insn.addr !420

dec_label_pc_992c:                                ; preds = %105
  %108 = call i32 @strncmp(i8* nonnull %86, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_a570, i32 0, i32 0), i32 4), !insn.addr !421
  %109 = icmp eq i32 %108, 0, !insn.addr !422
  store i32 ptrtoint ([5 x i8]* @global_var_a570 to i32), i32* %r1.0.reg2mem, !insn.addr !423
  store i32 8, i32* %r8.1.reg2mem, !insn.addr !423
  br i1 %109, label %dec_label_pc_9948, label %dec_label_pc_99f4, !insn.addr !423

dec_label_pc_9948:                                ; preds = %dec_label_pc_99f4, %dec_label_pc_992c, %dec_label_pc_9a14
  %r8.1.reload = load i32, i32* %r8.1.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %110 = add i32 %r5.1.reload, 1, !insn.addr !424
  %111 = urem i32 %110, 8, !insn.addr !425
  %112 = icmp eq i32 %111, 0, !insn.addr !425
  store i32 %stack_var_-976.2.reload, i32* %stack_var_-976.3.reg2mem, !insn.addr !426
  store i32 %r1.0.reload, i32* %r1.1.reg2mem, !insn.addr !426
  br i1 %112, label %dec_label_pc_9954, label %dec_label_pc_996c, !insn.addr !426

dec_label_pc_9954:                                ; preds = %dec_label_pc_9948
  %113 = call i32 @function_9424(i32 %stack_var_-976.2.reload, i32 %110), !insn.addr !427
  %114 = icmp eq i32 %113, 0, !insn.addr !428
  store i32 0, i32* %stack_var_-976.0.reg2mem, !insn.addr !429
  store i32 %113, i32* %stack_var_-976.3.reg2mem, !insn.addr !429
  store i32 %110, i32* %r1.1.reg2mem, !insn.addr !429
  br i1 %114, label %dec_label_pc_97a0, label %dec_label_pc_996c, !insn.addr !429

dec_label_pc_996c:                                ; preds = %dec_label_pc_9948, %dec_label_pc_9954
  %r1.1.reload = load i32, i32* %r1.1.reg2mem
  %stack_var_-976.3.reload = load i32, i32* %stack_var_-976.3.reg2mem
  %115 = load i32, i32* %stack_var_-956, align 4, !insn.addr !430
  %116 = mul i32 %r5.1.reload, 16, !insn.addr !431
  %117 = add i32 %stack_var_-976.3.reload, %116, !insn.addr !431
  %118 = inttoptr i32 %117 to i32*, !insn.addr !432
  store i32 %115, i32* %118, align 4, !insn.addr !432
  %119 = call i8* @__strdup(i8* nonnull %86), !insn.addr !433
  %120 = ptrtoint i8* %119 to i32, !insn.addr !433
  %121 = icmp eq i8* %119, null, !insn.addr !434
  %122 = add i32 %117, 4, !insn.addr !435
  %123 = inttoptr i32 %122 to i32*, !insn.addr !435
  store i32 %120, i32* %123, align 4, !insn.addr !435
  br i1 %121, label %dec_label_pc_97ac, label %dec_label_pc_9990, !insn.addr !436

dec_label_pc_9990:                                ; preds = %dec_label_pc_996c
  %124 = add i32 %r8.1.reload, ptrtoint ([10 x i8*]* @global_var_a3b8 to i32), !insn.addr !437
  %125 = inttoptr i32 %124 to i32*, !insn.addr !438
  %126 = load i32, i32* %125, align 8, !insn.addr !438
  %127 = add i32 %r8.1.reload, add (i32 ptrtoint ([10 x i8*]* @global_var_a3b8 to i32), i32 4), !insn.addr !439
  %128 = inttoptr i32 %127 to i32*, !insn.addr !439
  %129 = load i32, i32* %128, align 4, !insn.addr !439
  %130 = add i32 %117, 8, !insn.addr !440
  %131 = inttoptr i32 %130 to i32*, !insn.addr !440
  store i32 %126, i32* %131, align 4, !insn.addr !440
  %132 = add i32 %117, 12, !insn.addr !441
  %133 = inttoptr i32 %132 to i32*, !insn.addr !441
  store i32 %129, i32* %133, align 4, !insn.addr !441
  %134 = call %dirent* @readdir(%__dirstream* nonnull %82), !insn.addr !442
  %135 = icmp eq %dirent* %134, null, !insn.addr !443
  store i32 %stack_var_-976.3.reload, i32* %stack_var_-976.2.reg2mem, !insn.addr !444
  store %dirent* %134, %dirent** %r0.0.in.reg2mem, !insn.addr !444
  store i32 %110, i32* %r5.1.reg2mem, !insn.addr !444
  store i32 %stack_var_-976.3.reload, i32* %stack_var_-976.4.reg2mem, !insn.addr !444
  br i1 %135, label %dec_label_pc_99b8, label %dec_label_pc_989c, !insn.addr !444

dec_label_pc_99b8:                                ; preds = %dec_label_pc_988c.backedge, %dec_label_pc_9990, %dec_label_pc_988c.preheader
  %stack_var_-976.4.reload = load i32, i32* %stack_var_-976.4.reg2mem
  %136 = call i32 @closedir(%__dirstream* nonnull %82), !insn.addr !445
  store i32 %stack_var_-976.4.reload, i32* %stack_var_-976.0.reg2mem, !insn.addr !446
  br label %dec_label_pc_97a0, !insn.addr !446

dec_label_pc_99c4:                                ; preds = %dec_label_pc_989c
  %137 = add i32 %r0.0, 12, !insn.addr !447
  %138 = inttoptr i32 %137 to i8*, !insn.addr !447
  %139 = load i8, i8* %138, align 1, !insn.addr !447
  switch i8 %139, label %dec_label_pc_98a8 [
    i8 0, label %dec_label_pc_988c.backedge
    i8 46, label %dec_label_pc_99d8
  ]

dec_label_pc_99d8:                                ; preds = %dec_label_pc_99c4
  %140 = add i32 %r0.0, 13, !insn.addr !448
  %141 = inttoptr i32 %140 to i8*, !insn.addr !448
  %142 = load i8, i8* %141, align 1, !insn.addr !448
  %143 = icmp eq i8 %142, 0, !insn.addr !449
  br i1 %143, label %dec_label_pc_988c.backedge, label %dec_label_pc_98a8, !insn.addr !450

dec_label_pc_99e8:                                ; preds = %dec_label_pc_97ec
  %144 = call i32 @fclose(%_IO_FILE* nonnull %59), !insn.addr !451
  store i32 %3, i32* %stack_var_-976.0.reg2mem, !insn.addr !452
  br label %dec_label_pc_97a0, !insn.addr !452

dec_label_pc_99f4:                                ; preds = %dec_label_pc_992c
  %145 = load i32, i32* %stack_var_-956, align 4, !insn.addr !453
  %146 = call i32 @function_94fc(i32 %145, i32* nonnull %stack_var_-948, i32 20, i32 1), !insn.addr !454
  %147 = icmp slt i32 %146, 0, !insn.addr !455
  %148 = icmp eq i1 %147, false, !insn.addr !456
  store i32 %87, i32* %r1.0.reg2mem, !insn.addr !456
  store i32 32, i32* %r8.1.reg2mem, !insn.addr !456
  br i1 %148, label %dec_label_pc_9a14, label %dec_label_pc_9948, !insn.addr !456

dec_label_pc_9a14:                                ; preds = %dec_label_pc_99f4
  %149 = call i32 (i32, i32, ...) @ioctl(i32 %146, i32 1797), !insn.addr !457
  %150 = icmp slt i32 %149, 0, !insn.addr !458
  %151 = icmp eq i1 %150, false, !insn.addr !459
  %r8.6 = select i1 %151, i32 %spec.select, i32 32
  %152 = call i32 @close(i32 %146), !insn.addr !460
  store i32 1797, i32* %r1.0.reg2mem, !insn.addr !461
  store i32 %r8.6, i32* %r8.1.reg2mem, !insn.addr !461
  br label %dec_label_pc_9948, !insn.addr !461

dec_label_pc_9a54:                                ; preds = %dec_label_pc_98a8
  %153 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_a51c, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !462
  %154 = call %_IO_FILE* @fopen(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_a688, i32 0, i32 0)), !insn.addr !463
  %155 = icmp eq %_IO_FILE* %154, null, !insn.addr !464
  store %_IO_FILE* %154, %_IO_FILE** %sl.1.in.reg2mem, !insn.addr !465
  br i1 %155, label %dec_label_pc_9a7c, label %dec_label_pc_98d4, !insn.addr !465

dec_label_pc_9a7c:                                ; preds = %dec_label_pc_9a54
  %156 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_a530, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93), !insn.addr !466
  %157 = call %__dirstream* @opendir(i8* nonnull %61), !insn.addr !467
  %158 = icmp eq %__dirstream* %157, null, !insn.addr !468
  br i1 %158, label %dec_label_pc_988c.backedge, label %dec_label_pc_9aa0.preheader, !insn.addr !469

dec_label_pc_9aa0.preheader:                      ; preds = %dec_label_pc_9a7c
  %159 = call %dirent* @readdir(%__dirstream* nonnull %157), !insn.addr !470
  %160 = icmp eq %dirent* %159, null, !insn.addr !471
  store %dirent* %159, %dirent** %.in.reg2mem, !insn.addr !472
  br i1 %160, label %dec_label_pc_988c.backedge, label %dec_label_pc_9abc, !insn.addr !472

dec_label_pc_9abc:                                ; preds = %dec_label_pc_9aa0.preheader, %dec_label_pc_9aa0.backedge
  %.in.reload = load %dirent*, %dirent** %.in.reg2mem
  %161 = ptrtoint %dirent* %.in.reload to i32
  %162 = add i32 %161, 11, !insn.addr !473
  %163 = inttoptr i32 %162 to i8*, !insn.addr !474
  %164 = load i8, i8* %163, align 1, !insn.addr !474
  %165 = icmp eq i8 %164, 46, !insn.addr !475
  br i1 %165, label %dec_label_pc_9b08, label %dec_label_pc_9acc, !insn.addr !476

dec_label_pc_9acc:                                ; preds = %dec_label_pc_9b08, %dec_label_pc_9b1c, %dec_label_pc_9abc
  %166 = call i32 @strncmp(i8* %163, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_a540, i32 0, i32 0), i32 4), !insn.addr !477
  %167 = icmp eq i32 %166, 0, !insn.addr !478
  br i1 %167, label %dec_label_pc_9ad8, label %dec_label_pc_9aa0.backedge, !insn.addr !479

dec_label_pc_9ad8:                                ; preds = %dec_label_pc_9acc
  %168 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %61, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_a548, i32 0, i32 0), i32* nonnull %stack_var_-552, i8* %93, i8* %163), !insn.addr !480
  %169 = call %_IO_FILE* @fopen(i8* nonnull %61, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_a688, i32 0, i32 0)), !insn.addr !481
  %170 = icmp eq %_IO_FILE* %169, null, !insn.addr !482
  store %_IO_FILE* %169, %_IO_FILE** %sl.1.in.reg2mem, !insn.addr !483
  br i1 %170, label %dec_label_pc_9aa0.backedge, label %dec_label_pc_98d4, !insn.addr !483

dec_label_pc_9aa0.backedge:                       ; preds = %dec_label_pc_9ad8, %dec_label_pc_9b1c, %dec_label_pc_9acc, %dec_label_pc_9b08
  %171 = call %dirent* @readdir(%__dirstream* nonnull %157), !insn.addr !470
  %172 = icmp eq %dirent* %171, null, !insn.addr !471
  store %dirent* %171, %dirent** %.in.reg2mem, !insn.addr !472
  br i1 %172, label %dec_label_pc_988c.backedge, label %dec_label_pc_9abc, !insn.addr !472

dec_label_pc_9b08:                                ; preds = %dec_label_pc_9abc
  %173 = add i32 %161, 12, !insn.addr !484
  %174 = inttoptr i32 %173 to i8*, !insn.addr !484
  %175 = load i8, i8* %174, align 1, !insn.addr !484
  switch i8 %175, label %dec_label_pc_9acc [
    i8 0, label %dec_label_pc_9aa0.backedge
    i8 46, label %dec_label_pc_9b1c
  ]

dec_label_pc_9b1c:                                ; preds = %dec_label_pc_9b08
  %176 = add i32 %161, 13, !insn.addr !485
  %177 = inttoptr i32 %176 to i8*, !insn.addr !485
  %178 = load i8, i8* %177, align 1, !insn.addr !485
  %179 = icmp eq i8 %178, 0, !insn.addr !486
  br i1 %179, label %dec_label_pc_9aa0.backedge, label %dec_label_pc_9acc, !insn.addr !487

dec_label_pc_9b2c:                                ; preds = %dec_label_pc_98d4
  %180 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !488
  %181 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %180, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_a560, i32 0, i32 0), i32* nonnull %stack_var_-296), !insn.addr !489
  br label %dec_label_pc_988c.backedge, !insn.addr !490

dec_label_pc_988c.backedge:                       ; preds = %dec_label_pc_99c4, %dec_label_pc_9a7c, %dec_label_pc_99d8, %105, %dec_label_pc_9aa0.preheader, %dec_label_pc_9aa0.backedge, %dec_label_pc_9b2c
  %182 = call %dirent* @readdir(%__dirstream* nonnull %82), !insn.addr !401
  %183 = icmp eq %dirent* %182, null, !insn.addr !402
  store %dirent* %182, %dirent** %.reg2mem137, !insn.addr !403
  store i32 %r5.1.reload, i32* %r5.047.reg2mem, !insn.addr !403
  store i32 %stack_var_-976.2.reload, i32* %stack_var_-976.146.reg2mem, !insn.addr !403
  store i32 %stack_var_-976.2.reload, i32* %stack_var_-976.4.reg2mem, !insn.addr !403
  br i1 %183, label %dec_label_pc_99b8, label %dec_label_pc_989c.preheader, !insn.addr !403

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
  uselistorder i32 (i32)* @close, { 5, 1, 2, 3, 0, 4, 6 }
  uselistorder i32 32, { 1, 0 }
  uselistorder i1 false, { 2, 3, 1, 0 }
  uselistorder i32 (i32, i32*, i32, i32)* @function_94fc, { 1, 0 }
  uselistorder i32 13, { 1, 2, 0, 3 }
  uselistorder i32 (i8*, i8*, i32)* @strncmp, { 1, 0, 2 }
  uselistorder [5 x i8]* @global_var_a570, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 3, 4, 2, 1, 0, 5 }
  uselistorder i8 46, { 0, 2, 1, 3 }
  uselistorder %dirent* null, { 4, 2, 1, 3, 0 }
  uselistorder %dirent* (%__dirstream*)* @readdir, { 4, 3, 1, 2, 0, 5 }
  uselistorder %__dirstream* (i8*)* @opendir, { 1, 0, 2 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 3, 2, 1, 0, 4 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 0, 2, 1, 3 }
  uselistorder i32 (i32, i32)* @function_9424, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sscanf, { 2, 0, 1, 3 }
  uselistorder i8* (i8*, i32)* @strrchr, { 0, 2, 1, 3 }
  uselistorder i32 9, { 2, 3, 1, 0 }
  uselistorder i32 120, { 1, 2, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 4, 3, 2, 1, 0, 5 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_a688, i32 0, i32 0), { 4, 3, 2, 1, 0 }
  uselistorder i32 8, { 4, 1, 0, 5, 6, 2, 3 }
  uselistorder label %dec_label_pc_988c.backedge, { 6, 5, 4, 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_9aa0.backedge, { 1, 3, 0, 2 }
  uselistorder label %dec_label_pc_9acc, { 1, 0, 2 }
  uselistorder label %dec_label_pc_9abc, { 1, 0 }
  uselistorder label %dec_label_pc_996c, { 1, 0 }
  uselistorder label %dec_label_pc_9948, { 2, 0, 1 }
  uselistorder label %105, { 1, 0 }
  uselistorder label %dec_label_pc_98a8, { 1, 0, 2 }
  uselistorder label %dec_label_pc_989c, { 1, 0 }
  uselistorder label %dec_label_pc_989c.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_97ec, { 1, 0 }
  uselistorder label %dec_label_pc_97a0, { 3, 4, 1, 5, 6, 7, 2, 8, 0, 9 }
  uselistorder label %dec_label_pc_9714, { 1, 0 }
  uselistorder label %dec_label_pc_9678, { 1, 0 }
}

define i32 @function_9b80(i32 %arg1) local_unnamed_addr {
dec_label_pc_9b80:
  %r6.5.reg2mem = alloca i32, !insn.addr !491
  %r3.1.reg2mem = alloca i32, !insn.addr !491
  %r2.0.reg2mem = alloca i32, !insn.addr !491
  %r1.0.reg2mem = alloca i32, !insn.addr !491
  %r6.4.reg2mem = alloca i32, !insn.addr !491
  %r6.3.reg2mem = alloca i32, !insn.addr !491
  %r4.1.in.reg2mem = alloca i32, !insn.addr !491
  %.reg2mem = alloca i32, !insn.addr !491
  %r6.1.reg2mem = alloca i32, !insn.addr !491
  %stack_var_-28 = alloca i8*, align 4
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !492
  %1 = call i32 @strtoul(i8* %0, i8** nonnull %stack_var_-28, i32 0), !insn.addr !492
  %2 = load i8*, i8** %stack_var_-28, align 4, !insn.addr !493
  %3 = load i8, i8* %2, align 1, !insn.addr !494
  %4 = icmp ne i8 %3, 0, !insn.addr !495
  %5 = trunc i32 %1 to i8
  %6 = icmp eq i8 %5, 0, !insn.addr !496
  %or.cond = or i1 %6, %4
  br i1 %or.cond, label %dec_label_pc_9bcc, label %dec_label_pc_9bb4, !insn.addr !497

dec_label_pc_9bb4:                                ; preds = %dec_label_pc_9b80
  %7 = icmp ult i32 %1, 1048576, !insn.addr !498
  store i32 %1, i32* %r6.1.reg2mem, !insn.addr !499
  br i1 %7, label %dec_label_pc_9bc0, label %dec_label_pc_9c74, !insn.addr !499

dec_label_pc_9bc0:                                ; preds = %dec_label_pc_9bb4, %dec_label_pc_9c94, %dec_label_pc_9c74, %dec_label_pc_9c28
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  ret i32 %r6.1.reload, !insn.addr !500

dec_label_pc_9bcc:                                ; preds = %dec_label_pc_9b80
  %8 = call i32 @function_962c(), !insn.addr !501
  %9 = icmp eq i32 %8, 0, !insn.addr !502
  br i1 %9, label %dec_label_pc_9c94, label %dec_label_pc_9bd8, !insn.addr !503

dec_label_pc_9bd8:                                ; preds = %dec_label_pc_9bcc
  %r3.0 = zext i8 %3 to i32
  %10 = add i32 %8, 4, !insn.addr !504
  %11 = inttoptr i32 %10 to i32*, !insn.addr !504
  %12 = load i32, i32* %11, align 4, !insn.addr !504
  %13 = icmp eq i32 %12, 0, !insn.addr !505
  store i32 %12, i32* %.reg2mem, !insn.addr !506
  store i32 %8, i32* %r4.1.in.reg2mem, !insn.addr !506
  store i32 -1, i32* %r6.3.reg2mem, !insn.addr !506
  br i1 %13, label %dec_label_pc_9c54, label %dec_label_pc_9bf0, !insn.addr !506

dec_label_pc_9bf0:                                ; preds = %dec_label_pc_9bd8, %dec_label_pc_9c0c
  %r6.3.reload = load i32, i32* %r6.3.reg2mem
  %r4.1.in.reload = load i32, i32* %r4.1.in.reg2mem
  %.reload = load i32, i32* %.reg2mem, !insn.addr !507
  %14 = inttoptr i32 %.reload to i8*, !insn.addr !507
  %15 = call i32 @strcmp(i8* %14, i8* %0), !insn.addr !507
  %16 = icmp eq i32 %15, 0, !insn.addr !508
  store i32 %r6.3.reload, i32* %r6.4.reg2mem, !insn.addr !509
  br i1 %16, label %dec_label_pc_9c00, label %dec_label_pc_9c0c, !insn.addr !509

dec_label_pc_9c00:                                ; preds = %dec_label_pc_9bf0
  %17 = icmp slt i32 %r6.3.reload, 0, !insn.addr !510
  br i1 %17, label %dec_label_pc_9c08, label %dec_label_pc_9c34, !insn.addr !511

dec_label_pc_9c08:                                ; preds = %dec_label_pc_9c00
  %18 = inttoptr i32 %r4.1.in.reload to i32*, !insn.addr !512
  %19 = load i32, i32* %18, align 4, !insn.addr !512
  store i32 %19, i32* %r6.4.reg2mem, !insn.addr !512
  br label %dec_label_pc_9c0c, !insn.addr !512

dec_label_pc_9c0c:                                ; preds = %dec_label_pc_9bf0, %dec_label_pc_9c08
  %r4.1 = add i32 %r4.1.in.reload, 16
  %r6.4.reload = load i32, i32* %r6.4.reg2mem
  %20 = add i32 %r4.1.in.reload, 20, !insn.addr !513
  %21 = inttoptr i32 %20 to i32*, !insn.addr !513
  %22 = load i32, i32* %21, align 4, !insn.addr !513
  %23 = icmp eq i32 %22, 0, !insn.addr !514
  store i32 %22, i32* %.reg2mem, !insn.addr !515
  store i32 %r4.1, i32* %r4.1.in.reg2mem, !insn.addr !515
  store i32 %r6.4.reload, i32* %r6.3.reg2mem, !insn.addr !515
  br i1 %23, label %dec_label_pc_9c20, label %dec_label_pc_9bf0, !insn.addr !515

dec_label_pc_9c20:                                ; preds = %dec_label_pc_9c0c
  %24 = icmp eq i32 %r6.4.reload, -1, !insn.addr !516
  store i32 %arg1, i32* %r1.0.reg2mem, !insn.addr !517
  store i32 0, i32* %r2.0.reg2mem, !insn.addr !517
  store i32 %r3.0, i32* %r3.1.reg2mem, !insn.addr !517
  store i32 %r6.4.reload, i32* %r6.5.reg2mem, !insn.addr !517
  br i1 %24, label %dec_label_pc_9c54, label %dec_label_pc_9c28, !insn.addr !517

dec_label_pc_9c28:                                ; preds = %dec_label_pc_9c54, %dec_label_pc_9c34, %dec_label_pc_9c20
  %r6.5.reload = load i32, i32* %r6.5.reg2mem
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %25 = call i32 @function_93ec(i32 %8, i32 %r1.0.reload, i32 %r2.0.reload, i32 %r3.1.reload), !insn.addr !518
  store i32 %r6.5.reload, i32* %r6.1.reg2mem, !insn.addr !519
  br label %dec_label_pc_9bc0, !insn.addr !519

dec_label_pc_9c34:                                ; preds = %dec_label_pc_9c00
  %26 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !520
  %27 = ptrtoint %_IO_FILE* %26 to i32, !insn.addr !520
  %28 = call i32 @fwrite(i32* bitcast ([36 x i8]* @global_var_a5a0 to i32*), i32 1, i32 35, %_IO_FILE* %26), !insn.addr !521
  store i32 1, i32* %r1.0.reg2mem, !insn.addr !522
  store i32 35, i32* %r2.0.reg2mem, !insn.addr !522
  store i32 %27, i32* %r3.1.reg2mem, !insn.addr !522
  store i32 -4, i32* %r6.5.reg2mem, !insn.addr !522
  br label %dec_label_pc_9c28, !insn.addr !522

dec_label_pc_9c54:                                ; preds = %dec_label_pc_9c20, %dec_label_pc_9bd8
  %29 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !523
  %30 = ptrtoint %_IO_FILE* %29 to i32, !insn.addr !523
  %31 = call i32 @fwrite(i32* bitcast ([52 x i8]* @global_var_a5c4 to i32*), i32 1, i32 51, %_IO_FILE* %29), !insn.addr !524
  store i32 1, i32* %r1.0.reg2mem, !insn.addr !525
  store i32 51, i32* %r2.0.reg2mem, !insn.addr !525
  store i32 %30, i32* %r3.1.reg2mem, !insn.addr !525
  store i32 -1, i32* %r6.5.reg2mem, !insn.addr !525
  br label %dec_label_pc_9c28, !insn.addr !525

dec_label_pc_9c74:                                ; preds = %dec_label_pc_9bb4
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !526
  %33 = call i32 @fwrite(i32* bitcast ([30 x i8]* @global_var_a5f8 to i32*), i32 1, i32 29, %_IO_FILE* %32), !insn.addr !527
  store i32 -2, i32* %r6.1.reg2mem, !insn.addr !528
  br label %dec_label_pc_9bc0, !insn.addr !528

dec_label_pc_9c94:                                ; preds = %dec_label_pc_9bcc
  %34 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !529
  %35 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_a588 to i32*), i32 1, i32 22, %_IO_FILE* %34), !insn.addr !530
  store i32 -3, i32* %r6.1.reg2mem, !insn.addr !531
  br label %dec_label_pc_9bc0, !insn.addr !531

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
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 18, 4, 3, 2, 1, 0, 9, 8, 7, 6, 5, 14, 13, 12, 11, 10, 17, 16, 15, 19 }
  uselistorder i32 20, { 1, 3, 0, 2, 4, 5 }
  uselistorder i32 16, { 3, 0, 2, 5, 4, 1, 6 }
  uselistorder i32 4, { 13, 7, 6, 9, 8, 10, 11, 12, 0, 1, 2, 14, 3, 4, 15, 5 }
  uselistorder i8 0, { 0, 8, 10, 5, 9, 6, 4, 11, 12, 13, 14, 15, 1, 16, 7, 3, 2, 17, 18, 19 }
  uselistorder label %dec_label_pc_9c0c, { 1, 0 }
  uselistorder label %dec_label_pc_9bf0, { 1, 0 }
  uselistorder label %dec_label_pc_9bc0, { 1, 2, 3, 0 }
}

define i32 @function_9cc8(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_9cc8:
  %0 = icmp eq i32 %arg3, 0, !insn.addr !532
  %spec.select = select i1 %0, i32 1795, i32 1798
  %1 = call i32 (i32, i32, ...) @ioctl(i32 %arg1, i32 %spec.select), !insn.addr !533
  %2 = icmp slt i32 %1, 0, !insn.addr !534
  br i1 %2, label %dec_label_pc_9cf8, label %dec_label_pc_9cf0, !insn.addr !535

dec_label_pc_9cf0:                                ; preds = %dec_label_pc_9cc8
  ret i32 0, !insn.addr !536

dec_label_pc_9cf8:                                ; preds = %dec_label_pc_9cc8
  %3 = load %_IO_FILE*, %_IO_FILE** @global_var_12848, align 4, !insn.addr !537
  %4 = call i32* @__errno_location(), !insn.addr !538
  %5 = load i32, i32* %4, align 4, !insn.addr !539
  %6 = call i8* @strerror(i32 %5), !insn.addr !540
  %7 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %3, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @global_var_a618, i32 0, i32 0), i32 %arg2, i8* %6), !insn.addr !541
  %8 = load i32, i32* %4, align 4, !insn.addr !542
  %9 = sub i32 0, %8, !insn.addr !543
  ret i32 %9, !insn.addr !544

; uselistorder directives
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 8, 17, 15, 16, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9, 18 }
  uselistorder i8* (i32)* @strerror, { 3, 2, 1, 0, 4 }
  uselistorder i32* ()* @__errno_location, { 3, 0, 1, 2, 4 }
  uselistorder %_IO_FILE** @global_var_12848, { 38, 37, 36, 35, 34, 33, 31, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 6, 5, 4, 3, 1, 2, 0, 7 }
}

define i32 @function_9d38(i32 %arg1) local_unnamed_addr {
dec_label_pc_9d38:
  %r5.1.reg2mem = alloca i32, !insn.addr !545
  %r5.0.ph.reg2mem = alloca i32, !insn.addr !545
  %stack_var_-20 = alloca i32, align 4
  %0 = load %_IO_FILE*, %_IO_FILE** @global_var_12850, align 4, !insn.addr !546
  %1 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !547
  %2 = call i8* @fgets(i8* nonnull %1, i32 2, %_IO_FILE* %0), !insn.addr !547
  %3 = icmp eq i8* %2, null, !insn.addr !548
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !549
  br i1 %3, label %dec_label_pc_9da8, label %dec_label_pc_9d60, !insn.addr !549

dec_label_pc_9d60:                                ; preds = %dec_label_pc_9d38
  %4 = load i32, i32* %stack_var_-20, align 4, !insn.addr !550
  %5 = urem i32 %4, 256, !insn.addr !550
  %6 = icmp eq i32 %5, 89, !insn.addr !551
  br i1 %6, label %dec_label_pc_9dc4, label %dec_label_pc_9d6c, !insn.addr !552

dec_label_pc_9d6c:                                ; preds = %dec_label_pc_9d60
  %7 = icmp ult i32 %5, 89, !insn.addr !551
  %trunc = trunc i32 %4 to i8
  br i1 %7, label %dec_label_pc_9d70, label %dec_label_pc_9db4, !insn.addr !553

dec_label_pc_9d70:                                ; preds = %dec_label_pc_9d6c
  store i32 %arg1, i32* %r5.0.ph.reg2mem
  store i32 %arg1, i32* %r5.1.reg2mem
  switch i8 %trunc, label %dec_label_pc_9d90.preheader [
    i8 78, label %dec_label_pc_9dcc
    i8 10, label %dec_label_pc_9da8
  ]

dec_label_pc_9d90.preheader:                      ; preds = %dec_label_pc_9dc4, %dec_label_pc_9dcc, %dec_label_pc_9d70, %dec_label_pc_9db4
  %r5.0.ph.reload = load i32, i32* %r5.0.ph.reg2mem
  br label %dec_label_pc_9d90

dec_label_pc_9d84:                                ; preds = %dec_label_pc_9d90
  %8 = urem i32 %13, 256, !insn.addr !554
  %9 = icmp eq i32 %8, 10, !insn.addr !555
  %10 = mul i32 %13, 16777216
  %11 = ashr exact i32 %10, 24, !insn.addr !556
  store i32 %11, i32* %stack_var_-20, align 4, !insn.addr !556
  store i32 %r5.0.ph.reload, i32* %r5.1.reg2mem, !insn.addr !557
  br i1 %9, label %dec_label_pc_9da8, label %dec_label_pc_9d90, !insn.addr !557

dec_label_pc_9d90:                                ; preds = %dec_label_pc_9d90.preheader, %dec_label_pc_9d84
  %12 = load %_IO_FILE*, %_IO_FILE** @global_var_12850, align 4, !insn.addr !558
  %13 = call i32 @fgetc(%_IO_FILE* %12), !insn.addr !559
  %14 = icmp eq i32 %13, -1, !insn.addr !560
  store i32 0, i32* %r5.1.reg2mem, !insn.addr !561
  br i1 %14, label %dec_label_pc_9da8, label %dec_label_pc_9d84, !insn.addr !561

dec_label_pc_9da8:                                ; preds = %dec_label_pc_9d90, %dec_label_pc_9d84, %dec_label_pc_9db4, %dec_label_pc_9d38, %dec_label_pc_9d70
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !562

dec_label_pc_9db4:                                ; preds = %dec_label_pc_9d6c
  store i32 %arg1, i32* %r5.0.ph.reg2mem
  store i32 %arg1, i32* %r5.1.reg2mem
  switch i8 %trunc, label %dec_label_pc_9d90.preheader [
    i8 110, label %dec_label_pc_9dcc
    i8 121, label %dec_label_pc_9dc4
    i8 10, label %dec_label_pc_9da8
  ]

dec_label_pc_9dc4:                                ; preds = %dec_label_pc_9db4, %dec_label_pc_9d60
  store i32 1, i32* %r5.0.ph.reg2mem, !insn.addr !563
  br label %dec_label_pc_9d90.preheader, !insn.addr !563

dec_label_pc_9dcc:                                ; preds = %dec_label_pc_9db4, %dec_label_pc_9d70
  store i32 0, i32* %r5.0.ph.reg2mem, !insn.addr !564
  br label %dec_label_pc_9d90.preheader, !insn.addr !564

; uselistorder directives
  uselistorder i32 %13, { 2, 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-20, { 1, 2, 0 }
  uselistorder i32* %r5.0.ph.reg2mem, { 2, 1, 4, 0, 3 }
  uselistorder i32* %r5.1.reg2mem, { 3, 0, 1, 2, 5, 4 }
  uselistorder i32 -1, { 7, 0, 8, 1, 6, 2, 3, 10, 9, 4, 11, 12, 13, 14, 15, 5 }
  uselistorder i32 24, { 1, 0 }
  uselistorder i32 10, { 1, 0 }
  uselistorder i8 10, { 2, 3, 0, 1 }
  uselistorder i32 89, { 1, 0 }
  uselistorder i8* null, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i8* (i8*, i32, %_IO_FILE*)* @fgets, { 2, 1, 4, 3, 0, 5 }
  uselistorder %_IO_FILE** @global_var_12850, { 1, 0 }
  uselistorder i32 %arg1, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_9da8, { 2, 0, 1, 4, 3 }
  uselistorder label %dec_label_pc_9d90, { 1, 0 }
  uselistorder label %dec_label_pc_9d90.preheader, { 1, 0, 3, 2 }
}

define i32 @function_9dd8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9dd8:
  %0 = call i32 @function_8928(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !565
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_88b0 to i32), i32 40440), i32 add (i32 ptrtoint (i32* @global_var_9e00 to i32), i32 ptrtoint (i32* @global_var_88a4 to i32))), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !566

; uselistorder directives
  uselistorder i32 0, { 40, 2, 0, 1, 134, 41, 42, 25, 135, 136, 3, 151, 152, 153, 154, 155, 101, 49, 50, 43, 44, 137, 34, 35, 45, 46, 47, 48, 140, 141, 6, 142, 143, 144, 51, 52, 145, 53, 54, 4, 30, 138, 139, 146, 55, 56, 36, 37, 57, 58, 8, 7, 5, 147, 148, 59, 60, 9, 27, 28, 61, 62, 65, 66, 63, 64, 67, 68, 156, 26, 157, 69, 70, 102, 103, 149, 150, 158, 29, 159, 185, 83, 84, 75, 76, 81, 82, 11, 12, 10, 13, 160, 161, 162, 104, 163, 38, 39, 164, 165, 87, 88, 89, 90, 91, 92, 14, 166, 167, 168, 169, 170, 77, 78, 172, 79, 80, 85, 86, 173, 93, 94, 174, 105, 95, 96, 171, 175, 176, 177, 32, 178, 33, 179, 180, 181, 106, 31, 107, 71, 72, 73, 74, 15, 182, 183, 184, 97, 98, 16, 18, 20, 22, 23, 24, 17, 19, 21, 99, 100, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133 }
  uselistorder i32 2, { 7, 9, 4, 10, 13, 5, 11, 14, 12, 15, 2, 0, 1, 6, 3, 16, 8 }
}

define i32 @function_9e3c() local_unnamed_addr {
dec_label_pc_9e3c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !567

; uselistorder directives
  uselistorder i32 1, { 5, 7, 125, 8, 6, 102, 103, 13, 104, 12, 105, 99, 19, 18, 17, 16, 15, 14, 11, 10, 9, 106, 134, 138, 135, 136, 137, 38, 131, 130, 129, 128, 127, 126, 39, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 4, 107, 97, 96, 41, 40, 108, 109, 100, 42, 3, 44, 43, 47, 46, 45, 110, 111, 2, 1, 132, 112, 95, 113, 114, 98, 54, 115, 139, 116, 140, 117, 141, 118, 142, 119, 143, 120, 64, 121, 83, 81, 123, 122, 56, 68, 144, 85, 145, 71, 87, 72, 101, 133, 94, 93, 92, 91, 90, 89, 88, 86, 84, 82, 80, 79, 78, 77, 76, 75, 74, 73, 70, 69, 67, 66, 65, 63, 62, 61, 60, 59, 58, 57, 55, 53, 52, 51, 50, 49, 48, 0, 124 }
}

define i32 @function_9e40(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9e40:
  ret i32 %arg1, !insn.addr !568
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

!0 = !{i64 35116}
!1 = !{i64 35120}
!2 = !{i64 35152}
!3 = !{i64 35164}
!4 = !{i64 35176}
!5 = !{i64 35188}
!6 = !{i64 35200}
!7 = !{i64 35212}
!8 = !{i64 35224}
!9 = !{i64 35236}
!10 = !{i64 35248}
!11 = !{i64 35260}
!12 = !{i64 35272}
!13 = !{i64 35284}
!14 = !{i64 35296}
!15 = !{i64 35308}
!16 = !{i64 35320}
!17 = !{i64 35332}
!18 = !{i64 35344}
!19 = !{i64 35356}
!20 = !{i64 35368}
!21 = !{i64 35380}
!22 = !{i64 35392}
!23 = !{i64 35404}
!24 = !{i64 35416}
!25 = !{i64 35428}
!26 = !{i64 35440}
!27 = !{i64 35452}
!28 = !{i64 35464}
!29 = !{i64 35476}
!30 = !{i64 35488}
!31 = !{i64 35500}
!32 = !{i64 35512}
!33 = !{i64 35524}
!34 = !{i64 35536}
!35 = !{i64 35548}
!36 = !{i64 35560}
!37 = !{i64 35572}
!38 = !{i64 35584}
!39 = !{i64 35596}
!40 = !{i64 35600}
!41 = !{i64 35644}
!42 = !{i64 35648}
!43 = !{i64 35652}
!44 = !{i64 35656}
!45 = !{i64 35660}
!46 = !{i64 35664}
!47 = !{i64 35700}
!48 = !{i64 35704}
!49 = !{i64 35708}
!50 = !{i64 35720}
!51 = !{i64 35728}
!52 = !{i64 35732}
!53 = !{i64 35736}
!54 = !{i64 35740}
!55 = !{i64 35748}
!56 = !{i64 35752}
!57 = !{i64 35756}
!58 = !{i64 35760}
!59 = !{i64 35764}
!60 = !{i64 35768}
!61 = !{i64 35772}
!62 = !{i64 35776}
!63 = !{i64 35784}
!64 = !{i64 35788}
!65 = !{i64 35796}
!66 = !{i64 35804}
!67 = !{i64 35808}
!68 = !{i64 35816}
!69 = !{i64 35820}
!70 = !{i64 35824}
!71 = !{i64 35868}
!72 = !{i64 35872}
!73 = !{i64 35876}
!74 = !{i64 35884}
!75 = !{i64 35892}
!76 = !{i64 35908}
!77 = !{i64 35912}
!78 = !{i64 35920}
!79 = !{i64 35940}
!80 = !{i64 35944}
!81 = !{i64 35948}
!82 = !{i64 35952}
!83 = !{i64 35964}
!84 = !{i64 35968}
!85 = !{i64 35972}
!86 = !{i64 35976}
!87 = !{i64 35984}
!88 = !{i64 35988}
!89 = !{i64 35992}
!90 = !{i64 36024}
!91 = !{i64 36028}
!92 = !{i64 36032}
!93 = !{i64 36044}
!94 = !{i64 36048}
!95 = !{i64 36052}
!96 = !{i64 36076}
!97 = !{i64 36080}
!98 = !{i64 36084}
!99 = !{i64 36092}
!100 = !{i64 36088}
!101 = !{i64 36100}
!102 = !{i64 36108}
!103 = !{i64 36104}
!104 = !{i64 36132}
!105 = !{i64 36136}
!106 = !{i64 36152}
!107 = !{i64 36156}
!108 = !{i64 36160}
!109 = !{i64 36164}
!110 = !{i64 36168}
!111 = !{i64 36172}
!112 = !{i64 36176}
!113 = !{i64 36180}
!114 = !{i64 36184}
!115 = !{i64 36188}
!116 = !{i64 36192}
!117 = !{i64 36244}
!118 = !{i64 36252}
!119 = !{i64 36256}
!120 = !{i64 36272}
!121 = !{i64 36280}
!122 = !{i64 36296}
!123 = !{i64 36300}
!124 = !{i64 36304}
!125 = !{i64 36312}
!126 = !{i64 36316}
!127 = !{i64 36320}
!128 = !{i64 36324}
!129 = !{i64 36340}
!130 = !{i64 36348}
!131 = !{i64 36356}
!132 = !{i64 36364}
!133 = !{i64 36372}
!134 = !{i64 36376}
!135 = !{i64 36380}
!136 = !{i64 36388}
!137 = !{i64 36396}
!138 = !{i64 36400}
!139 = !{i64 36404}
!140 = !{i64 36420}
!141 = !{i64 36424}
!142 = !{i64 36428}
!143 = !{i64 36432}
!144 = !{i64 36436}
!145 = !{i64 36452}
!146 = !{i64 36456}
!147 = !{i64 36460}
!148 = !{i64 36508}
!149 = !{i64 36516}
!150 = !{i64 36520}
!151 = !{i64 36528}
!152 = !{i64 36532}
!153 = !{i64 36540}
!154 = !{i64 36576}
!155 = !{i64 36580}
!156 = !{i64 36584}
!157 = !{i64 36628}
!158 = !{i64 36632}
!159 = !{i64 36640}
!160 = !{i64 36644}
!161 = !{i64 36648}
!162 = !{i64 36652}
!163 = !{i64 36672}
!164 = !{i64 36676}
!165 = !{i64 36684}
!166 = !{i64 36688}
!167 = !{i64 36692}
!168 = !{i64 36696}
!169 = !{i64 36700}
!170 = !{i64 36716}
!171 = !{i64 36724}
!172 = !{i64 36744}
!173 = !{i64 36748}
!174 = !{i64 36752}
!175 = !{i64 36764}
!176 = !{i64 36768}
!177 = !{i64 36772}
!178 = !{i64 36776}
!179 = !{i64 36788}
!180 = !{i64 36792}
!181 = !{i64 36796}
!182 = !{i64 36812}
!183 = !{i64 36816}
!184 = !{i64 36824}
!185 = !{i64 36840}
!186 = !{i64 36844}
!187 = !{i64 36848}
!188 = !{i64 36852}
!189 = !{i64 36856}
!190 = !{i64 36860}
!191 = !{i64 36868}
!192 = !{i64 36872}
!193 = !{i64 36876}
!194 = !{i64 36892}
!195 = !{i64 36900}
!196 = !{i64 36916}
!197 = !{i64 36924}
!198 = !{i64 36928}
!199 = !{i64 36932}
!200 = !{i64 36948}
!201 = !{i64 36952}
!202 = !{i64 36960}
!203 = !{i64 36972}
!204 = !{i64 36980}
!205 = !{i64 36984}
!206 = !{i64 36992}
!207 = !{i64 37012}
!208 = !{i64 37016}
!209 = !{i64 37020}
!210 = !{i64 37024}
!211 = !{i64 37032}
!212 = !{i64 37064}
!213 = !{i64 37068}
!214 = !{i64 37072}
!215 = !{i64 37076}
!216 = !{i64 37100}
!217 = !{i64 37104}
!218 = !{i64 37120}
!219 = !{i64 37124}
!220 = !{i64 37144}
!221 = !{i64 37148}
!222 = !{i64 37152}
!223 = !{i64 37160}
!224 = !{i64 37180}
!225 = !{i64 37184}
!226 = !{i64 37192}
!227 = !{i64 37208}
!228 = !{i64 37212}
!229 = !{i64 37216}
!230 = !{i64 37224}
!231 = !{i64 37228}
!232 = !{i64 37232}
!233 = !{i64 37236}
!234 = !{i64 37252}
!235 = !{i64 37256}
!236 = !{i64 37272}
!237 = !{i64 37276}
!238 = !{i64 37280}
!239 = !{i64 37456}
!240 = !{i64 37460}
!241 = !{i64 37488}
!242 = !{i64 37492}
!243 = !{i64 37496}
!244 = !{i64 37500}
!245 = !{i64 37532}
!246 = !{i64 37596}
!247 = !{i64 37640}
!248 = !{i64 37644}
!249 = !{i64 37648}
!250 = !{i64 37652}
!251 = !{i64 37660}
!252 = !{i64 37664}
!253 = !{i64 37712}
!254 = !{i64 37748}
!255 = !{i64 37756}
!256 = !{i64 37764}
!257 = !{i64 37768}
!258 = !{i64 37776}
!259 = !{i64 37780}
!260 = !{i64 37784}
!261 = !{i64 37788}
!262 = !{i64 37844}
!263 = !{i64 37848}
!264 = !{i64 37856}
!265 = !{i64 37816}
!266 = !{i64 37824}
!267 = !{i64 37840}
!268 = !{i64 37860}
!269 = !{i64 37864}
!270 = !{i64 37868}
!271 = !{i64 37876}
!272 = !{i64 37880}
!273 = !{i64 37888}
!274 = !{i64 37892}
!275 = !{i64 37896}
!276 = !{i64 37900}
!277 = !{i64 37904}
!278 = !{i64 37908}
!279 = !{i64 37920}
!280 = !{i64 37932}
!281 = !{i64 37940}
!282 = !{i64 37944}
!283 = !{i64 37948}
!284 = !{i64 37952}
!285 = !{i64 37956}
!286 = !{i64 37968}
!287 = !{i64 37976}
!288 = !{i64 37984}
!289 = !{i64 37988}
!290 = !{i64 37992}
!291 = !{i64 38012}
!292 = !{i64 38016}
!293 = !{i64 38020}
!294 = !{i64 38024}
!295 = !{i64 38036}
!296 = !{i64 38028}
!297 = !{i64 38044}
!298 = !{i64 38048}
!299 = !{i64 38052}
!300 = !{i64 38060}
!301 = !{i64 38080}
!302 = !{i64 38084}
!303 = !{i64 38092}
!304 = !{i64 38112}
!305 = !{i64 38116}
!306 = !{i64 38124}
!307 = !{i64 38140}
!308 = !{i64 38184}
!309 = !{i64 38156}
!310 = !{i64 38196}
!311 = !{i64 38204}
!312 = !{i64 38208}
!313 = !{i64 38212}
!314 = !{i64 38224}
!315 = !{i64 38228}
!316 = !{i64 38232}
!317 = !{i64 38260}
!318 = !{i64 38264}
!319 = !{i64 38268}
!320 = !{i64 38272}
!321 = !{i64 38276}
!322 = !{i64 38308}
!323 = !{i64 38312}
!324 = !{i64 38316}
!325 = !{i64 38320}
!326 = !{i64 38324}
!327 = !{i64 38336}
!328 = !{i64 38340}
!329 = !{i64 38356}
!330 = !{i64 38368}
!331 = !{i64 38376}
!332 = !{i64 38412}
!333 = !{i64 38416}
!334 = !{i64 38444}
!335 = !{i64 38460}
!336 = !{i64 38464}
!337 = !{i64 38472}
!338 = !{i64 38484}
!339 = !{i64 38488}
!340 = !{i64 38496}
!341 = !{i64 38784}
!342 = !{i64 38792}
!343 = !{i64 38800}
!344 = !{i64 38520}
!345 = !{i64 38532}
!346 = !{i64 38556}
!347 = !{i64 38568}
!348 = !{i64 38592}
!349 = !{i64 38604}
!350 = !{i64 38644}
!351 = !{i64 38648}
!352 = !{i64 38660}
!353 = !{i64 38664}
!354 = !{i64 38668}
!355 = !{i64 38672}
!356 = !{i64 38632}
!357 = !{i64 38688}
!358 = !{i64 38692}
!359 = !{i64 38700}
!360 = !{i64 38704}
!361 = !{i64 38680}
!362 = !{i64 38708}
!363 = !{i64 38712}
!364 = !{i64 38716}
!365 = !{i64 38720}
!366 = !{i64 38732}
!367 = !{i64 38736}
!368 = !{i64 38740}
!369 = !{i64 38752}
!370 = !{i64 38756}
!371 = !{i64 38760}
!372 = !{i64 38764}
!373 = !{i64 38780}
!374 = !{i64 38812}
!375 = !{i64 38824}
!376 = !{i64 38832}
!377 = !{i64 38860}
!378 = !{i64 38868}
!379 = !{i64 38880}
!380 = !{i64 38884}
!381 = !{i64 38888}
!382 = !{i64 38904}
!383 = !{i64 38920}
!384 = !{i64 38928}
!385 = !{i64 38932}
!386 = !{i64 38944}
!387 = !{i64 38948}
!388 = !{i64 38952}
!389 = !{i64 38912}
!390 = !{i64 38964}
!391 = !{i64 38972}
!392 = !{i64 38988}
!393 = !{i64 39008}
!394 = !{i64 39016}
!395 = !{i64 39020}
!396 = !{i64 39024}
!397 = !{i64 39028}
!398 = !{i64 39032}
!399 = !{i64 39036}
!400 = !{i64 39040}
!401 = !{i64 39056}
!402 = !{i64 39060}
!403 = !{i64 39064}
!404 = !{i64 39068}
!405 = !{i64 39072}
!406 = !{i64 39076}
!407 = !{i64 39100}
!408 = !{i64 39112}
!409 = !{i64 39116}
!410 = !{i64 39120}
!411 = !{i64 39140}
!412 = !{i64 39152}
!413 = !{i64 39156}
!414 = !{i64 39160}
!415 = !{i64 39172}
!416 = !{i64 39184}
!417 = !{i64 39192}
!418 = !{i64 39200}
!419 = !{i64 39204}
!420 = !{i64 39208}
!421 = !{i64 39224}
!422 = !{i64 39228}
!423 = !{i64 39236}
!424 = !{i64 39240}
!425 = !{i64 39244}
!426 = !{i64 39248}
!427 = !{i64 39260}
!428 = !{i64 39264}
!429 = !{i64 39272}
!430 = !{i64 39284}
!431 = !{i64 39288}
!432 = !{i64 39292}
!433 = !{i64 39296}
!434 = !{i64 39300}
!435 = !{i64 39304}
!436 = !{i64 39308}
!437 = !{i64 39312}
!438 = !{i64 39316}
!439 = !{i64 39328}
!440 = !{i64 39332}
!441 = !{i64 39336}
!442 = !{i64 39340}
!443 = !{i64 39344}
!444 = !{i64 39348}
!445 = !{i64 39356}
!446 = !{i64 39360}
!447 = !{i64 39364}
!448 = !{i64 39384}
!449 = !{i64 39388}
!450 = !{i64 39392}
!451 = !{i64 39404}
!452 = !{i64 39408}
!453 = !{i64 39412}
!454 = !{i64 39428}
!455 = !{i64 39432}
!456 = !{i64 39440}
!457 = !{i64 39452}
!458 = !{i64 39456}
!459 = !{i64 39464}
!460 = !{i64 39500}
!461 = !{i64 39504}
!462 = !{i64 39524}
!463 = !{i64 39536}
!464 = !{i64 39540}
!465 = !{i64 39544}
!466 = !{i64 39564}
!467 = !{i64 39572}
!468 = !{i64 39576}
!469 = !{i64 39580}
!470 = !{i64 39588}
!471 = !{i64 39600}
!472 = !{i64 39608}
!473 = !{i64 39604}
!474 = !{i64 39612}
!475 = !{i64 39620}
!476 = !{i64 39624}
!477 = !{i64 39628}
!478 = !{i64 39632}
!479 = !{i64 39636}
!480 = !{i64 39660}
!481 = !{i64 39672}
!482 = !{i64 39676}
!483 = !{i64 39680}
!484 = !{i64 39688}
!485 = !{i64 39708}
!486 = !{i64 39712}
!487 = !{i64 39716}
!488 = !{i64 39724}
!489 = !{i64 39736}
!490 = !{i64 39740}
!491 = !{i64 39808}
!492 = !{i64 39828}
!493 = !{i64 39832}
!494 = !{i64 39836}
!495 = !{i64 39840}
!496 = !{i64 39852}
!497 = !{i64 39844}
!498 = !{i64 39860}
!499 = !{i64 39868}
!500 = !{i64 39880}
!501 = !{i64 39884}
!502 = !{i64 39888}
!503 = !{i64 39892}
!504 = !{i64 39896}
!505 = !{i64 39900}
!506 = !{i64 39916}
!507 = !{i64 39924}
!508 = !{i64 39928}
!509 = !{i64 39932}
!510 = !{i64 39936}
!511 = !{i64 39940}
!512 = !{i64 39944}
!513 = !{i64 39956}
!514 = !{i64 39960}
!515 = !{i64 39964}
!516 = !{i64 39968}
!517 = !{i64 39972}
!518 = !{i64 39980}
!519 = !{i64 39984}
!520 = !{i64 40008}
!521 = !{i64 40012}
!522 = !{i64 40016}
!523 = !{i64 40040}
!524 = !{i64 40044}
!525 = !{i64 40048}
!526 = !{i64 40072}
!527 = !{i64 40076}
!528 = !{i64 40080}
!529 = !{i64 40104}
!530 = !{i64 40108}
!531 = !{i64 40112}
!532 = !{i64 40136}
!533 = !{i64 40164}
!534 = !{i64 40168}
!535 = !{i64 40172}
!536 = !{i64 40180}
!537 = !{i64 40188}
!538 = !{i64 40192}
!539 = !{i64 40200}
!540 = !{i64 40204}
!541 = !{i64 40224}
!542 = !{i64 40228}
!543 = !{i64 40232}
!544 = !{i64 40236}
!545 = !{i64 40248}
!546 = !{i64 40272}
!547 = !{i64 40276}
!548 = !{i64 40280}
!549 = !{i64 40284}
!550 = !{i64 40288}
!551 = !{i64 40292}
!552 = !{i64 40296}
!553 = !{i64 40300}
!554 = !{i64 40348}
!555 = !{i64 40324}
!556 = !{i64 40328}
!557 = !{i64 40332}
!558 = !{i64 40336}
!559 = !{i64 40340}
!560 = !{i64 40344}
!561 = !{i64 40352}
!562 = !{i64 40368}
!563 = !{i64 40392}
!564 = !{i64 40400}
!565 = !{i64 40436}
!566 = !{i64 40452}
!567 = !{i64 40508}
!568 = !{i64 40516}
