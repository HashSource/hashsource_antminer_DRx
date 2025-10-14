source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%stat64 = type { i64, i64, i32, i32, i32, i32, i64, i64, i64, i32, i32, i64, i32, i32, i32, i32, i32, i32, i32, i32 }

@0 = external local_unnamed_addr global i32
@1 = external local_unnamed_addr global i32
@global_var_2200c = local_unnamed_addr global i32 67280
@global_var_22010 = local_unnamed_addr global i32 67280
@global_var_22014 = local_unnamed_addr global i32 67280
@global_var_22018 = local_unnamed_addr global i32 67280
@global_var_2201c = local_unnamed_addr global i32 67280
@global_var_22020 = local_unnamed_addr global i32 67280
@global_var_22024 = local_unnamed_addr global i32 67280
@global_var_22028 = local_unnamed_addr global i32 67280
@global_var_2202c = local_unnamed_addr global i32 67280
@global_var_22030 = local_unnamed_addr global i32 67280
@global_var_22034 = local_unnamed_addr global i32 67280
@global_var_22038 = local_unnamed_addr global i32 67280
@global_var_2203c = local_unnamed_addr global i32 67280
@global_var_22040 = local_unnamed_addr global i32 67280
@global_var_22044 = local_unnamed_addr global i32 67280
@global_var_22048 = local_unnamed_addr global i32 67280
@global_var_2204c = local_unnamed_addr global i32 67280
@global_var_22050 = local_unnamed_addr global i32 67280
@global_var_22054 = local_unnamed_addr global i32 67280
@global_var_22058 = local_unnamed_addr global i32 67280
@global_var_2205c = local_unnamed_addr global i32 67280
@global_var_22060 = local_unnamed_addr global i32 67280
@global_var_22064 = local_unnamed_addr global i32 67280
@global_var_22068 = local_unnamed_addr global i32 67280
@global_var_11c20 = constant [19 x i8] c"fileName Too Long!\00"
@global_var_11c48 = constant [11 x i8] c"Param Err!\00"
@global_var_1187c = constant [3 x i8] c"rb\00"
@global_var_11d00 = constant [20 x i8] c"file[%d] size:[%d]\0A\00"
@global_var_11e08 = constant [21 x i8] c"/tmp/tmpfw/miner.pem\00"
@global_var_11e20 = constant [25 x i8] c"/tmp/tmpfw/miner.pem.sig\00"
@global_var_11e9c = constant [11 x i8] c"All Done!\0D\00"
@global_var_11ea8 = constant [30 x i8] c"This Comment Of This Package:\00"
@global_var_118a0 = constant [3 x i8] c"wb\00"
@global_var_11ec8 = constant [12 x i8] c"/tmp/256BFF\00"
@global_var_11ee4 = constant [21 x i8] c"Command Not Support!\00"
@global_var_11c54 = constant [43 x i8] c"File '%s' Not Enough %d, Something Wrong!\0A\00"
@global_var_11c34 = constant [18 x i8] c"pemName Too Long!\00"
@global_var_11c98 = constant [23 x i8] c"'%s' Not A Btmu File!\0A\00"
@global_var_11cb0 = constant [12 x i8] c"content:%x\0A\00"
@global_var_11cbc = constant [35 x i8] c"This Package Was Not Full Package!\00"
@global_var_11d14 = constant [96 x i8] c"Check FileSize Failed, FileSize Should Be [%d]Bytes, But It Was [%d] Bytes, And Total Says[%d]\0A\00"
@global_var_11c80 = constant [24 x i8] c"Read File '%s' Failed!\0A\00"
@global_var_11ce0 = constant [32 x i8] c"Content Doesn't Match![%d][%d]\0A\00"
@global_var_11ed4 = constant [16 x i8] c"GenFile Failed!\00"
@global_var_11d9c = constant [19 x i8] c"OpenSSL error: %s\0A\00"
@global_var_11dc8 = constant [24 x i8] c"Check miner.pem Failed!\00"
@global_var_11de0 = constant [36 x i8] c"Check pem payload failed! ret:[%d]\0A\00"
@global_var_11e84 = constant [24 x i8] c"Check File Sig failed!\0D\00"
@global_var_11d78 = constant [34 x i8] c"Cannot Open Root PublicKey '%s'!\0A\00"
@global_var_11db0 = constant [23 x i8] c"Read Root PubK Failed!\00"
@global_var_11e70 = constant [17 x i8] c"Load Pem Failed!\00"
@global_var_11e54 = constant [28 x i8] c"Dump Miner.pem.sig Failed!\0D\00"
@global_var_11e3c = constant [24 x i8] c"Dump Miner.pem Failed!\0D\00"
@global_var_11208 = local_unnamed_addr constant i32 69124
@global_var_1120c = local_unnamed_addr constant i32 108
@global_var_21f10 = global i32 1
@global_var_22000 = local_unnamed_addr global i32* @global_var_21f10
@global_var_2206c = local_unnamed_addr global i32 0
@global_var_11364 = local_unnamed_addr constant i32 139388
@global_var_2207c = constant [32 x i8] c"/tmp/tmpNand/devicetree.dtb.sig\00"
@global_var_11368 = local_unnamed_addr constant i32 141368
@global_var_118a4 = constant [35 x i8] c"Try To Write To File '%s' Failed!\0A\00"
@global_var_11880 = constant [29 x i8] c"Load Nand Image File Failed!\00"
@global_var_117fc = local_unnamed_addr constant [12 x i8] c"/tmp/tmpfw/\00"
@global_var_11800 = local_unnamed_addr constant [8 x i8] c"/tmpfw/\00"
@global_var_11804 = local_unnamed_addr constant [4 x i8] c"fw/\00"
@global_var_1191c = local_unnamed_addr constant [17 x i8] c"miner.btm.tar.gz\00"
@global_var_118ec = local_unnamed_addr constant [17 x i8] c"minerfs.image.gz\00"
@global_var_11930 = constant [27 x i8] c"fileName:'%s', size:[%d]\0D\0A\00"
@global_var_1194c = constant [27 x i8] c"Create File '%s' Failed!\0D\0A\00"
@global_var_11e34 = local_unnamed_addr constant [5 x i8] c".sig\00"
@global_var_118c8 = local_unnamed_addr constant [9 x i8] c"BOOT.bin\00"
@global_var_118cc = local_unnamed_addr constant [5 x i8] c".bin\00"
@global_var_118d0 = local_unnamed_addr constant i32 0
@global_var_118d4 = local_unnamed_addr constant [15 x i8] c"devicetree.dtb\00"
@global_var_118d8 = local_unnamed_addr constant [11 x i8] c"cetree.dtb\00"
@global_var_118dc = local_unnamed_addr constant [7 x i8] c"ee.dtb\00"
@global_var_118e0 = local_unnamed_addr constant [3 x i8] c"tb\00"
@global_var_118e2 = local_unnamed_addr constant i32 1232404480
@global_var_118e4 = local_unnamed_addr constant [7 x i8] c"uImage\00"
@global_var_118e8 = local_unnamed_addr constant [3 x i8] c"ge\00"
@global_var_118ea = local_unnamed_addr constant i32 1768751104
@global_var_11900 = local_unnamed_addr constant [16 x i8] c"update.image.gz\00"
@global_var_11904 = local_unnamed_addr constant [12 x i8] c"te.image.gz\00"
@global_var_11908 = local_unnamed_addr constant [8 x i8] c"mage.gz\00"
@global_var_1190c = local_unnamed_addr constant [4 x i8] c".gz\00"
@global_var_11910 = local_unnamed_addr constant [11 x i8] c"crl.tar.gz\00"
@global_var_11914 = local_unnamed_addr constant [7 x i8] c"tar.gz\00"
@global_var_11918 = local_unnamed_addr constant [3 x i8] c"gz\00"
@global_var_1191a = local_unnamed_addr constant i32 1768751104
@global_var_11968 = constant [9 x i8] c"Useage:\0D\00"
@global_var_11974 = constant [28 x i8] c"\09%s [option] [paramaters]\0A\0A\00"
@global_var_11990 = constant [39 x i8] c"\09Option:{-f} {-s} {-p} {-n} {-x} {-q}\0A\00"
@global_var_119b8 = constant [90 x i8] c"\09\09-f [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Only Check If Filename was Valided.\0A\00"
@global_var_11a14 = constant [117 x i8] c"\09\09-s [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Check If Filename Was Valided, and Splite Bmu To \22/tmp/tmpfw/\22\0A\00"
@global_var_11a8c = constant [106 x i8] c"\09\09-p [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Check If Filename Was Valided, and Dump BmuComments\0A\00"
@global_var_11af8 = constant [89 x i8] c"\09\09-x [minerType] [fileName] [rootPublicKeyFile]: \0A\09\09\09Check If Filename Was FullSize BMU\0A\00"
@global_var_11b54 = constant [73 x i8] c"\09\09-n [nandBinFile]: \0A\09\09\09Splite SigImg To Single File To \22/tmp/tmpNand/\22\0A\00"
@global_var_11ba0 = constant [58 x i8] c"\09\09-q: \0A\09\09\09Generate A 256Bytes 0xff File To \22/tmp/256BFF\22\0A\00"
@global_var_11bdc = constant [10 x i8] c"\09Returns:\00"
@global_var_11be8 = constant [21 x i8] c"\09\090: \0A\09\09\09Well Done!\0A\00"
@global_var_11c00 = constant [32 x i8] c"\09\09Others: \0A\09\09\09Something Wrong!\0A\00"
@global_var_117e4 = local_unnamed_addr constant i32 67402
@global_var_117e8 = local_unnamed_addr constant i32 67392
@global_var_21f08 = global i32 70265
@2 = external global i32
@3 = internal constant [2 x i8] c"r\00"
@4 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @3, i32 0, i32 0)
@5 = internal constant [2 x i8] c"w\00"
@6 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @5, i32 0, i32 0)
@global_var_111e4 = local_unnamed_addr constant void ()* inttoptr (i32 67588 to void ()*)
@global_var_111e8 = local_unnamed_addr constant void ()* inttoptr (i32 71601 to void ()*)
@global_var_22834 = external local_unnamed_addr global i8*
@global_var_11e38 = local_unnamed_addr constant i8 0
@global_var_11d74 = constant [2 x i8] c"r\00"
@global_var_11e04 = constant [2 x i8] c"w\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_106c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_106c4:
  %0 = call i32 @function_111ec(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define void @function_106e4() local_unnamed_addr {
dec_label_pc_106e4:
  call void @abort(), !insn.addr !2
  ret void, !insn.addr !2
}

define i32 @function_106f0(i32 %arg1) local_unnamed_addr {
dec_label_pc_106f0:
  %0 = call i32 @ERR_get_error(i32 %arg1), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_106fc(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_106fc:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_10708() local_unnamed_addr {
dec_label_pc_10708:
  call void @__gmon_start__(), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @function_10714(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_10714:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32* @function_10720(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10720:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32 @function_1072c(i32 %arg1, i32* %arg2, i32 %arg3, i32* %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_1072c:
  %0 = call i32 @RSA_verify(i32 %arg1, i32* %arg2, i32 %arg3, i32* %arg4, i32 %arg5, i32 %arg6), !insn.addr !8
  ret i32 %0, !insn.addr !8
}

define i32 @function_10738(%_IO_FILE* %stream, i32 %off, i32 %whence) local_unnamed_addr {
dec_label_pc_10738:
  %0 = call i32 @fseek(%_IO_FILE* %stream, i32 %off, i32 %whence), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_10744() local_unnamed_addr {
dec_label_pc_10744:
  %0 = call i32 @PEM_read_bio_RSA_PUBKEY(), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_10750(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10750:
  %0 = call i32 @SHA256_Final(i32* %arg1, i32* %arg2, i32 %arg3), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_1075c(i8* %s) local_unnamed_addr {
dec_label_pc_1075c:
  %0 = call i32 @strlen(i8* %s), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define i32* @function_10768(i32* %dest, i32* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10768:
  %0 = call i32* @memcpy(i32* %dest, i32* %src, i32 %n), !insn.addr !13
  ret i32* %0, !insn.addr !13
}

define %_IO_FILE* @function_10774(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_10774:
  %0 = call %_IO_FILE* @fopen64(i8* %filename, i8* %modes), !insn.addr !14
  ret %_IO_FILE* %0, !insn.addr !14
}

define i32 @function_10780(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10780:
  %0 = call i32 @BIO_new_mem_buf(i32* %arg1, i32 %arg2), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_1078c(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1078c:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @function_10798(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10798:
  %0 = call i32 @ERR_error_string(i32 %arg1, i32 %arg2), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32 @function_107a4(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107a4:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define i32 @function_107b0(i32 %ver, i8* %filename, %stat64* %stat_buf) local_unnamed_addr {
dec_label_pc_107b0:
  %0 = call i32 @__xstat64(i32 %ver, i8* %filename, %stat64* %stat_buf), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @function_107bc(i8* %s) local_unnamed_addr {
dec_label_pc_107bc:
  %0 = call i32 @puts(i8* %s), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_107c8(i32 %arg1) local_unnamed_addr {
dec_label_pc_107c8:
  %0 = call i32 @RSA_free(i32 %arg1), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_107d4(i32* %arg1, i32* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_107d4:
  %0 = call i32 @SHA256_Update(i32* %arg1, i32* %arg2, i32 %arg3), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_107e0(i32 %arg1) local_unnamed_addr {
dec_label_pc_107e0:
  %0 = call i32 @BIO_free(i32 %arg1), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_107ec(i32* %arg1) local_unnamed_addr {
dec_label_pc_107ec:
  %0 = call i32 @SHA256_Init(i32* %arg1), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_107f8(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_107f8:
  %0 = call i32 @fread(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %stream), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @function_10804(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10804:
  %0 = alloca i32
  %1 = alloca i8
  %r4.5.reg2mem = alloca i32, !insn.addr !26
  %r3.0.reg2mem = alloca i32, !insn.addr !26
  %r4.41.reg2mem = alloca i32, !insn.addr !26
  %r4.32.reg2mem = alloca i32, !insn.addr !26
  %.reg2mem = alloca i32, !insn.addr !26
  %r0.0.reg2mem = alloca i32, !insn.addr !26
  %fp.0.lcssa.reg2mem = alloca i32, !insn.addr !26
  %r6.03.reg2mem = alloca i32, !insn.addr !26
  %r7.04.reg2mem = alloca i32, !insn.addr !26
  %fp.05.reg2mem = alloca i32, !insn.addr !26
  %r5.0.reg2mem = alloca i32, !insn.addr !26
  %r4.2.reg2mem = alloca i32, !insn.addr !26
  %r4.1.reg2mem = alloca i32, !insn.addr !26
  %stack_var_-5312.0.reg2mem = alloca i32, !insn.addr !26
  %stack_var_-5316.0.reg2mem = alloca i32, !insn.addr !26
  %r4.0.reg2mem = alloca i32, !insn.addr !26
  %r1.0.reg2mem = alloca i32, !insn.addr !26
  %stack_var_-2889 = alloca i32, align 4
  %stack_var_-3145 = alloca i32, align 4
  %stack_var_-3140 = alloca i32, align 4
  %stack_var_-728 = alloca i32, align 4
  %stack_var_-4424 = alloca i32, align 4
  %stack_var_-5304 = alloca i32, align 4
  %stack_var_-5052 = alloca i32, align 4
  %stack_var_-4684 = alloca i32, align 4
  %stack_var_-4680 = alloca i32, align 4
  %stack_var_-3112 = alloca i32, align 4
  %stack_var_-779 = alloca i32, align 4
  %stack_var_-5164 = alloca i32, align 4
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-4428 = alloca i32, align 4
  %stack_var_-2064 = alloca i32, align 4
  %stack_var_-3144 = alloca i32, align 4
  %2 = load i32, i32* %0
  %stack_var_-4168 = alloca i32, align 4
  %stack_var_-4164 = alloca i32, align 4
  %stack_var_-778 = alloca i32, align 4
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = load i8, i8* %1
  %6 = load i8, i8* %1
  %7 = load i32, i32* %0
  %stack_var_-5272 = alloca i32, align 4
  %stack_var_-2088 = alloca i32, align 4
  %stack_var_-4812 = alloca i32, align 4
  %stack_var_-4808 = alloca i32, align 4
  %stack_var_-4940 = alloca i32, align 4
  %stack_var_-4936 = alloca i32, align 4
  %8 = icmp slt i32 %arg1, 2, !insn.addr !27
  br i1 %8, label %dec_label_pc_1092c, label %dec_label_pc_1081c, !insn.addr !27

dec_label_pc_1081c:                               ; preds = %dec_label_pc_10804
  %9 = add i32 %arg2, 4, !insn.addr !28
  %10 = inttoptr i32 %9 to i32*, !insn.addr !28
  %11 = load i32, i32* %10, align 4, !insn.addr !28
  %12 = inttoptr i32 %11 to i8*, !insn.addr !29
  %13 = load i8, i8* %12, align 1, !insn.addr !29
  %14 = icmp eq i8 %13, 45, !insn.addr !30
  br i1 %14, label %dec_label_pc_1082c, label %dec_label_pc_108e8, !insn.addr !31

dec_label_pc_1082c:                               ; preds = %dec_label_pc_1081c
  store i32 0, i32* %stack_var_-4940, align 4, !insn.addr !32
  %15 = call i32* @memset(i32* nonnull %stack_var_-4936, i32 0, i32 124), !insn.addr !33
  store i32 0, i32* %stack_var_-4812, align 4, !insn.addr !34
  %16 = call i32* @memset(i32* nonnull %stack_var_-4808, i32 0, i32 124), !insn.addr !35
  %17 = call i32* @memset(i32* nonnull %stack_var_-2088, i32 0, i32 2048), !insn.addr !36
  store i32 0, i32* %r1.0.reg2mem
  switch i32 %arg1, label %dec_label_pc_1099c [
    i32 5, label %dec_label_pc_1093c
    i32 3, label %dec_label_pc_10904
    i32 2, label %dec_label_pc_10888
  ]

dec_label_pc_10888:                               ; preds = %dec_label_pc_1082c, %dec_label_pc_10974, %dec_label_pc_10918
  %18 = add i32 %11, 1, !insn.addr !37
  %19 = inttoptr i32 %18 to i8*, !insn.addr !37
  %20 = load i8, i8* %19, align 1, !insn.addr !37
  %21 = zext i8 %20 to i32, !insn.addr !37
  %22 = add nsw i32 %21, -102, !insn.addr !38
  store i32 %22, i32* @0, align 4, !insn.addr !39
  store i32 0, i32* %stack_var_-5316.0.reg2mem, !insn.addr !39
  store i32 1, i32* %stack_var_-5312.0.reg2mem, !insn.addr !39
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !39
  switch i8 %20, label %dec_label_pc_10f90 [
    i8 102, label %dec_label_pc_10f80
    i8 120, label %dec_label_pc_10edc
    i8 115, label %dec_label_pc_10ef0
    i8 113, label %dec_label_pc_10f04
    i8 112, label %dec_label_pc_109c8
    i8 110, label %dec_label_pc_10ecc
  ], !insn.addr !39

dec_label_pc_108e8:                               ; preds = %dec_label_pc_1081c
  %23 = call i32 @function_11710(i32 %arg2), !insn.addr !40
  store i32 2, i32* %r4.0.reg2mem, !insn.addr !40
  br label %dec_label_pc_108f4, !insn.addr !40

dec_label_pc_108f4:                               ; preds = %dec_label_pc_10e64, %dec_label_pc_10f5c, %dec_label_pc_1108c, %dec_label_pc_10ecc, %dec_label_pc_111a8, %dec_label_pc_11198, %dec_label_pc_11168, %dec_label_pc_11118, %dec_label_pc_110e8, %dec_label_pc_110cc, %dec_label_pc_11068, %dec_label_pc_11050, %dec_label_pc_1102c, %dec_label_pc_11018, %dec_label_pc_10fdc, %dec_label_pc_10fac, %dec_label_pc_10e84, %dec_label_pc_10f90, %dec_label_pc_10fc8, %dec_label_pc_1099c, %dec_label_pc_10988, %dec_label_pc_1092c, %dec_label_pc_108e8
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  ret i32 %r4.0.reload, !insn.addr !41

dec_label_pc_10904:                               ; preds = %dec_label_pc_1082c
  %24 = add i32 %arg2, 8, !insn.addr !42
  %25 = inttoptr i32 %24 to i32*, !insn.addr !42
  %26 = load i32, i32* %25, align 4, !insn.addr !42
  %27 = inttoptr i32 %26 to i8*, !insn.addr !43
  %28 = call i32 @strlen(i8* %27), !insn.addr !43
  %29 = icmp ult i32 %28, 127, !insn.addr !44
  %30 = icmp ne i1 %29, true, !insn.addr !44
  %31 = icmp eq i32 %28, 127, !insn.addr !44
  %32 = icmp ne i1 %31, true, !insn.addr !45
  %33 = icmp eq i1 %30, %32, !insn.addr !45
  br i1 %33, label %dec_label_pc_10988, label %dec_label_pc_10918, !insn.addr !45

dec_label_pc_10918:                               ; preds = %dec_label_pc_10904
  %34 = add i32 %28, 1, !insn.addr !46
  %35 = inttoptr i32 %26 to i32*, !insn.addr !47
  %36 = call i32* @memcpy(i32* nonnull %stack_var_-4940, i32* %35, i32 %34), !insn.addr !47
  store i32 %26, i32* %r1.0.reg2mem, !insn.addr !48
  br label %dec_label_pc_10888, !insn.addr !48

dec_label_pc_1092c:                               ; preds = %dec_label_pc_10804
  %37 = call i32 @function_11710(i32 %arg2), !insn.addr !49
  store i32 1, i32* %r4.0.reg2mem, !insn.addr !50
  br label %dec_label_pc_108f4, !insn.addr !50

dec_label_pc_1093c:                               ; preds = %dec_label_pc_1082c
  %38 = add i32 %arg2, 12, !insn.addr !51
  %39 = inttoptr i32 %38 to i32*, !insn.addr !51
  %40 = load i32, i32* %39, align 4, !insn.addr !51
  %41 = inttoptr i32 %40 to i8*, !insn.addr !52
  %42 = call i32 @strlen(i8* %41), !insn.addr !52
  %43 = icmp ult i32 %42, 127, !insn.addr !53
  %44 = icmp ne i1 %43, true, !insn.addr !53
  %45 = icmp eq i32 %42, 127, !insn.addr !53
  %46 = icmp ne i1 %45, true, !insn.addr !54
  %47 = icmp eq i1 %44, %46, !insn.addr !54
  br i1 %47, label %dec_label_pc_10988, label %dec_label_pc_10950, !insn.addr !54

dec_label_pc_10950:                               ; preds = %dec_label_pc_1093c
  %48 = add i32 %42, 1, !insn.addr !55
  %49 = inttoptr i32 %40 to i32*, !insn.addr !56
  %50 = call i32* @memcpy(i32* nonnull %stack_var_-4940, i32* %49, i32 %48), !insn.addr !56
  %51 = add i32 %arg2, 16, !insn.addr !57
  %52 = inttoptr i32 %51 to i32*, !insn.addr !57
  %53 = load i32, i32* %52, align 4, !insn.addr !57
  %54 = inttoptr i32 %53 to i8*, !insn.addr !58
  %55 = call i32 @strlen(i8* %54), !insn.addr !58
  %56 = icmp ult i32 %55, 127, !insn.addr !59
  %57 = icmp ne i1 %56, true, !insn.addr !59
  %58 = icmp eq i32 %55, 127, !insn.addr !59
  %59 = icmp ne i1 %58, true, !insn.addr !60
  %60 = icmp eq i1 %57, %59, !insn.addr !60
  br i1 %60, label %dec_label_pc_10fc8, label %dec_label_pc_10974, !insn.addr !60

dec_label_pc_10974:                               ; preds = %dec_label_pc_10950
  %61 = add i32 %55, 1, !insn.addr !61
  %62 = inttoptr i32 %53 to i32*, !insn.addr !62
  %63 = call i32* @memcpy(i32* nonnull %stack_var_-4812, i32* %62, i32 %61), !insn.addr !62
  store i32 %53, i32* %r1.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_10888, !insn.addr !63

dec_label_pc_10988:                               ; preds = %dec_label_pc_1093c, %dec_label_pc_10904
  %64 = call i32 @puts(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_11c20, i32 0, i32 0)), !insn.addr !64
  store i32 3, i32* %r4.0.reg2mem, !insn.addr !65
  br label %dec_label_pc_108f4, !insn.addr !65

dec_label_pc_1099c:                               ; preds = %dec_label_pc_1082c
  %65 = call i32 @puts(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11c48, i32 0, i32 0)), !insn.addr !66
  %66 = call i32 @function_11710(i32 0), !insn.addr !67
  store i32 3, i32* %r4.0.reg2mem, !insn.addr !68
  br label %dec_label_pc_108f4, !insn.addr !68

dec_label_pc_109c8:                               ; preds = %dec_label_pc_10888, %dec_label_pc_10f80, %dec_label_pc_10ef0, %dec_label_pc_10edc
  %67 = bitcast i32* %stack_var_-4940 to i8*, !insn.addr !69
  %68 = bitcast i32* %stack_var_-5272 to %stat64*, !insn.addr !69
  %69 = call i32 @__xstat64(i32 3, i8* nonnull %67, %stat64* nonnull %68), !insn.addr !69
  %70 = icmp slt i32 %7, 2048, !insn.addr !70
  br i1 %70, label %dec_label_pc_10fac, label %dec_label_pc_109e8, !insn.addr !70

dec_label_pc_109e8:                               ; preds = %dec_label_pc_109c8
  %71 = call %_IO_FILE* @fopen64(i8* nonnull %67, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1187c, i32 0, i32 0)), !insn.addr !71
  %72 = icmp eq %_IO_FILE* %71, null, !insn.addr !72
  br i1 %72, label %dec_label_pc_11050, label %dec_label_pc_10a00, !insn.addr !73

dec_label_pc_10a00:                               ; preds = %dec_label_pc_109e8
  %73 = call i32 @fread(i32* nonnull %stack_var_-2088, i32 2048, i32 1, %_IO_FILE* nonnull %71), !insn.addr !74
  %74 = load i32, i32* %stack_var_-2088, align 4, !insn.addr !75
  %75 = urem i32 %74, 256, !insn.addr !75
  %76 = icmp eq i32 %75, 38, !insn.addr !76
  br i1 %76, label %dec_label_pc_10a24, label %dec_label_pc_10fdc, !insn.addr !77

dec_label_pc_10a24:                               ; preds = %dec_label_pc_10a00
  %r4.1.reload = load i32, i32* %r4.1.reg2mem
  %stack_var_-5312.0.reload = load i32, i32* %stack_var_-5312.0.reg2mem
  %stack_var_-5316.0.reload = load i32, i32* %stack_var_-5316.0.reg2mem
  %77 = zext i8 %6 to i32, !insn.addr !78
  %78 = icmp eq i32 %r4.1.reload, 0, !insn.addr !79
  %79 = zext i8 %5 to i32, !insn.addr !80
  %80 = mul i32 %77, 256, !insn.addr !81
  %81 = or i32 %80, %79, !insn.addr !81
  br i1 %78, label %dec_label_pc_10a38, label %dec_label_pc_10ffc, !insn.addr !82

dec_label_pc_10a38:                               ; preds = %dec_label_pc_10a24, %dec_label_pc_10ffc
  %82 = ptrtoint %_IO_FILE* %71 to i32, !insn.addr !71
  store i32 0, i32* %r4.2.reg2mem, !insn.addr !83
  store i32 0, i32* %r5.0.reg2mem, !insn.addr !83
  br label %dec_label_pc_10a40, !insn.addr !83

dec_label_pc_10a40:                               ; preds = %dec_label_pc_10a40, %dec_label_pc_10a38
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %83 = add nuw nsw i32 %r4.2.reload, 1, !insn.addr !84
  %84 = shl i32 1, %r4.2.reload
  %85 = and i32 %84, %81
  %86 = icmp eq i32 %85, 0, !insn.addr !85
  %87 = add i32 %r5.0.reload, 1
  %88 = urem i32 %87, 256
  %r5.1 = select i1 %86, i32 %r5.0.reload, i32 %88
  %89 = icmp eq i32 %83, 16, !insn.addr !86
  store i32 %83, i32* %r4.2.reg2mem, !insn.addr !87
  store i32 %r5.1, i32* %r5.0.reg2mem, !insn.addr !87
  br i1 %89, label %dec_label_pc_10a5c, label %dec_label_pc_10a40, !insn.addr !87

dec_label_pc_10a5c:                               ; preds = %dec_label_pc_10a40
  %90 = urem i32 %4, 256, !insn.addr !88
  %91 = icmp eq i32 %90, %r5.1, !insn.addr !89
  br i1 %91, label %dec_label_pc_10a6c, label %dec_label_pc_11068, !insn.addr !90

dec_label_pc_10a6c:                               ; preds = %dec_label_pc_10a5c
  %92 = mul i32 %r5.1, 256, !insn.addr !91
  %93 = add i32 %92, 2304, !insn.addr !92
  %94 = icmp eq i32 %r5.1, 0
  store i32 %93, i32* %fp.0.lcssa.reg2mem, !insn.addr !93
  br i1 %94, label %dec_label_pc_10aec, label %dec_label_pc_10aa8.lr.ph, !insn.addr !93

dec_label_pc_10aa8.lr.ph:                         ; preds = %dec_label_pc_10a6c
  %95 = ptrtoint i32* %stack_var_-778 to i32, !insn.addr !94
  store i32 %93, i32* %fp.05.reg2mem
  store i32 0, i32* %r7.04.reg2mem
  store i32 %95, i32* %r6.03.reg2mem
  br label %dec_label_pc_10aa8

dec_label_pc_10aa8:                               ; preds = %dec_label_pc_10aa8.lr.ph, %dec_label_pc_10aa8
  %r6.03.reload = load i32, i32* %r6.03.reg2mem
  %r7.04.reload = load i32, i32* %r7.04.reg2mem
  %fp.05.reload = load i32, i32* %fp.05.reg2mem
  %96 = add i32 %r6.03.reload, 5, !insn.addr !95
  %97 = add nuw nsw i32 %r7.04.reload, 1, !insn.addr !96
  %98 = add i32 %r6.03.reload, 1, !insn.addr !97
  %99 = inttoptr i32 %98 to i8*, !insn.addr !97
  %100 = load i8, i8* %99, align 1, !insn.addr !97
  %101 = zext i8 %100 to i32, !insn.addr !97
  %102 = inttoptr i32 %r6.03.reload to i8*, !insn.addr !98
  %103 = load i8, i8* %102, align 1, !insn.addr !98
  %104 = zext i8 %103 to i32, !insn.addr !98
  %105 = add i32 %r6.03.reload, 2, !insn.addr !99
  %106 = inttoptr i32 %105 to i8*, !insn.addr !99
  %107 = load i8, i8* %106, align 1, !insn.addr !99
  %108 = zext i8 %107 to i32, !insn.addr !99
  %109 = add i32 %r6.03.reload, 3, !insn.addr !100
  %110 = inttoptr i32 %109 to i8*, !insn.addr !100
  %111 = load i8, i8* %110, align 1, !insn.addr !100
  %112 = zext i8 %111 to i32, !insn.addr !100
  %113 = mul i32 %101, 65536, !insn.addr !101
  %114 = mul i32 %104, 16777216, !insn.addr !102
  %115 = or i32 %114, %113, !insn.addr !102
  %116 = or i32 %115, %112, !insn.addr !103
  %117 = mul i32 %108, 256, !insn.addr !104
  %118 = or i32 %116, %117, !insn.addr !104
  %119 = add i32 %118, %fp.05.reload, !insn.addr !105
  %120 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_11d00, i32 0, i32 0), i32 %r7.04.reload, i32 %118), !insn.addr !106
  %121 = icmp ult i32 %97, %r5.1, !insn.addr !93
  store i32 %119, i32* %fp.05.reg2mem, !insn.addr !93
  store i32 %97, i32* %r7.04.reg2mem, !insn.addr !93
  store i32 %96, i32* %r6.03.reg2mem, !insn.addr !93
  store i32 %119, i32* %fp.0.lcssa.reg2mem, !insn.addr !93
  br i1 %121, label %dec_label_pc_10aa8, label %dec_label_pc_10aec, !insn.addr !93

dec_label_pc_10aec:                               ; preds = %dec_label_pc_10aa8, %dec_label_pc_10a6c
  %fp.0.lcssa.reload = load i32, i32* %fp.0.lcssa.reg2mem
  %122 = icmp eq i32 %7, %fp.0.lcssa.reload, !insn.addr !107
  br i1 %122, label %dec_label_pc_10af8, label %dec_label_pc_1102c, !insn.addr !108

dec_label_pc_10af8:                               ; preds = %dec_label_pc_10aec
  %123 = bitcast i32* %stack_var_-4812 to i8*, !insn.addr !109
  %124 = call %_IO_FILE* @fopen64(i8* nonnull %123, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11d74, i32 0, i32 0)), !insn.addr !109
  %125 = icmp eq %_IO_FILE* %124, null, !insn.addr !110
  br i1 %125, label %dec_label_pc_11118, label %dec_label_pc_10b10, !insn.addr !111

dec_label_pc_10b10:                               ; preds = %dec_label_pc_10af8
  store i32 0, i32* %stack_var_-4168, align 4, !insn.addr !112
  %126 = call i32* @memset(i32* nonnull %stack_var_-4164, i32 0, i32 1020), !insn.addr !113
  %127 = call i32 @fread(i32* nonnull %stack_var_-4168, i32 1024, i32 1, %_IO_FILE* nonnull %124), !insn.addr !114
  %128 = call i32 @fclose(%_IO_FILE* nonnull %124), !insn.addr !115
  %129 = urem i32 %2, 65536, !insn.addr !116
  %130 = call i32 @BIO_new_mem_buf(i32* nonnull %stack_var_-4168, i32 1024), !insn.addr !117
  %131 = call i32 @PEM_read_bio_RSA_PUBKEY(), !insn.addr !118
  %132 = icmp eq i32 %131, 0, !insn.addr !119
  %133 = call i32 @__asm_rev16(i32 %129), !insn.addr !120
  br i1 %132, label %dec_label_pc_11138, label %dec_label_pc_10b90, !insn.addr !121

dec_label_pc_10b90:                               ; preds = %dec_label_pc_10b10
  %134 = urem i32 %133, 65536, !insn.addr !122
  %135 = call i32 @SHA256_Init(i32* nonnull %stack_var_-3144), !insn.addr !123
  %136 = call i32 @SHA256_Update(i32* nonnull %stack_var_-3144, i32* nonnull %stack_var_-2064, i32 %134), !insn.addr !124
  %137 = call i32 @SHA256_Final(i32* nonnull %stack_var_-4428, i32* nonnull %stack_var_-3144, i32 %134), !insn.addr !125
  %138 = call i32 @RSA_verify(i32 672, i32* nonnull %stack_var_-4428, i32 32, i32* nonnull %stack_var_-1040, i32 256, i32 %131), !insn.addr !126
  %139 = call i32 @RSA_free(i32 %131), !insn.addr !127
  %140 = icmp eq i32 %130, 0, !insn.addr !128
  store i32 %139, i32* %r0.0.reg2mem, !insn.addr !129
  br i1 %140, label %dec_label_pc_10bf8, label %dec_label_pc_10bf0, !insn.addr !129

dec_label_pc_10bf0:                               ; preds = %dec_label_pc_10b90
  %141 = call i32 @BIO_free(i32 %130), !insn.addr !130
  store i32 %141, i32* %r0.0.reg2mem, !insn.addr !130
  br label %dec_label_pc_10bf8, !insn.addr !130

dec_label_pc_10bf8:                               ; preds = %dec_label_pc_10bf0, %dec_label_pc_10b90
  %142 = icmp eq i32 %138, 1, !insn.addr !131
  br i1 %142, label %dec_label_pc_10c04, label %dec_label_pc_110a0, !insn.addr !132

dec_label_pc_10c04:                               ; preds = %dec_label_pc_10bf8
  %143 = icmp eq i32 %stack_var_-5316.0.reload, 0, !insn.addr !133
  br i1 %143, label %dec_label_pc_10c80, label %dec_label_pc_10c10, !insn.addr !134

dec_label_pc_10c10:                               ; preds = %dec_label_pc_10c04
  %144 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11e08, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11e04, i32 0, i32 0)), !insn.addr !135
  %145 = icmp eq %_IO_FILE* %144, null, !insn.addr !136
  br i1 %145, label %dec_label_pc_111a8, label %dec_label_pc_10c2c, !insn.addr !137

dec_label_pc_10c2c:                               ; preds = %dec_label_pc_10c10
  %146 = call i32 @fwrite(i32* nonnull %stack_var_-2064, i32 1, i32 %134, %_IO_FILE* nonnull %144), !insn.addr !138
  %147 = call i32 @fclose(%_IO_FILE* nonnull %144), !insn.addr !139
  %148 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_11e20, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11e04, i32 0, i32 0)), !insn.addr !140
  %149 = icmp eq %_IO_FILE* %148, null, !insn.addr !141
  br i1 %149, label %dec_label_pc_11198, label %dec_label_pc_10c64, !insn.addr !142

dec_label_pc_10c64:                               ; preds = %dec_label_pc_10c2c
  %150 = call i32 @fwrite(i32* nonnull %stack_var_-1040, i32 1, i32 256, %_IO_FILE* nonnull %148), !insn.addr !143
  %151 = call i32 @fclose(%_IO_FILE* nonnull %148), !insn.addr !144
  br label %dec_label_pc_10c80, !insn.addr !144

dec_label_pc_10c80:                               ; preds = %dec_label_pc_10c64, %dec_label_pc_10c04
  %152 = call i32* @memset(i32* nonnull %stack_var_-3144, i32 0, i32 1056), !insn.addr !145
  %153 = call i32 @SHA256_Init(i32* nonnull %stack_var_-5164), !insn.addr !146
  %154 = call i32 @SHA256_Update(i32* nonnull %stack_var_-5164, i32* nonnull %stack_var_-2088, i32 2048), !insn.addr !147
  %155 = call i32 @SHA256_Final(i32* nonnull %stack_var_-3144, i32* nonnull %stack_var_-5164, i32 2048), !insn.addr !148
  br i1 %94, label %dec_label_pc_10d70, label %dec_label_pc_10cd8.lr.ph, !insn.addr !149

dec_label_pc_10cd8.lr.ph:                         ; preds = %dec_label_pc_10c80
  %156 = ptrtoint i32* %stack_var_-3144 to i32, !insn.addr !150
  %157 = ptrtoint i32* %stack_var_-779 to i32, !insn.addr !151
  store i32 1, i32* %.reg2mem
  store i32 %157, i32* %r4.32.reg2mem
  br label %dec_label_pc_10cd8

dec_label_pc_10cd8:                               ; preds = %dec_label_pc_10cd8.lr.ph, %dec_label_pc_10cd8
  %r4.32.reload = load i32, i32* %r4.32.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %158 = add i32 %r4.32.reload, 5, !insn.addr !152
  %159 = mul i32 %.reload, 32, !insn.addr !153
  %160 = add i32 %159, %156, !insn.addr !153
  %161 = add i32 %r4.32.reload, 2, !insn.addr !154
  %162 = inttoptr i32 %161 to i8*, !insn.addr !154
  %163 = load i8, i8* %162, align 1, !insn.addr !154
  %164 = zext i8 %163 to i32, !insn.addr !154
  %165 = add i32 %r4.32.reload, 1, !insn.addr !155
  %166 = inttoptr i32 %165 to i8*, !insn.addr !155
  %167 = load i8, i8* %166, align 1, !insn.addr !155
  %168 = zext i8 %167 to i32, !insn.addr !155
  %169 = add i32 %r4.32.reload, 4, !insn.addr !156
  %170 = inttoptr i32 %169 to i8*, !insn.addr !156
  %171 = load i8, i8* %170, align 1, !insn.addr !156
  %172 = zext i8 %171 to i32, !insn.addr !156
  %173 = mul i32 %164, 65536, !insn.addr !157
  %174 = add i32 %r4.32.reload, 3, !insn.addr !158
  %175 = inttoptr i32 %174 to i8*, !insn.addr !158
  %176 = load i8, i8* %175, align 1, !insn.addr !158
  %177 = zext i8 %176 to i32, !insn.addr !158
  %178 = mul i32 %168, 16777216, !insn.addr !159
  %179 = or i32 %178, %173, !insn.addr !159
  %180 = inttoptr i32 %r4.32.reload to i8*, !insn.addr !160
  %181 = load i8, i8* %180, align 1, !insn.addr !160
  %182 = or i32 %179, %172, !insn.addr !161
  %183 = mul i32 %177, 256, !insn.addr !162
  %184 = or i32 %182, %183, !insn.addr !162
  %185 = call i32 @function_1136c(i32 %82, i32 %184, i32 %160, i8 %181, i32 0, i32 %stack_var_-5316.0.reload), !insn.addr !163
  %186 = add nuw nsw i32 %.reload, 1, !insn.addr !164
  %187 = icmp ugt i32 %r5.1, %.reload, !insn.addr !149
  store i32 %186, i32* %.reg2mem, !insn.addr !149
  store i32 %158, i32* %r4.32.reg2mem, !insn.addr !149
  br i1 %187, label %dec_label_pc_10cd8, label %dec_label_pc_10d30.lr.ph, !insn.addr !149

dec_label_pc_10d30.lr.ph:                         ; preds = %dec_label_pc_10cd8
  %188 = ptrtoint i32* %stack_var_-3112 to i32, !insn.addr !165
  %189 = ptrtoint i32* %stack_var_-2088 to i32, !insn.addr !166
  %190 = add i32 %189, 1309, !insn.addr !167
  store i32 0, i32* %r4.41.reg2mem
  br label %dec_label_pc_10d30

dec_label_pc_10d30:                               ; preds = %dec_label_pc_10d30.lr.ph, %dec_label_pc_10d30
  %r4.41.reload = load i32, i32* %r4.41.reg2mem
  %191 = add i32 %r4.41.reload, %r5.1, !insn.addr !168
  %192 = mul i32 %191, 32, !insn.addr !169
  %193 = add i32 %192, %188, !insn.addr !169
  %194 = add nuw nsw i32 %r4.41.reload, 1, !insn.addr !170
  %195 = mul nuw nsw i32 %r4.41.reload, 5, !insn.addr !171
  %196 = add i32 %190, %195, !insn.addr !172
  %197 = inttoptr i32 %196 to i8*, !insn.addr !172
  %198 = load i8, i8* %197, align 1, !insn.addr !172
  %199 = call i32 @function_1136c(i32 %82, i32 256, i32 %193, i8 %198, i32 1, i32 %stack_var_-5316.0.reload), !insn.addr !173
  %200 = icmp ugt i32 %r5.1, %194, !insn.addr !174
  store i32 %194, i32* %r4.41.reg2mem, !insn.addr !174
  br i1 %200, label %dec_label_pc_10d30, label %dec_label_pc_10d70, !insn.addr !174

dec_label_pc_10d70:                               ; preds = %dec_label_pc_10d30, %dec_label_pc_10c80
  store i32 0, i32* %stack_var_-4684, align 4, !insn.addr !175
  %201 = call i32* @memset(i32* nonnull %stack_var_-4680, i32 0, i32 252), !insn.addr !176
  %202 = call i32 @fseek(%_IO_FILE* nonnull %71, i32 -256, i32 2), !insn.addr !177
  %203 = call i32 @fread(i32* nonnull %stack_var_-4684, i32 256, i32 1, %_IO_FILE* nonnull %71), !insn.addr !178
  store i32 0, i32* %stack_var_-5304, align 4, !insn.addr !179
  %204 = call i32 @SHA256_Init(i32* nonnull %stack_var_-5052), !insn.addr !180
  %205 = mul i32 %r5.1, 64, !insn.addr !181
  %206 = or i32 %205, 32, !insn.addr !181
  %207 = call i32 @SHA256_Update(i32* nonnull %stack_var_-5052, i32* nonnull %stack_var_-3144, i32 %206), !insn.addr !182
  %208 = call i32 @SHA256_Final(i32* nonnull %stack_var_-5304, i32* nonnull %stack_var_-5052, i32 %206), !insn.addr !183
  %209 = call i32 @BIO_new_mem_buf(i32* nonnull %stack_var_-2064, i32 1024), !insn.addr !184
  %210 = call i32 @PEM_read_bio_RSA_PUBKEY(), !insn.addr !185
  %211 = icmp eq i32 %210, 0, !insn.addr !186
  br i1 %211, label %dec_label_pc_11168, label %dec_label_pc_10e20, !insn.addr !187

dec_label_pc_10e20:                               ; preds = %dec_label_pc_10d70
  %212 = call i32 @RSA_verify(i32 672, i32* nonnull %stack_var_-5304, i32 32, i32* nonnull %stack_var_-4684, i32 256, i32 %210), !insn.addr !188
  %213 = call i32 @RSA_free(i32 %210), !insn.addr !189
  %214 = icmp eq i32 %209, 0, !insn.addr !190
  br i1 %214, label %dec_label_pc_10e5c, label %dec_label_pc_10e54, !insn.addr !191

dec_label_pc_10e54:                               ; preds = %dec_label_pc_10e20
  %215 = call i32 @BIO_free(i32 %209), !insn.addr !192
  br label %dec_label_pc_10e5c, !insn.addr !192

dec_label_pc_10e5c:                               ; preds = %dec_label_pc_10e54, %dec_label_pc_10e20
  %216 = icmp eq i32 %212, 1, !insn.addr !193
  br i1 %216, label %dec_label_pc_10e64, label %dec_label_pc_110e8, !insn.addr !194

dec_label_pc_10e64:                               ; preds = %dec_label_pc_10e5c
  %217 = call i32 @fclose(%_IO_FILE* nonnull %71), !insn.addr !195
  %218 = call i32 @puts(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_11e9c, i32 0, i32 0)), !insn.addr !196
  %219 = icmp eq i32 %stack_var_-5312.0.reload, 0, !insn.addr !197
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !198
  br i1 %219, label %dec_label_pc_108f4, label %dec_label_pc_10e84, !insn.addr !198

dec_label_pc_10e84:                               ; preds = %dec_label_pc_10e64
  %220 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11ea8, i32 0, i32 0)), !insn.addr !199
  store i32 0, i32* %stack_var_-4428, align 4, !insn.addr !200
  %221 = call i32* @memset(i32* nonnull %stack_var_-4424, i32 0, i32 253), !insn.addr !201
  %222 = call i32* @memcpy(i32* nonnull %stack_var_-4428, i32* nonnull %stack_var_-728, i32 256), !insn.addr !202
  %223 = bitcast i32* %stack_var_-4428 to i8*, !insn.addr !203
  %224 = call i32 @puts(i8* nonnull %223), !insn.addr !203
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !204
  br label %dec_label_pc_108f4, !insn.addr !204

dec_label_pc_10ecc:                               ; preds = %dec_label_pc_10888
  %225 = call i32 @function_1127c(i32* nonnull %stack_var_-4940), !insn.addr !205
  store i32 %225, i32* %r4.0.reg2mem, !insn.addr !206
  br label %dec_label_pc_108f4, !insn.addr !206

dec_label_pc_10edc:                               ; preds = %dec_label_pc_10888
  store i32 1, i32* %stack_var_-5316.0.reg2mem, !insn.addr !207
  store i32 0, i32* %stack_var_-5312.0.reg2mem, !insn.addr !207
  store i32 1, i32* %r4.1.reg2mem, !insn.addr !207
  br label %dec_label_pc_109c8, !insn.addr !207

dec_label_pc_10ef0:                               ; preds = %dec_label_pc_10888
  store i32 1, i32* %stack_var_-5316.0.reg2mem, !insn.addr !208
  store i32 0, i32* %stack_var_-5312.0.reg2mem, !insn.addr !208
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !208
  br label %dec_label_pc_109c8, !insn.addr !208

dec_label_pc_10f04:                               ; preds = %dec_label_pc_10888
  %226 = call %_IO_FILE* @fopen64(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11ec8, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_118a0, i32 0, i32 0)), !insn.addr !209
  %227 = icmp eq %_IO_FILE* %226, null, !insn.addr !210
  br i1 %227, label %dec_label_pc_1108c, label %dec_label_pc_10f20, !insn.addr !211

dec_label_pc_10f20:                               ; preds = %dec_label_pc_10f04
  store i32 0, i32* %stack_var_-3144, align 4, !insn.addr !212
  %228 = call i32* @memset(i32* nonnull %stack_var_-3140, i32 0, i32 252), !insn.addr !213
  %229 = ptrtoint i32* %stack_var_-3145 to i32, !insn.addr !214
  %230 = ptrtoint i32* %stack_var_-2889 to i32, !insn.addr !215
  store i32 %229, i32* %r3.0.reg2mem, !insn.addr !216
  br label %dec_label_pc_10f50, !insn.addr !216

dec_label_pc_10f50:                               ; preds = %dec_label_pc_10f50, %dec_label_pc_10f20
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %231 = add i32 %r3.0.reload, 1, !insn.addr !217
  %232 = inttoptr i32 %231 to i8*, !insn.addr !217
  store i8 -1, i8* %232, align 1, !insn.addr !217
  %233 = icmp eq i32 %231, %230, !insn.addr !218
  store i32 %231, i32* %r3.0.reg2mem, !insn.addr !219
  br i1 %233, label %dec_label_pc_10f5c, label %dec_label_pc_10f50, !insn.addr !219

dec_label_pc_10f5c:                               ; preds = %dec_label_pc_10f50
  %234 = call i32 @fwrite(i32* nonnull %stack_var_-3144, i32 256, i32 1, %_IO_FILE* nonnull %226), !insn.addr !220
  %235 = call i32 @fclose(%_IO_FILE* nonnull %226), !insn.addr !221
  store i32 0, i32* %r4.0.reg2mem, !insn.addr !221
  br label %dec_label_pc_108f4, !insn.addr !221

dec_label_pc_10f80:                               ; preds = %dec_label_pc_10888
  store i32 0, i32* %stack_var_-5316.0.reg2mem, !insn.addr !222
  store i32 0, i32* %stack_var_-5312.0.reg2mem, !insn.addr !222
  store i32 0, i32* %r4.1.reg2mem, !insn.addr !222
  br label %dec_label_pc_109c8, !insn.addr !222

dec_label_pc_10f90:                               ; preds = %dec_label_pc_10888
  %r1.0.reload = load i32, i32* %r1.0.reg2mem
  %236 = call i32 @puts(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11ee4, i32 0, i32 0)), !insn.addr !223
  %237 = call i32 @function_11710(i32 %r1.0.reload), !insn.addr !224
  store i32 5, i32* %r4.0.reg2mem, !insn.addr !225
  br label %dec_label_pc_108f4, !insn.addr !225

dec_label_pc_10fac:                               ; preds = %dec_label_pc_109c8
  %238 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([43 x i8], [43 x i8]* @global_var_11c54, i32 0, i32 0), i32* nonnull %stack_var_-4940, i32 2048), !insn.addr !226
  store i32 6, i32* %r4.0.reg2mem, !insn.addr !227
  br label %dec_label_pc_108f4, !insn.addr !227

dec_label_pc_10fc8:                               ; preds = %dec_label_pc_10950
  %239 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_11c34, i32 0, i32 0)), !insn.addr !228
  store i32 4, i32* %r4.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_108f4, !insn.addr !229

dec_label_pc_10fdc:                               ; preds = %dec_label_pc_10a00
  %240 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11c98, i32 0, i32 0), i32* nonnull %stack_var_-4940), !insn.addr !230
  %241 = call i32 @fclose(%_IO_FILE* nonnull %71), !insn.addr !231
  store i32 8, i32* %r4.0.reg2mem, !insn.addr !232
  br label %dec_label_pc_108f4, !insn.addr !232

dec_label_pc_10ffc:                               ; preds = %dec_label_pc_10a24
  %242 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_11cb0, i32 0, i32 0), i32 %81), !insn.addr !233
  %243 = and i32 %77, 254, !insn.addr !234
  %244 = icmp eq i32 %243, 254, !insn.addr !235
  br i1 %244, label %dec_label_pc_10a38, label %dec_label_pc_11018, !insn.addr !236

dec_label_pc_11018:                               ; preds = %dec_label_pc_10ffc
  %245 = call i32 @puts(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_11cbc, i32 0, i32 0)), !insn.addr !237
  store i32 20, i32* %r4.0.reg2mem, !insn.addr !238
  br label %dec_label_pc_108f4, !insn.addr !238

dec_label_pc_1102c:                               ; preds = %dec_label_pc_10aec
  %246 = call i32 @llvm.bswap.i32(i32 %3), !insn.addr !239
  %247 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([96 x i8], [96 x i8]* @global_var_11d14, i32 0, i32 0), i32 %246, i32 %7, i32 %fp.0.lcssa.reload), !insn.addr !240
  %248 = call i32 @fclose(%_IO_FILE* nonnull %71), !insn.addr !241
  store i32 10, i32* %r4.0.reg2mem, !insn.addr !242
  br label %dec_label_pc_108f4, !insn.addr !242

dec_label_pc_11050:                               ; preds = %dec_label_pc_109e8
  %249 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11c80, i32 0, i32 0), i32* nonnull %stack_var_-4940), !insn.addr !243
  store i32 7, i32* %r4.0.reg2mem, !insn.addr !244
  br label %dec_label_pc_108f4, !insn.addr !244

dec_label_pc_11068:                               ; preds = %dec_label_pc_10a5c
  %250 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_11ce0, i32 0, i32 0), i32 %90, i32 %r5.1), !insn.addr !245
  %251 = call i32 @fclose(%_IO_FILE* nonnull %71), !insn.addr !246
  store i32 9, i32* %r4.0.reg2mem, !insn.addr !247
  br label %dec_label_pc_108f4, !insn.addr !247

dec_label_pc_1108c:                               ; preds = %dec_label_pc_10f04
  %252 = call i32 @puts(i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_11ed4, i32 0, i32 0)), !insn.addr !248
  store i32 1, i32* %r4.0.reg2mem, !insn.addr !249
  br label %dec_label_pc_108f4, !insn.addr !249

dec_label_pc_110a0:                               ; preds = %dec_label_pc_10bf8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %253 = call i32 @ERR_get_error(i32 %r0.0.reload), !insn.addr !250
  %254 = call i32 @ERR_error_string(i32 %253, i32 0), !insn.addr !251
  %255 = inttoptr i32 %254 to i8*, !insn.addr !252
  %256 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_11d9c, i32 0, i32 0), i8* %255), !insn.addr !252
  %257 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11dc8, i32 0, i32 0)), !insn.addr !253
  store i32 13, i32* %r4.5.reg2mem, !insn.addr !253
  br label %dec_label_pc_110cc, !insn.addr !253

dec_label_pc_110cc:                               ; preds = %dec_label_pc_11138, %dec_label_pc_110a0
  %r4.5.reload = load i32, i32* %r4.5.reg2mem
  %258 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_11de0, i32 0, i32 0), i32 %r4.5.reload), !insn.addr !254
  %259 = call i32 @fclose(%_IO_FILE* nonnull %71), !insn.addr !255
  store i32 %r4.5.reload, i32* %r4.0.reg2mem, !insn.addr !256
  br label %dec_label_pc_108f4, !insn.addr !256

dec_label_pc_110e8:                               ; preds = %dec_label_pc_10e5c
  %260 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11e84, i32 0, i32 0)), !insn.addr !257
  %261 = call i32 @ERR_get_error(i32 %260), !insn.addr !258
  %262 = call i32 @ERR_error_string(i32 %261, i32 0), !insn.addr !259
  %263 = inttoptr i32 %262 to i8*, !insn.addr !260
  %264 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_11d9c, i32 0, i32 0), i8* %263), !insn.addr !260
  store i32 18, i32* %r4.0.reg2mem, !insn.addr !261
  br label %dec_label_pc_108f4, !insn.addr !261

dec_label_pc_11118:                               ; preds = %dec_label_pc_10af8
  %265 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_11d78, i32 0, i32 0), i32* nonnull %stack_var_-4812), !insn.addr !262
  %266 = call i32 @fclose(%_IO_FILE* nonnull %71), !insn.addr !263
  store i32 11, i32* %r4.0.reg2mem, !insn.addr !264
  br label %dec_label_pc_108f4, !insn.addr !264

dec_label_pc_11138:                               ; preds = %dec_label_pc_10b10
  %267 = call i32 @ERR_get_error(i32 0), !insn.addr !265
  %268 = call i32 @ERR_error_string(i32 %267, i32 0), !insn.addr !266
  %269 = inttoptr i32 %268 to i8*, !insn.addr !267
  %270 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_11d9c, i32 0, i32 0), i8* %269), !insn.addr !267
  %271 = call i32 @puts(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_11db0, i32 0, i32 0)), !insn.addr !268
  store i32 12, i32* %r4.5.reg2mem, !insn.addr !269
  br label %dec_label_pc_110cc, !insn.addr !269

dec_label_pc_11168:                               ; preds = %dec_label_pc_10d70
  %272 = call i32 @ERR_get_error(i32 0), !insn.addr !270
  %273 = call i32 @ERR_error_string(i32 %272, i32 0), !insn.addr !271
  %274 = inttoptr i32 %273 to i8*, !insn.addr !272
  %275 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_11d9c, i32 0, i32 0), i8* %274), !insn.addr !272
  %276 = call i32 @puts(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_11e70, i32 0, i32 0)), !insn.addr !273
  store i32 17, i32* %r4.0.reg2mem, !insn.addr !274
  br label %dec_label_pc_108f4, !insn.addr !274

dec_label_pc_11198:                               ; preds = %dec_label_pc_10c2c
  %277 = call i32 @puts(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_11e54, i32 0, i32 0)), !insn.addr !275
  store i32 16, i32* %r4.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_108f4, !insn.addr !276

dec_label_pc_111a8:                               ; preds = %dec_label_pc_10c10
  %278 = call i32 @puts(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_11e3c, i32 0, i32 0)), !insn.addr !277
  store i32 15, i32* %r4.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_108f4, !insn.addr !278

; uselistorder directives
  uselistorder i32 %r4.5.reload, { 1, 0 }
  uselistorder i32 %209, { 1, 0 }
  uselistorder i32 %r4.41.reload, { 1, 0, 2 }
  uselistorder i32 %134, { 2, 1, 0 }
  uselistorder i32 %130, { 1, 0 }
  uselistorder i32 %fp.0.lcssa.reload, { 1, 0 }
  uselistorder i32 %118, { 1, 0 }
  uselistorder i32 %r6.03.reload, { 0, 1, 4, 2, 3 }
  uselistorder i32 %93, { 1, 0 }
  uselistorder i32 %90, { 1, 0 }
  uselistorder i32 %r5.1, { 8, 1, 6, 3, 5, 4, 7, 2, 9, 0 }
  uselistorder i32 %r5.0.reload, { 1, 0 }
  uselistorder i32 %81, { 1, 0 }
  uselistorder i32 %77, { 1, 0 }
  uselistorder i32 %stack_var_-5316.0.reload, { 2, 1, 0 }
  uselistorder %_IO_FILE* %71, { 0, 4, 6, 5, 7, 1, 2, 3, 10, 8, 9 }
  uselistorder i32 %55, { 0, 2, 1 }
  uselistorder i32 %42, { 0, 2, 1 }
  uselistorder i32 %28, { 0, 2, 1 }
  uselistorder i32* %stack_var_-4940, { 1, 2, 0, 3, 4, 5, 6, 7 }
  uselistorder i32* %stack_var_-2088, { 3, 0, 4, 1, 2 }
  uselistorder i32 %7, { 1, 2, 0 }
  uselistorder i32* %stack_var_-3144, { 0, 7, 1, 8, 2, 3, 4, 5, 6 }
  uselistorder i32* %stack_var_-4428, { 0, 1, 4, 2, 3 }
  uselistorder i32* %r1.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %r4.0.reg2mem, { 11, 10, 14, 16, 12, 15, 5, 8, 17, 9, 7, 6, 21, 18, 20, 2, 19, 13, 1, 4, 22, 23, 0, 3 }
  uselistorder i32* %stack_var_-5316.0.reg2mem, { 2, 4, 3, 0, 1 }
  uselistorder i32* %stack_var_-5312.0.reg2mem, { 2, 4, 3, 0, 1 }
  uselistorder i32* %r4.1.reg2mem, { 2, 4, 3, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %fp.05.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r7.04.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r6.03.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.32.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.41.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.5.reg2mem, { 2, 0, 1 }
  uselistorder i8* %1, { 1, 0 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_11d9c, i32 0, i32 0), { 2, 0, 3, 1 }
  uselistorder i32 (i32, i32)* @ERR_error_string, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i32)* @ERR_get_error, { 3, 2, 1, 0, 4 }
  uselistorder i32 254, { 1, 0 }
  uselistorder i32 (i32, i32, i32, i8, i32, i32)* @function_1136c, { 1, 0 }
  uselistorder i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11e04, i32 0, i32 0), { 1, 0 }
  uselistorder i32 (i32)* @BIO_free, { 1, 0, 2 }
  uselistorder i32 (i32)* @RSA_free, { 1, 0, 2 }
  uselistorder i32 (i32, i32*, i32, i32*, i32, i32)* @RSA_verify, { 1, 0, 2 }
  uselistorder i32 32, { 2, 3, 0, 1, 4 }
  uselistorder i32 ()* @PEM_read_bio_RSA_PUBKEY, { 1, 0, 2 }
  uselistorder i32 (i32*, i32)* @BIO_new_mem_buf, { 1, 0, 2 }
  uselistorder i32 65536, { 0, 2, 3, 1 }
  uselistorder i32* (i32*, i32*, i32)* @memcpy, { 0, 3, 2, 1, 4 }
  uselistorder i32 (i32)* @function_11710, { 3, 2, 1, 0 }
  uselistorder i32 3, { 4, 3, 5, 0, 1, 2 }
  uselistorder i32 5, { 0, 2, 3, 4, 1 }
  uselistorder i32 2048, { 0, 2, 1, 3, 4, 5 }
  uselistorder i32 %arg2, { 2, 3, 4, 1, 0, 5 }
  uselistorder label %dec_label_pc_10d30, { 1, 0 }
  uselistorder label %dec_label_pc_10cd8, { 1, 0 }
  uselistorder label %dec_label_pc_10aa8, { 1, 0 }
  uselistorder label %dec_label_pc_10a38, { 1, 0 }
  uselistorder label %dec_label_pc_109c8, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_108f4, { 4, 5, 6, 7, 8, 9, 2, 10, 11, 12, 13, 14, 18, 15, 17, 1, 3, 16, 0, 19, 20, 21, 22 }
  uselistorder label %dec_label_pc_10888, { 1, 2, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_111bc:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !279
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !279
  %2 = call i32 @__libc_start_main(i32 67588, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 71601 to void ()*), void ()* inttoptr (i32 67588 to void ()*), void ()* %1), !insn.addr !279
  call void @abort(), !insn.addr !280
  unreachable, !insn.addr !280
}

define i32 @function_111e0(i32 %arg1) local_unnamed_addr {
dec_label_pc_111e0:
  ret i32 %arg1, !insn.addr !281
}

define i32 @function_111ec() local_unnamed_addr {
dec_label_pc_111ec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_2206c, align 4, !insn.addr !282
  %3 = icmp eq i32 %2, 0, !insn.addr !283
  br i1 %3, label %4, label %dec_label_pc_11204, !insn.addr !284

; <label>:4:                                      ; preds = %dec_label_pc_111ec
  ret i32 %1, !insn.addr !284

dec_label_pc_11204:                               ; preds = %dec_label_pc_111ec
  call void @__gmon_start__(), !insn.addr !285
  ret i32 ptrtoint (i32* @2 to i32), !insn.addr !285
}

define i32 @function_11210(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_11210:
  %0 = alloca i32
  %1 = alloca i1
  %cpsr_n.21.reg2mem = alloca i1, !insn.addr !286
  %2 = load i1, i1* %1
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i32, i32* %0
  br i1 %3, label %6, label %dec_label_pc_11220, !insn.addr !286

; <label>:6:                                      ; preds = %20, %dec_label_pc_11258, %dec_label_pc_11210
  ret i32 %arg1, !insn.addr !286

dec_label_pc_11220:                               ; preds = %dec_label_pc_11210
  %7 = icmp eq i1 %4, %2, !insn.addr !287
  br i1 %7, label %dec_label_pc_11240, label %8, !insn.addr !287

; <label>:8:                                      ; preds = %dec_label_pc_11220
  call void @__asm_svclt(i32 18288), !insn.addr !287
  br label %dec_label_pc_11240, !insn.addr !287

dec_label_pc_11240:                               ; preds = %8, %dec_label_pc_11220
  br i1 %2, label %dec_label_pc_11258, label %9, !insn.addr !288

; <label>:9:                                      ; preds = %dec_label_pc_11240
  %10 = mul i32 %5, 1048577, !insn.addr !289
  %11 = mul i32 %5, 4194304, !insn.addr !288
  %12 = sub i32 0, %11
  %13 = sub i32 %12, 1
  %14 = and i32 %10, %13, !insn.addr !288
  %15 = icmp slt i32 %14, 0, !insn.addr !288
  %16 = icmp eq i32 %14, 0, !insn.addr !288
  store i1 %15, i1* %cpsr_n.21.reg2mem, !insn.addr !290
  br i1 %16, label %17, label %dec_label_pc_11258, !insn.addr !290

; <label>:17:                                     ; preds = %9
  %18 = call i32 @unknown_240(), !insn.addr !290
  ret i32 %18, !insn.addr !290

dec_label_pc_11258:                               ; preds = %dec_label_pc_11240, %9
  %cpsr_n.21.reload = load i1, i1* %cpsr_n.21.reg2mem
  %19 = icmp eq i1 %cpsr_n.21.reload, %2, !insn.addr !291
  br i1 %19, label %6, label %20, !insn.addr !291

; <label>:20:                                     ; preds = %dec_label_pc_11258
  call void @__asm_svclt(i32 18288), !insn.addr !291
  br label %6, !insn.addr !291

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
  uselistorder i1 %2, { 2, 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11258, { 1, 0 }
}

define i32 @function_11260() local_unnamed_addr {
dec_label_pc_11260:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !292
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_22834 to i8*), align 4, !insn.addr !293
  %5 = icmp eq i8 %4, 0, !insn.addr !294
  br i1 %5, label %dec_label_pc_1126e, label %dec_label_pc_11276, !insn.addr !294

dec_label_pc_1126e:                               ; preds = %dec_label_pc_11260
  %6 = call i32 @function_11210(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !295
  store i8 1, i8* bitcast (i8** @global_var_22834 to i8*), align 4, !insn.addr !296
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !296
  br label %dec_label_pc_11276, !insn.addr !296

dec_label_pc_11276:                               ; preds = %dec_label_pc_11260, %dec_label_pc_1126e
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !297

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_11276, { 1, 0 }
}

define i32 @function_11278() local_unnamed_addr {
dec_label_pc_11278:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !298
}

define i32 @function_1127c(i32* %arg1) local_unnamed_addr {
dec_label_pc_1127c:
  %r0.0.reg2mem = alloca i32, !insn.addr !299
  %r4.0.reg2mem = alloca i32, !insn.addr !299
  %stack_var_-32788 = alloca i32, align 4
  %stack_var_-32792 = alloca i32, align 4
  store i32 0, i32* %stack_var_-32792, align 4, !insn.addr !300
  %0 = call i32* @memset(i32* nonnull %stack_var_-32788, i32 0, i32 32764), !insn.addr !301
  %1 = bitcast i32* %arg1 to i8*, !insn.addr !302
  %2 = call %_IO_FILE* @fopen64(i8* %1, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_1187c, i32 0, i32 0)), !insn.addr !302
  %3 = icmp eq %_IO_FILE* %2, null, !insn.addr !303
  store i32 ptrtoint ([32 x i8]* @global_var_2207c to i32), i32* %r4.0.reg2mem, !insn.addr !304
  br i1 %3, label %dec_label_pc_11350, label %dec_label_pc_112e8, !insn.addr !304

dec_label_pc_112cc:                               ; preds = %dec_label_pc_112e8
  %4 = load i32, i32* %10, align 4, !insn.addr !305
  %5 = add i32 %r4.0.reload, 132, !insn.addr !306
  %6 = call i32 @fwrite(i32* nonnull %stack_var_-32792, i32 %4, i32 1, %_IO_FILE* nonnull %14), !insn.addr !307
  %7 = call i32 @fclose(%_IO_FILE* nonnull %14), !insn.addr !308
  %8 = icmp eq i32 %5, 141368, !insn.addr !309
  store i32 %5, i32* %r4.0.reg2mem, !insn.addr !310
  br i1 %8, label %dec_label_pc_11340, label %dec_label_pc_112e8, !insn.addr !310

dec_label_pc_112e8:                               ; preds = %dec_label_pc_1127c, %dec_label_pc_112cc
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %9 = add i32 %r4.0.reload, -4, !insn.addr !311
  %10 = inttoptr i32 %9 to i32*, !insn.addr !311
  %11 = load i32, i32* %10, align 4, !insn.addr !311
  %12 = call i32 @fread(i32* nonnull %stack_var_-32792, i32 %11, i32 1, %_IO_FILE* nonnull %2), !insn.addr !312
  %13 = inttoptr i32 %r4.0.reload to i8*, !insn.addr !313
  %14 = call %_IO_FILE* @fopen64(i8* %13, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_118a0, i32 0, i32 0)), !insn.addr !313
  %15 = icmp eq %_IO_FILE* %14, null, !insn.addr !314
  br i1 %15, label %dec_label_pc_1131c, label %dec_label_pc_112cc, !insn.addr !315

dec_label_pc_1131c:                               ; preds = %dec_label_pc_112e8
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_118a4, i32 0, i32 0), i8* %13), !insn.addr !316
  %17 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !317
  store i32 2, i32* %r0.0.reg2mem, !insn.addr !318
  br label %dec_label_pc_11338, !insn.addr !318

dec_label_pc_11338:                               ; preds = %dec_label_pc_11350, %dec_label_pc_11340, %dec_label_pc_1131c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !319

dec_label_pc_11340:                               ; preds = %dec_label_pc_112cc
  %18 = call i32 @fclose(%_IO_FILE* nonnull %2), !insn.addr !320
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !321
  br label %dec_label_pc_11338, !insn.addr !321

dec_label_pc_11350:                               ; preds = %dec_label_pc_1127c
  %19 = call i32 @puts(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11880, i32 0, i32 0)), !insn.addr !322
  store i32 1, i32* %r0.0.reg2mem, !insn.addr !323
  br label %dec_label_pc_11338, !insn.addr !323

; uselistorder directives
  uselistorder %_IO_FILE* %14, { 2, 1, 0 }
  uselistorder i32* %10, { 1, 0 }
  uselistorder i32 %r4.0.reload, { 1, 0, 2 }
  uselistorder %_IO_FILE* %2, { 1, 0, 2, 3 }
  uselistorder i32* %stack_var_-32792, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder label %dec_label_pc_112e8, { 1, 0 }
}

define i32 @function_1136c(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4, i32 %arg5, i32 %arg6) local_unnamed_addr {
dec_label_pc_1136c:
  %.lcssa5.reg2mem = alloca i32, !insn.addr !324
  %r5.06.reg2mem = alloca i32, !insn.addr !324
  %r6.0.reg2mem = alloca i32, !insn.addr !324
  %stack_var_-1184.0.reg2mem = alloca i8*, !insn.addr !324
  %stack_var_-1180 = alloca i32, align 4
  %stack_var_-1192 = alloca i32, align 4
  %stack_var_-1176 = alloca i32, align 4
  %stack_var_-1304 = alloca i32, align 4
  %stack_var_-1064 = alloca i32, align 4
  %stack_var_-1060 = alloca i32, align 4
  %0 = urem i32 %arg6, 256, !insn.addr !325
  store i32 0, i32* %stack_var_-1064, align 4, !insn.addr !326
  %1 = call i32* @memset(i32* nonnull %stack_var_-1060, i32 0, i32 1020), !insn.addr !327
  %2 = call i32 @SHA256_Init(i32* nonnull %stack_var_-1304), !insn.addr !328
  %3 = icmp eq i32 %0, 0, !insn.addr !329
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !330
  br i1 %3, label %dec_label_pc_11424, label %dec_label_pc_113b8, !insn.addr !330

dec_label_pc_113b8:                               ; preds = %dec_label_pc_1136c
  %4 = sext i8 %arg4 to i32
  %5 = urem i32 %arg5, 256
  store i32 1886221359, i32* %stack_var_-1192, align 4, !insn.addr !331
  %6 = call i32* @memset(i32* nonnull %stack_var_-1180, i32 0, i32 116), !insn.addr !332
  store i32 %4, i32* @1, align 4, !insn.addr !333
  switch i32 %4, label %dec_label_pc_115b8 [
    i32 0, label %dec_label_pc_1162c
    i32 7, label %dec_label_pc_1162c
  ], !insn.addr !333

dec_label_pc_11424:                               ; preds = %dec_label_pc_1136c, %dec_label_pc_115c0, %dec_label_pc_115ec
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %stack_var_-1184.0.reload = load i8*, i8** %stack_var_-1184.0.reg2mem
  %7 = icmp ult i32 %arg2, 1024, !insn.addr !334
  %8 = icmp ne i1 %7, true, !insn.addr !334
  %9 = icmp eq i32 %arg2, 1024, !insn.addr !334
  %10 = icmp ne i1 %8, true, !insn.addr !335
  %11 = or i1 %9, %10, !insn.addr !335
  %12 = inttoptr i32 %arg1 to %_IO_FILE*
  store i32 %arg2, i32* %.lcssa5.reg2mem, !insn.addr !335
  br i1 %11, label %dec_label_pc_1148c, label %dec_label_pc_11448.lr.ph, !insn.addr !335

dec_label_pc_11448.lr.ph:                         ; preds = %dec_label_pc_11424
  %13 = urem i32 %arg6, 2, !insn.addr !336
  %14 = icmp eq i32 %r6.0.reload, 0
  %15 = icmp eq i32 %13, 0
  %16 = or i1 %15, %14
  %17 = inttoptr i32 %r6.0.reload to %_IO_FILE*
  store i32 0, i32* %r5.06.reg2mem
  br label %dec_label_pc_11448

dec_label_pc_11448:                               ; preds = %dec_label_pc_11448.lr.ph, %dec_label_pc_1142c.backedge
  %r5.06.reload = load i32, i32* %r5.06.reg2mem
  %18 = call i32 @fread(i32* nonnull %stack_var_-1064, i32 1, i32 1024, %_IO_FILE* %12), !insn.addr !337
  %19 = call i32 @SHA256_Update(i32* nonnull %stack_var_-1304, i32* nonnull %stack_var_-1064, i32 1024), !insn.addr !338
  br i1 %16, label %dec_label_pc_1142c.backedge, label %dec_label_pc_11474, !insn.addr !339

dec_label_pc_1142c.backedge:                      ; preds = %dec_label_pc_11448, %dec_label_pc_11474
  %20 = add i32 %18, %r5.06.reload, !insn.addr !340
  %21 = sub i32 %arg2, %20, !insn.addr !341
  %22 = icmp ult i32 %21, 1024, !insn.addr !334
  %23 = icmp ne i1 %22, true, !insn.addr !334
  %24 = icmp eq i32 %21, 1024, !insn.addr !334
  %25 = icmp ne i1 %23, true, !insn.addr !335
  %26 = or i1 %24, %25, !insn.addr !335
  store i32 %20, i32* %r5.06.reg2mem, !insn.addr !335
  store i32 %21, i32* %.lcssa5.reg2mem, !insn.addr !335
  br i1 %26, label %dec_label_pc_1148c, label %dec_label_pc_11448, !insn.addr !335

dec_label_pc_11474:                               ; preds = %dec_label_pc_11448
  %27 = call i32 @fwrite(i32* nonnull %stack_var_-1064, i32 1, i32 1024, %_IO_FILE* %17), !insn.addr !342
  br label %dec_label_pc_1142c.backedge, !insn.addr !343

dec_label_pc_1148c:                               ; preds = %dec_label_pc_1142c.backedge, %dec_label_pc_11424
  %28 = ptrtoint i32* %stack_var_-1176 to i32
  %.lcssa5.reload = load i32, i32* %.lcssa5.reg2mem
  %29 = call i32 @fread(i32* nonnull %stack_var_-1064, i32 1, i32 %.lcssa5.reload, %_IO_FILE* %12), !insn.addr !344
  %30 = call i32 @SHA256_Update(i32* nonnull %stack_var_-1304, i32* nonnull %stack_var_-1064, i32 %29), !insn.addr !345
  %31 = icmp eq i32 %r6.0.reload, 0, !insn.addr !346
  %or.cond = or i1 %3, %31
  br i1 %or.cond, label %dec_label_pc_11518, label %dec_label_pc_114b8, !insn.addr !347

dec_label_pc_114b8:                               ; preds = %dec_label_pc_1148c
  %32 = inttoptr i32 %r6.0.reload to %_IO_FILE*, !insn.addr !348
  %33 = call i32 @fwrite(i32* nonnull %stack_var_-1064, i32 1, i32 %29, %_IO_FILE* %32), !insn.addr !348
  %34 = add i32 %28, -12, !insn.addr !349
  store i32 0, i32* %stack_var_-1192, align 4, !insn.addr !350
  %35 = add i32 %28, -8, !insn.addr !351
  %36 = inttoptr i32 %35 to i32*, !insn.addr !351
  store i32 0, i32* %36, align 4, !insn.addr !351
  %37 = add i32 %28, -4, !insn.addr !352
  %38 = inttoptr i32 %37 to i32*, !insn.addr !352
  store i32 0, i32* %38, align 4, !insn.addr !352
  store i32 0, i32* %stack_var_-1176, align 4, !insn.addr !353
  %39 = add i32 %28, 4, !insn.addr !354
  %40 = inttoptr i32 %39 to i32*, !insn.addr !354
  store i32 0, i32* %40, align 4, !insn.addr !354
  %41 = add i32 %28, 8, !insn.addr !355
  %42 = inttoptr i32 %41 to i32*, !insn.addr !355
  store i32 0, i32* %42, align 4, !insn.addr !355
  %43 = add i32 %28, 12, !insn.addr !356
  %44 = inttoptr i32 %43 to i32*, !insn.addr !356
  store i32 0, i32* %44, align 4, !insn.addr !356
  %45 = call i32 @SHA256_Final(i32* nonnull %stack_var_-1192, i32* nonnull %stack_var_-1304, i32 %34), !insn.addr !357
  %46 = call i32 @fclose(%_IO_FILE* %32), !insn.addr !358
  br label %dec_label_pc_11558, !insn.addr !359

dec_label_pc_11518:                               ; preds = %dec_label_pc_1148c
  %47 = add i32 %28, -12, !insn.addr !360
  store i32 0, i32* %stack_var_-1192, align 4, !insn.addr !361
  %48 = add i32 %28, -8, !insn.addr !362
  %49 = inttoptr i32 %48 to i32*, !insn.addr !362
  store i32 0, i32* %49, align 4, !insn.addr !362
  %50 = add i32 %28, -4, !insn.addr !363
  %51 = inttoptr i32 %50 to i32*, !insn.addr !363
  store i32 0, i32* %51, align 4, !insn.addr !363
  store i32 0, i32* %stack_var_-1176, align 4, !insn.addr !364
  %52 = add i32 %28, 4, !insn.addr !365
  %53 = inttoptr i32 %52 to i32*, !insn.addr !365
  store i32 0, i32* %53, align 4, !insn.addr !365
  %54 = add i32 %28, 8, !insn.addr !366
  %55 = inttoptr i32 %54 to i32*, !insn.addr !366
  store i32 0, i32* %55, align 4, !insn.addr !366
  %56 = add i32 %28, 12, !insn.addr !367
  %57 = inttoptr i32 %56 to i32*, !insn.addr !367
  store i32 0, i32* %57, align 4, !insn.addr !367
  %58 = call i32 @SHA256_Final(i32* nonnull %stack_var_-1192, i32* nonnull %stack_var_-1304, i32 %47), !insn.addr !368
  br label %dec_label_pc_11558, !insn.addr !368

dec_label_pc_11558:                               ; preds = %dec_label_pc_11518, %dec_label_pc_114b8
  %59 = load i32, i32* %stack_var_-1192, align 4, !insn.addr !369
  %60 = ptrtoint i8* %stack_var_-1184.0.reload to i32, !insn.addr !369
  %61 = load i32, i32* %stack_var_-1180, align 4, !insn.addr !369
  %62 = inttoptr i32 %arg3 to i32*, !insn.addr !370
  store i32 %59, i32* %62, align 4, !insn.addr !370
  %63 = add i32 %arg3, 4, !insn.addr !371
  %64 = inttoptr i32 %63 to i32*, !insn.addr !371
  store i32 0, i32* %64, align 4, !insn.addr !371
  %65 = add i32 %arg3, 8, !insn.addr !372
  %66 = inttoptr i32 %65 to i32*, !insn.addr !372
  store i32 %60, i32* %66, align 4, !insn.addr !372
  %67 = add i32 %arg3, 12, !insn.addr !373
  %68 = inttoptr i32 %67 to i32*, !insn.addr !373
  store i32 %61, i32* %68, align 4, !insn.addr !373
  %69 = load i32, i32* %stack_var_-1176, align 4, !insn.addr !374
  %70 = add i32 %arg3, 16, !insn.addr !375
  %71 = inttoptr i32 %70 to i32*, !insn.addr !375
  store i32 %69, i32* %71, align 4, !insn.addr !375
  %72 = add i32 %arg3, 20, !insn.addr !376
  %73 = inttoptr i32 %72 to i32*, !insn.addr !376
  %74 = add i32 %arg3, 24, !insn.addr !377
  %75 = inttoptr i32 %74 to i32*, !insn.addr !377
  %76 = add i32 %arg3, 28, !insn.addr !378
  %77 = inttoptr i32 %76 to i32*, !insn.addr !378
  ret i32 0, !insn.addr !379

dec_label_pc_115b8:                               ; preds = %dec_label_pc_113b8
  %78 = icmp eq i32 %5, 0, !insn.addr !380
  br i1 %78, label %dec_label_pc_115c0, label %dec_label_pc_11600, !insn.addr !381

dec_label_pc_115c0:                               ; preds = %dec_label_pc_115b8, %dec_label_pc_1162c, %dec_label_pc_11600
  %79 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_11930, i32 0, i32 0), i32* nonnull %stack_var_-1192, i32 %arg2), !insn.addr !382
  %80 = bitcast i32* %stack_var_-1192 to i8*, !insn.addr !383
  %81 = call %_IO_FILE* @fopen64(i8* nonnull %80, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_118a0, i32 0, i32 0)), !insn.addr !383
  %82 = ptrtoint %_IO_FILE* %81 to i32, !insn.addr !383
  %83 = icmp eq %_IO_FILE* %81, null, !insn.addr !384
  store i8* inttoptr (i32 3110758 to i8*), i8** %stack_var_-1184.0.reg2mem, !insn.addr !385
  store i32 %82, i32* %r6.0.reg2mem, !insn.addr !385
  br i1 %83, label %dec_label_pc_115ec, label %dec_label_pc_11424, !insn.addr !385

dec_label_pc_115ec:                               ; preds = %dec_label_pc_115c0
  %84 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_1194c, i32 0, i32 0), i32* nonnull %stack_var_-1192), !insn.addr !386
  store i8* inttoptr (i32 3110758 to i8*), i8** %stack_var_-1184.0.reg2mem, !insn.addr !387
  store i32 %82, i32* %r6.0.reg2mem, !insn.addr !387
  br label %dec_label_pc_11424, !insn.addr !387

dec_label_pc_11600:                               ; preds = %dec_label_pc_1162c, %dec_label_pc_115b8
  %85 = ptrtoint i32* %stack_var_-1192 to i32, !insn.addr !388
  %86 = bitcast i32* %stack_var_-1192 to i8*, !insn.addr !389
  %87 = call i32 @strlen(i8* nonnull %86), !insn.addr !389
  %88 = add i32 %87, %85, !insn.addr !390
  %89 = inttoptr i32 %88 to i32*, !insn.addr !391
  store i32 1734964014, i32* %89, align 4, !insn.addr !391
  %90 = add i32 %88, 4, !insn.addr !392
  %91 = inttoptr i32 %90 to i8*, !insn.addr !392
  store i8 0, i8* %91, align 1, !insn.addr !392
  br label %dec_label_pc_115c0, !insn.addr !393

dec_label_pc_1162c:                               ; preds = %dec_label_pc_113b8, %dec_label_pc_113b8
  %92 = icmp eq i32 %5, 0, !insn.addr !394
  br i1 %92, label %dec_label_pc_115c0, label %dec_label_pc_11600, !insn.addr !395

; uselistorder directives
  uselistorder i32 %88, { 1, 0 }
  uselistorder i32 %82, { 1, 0 }
  uselistorder i32 %21, { 0, 2, 1 }
  uselistorder i32 %r6.0.reload, { 0, 1, 3, 2 }
  uselistorder i32 %5, { 1, 0 }
  uselistorder i32 %4, { 1, 0 }
  uselistorder i32* %stack_var_-1064, { 2, 3, 1, 4, 5, 0, 6 }
  uselistorder i32* %stack_var_-1176, { 2, 1, 0, 3 }
  uselistorder i32* %stack_var_-1192, { 2, 10, 0, 3, 1, 6, 4, 7, 5, 8, 9 }
  uselistorder i32* %stack_var_-1180, { 1, 0 }
  uselistorder i8** %stack_var_-1184.0.reg2mem, { 2, 1, 0 }
  uselistorder i32* %r6.0.reg2mem, { 3, 2, 0, 1 }
  uselistorder i32* %r5.06.reg2mem, { 1, 0, 2 }
  uselistorder i8 0, { 1, 0, 2, 3 }
  uselistorder i32 (i8*)* @strlen, { 3, 2, 1, 0, 4 }
  uselistorder i8* inttoptr (i32 3110758 to i8*), { 1, 0 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen64, { 7, 3, 0, 5, 6, 2, 1, 4, 8 }
  uselistorder i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_118a0, i32 0, i32 0), { 1, 0, 2 }
  uselistorder i32 20, { 1, 0 }
  uselistorder i32 16, { 1, 0, 2, 3 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 13, 12, 10, 11, 8, 7, 6, 5, 4, 9, 3, 2, 1, 0, 14 }
  uselistorder i32 (i32*, i32*, i32)* @SHA256_Final, { 3, 2, 1, 0, 4, 5 }
  uselistorder i32 12, { 3, 1, 2, 0, 4 }
  uselistorder i32 8, { 3, 1, 2, 0, 4 }
  uselistorder i32 4, { 4, 5, 2, 3, 0, 1, 6 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 0, 5, 4, 3, 2, 1, 6 }
  uselistorder i32 (i32*, i32*, i32)* @SHA256_Update, { 2, 1, 0, 4, 3, 5 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fread, { 1, 5, 4, 3, 2, 0, 6 }
  uselistorder i1 true, { 2, 3, 0, 1, 4, 5, 6, 7, 8, 9 }
  uselistorder i32 1024, { 3, 6, 5, 4, 2, 0, 1, 7, 8, 9 }
  uselistorder i32 7, { 1, 0 }
  uselistorder i32 (i32*)* @SHA256_Init, { 0, 3, 2, 1, 4 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 11 }
  uselistorder i32 256, { 5, 4, 12, 13, 10, 14, 9, 0, 15, 11, 1, 2, 6, 7, 3, 8 }
  uselistorder i32 %arg2, { 3, 4, 0, 1, 2 }
  uselistorder label %dec_label_pc_115c0, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1142c.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_11448, { 1, 0 }
  uselistorder label %dec_label_pc_11424, { 2, 1, 0 }
}

define i32 @function_11710(i32 %arg1) local_unnamed_addr {
dec_label_pc_11710:
  %0 = call i32 @puts(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_11968, i32 0, i32 0)), !insn.addr !396
  %1 = inttoptr i32 %arg1 to i8*, !insn.addr !397
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_11974, i32 0, i32 0), i8* %1), !insn.addr !397
  %3 = call i32 @puts(i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_11990, i32 0, i32 0)), !insn.addr !398
  %4 = call i32 @puts(i8* getelementptr inbounds ([90 x i8], [90 x i8]* @global_var_119b8, i32 0, i32 0)), !insn.addr !399
  %5 = call i32 @puts(i8* getelementptr inbounds ([117 x i8], [117 x i8]* @global_var_11a14, i32 0, i32 0)), !insn.addr !400
  %6 = call i32 @puts(i8* getelementptr inbounds ([106 x i8], [106 x i8]* @global_var_11a8c, i32 0, i32 0)), !insn.addr !401
  %7 = call i32 @puts(i8* getelementptr inbounds ([89 x i8], [89 x i8]* @global_var_11af8, i32 0, i32 0)), !insn.addr !402
  %8 = call i32 @puts(i8* getelementptr inbounds ([73 x i8], [73 x i8]* @global_var_11b54, i32 0, i32 0)), !insn.addr !403
  %9 = call i32 @puts(i8* getelementptr inbounds ([58 x i8], [58 x i8]* @global_var_11ba0, i32 0, i32 0)), !insn.addr !404
  %10 = call i32 @puts(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_11bdc, i32 0, i32 0)), !insn.addr !405
  %11 = call i32 @puts(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11be8, i32 0, i32 0)), !insn.addr !406
  %12 = call i32 @puts(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_11c00, i32 0, i32 0)), !insn.addr !407
  ret i32 %12, !insn.addr !407

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 0, 8, 7, 6, 5, 4, 3, 2, 1, 16, 15, 14, 13, 12, 11, 10, 9, 17 }
  uselistorder i32 (i8*)* @puts, { 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 13, 12, 11, 10, 9, 8, 14, 7, 2, 3, 6, 5, 4, 1, 0, 27 }
}

define i32 @function_117b0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_117b0:
  %0 = call i32 @function_106c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !408
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139018, i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !409

; uselistorder directives
  uselistorder i32 0, { 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 171, 63, 64, 65, 66, 172, 20, 33, 137, 136, 135, 134, 133, 132, 131, 144, 143, 142, 141, 140, 139, 138, 37, 0, 30, 173, 174, 34, 1, 147, 145, 146, 67, 68, 2, 69, 70, 149, 148, 169, 170, 19, 183, 107, 108, 109, 110, 111, 112, 26, 25, 101, 102, 28, 27, 99, 100, 150, 115, 116, 103, 104, 105, 106, 113, 114, 151, 77, 78, 95, 96, 87, 88, 97, 98, 91, 92, 93, 94, 89, 90, 71, 72, 85, 86, 83, 84, 8, 10, 14, 16, 152, 153, 79, 80, 81, 82, 9, 12, 11, 17, 154, 155, 117, 118, 15, 175, 119, 120, 176, 177, 158, 156, 157, 3, 36, 159, 121, 122, 21, 22, 123, 124, 178, 179, 180, 160, 161, 23, 24, 31, 32, 4, 29, 181, 5, 6, 182, 125, 126, 35, 75, 76, 73, 74, 7, 13, 18, 162, 163, 166, 164, 165, 127, 128, 129, 130, 167, 168 }
  uselistorder i32 2, { 6, 2, 0, 8, 5, 4, 1, 3, 7 }
}

define i32 @function_117ec() local_unnamed_addr {
dec_label_pc_117ec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !410

; uselistorder directives
  uselistorder i32 1, { 5, 51, 47, 52, 46, 64, 63, 62, 61, 60, 59, 11, 10, 9, 8, 12, 53, 48, 66, 65, 14, 13, 4, 15, 3, 41, 16, 7, 2, 1, 67, 37, 54, 93, 35, 30, 34, 94, 55, 49, 95, 96, 45, 21, 43, 42, 97, 56, 44, 98, 100, 50, 99, 57, 101, 102, 38, 103, 32, 104, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 40, 39, 36, 33, 31, 29, 28, 27, 26, 25, 24, 23, 22, 20, 19, 18, 17, 6, 0, 58 }
}

define i32 @function_117f0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_117f0:
  ret i32 %arg1, !insn.addr !411
}

declare void @abort() local_unnamed_addr

declare i32 @ERR_get_error(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @RSA_verify(i32, i32*, i32, i32*, i32, i32) local_unnamed_addr

declare i32 @fseek(%_IO_FILE*, i32, i32) local_unnamed_addr

declare i32 @PEM_read_bio_RSA_PUBKEY() local_unnamed_addr

declare i32 @SHA256_Final(i32*, i32*, i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32* @memcpy(i32*, i32*, i32) local_unnamed_addr

declare %_IO_FILE* @fopen64(i8*, i8*) local_unnamed_addr

declare i32 @BIO_new_mem_buf(i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @ERR_error_string(i32, i32) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i32 @__xstat64(i32, i8*, %stat64*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @RSA_free(i32) local_unnamed_addr

declare i32 @SHA256_Update(i32*, i32*, i32) local_unnamed_addr

declare i32 @BIO_free(i32) local_unnamed_addr

declare i32 @SHA256_Init(i32*) local_unnamed_addr

declare i32 @fread(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

; Function Attrs: nounwind readnone speculatable
declare i32 @llvm.bswap.i32(i32) #0

declare i32 @__asm_rev16(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

attributes #0 = { nounwind readnone speculatable }

!0 = !{i64 67272}
!1 = !{i64 67276}
!2 = !{i64 67308}
!3 = !{i64 67320}
!4 = !{i64 67332}
!5 = !{i64 67344}
!6 = !{i64 67356}
!7 = !{i64 67368}
!8 = !{i64 67380}
!9 = !{i64 67392}
!10 = !{i64 67404}
!11 = !{i64 67416}
!12 = !{i64 67428}
!13 = !{i64 67440}
!14 = !{i64 67452}
!15 = !{i64 67464}
!16 = !{i64 67476}
!17 = !{i64 67488}
!18 = !{i64 67500}
!19 = !{i64 67512}
!20 = !{i64 67524}
!21 = !{i64 67536}
!22 = !{i64 67548}
!23 = !{i64 67560}
!24 = !{i64 67572}
!25 = !{i64 67584}
!26 = !{i64 67588}
!27 = !{i64 67608}
!28 = !{i64 67612}
!29 = !{i64 67616}
!30 = !{i64 67620}
!31 = !{i64 67624}
!32 = !{i64 67648}
!33 = !{i64 67652}
!34 = !{i64 67668}
!35 = !{i64 67672}
!36 = !{i64 67692}
!37 = !{i64 67720}
!38 = !{i64 67724}
!39 = !{i64 67732}
!40 = !{i64 67824}
!41 = !{i64 67840}
!42 = !{i64 67844}
!43 = !{i64 67852}
!44 = !{i64 67856}
!45 = !{i64 67860}
!46 = !{i64 67864}
!47 = !{i64 67876}
!48 = !{i64 67880}
!49 = !{i64 67892}
!50 = !{i64 67896}
!51 = !{i64 67900}
!52 = !{i64 67908}
!53 = !{i64 67912}
!54 = !{i64 67916}
!55 = !{i64 67920}
!56 = !{i64 67932}
!57 = !{i64 67936}
!58 = !{i64 67944}
!59 = !{i64 67948}
!60 = !{i64 67952}
!61 = !{i64 67956}
!62 = !{i64 67968}
!63 = !{i64 67972}
!64 = !{i64 67988}
!65 = !{i64 67992}
!66 = !{i64 68008}
!67 = !{i64 68016}
!68 = !{i64 68020}
!69 = !{i64 68052}
!70 = !{i64 68068}
!71 = !{i64 68084}
!72 = !{i64 68088}
!73 = !{i64 68092}
!74 = !{i64 68116}
!75 = !{i64 68120}
!76 = !{i64 68124}
!77 = !{i64 68128}
!78 = !{i64 68132}
!79 = !{i64 68136}
!80 = !{i64 68140}
!81 = !{i64 68144}
!82 = !{i64 68148}
!83 = !{i64 68156}
!84 = !{i64 68168}
!85 = !{i64 68172}
!86 = !{i64 68180}
!87 = !{i64 68184}
!88 = !{i64 68192}
!89 = !{i64 68196}
!90 = !{i64 68200}
!91 = !{i64 68224}
!92 = !{i64 68236}
!93 = !{i64 68328}
!94 = !{i64 68240}
!95 = !{i64 68324}
!96 = !{i64 68320}
!97 = !{i64 68264}
!98 = !{i64 68268}
!99 = !{i64 68272}
!100 = !{i64 68276}
!101 = !{i64 68280}
!102 = !{i64 68284}
!103 = !{i64 68288}
!104 = !{i64 68292}
!105 = !{i64 68300}
!106 = !{i64 68304}
!107 = !{i64 68336}
!108 = !{i64 68340}
!109 = !{i64 68356}
!110 = !{i64 68360}
!111 = !{i64 68364}
!112 = !{i64 68392}
!113 = !{i64 68396}
!114 = !{i64 68420}
!115 = !{i64 68428}
!116 = !{i64 68444}
!117 = !{i64 68456}
!118 = !{i64 68476}
!119 = !{i64 68480}
!120 = !{i64 68484}
!121 = !{i64 68492}
!122 = !{i64 68488}
!123 = !{i64 68508}
!124 = !{i64 68524}
!125 = !{i64 68536}
!126 = !{i64 68568}
!127 = !{i64 68580}
!128 = !{i64 68584}
!129 = !{i64 68588}
!130 = !{i64 68596}
!131 = !{i64 68604}
!132 = !{i64 68608}
!133 = !{i64 68616}
!134 = !{i64 68620}
!135 = !{i64 68640}
!136 = !{i64 68644}
!137 = !{i64 68648}
!138 = !{i64 68668}
!139 = !{i64 68676}
!140 = !{i64 68696}
!141 = !{i64 68700}
!142 = !{i64 68704}
!143 = !{i64 68724}
!144 = !{i64 68732}
!145 = !{i64 68752}
!146 = !{i64 68776}
!147 = !{i64 68796}
!148 = !{i64 68808}
!149 = !{i64 68892}
!150 = !{i64 68500}
!151 = !{i64 68812}
!152 = !{i64 68888}
!153 = !{i64 68880}
!154 = !{i64 68824}
!155 = !{i64 68828}
!156 = !{i64 68832}
!157 = !{i64 68840}
!158 = !{i64 68844}
!159 = !{i64 68852}
!160 = !{i64 68856}
!161 = !{i64 68860}
!162 = !{i64 68864}
!163 = !{i64 68868}
!164 = !{i64 68876}
!165 = !{i64 68952}
!166 = !{i64 68932}
!167 = !{i64 68940}
!168 = !{i64 68948}
!169 = !{i64 68960}
!170 = !{i64 68956}
!171 = !{i64 68924}
!172 = !{i64 68912}
!173 = !{i64 68920}
!174 = !{i64 68972}
!175 = !{i64 68992}
!176 = !{i64 69000}
!177 = !{i64 69016}
!178 = !{i64 69036}
!179 = !{i64 69064}
!180 = !{i64 69080}
!181 = !{i64 69084}
!182 = !{i64 69096}
!183 = !{i64 69108}
!184 = !{i64 69120}
!185 = !{i64 69140}
!186 = !{i64 69144}
!187 = !{i64 69148}
!188 = !{i64 69180}
!189 = !{i64 69192}
!190 = !{i64 69196}
!191 = !{i64 69200}
!192 = !{i64 69208}
!193 = !{i64 69212}
!194 = !{i64 69216}
!195 = !{i64 69224}
!196 = !{i64 69236}
!197 = !{i64 69244}
!198 = !{i64 69248}
!199 = !{i64 69268}
!200 = !{i64 69284}
!201 = !{i64 69288}
!202 = !{i64 69308}
!203 = !{i64 69316}
!204 = !{i64 69320}
!205 = !{i64 69328}
!206 = !{i64 69336}
!207 = !{i64 69356}
!208 = !{i64 69376}
!209 = !{i64 69396}
!210 = !{i64 69400}
!211 = !{i64 69404}
!212 = !{i64 69436}
!213 = !{i64 69440}
!214 = !{i64 69444}
!215 = !{i64 69448}
!216 = !{i64 69452}
!217 = !{i64 69456}
!218 = !{i64 69460}
!219 = !{i64 69464}
!220 = !{i64 69484}
!221 = !{i64 69492}
!222 = !{i64 69516}
!223 = !{i64 69532}
!224 = !{i64 69540}
!225 = !{i64 69544}
!226 = !{i64 69564}
!227 = !{i64 69572}
!228 = !{i64 69588}
!229 = !{i64 69592}
!230 = !{i64 69612}
!231 = !{i64 69620}
!232 = !{i64 69624}
!233 = !{i64 69640}
!234 = !{i64 69644}
!235 = !{i64 69648}
!236 = !{i64 69652}
!237 = !{i64 69668}
!238 = !{i64 69672}
!239 = !{i64 68244}
!240 = !{i64 69692}
!241 = !{i64 69704}
!242 = !{i64 69708}
!243 = !{i64 69728}
!244 = !{i64 69732}
!245 = !{i64 69752}
!246 = !{i64 69764}
!247 = !{i64 69768}
!248 = !{i64 69784}
!249 = !{i64 69788}
!250 = !{i64 69792}
!251 = !{i64 69804}
!252 = !{i64 69820}
!253 = !{i64 69832}
!254 = !{i64 69848}
!255 = !{i64 69856}
!256 = !{i64 69860}
!257 = !{i64 69876}
!258 = !{i64 69880}
!259 = !{i64 69888}
!260 = !{i64 69904}
!261 = !{i64 69908}
!262 = !{i64 69928}
!263 = !{i64 69936}
!264 = !{i64 69940}
!265 = !{i64 69944}
!266 = !{i64 69956}
!267 = !{i64 69972}
!268 = !{i64 69984}
!269 = !{i64 69988}
!270 = !{i64 69992}
!271 = !{i64 70004}
!272 = !{i64 70020}
!273 = !{i64 70032}
!274 = !{i64 70036}
!275 = !{i64 70048}
!276 = !{i64 70052}
!277 = !{i64 70068}
!278 = !{i64 70072}
!279 = !{i64 70104}
!280 = !{i64 70108}
!281 = !{i64 70114}
!282 = !{i64 70136}
!283 = !{i64 70140}
!284 = !{i64 70144}
!285 = !{i64 70148}
!286 = !{i64 70160}
!287 = !{i64 70192}
!288 = !{i64 70216}
!289 = !{i64 70212}
!290 = !{i64 70224}
!291 = !{i64 70236}
!292 = !{i64 70240}
!293 = !{i64 70250}
!294 = !{i64 70252}
!295 = !{i64 70254}
!296 = !{i64 70260}
!297 = !{i64 70262}
!298 = !{i64 70264}
!299 = !{i64 70268}
!300 = !{i64 70292}
!301 = !{i64 70300}
!302 = !{i64 70316}
!303 = !{i64 70320}
!304 = !{i64 70324}
!305 = !{i64 70348}
!306 = !{i64 70352}
!307 = !{i64 70356}
!308 = !{i64 70364}
!309 = !{i64 70368}
!310 = !{i64 70372}
!311 = !{i64 70384}
!312 = !{i64 70392}
!313 = !{i64 70404}
!314 = !{i64 70408}
!315 = !{i64 70424}
!316 = !{i64 70440}
!317 = !{i64 70448}
!318 = !{i64 70452}
!319 = !{i64 70460}
!320 = !{i64 70468}
!321 = !{i64 70476}
!322 = !{i64 70488}
!323 = !{i64 70496}
!324 = !{i64 70508}
!325 = !{i64 70532}
!326 = !{i64 70556}
!327 = !{i64 70564}
!328 = !{i64 70572}
!329 = !{i64 70576}
!330 = !{i64 70580}
!331 = !{i64 70612}
!332 = !{i64 70628}
!333 = !{i64 70636}
!334 = !{i64 70708}
!335 = !{i64 70724}
!336 = !{i64 70696}
!337 = !{i64 70728}
!338 = !{i64 70748}
!339 = !{i64 70768}
!340 = !{i64 70736}
!341 = !{i64 70704}
!342 = !{i64 70788}
!343 = !{i64 70792}
!344 = !{i64 70800}
!345 = !{i64 70820}
!346 = !{i64 70832}
!347 = !{i64 70828}
!348 = !{i64 70856}
!349 = !{i64 70872}
!350 = !{i64 70888}
!351 = !{i64 70896}
!352 = !{i64 70900}
!353 = !{i64 70904}
!354 = !{i64 70908}
!355 = !{i64 70912}
!356 = !{i64 70916}
!357 = !{i64 70920}
!358 = !{i64 70928}
!359 = !{i64 70932}
!360 = !{i64 70948}
!361 = !{i64 70964}
!362 = !{i64 70972}
!363 = !{i64 70976}
!364 = !{i64 70980}
!365 = !{i64 70984}
!366 = !{i64 70988}
!367 = !{i64 70992}
!368 = !{i64 70996}
!369 = !{i64 71000}
!370 = !{i64 71004}
!371 = !{i64 71008}
!372 = !{i64 71012}
!373 = !{i64 71016}
!374 = !{i64 71020}
!375 = !{i64 71024}
!376 = !{i64 71032}
!377 = !{i64 71036}
!378 = !{i64 71040}
!379 = !{i64 71052}
!380 = !{i64 71096}
!381 = !{i64 71100}
!382 = !{i64 71120}
!383 = !{i64 71136}
!384 = !{i64 71140}
!385 = !{i64 71144}
!386 = !{i64 71160}
!387 = !{i64 71164}
!388 = !{i64 70604}
!389 = !{i64 71172}
!390 = !{i64 71188}
!391 = !{i64 71200}
!392 = !{i64 71204}
!393 = !{i64 71208}
!394 = !{i64 71216}
!395 = !{i64 71248}
!396 = !{i64 71456}
!397 = !{i64 71472}
!398 = !{i64 71484}
!399 = !{i64 71496}
!400 = !{i64 71508}
!401 = !{i64 71520}
!402 = !{i64 71532}
!403 = !{i64 71544}
!404 = !{i64 71556}
!405 = !{i64 71568}
!406 = !{i64 71580}
!407 = !{i64 71596}
!408 = !{i64 71616}
!409 = !{i64 71648}
!410 = !{i64 71660}
!411 = !{i64 71668}
