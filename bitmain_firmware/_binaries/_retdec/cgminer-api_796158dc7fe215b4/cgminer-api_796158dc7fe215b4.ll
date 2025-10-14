source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%hostent = type { i8*, i8**, i32, i32, i8** }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67816
@global_var_22010 = local_unnamed_addr global i32 67816
@global_var_22014 = local_unnamed_addr global i32 67816
@global_var_22018 = local_unnamed_addr global i32 67816
@global_var_2201c = local_unnamed_addr global i32 67816
@global_var_22020 = local_unnamed_addr global i32 67816
@global_var_22024 = local_unnamed_addr global i32 67816
@global_var_22028 = local_unnamed_addr global i32 67816
@global_var_2202c = local_unnamed_addr global i32 67816
@global_var_22030 = local_unnamed_addr global i32 67816
@global_var_22034 = local_unnamed_addr global i32 67816
@global_var_22038 = local_unnamed_addr global i32 67816
@global_var_2203c = local_unnamed_addr global i32 67816
@global_var_22040 = local_unnamed_addr global i32 67816
@global_var_22044 = local_unnamed_addr global i32 67816
@global_var_22048 = local_unnamed_addr global i32 67816
@global_var_2204c = local_unnamed_addr global i32 67816
@global_var_22050 = local_unnamed_addr global i32 67816
@global_var_22054 = local_unnamed_addr global i32 67816
@global_var_22058 = local_unnamed_addr global i32 67816
@global_var_2205c = local_unnamed_addr global i32 67816
@global_var_22060 = local_unnamed_addr global i32 67816
@global_var_22064 = local_unnamed_addr global i32 67816
@global_var_22068 = local_unnamed_addr global i32 67816
@global_var_1142c = constant [7 x i8] c"--help\00"
@global_var_11418 = constant [8 x i8] c"summary\00"
@global_var_11420 = constant [10 x i8] c"127.0.0.1\00"
@global_var_22080 = local_unnamed_addr global i32 0
@global_var_11434 = constant [38 x i8] c"usAge: %s [command [ip/host [port]]]\0A\00"
@global_var_10bfc = local_unnamed_addr constant i32 70672
@global_var_11410 = constant [5 x i8] c"cket\00"
@global_var_10c00 = local_unnamed_addr constant i32 108
@global_var_10bf0 = constant i32 -481165312
@global_var_11260 = constant [13 x i8] c"[%s%s] =>\0A(\0A\00"
@global_var_11280 = constant [15 x i8] c"   [%d] => %s\0A\00"
@global_var_11270 = constant [15 x i8] c"   [%s] => %s\0A\00"
@global_var_11258 = local_unnamed_addr constant i32 1
@global_var_1125c = local_unnamed_addr constant i32 60
@global_var_11294 = constant [29 x i8] c"Couldn't get hostname: '%s'\0A\00"
@global_var_112b4 = constant [34 x i8] c"Socket initialisation failed: %s\0A\00"
@global_var_112d8 = constant [27 x i8] c"Socket connect failed: %s\0A\00"
@global_var_11354 = constant [48 x i8] c"cgminer-api, setsocket SO_RCVTIMEO failed (%s)\0A\00"
@global_var_11324 = constant [48 x i8] c"cgminer-api, setsocket SO_SNDTIMEO failed (%s)\0A\00"
@global_var_112f4 = constant [46 x i8] c"cgminer-api, setsocket SO_LINGER failed (%s)\0A\00"
@global_var_11384 = constant [29 x i8] c"cgminer api send failed: %s\0A\00"
@global_var_113bc = constant [27 x i8] c"cgminer realloc: OOM (%d)\0A\00"
@global_var_113a4 = constant [23 x i8] c"cgminer api: OOM (%d)\0A\00"
@global_var_113d8 = constant [17 x i8] c"Recv failed: %s\0A\00"
@global_var_113ec = constant [41 x i8] c"Recv failed: api server close the socket\00"
@global_var_11240 = local_unnamed_addr constant i32 68854
@global_var_11244 = local_unnamed_addr constant i32 68844
@global_var_21f10 = global i32 68717
@0 = external global i32
@global_var_22078 = local_unnamed_addr global %_IO_FILE* null
@global_var_10bd8 = local_unnamed_addr constant void ()* inttoptr (i32 68124 to void ()*)
@global_var_10bdc = local_unnamed_addr constant void ()* inttoptr (i32 70157 to void ()*)
@global_var_112b0 = external constant i8*
@1 = internal constant [2 x i8] c")\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@global_var_11290 = constant [2 x i8] c")\00"

declare i32 @unknown_240() local_unnamed_addr

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_108dc:
  %0 = call i32 @function_10be0(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @function_108fc(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_108fc:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !2
  ret i32 %0, !insn.addr !2
}

define i32 @function_10908(i8* %nptr, i8** %endptr, i32 %base) local_unnamed_addr {
dec_label_pc_10908:
  %0 = call i32 @strtol(i8* %nptr, i8** %endptr, i32 %base), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10914(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_10914:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @function_10920(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10920:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define void @function_1092c(i32* %ptr) local_unnamed_addr {
dec_label_pc_1092c:
  call void @free(i32* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32* @function_10938(i32* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10938:
  %0 = call i32* @realloc(i32* %ptr, i32 %size), !insn.addr !7
  ret i32* %0, !insn.addr !7
}

define i32* @function_10944(i32* %s, i32 %c) local_unnamed_addr {
dec_label_pc_10944:
  %0 = call i32* @__rawmemchr(i32* %s, i32 %c), !insn.addr !8
  ret i32* %0, !insn.addr !8
}

define i32 @function_10950(i8* %s) local_unnamed_addr {
dec_label_pc_10950:
  %0 = call i32 @puts(i8* %s), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32* @function_1095c(i32 %size) local_unnamed_addr {
dec_label_pc_1095c:
  %0 = call i32* @malloc(i32 %size), !insn.addr !10
  ret i32* %0, !insn.addr !10
}

define i32 @function_10968(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_10968:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i8* @function_10974(i32 %errnum) local_unnamed_addr {
dec_label_pc_10974:
  %0 = call i8* @strerror(i32 %errnum), !insn.addr !12
  ret i8* %0, !insn.addr !12
}

define void @function_10980() local_unnamed_addr {
dec_label_pc_10980:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define i16** @function_1098c() local_unnamed_addr {
dec_label_pc_1098c:
  %0 = call i16** @__ctype_b_loc(), !insn.addr !14
  ret i16** %0, !insn.addr !14
}

define i32 @function_10998(i8* %s) local_unnamed_addr {
dec_label_pc_10998:
  %0 = call i32 @strlen(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i8* @function_109a4(i8* %s, i32 %c) local_unnamed_addr {
dec_label_pc_109a4:
  %0 = call i8* @strchr(i8* %s, i32 %c), !insn.addr !16
  ret i8* %0, !insn.addr !16
}

define i32 @function_109b0(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_109b0:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %stream, i8* %format), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i32* @function_109bc() local_unnamed_addr {
dec_label_pc_109bc:
  %0 = call i32* @__errno_location(), !insn.addr !18
  ret i32* %0, !insn.addr !18
}

define i32 @function_109c8(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_109c8:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define %hostent* @function_109d4(i8* %name) local_unnamed_addr {
dec_label_pc_109d4:
  %0 = call %hostent* @gethostbyname(i8* %name), !insn.addr !20
  ret %hostent* %0, !insn.addr !20
}

define void @function_109e0() local_unnamed_addr {
dec_label_pc_109e0:
  call void @abort(), !insn.addr !21
  ret void, !insn.addr !21
}

define i32 @function_109ec(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_109ec:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_109f8(i32 %fd) local_unnamed_addr {
dec_label_pc_109f8:
  %0 = call i32 @close(i32 %fd), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_10a04(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_10a04:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define i32 @function_10a10(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10a10:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_10a1c:
  %r7.1.reg2mem = alloca i32, !insn.addr !26
  %r5.3.reg2mem = alloca i32, !insn.addr !26
  %r2.0.reg2mem = alloca i32, !insn.addr !26
  %r5.0.reg2mem = alloca i32, !insn.addr !26
  %0 = icmp slt i32 %argc, 2, !insn.addr !27
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !27
  store i32 ptrtoint ([10 x i8]* @global_var_11420 to i32), i32* %r5.3.reg2mem, !insn.addr !27
  store i32 ptrtoint ([8 x i8]* @global_var_11418 to i32), i32* %r7.1.reg2mem, !insn.addr !27
  br i1 %0, label %dec_label_pc_10b44, label %dec_label_pc_10a28, !insn.addr !27

dec_label_pc_10a28:                               ; preds = %dec_label_pc_10a1c
  %1 = ptrtoint i8** %argv to i32
  %2 = add i32 %1, 4, !insn.addr !28
  %3 = inttoptr i32 %2 to i32*, !insn.addr !28
  %4 = load i32, i32* %3, align 4, !insn.addr !28
  %5 = inttoptr i32 %4 to i8*, !insn.addr !29
  %6 = load i8, i8* %5, align 1, !insn.addr !29
  %7 = icmp eq i8 %6, 45, !insn.addr !30
  br i1 %7, label %dec_label_pc_10ad0, label %dec_label_pc_10a40, !insn.addr !31

dec_label_pc_10a40:                               ; preds = %dec_label_pc_10b5c, %dec_label_pc_10a28
  %8 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1142c, i32 0, i32 0)), !insn.addr !32
  %9 = icmp eq i32 %8, 0, !insn.addr !33
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !34
  br i1 %9, label %dec_label_pc_10b68, label %dec_label_pc_10a5c, !insn.addr !34

dec_label_pc_10a5c:                               ; preds = %dec_label_pc_10a40, %dec_label_pc_10b00, %dec_label_pc_10b08, %dec_label_pc_10b14
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %10 = mul i32 %r5.0.reload, 4, !insn.addr !35
  %11 = add i32 %10, %1, !insn.addr !35
  %12 = inttoptr i32 %11 to i32*, !insn.addr !35
  %13 = load i32, i32* %12, align 4, !insn.addr !35
  %14 = add nuw nsw i32 %r5.0.reload, 1, !insn.addr !36
  %15 = call i32 @function_10c70(i32 %13), !insn.addr !37
  %16 = inttoptr i32 %15 to i8*, !insn.addr !38
  %17 = load i8, i8* %16, align 1, !insn.addr !38
  %18 = icmp eq i8 %17, 0, !insn.addr !39
  %spec.select = select i1 %18, i32 ptrtoint ([8 x i8]* @global_var_11418 to i32), i32 %15
  %19 = icmp slt i32 %14, %argc, !insn.addr !40
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !40
  store i32 ptrtoint ([10 x i8]* @global_var_11420 to i32), i32* %r5.3.reg2mem, !insn.addr !40
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !40
  br i1 %19, label %dec_label_pc_10a88, label %dec_label_pc_10b44, !insn.addr !40

dec_label_pc_10a88:                               ; preds = %dec_label_pc_10a5c
  %20 = add nuw nsw i32 %r5.0.reload, 2, !insn.addr !41
  %21 = add i32 %11, 4, !insn.addr !42
  %22 = inttoptr i32 %21 to i32*, !insn.addr !42
  %23 = load i32, i32* %22, align 4, !insn.addr !42
  %24 = call i32 @function_10c70(i32 %23), !insn.addr !43
  %25 = inttoptr i32 %24 to i8*, !insn.addr !44
  %26 = load i8, i8* %25, align 1, !insn.addr !44
  %27 = icmp eq i8 %26, 0, !insn.addr !45
  %spec.select1 = select i1 %27, i32 ptrtoint ([10 x i8]* @global_var_11420 to i32), i32 %24
  %28 = icmp slt i32 %20, %argc, !insn.addr !46
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !46
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !46
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !46
  br i1 %28, label %dec_label_pc_10ab4, label %dec_label_pc_10b44, !insn.addr !46

dec_label_pc_10ab4:                               ; preds = %dec_label_pc_10a88
  %29 = add i32 %11, 8, !insn.addr !47
  %30 = inttoptr i32 %29 to i32*, !insn.addr !47
  %31 = load i32, i32* %30, align 4, !insn.addr !47
  %32 = call i32 @function_10c70(i32 %31), !insn.addr !48
  %33 = inttoptr i32 %32 to i8*, !insn.addr !49
  %34 = load i8, i8* %33, align 1, !insn.addr !49
  %35 = icmp eq i8 %34, 0, !insn.addr !50
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !51
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !51
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !51
  br i1 %35, label %dec_label_pc_10b44, label %dec_label_pc_10b8c, !insn.addr !51

dec_label_pc_10ad0:                               ; preds = %dec_label_pc_10a28
  %36 = add i32 %4, 1, !insn.addr !52
  %37 = inttoptr i32 %36 to i8*, !insn.addr !52
  %38 = load i8, i8* %37, align 1, !insn.addr !52
  switch i8 %38, label %dec_label_pc_10ae8 [
    i8 63, label %dec_label_pc_10adc
    i8 104, label %dec_label_pc_10b5c
  ]

dec_label_pc_10adc:                               ; preds = %dec_label_pc_10ad0
  %39 = add i32 %4, 2, !insn.addr !53
  %40 = inttoptr i32 %39 to i8*, !insn.addr !53
  %41 = load i8, i8* %40, align 1, !insn.addr !53
  %42 = icmp eq i8 %41, 0, !insn.addr !54
  br i1 %42, label %dec_label_pc_10b68, label %dec_label_pc_10ae8, !insn.addr !55

dec_label_pc_10ae8:                               ; preds = %dec_label_pc_10ad0, %dec_label_pc_10adc
  %43 = call i32 @strcmp(i8* %5, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_1142c, i32 0, i32 0)), !insn.addr !56
  %44 = icmp eq i32 %43, 0, !insn.addr !57
  br i1 %44, label %dec_label_pc_10b68, label %dec_label_pc_10b00, !insn.addr !58

dec_label_pc_10b00:                               ; preds = %dec_label_pc_10ae8
  %45 = icmp eq i8 %38, 111, !insn.addr !59
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !60
  br i1 %45, label %dec_label_pc_10b08, label %dec_label_pc_10a5c, !insn.addr !60

dec_label_pc_10b08:                               ; preds = %dec_label_pc_10b00
  %46 = add i32 %4, 2, !insn.addr !61
  %47 = inttoptr i32 %46 to i8*, !insn.addr !61
  %48 = load i8, i8* %47, align 1, !insn.addr !61
  %49 = icmp eq i8 %48, 0, !insn.addr !62
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !63
  br i1 %49, label %dec_label_pc_10b14, label %dec_label_pc_10a5c, !insn.addr !63

dec_label_pc_10b14:                               ; preds = %dec_label_pc_10b08
  %50 = icmp eq i32 %argc, 2, !insn.addr !64
  store i32 1, i32* @global_var_22080, align 4, !insn.addr !65
  store i32 2, i32* %r5.0.reg2mem, !insn.addr !66
  store i32 4028, i32* %r2.0.reg2mem, !insn.addr !66
  store i32 ptrtoint ([10 x i8]* @global_var_11420 to i32), i32* %r5.3.reg2mem, !insn.addr !66
  store i32 ptrtoint ([8 x i8]* @global_var_11418 to i32), i32* %r7.1.reg2mem, !insn.addr !66
  br i1 %50, label %dec_label_pc_10b44, label %dec_label_pc_10a5c, !insn.addr !66

dec_label_pc_10b44:                               ; preds = %dec_label_pc_10a5c, %dec_label_pc_10a1c, %dec_label_pc_10b14, %dec_label_pc_10a88, %dec_label_pc_10ab4, %dec_label_pc_10b8c
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %r5.3.reload = load i32, i32* %r5.3.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %51 = call i32 @callapi(i32 %r7.1.reload, i32 %r5.3.reload, i32 %r2.0.reload), !insn.addr !67
  ret i32 %51, !insn.addr !67

dec_label_pc_10b5c:                               ; preds = %dec_label_pc_10ad0
  %52 = add i32 %4, 2, !insn.addr !68
  %53 = inttoptr i32 %52 to i8*, !insn.addr !68
  %54 = load i8, i8* %53, align 1, !insn.addr !68
  %55 = icmp eq i8 %54, 0, !insn.addr !69
  br i1 %55, label %dec_label_pc_10b68, label %dec_label_pc_10a40, !insn.addr !70

dec_label_pc_10b68:                               ; preds = %dec_label_pc_10b5c, %dec_label_pc_10ae8, %dec_label_pc_10adc, %dec_label_pc_10a40
  %56 = load %_IO_FILE*, %_IO_FILE** @global_var_22078, align 4, !insn.addr !71
  %57 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %56, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_11434, i32 0, i32 0), i8* inttoptr (i32 5172 to i8*)), !insn.addr !72
  ret i32 1, !insn.addr !73

dec_label_pc_10b8c:                               ; preds = %dec_label_pc_10ab4
  %58 = call i32 @strtol(i8* %33, i8** null, i32 10), !insn.addr !74
  %59 = call i32 @__asm_sxth(i32 %58), !insn.addr !75
  store i32 %59, i32* %r2.0.reg2mem, !insn.addr !76
  store i32 %spec.select1, i32* %r5.3.reg2mem, !insn.addr !76
  store i32 %spec.select, i32* %r7.1.reg2mem, !insn.addr !76
  br label %dec_label_pc_10b44, !insn.addr !76

; uselistorder directives
  uselistorder i8 %38, { 1, 0 }
  uselistorder i32 %spec.select1, { 2, 1, 0 }
  uselistorder i32 %spec.select, { 3, 2, 1, 0 }
  uselistorder i32 %11, { 1, 0, 2 }
  uselistorder i32 %r5.0.reload, { 1, 0, 2 }
  uselistorder i8* %5, { 1, 0, 2 }
  uselistorder i32* %r5.0.reg2mem, { 4, 3, 2, 0, 1 }
  uselistorder i32* %r2.0.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r5.3.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32* %r7.1.reg2mem, { 6, 0, 3, 5, 4, 1, 2 }
  uselistorder i32 (i32)* @function_10c70, { 2, 1, 0 }
  uselistorder i32 4, { 1, 0, 2 }
  uselistorder i32 ptrtoint ([8 x i8]* @global_var_11418 to i32), { 1, 2, 0 }
  uselistorder i32 ptrtoint ([10 x i8]* @global_var_11420 to i32), { 2, 3, 0, 1 }
  uselistorder i32 4028, { 2, 4, 3, 0, 1 }
  uselistorder i32 %argc, { 2, 0, 1, 3 }
  uselistorder label %dec_label_pc_10b44, { 5, 2, 4, 3, 0, 1 }
  uselistorder label %dec_label_pc_10ae8, { 1, 0 }
  uselistorder label %dec_label_pc_10a5c, { 3, 2, 1, 0 }
}

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bb0:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !77
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !77
  %2 = call i32 @__libc_start_main(i32 68124, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 70157 to void ()*), void ()* inttoptr (i32 68124 to void ()*), void ()* %1), !insn.addr !77
  call void @abort(), !insn.addr !78
  unreachable, !insn.addr !78
}

define i32 @function_10bd4(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10bd4:
  ret i32 %arg1, !insn.addr !79
}

define i32 @function_10be0() local_unnamed_addr {
dec_label_pc_10be0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10bf0 to i32), i32 ptrtoint ([5 x i8]* @global_var_11410 to i32)), i32 108) to i32*), align 4, !insn.addr !80
  %3 = icmp eq i32 %2, 0, !insn.addr !81
  br i1 %3, label %4, label %dec_label_pc_10bf8, !insn.addr !82

; <label>:4:                                      ; preds = %dec_label_pc_10be0
  ret i32 %1, !insn.addr !82

dec_label_pc_10bf8:                               ; preds = %dec_label_pc_10be0
  call void @__gmon_start__(), !insn.addr !83
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !83
}

define i32 @function_10c04(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10c04:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.23.reg2mem = alloca i1, !insn.addr !84
  %spec.select4.reg2mem = alloca i32, !insn.addr !84
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10c20, !insn.addr !84

; <label>:9:                                      ; preds = %28, %25, %dec_label_pc_10c04
  ret i32 %arg1, !insn.addr !84

dec_label_pc_10c20:                               ; preds = %dec_label_pc_10c04
  %10 = icmp eq i1 %5, %3, !insn.addr !85
  br i1 %10, label %dec_label_pc_10c34, label %11, !insn.addr !85

; <label>:11:                                     ; preds = %dec_label_pc_10c20
  call void @__asm_svclt(i32 18288), !insn.addr !85
  br label %dec_label_pc_10c34, !insn.addr !85

dec_label_pc_10c34:                               ; preds = %11, %dec_label_pc_10c20
  %12 = mul i32 %6, 1048577, !insn.addr !86
  br i1 %3, label %.thread, label %13, !insn.addr !87

.thread:                                          ; preds = %dec_label_pc_10c34
  %spec.select2 = select i1 %5, i32 %12, i32 0
  store i32 %spec.select2, i32* %spec.select4.reg2mem
  br label %dec_label_pc_10c4c

; <label>:13:                                     ; preds = %dec_label_pc_10c34
  %14 = mul i32 %6, 4194304, !insn.addr !87
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %12, %16, !insn.addr !87
  %18 = icmp slt i32 %17, 0, !insn.addr !87
  %19 = icmp eq i32 %17, 0, !insn.addr !87
  %20 = icmp slt i32 %17, 1
  %spec.select = select i1 %20, i32 0, i32 %12
  store i32 %spec.select, i32* %spec.select4.reg2mem, !insn.addr !88
  store i1 %18, i1* %cpsr_n.23.reg2mem, !insn.addr !88
  br i1 %19, label %21, label %dec_label_pc_10c4c, !insn.addr !88

; <label>:21:                                     ; preds = %13
  %22 = call i32 @unknown_240(), !insn.addr !88
  ret i32 %22, !insn.addr !88

dec_label_pc_10c4c:                               ; preds = %.thread, %13
  %cpsr_n.23.reload = load i1, i1* %cpsr_n.23.reg2mem
  %spec.select4.reload = load i32, i32* %spec.select4.reg2mem
  %23 = icmp eq i1 %cpsr_n.23.reload, %3, !insn.addr !89
  br i1 %23, label %25, label %24, !insn.addr !89

; <label>:24:                                     ; preds = %dec_label_pc_10c4c
  call void @__asm_svclt(i32 18288), !insn.addr !89
  br label %25, !insn.addr !89

; <label>:25:                                     ; preds = %dec_label_pc_10c4c, %24
  %26 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !90
  %27 = call fp128 @__asm_vmvn.i32(i32 786432), !insn.addr !91
  br i1 %3, label %9, label %28, !insn.addr !92

; <label>:28:                                     ; preds = %25
  %29 = inttoptr i32 %arg4 to i32*, !insn.addr !92
  store i32 %spec.select4.reload, i32* %29, align 4, !insn.addr !92
  %30 = add i32 %arg4, -4, !insn.addr !92
  %31 = inttoptr i32 %30 to i32*, !insn.addr !92
  br label %9, !insn.addr !92

; uselistorder directives
  uselistorder i32 %12, { 1, 2, 0 }
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %5, { 1, 0 }
  uselistorder i1 %3, { 1, 2, 3, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder i32 %arg4, { 1, 0 }
  uselistorder label %25, { 1, 0 }
  uselistorder label %dec_label_pc_10c4c, { 1, 0 }
}

define i32 @function_10c60(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4, i32 %arg5) local_unnamed_addr {
dec_label_pc_10c60:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !93
  %1 = load i32, i32* %0
  %2 = icmp eq i32 %arg4, 0, !insn.addr !93
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !93
  br i1 %2, label %dec_label_pc_10c62, label %dec_label_pc_10c6a, !insn.addr !93

dec_label_pc_10c62:                               ; preds = %dec_label_pc_10c60
  %3 = call i32 @function_10c04(i32 %arg1, i32 %arg2, i32 %arg3, i32 0), !insn.addr !94
  %4 = inttoptr i32 %1 to i8*, !insn.addr !95
  store i8 1, i8* %4, align 1, !insn.addr !95
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !95
  br label %dec_label_pc_10c6a, !insn.addr !95

dec_label_pc_10c6a:                               ; preds = %dec_label_pc_10c60, %dec_label_pc_10c62
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !96

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10c6a, { 1, 0 }
}

define i32 @function_10c6c() local_unnamed_addr {
dec_label_pc_10c6c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !97
}

define i32 @function_10c70(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c70:
  %r0.11.reg2mem = alloca i32, !insn.addr !98
  %r0.0.reg2mem = alloca i32, !insn.addr !98
  %0 = call i16** @__ctype_b_loc(), !insn.addr !99
  %1 = load i16*, i16** %0, align 4, !insn.addr !100
  %2 = ptrtoint i16* %1 to i32, !insn.addr !100
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !101
  br label %dec_label_pc_10c88, !insn.addr !101

dec_label_pc_10c88:                               ; preds = %dec_label_pc_10c88, %dec_label_pc_10c70
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %3 = inttoptr i32 %r0.0.reload to i8*, !insn.addr !102
  %4 = load i8, i8* %3, align 1, !insn.addr !102
  %5 = zext i8 %4 to i32, !insn.addr !102
  %6 = add i32 %r0.0.reload, 1, !insn.addr !103
  %7 = mul i32 %5, 2, !insn.addr !104
  %8 = add i32 %7, %2, !insn.addr !105
  %9 = inttoptr i32 %8 to i16*, !insn.addr !105
  %10 = load i16, i16* %9, align 2, !insn.addr !105
  %11 = and i16 %10, 8192
  %12 = icmp eq i16 %11, 0, !insn.addr !106
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !107
  br i1 %12, label %dec_label_pc_10ca4, label %dec_label_pc_10c88, !insn.addr !107

dec_label_pc_10ca4:                               ; preds = %dec_label_pc_10c88
  %13 = inttoptr i32 %r0.0.reload to i32*, !insn.addr !108
  %14 = call i32* @__rawmemchr(i32* %13, i32 0), !insn.addr !108
  %15 = ptrtoint i32* %14 to i32, !insn.addr !108
  %16 = icmp ult i32 %r0.0.reload, %15, !insn.addr !109
  br i1 %16, label %dec_label_pc_10cb8.lr.ph, label %dec_label_pc_10cd8, !insn.addr !110

dec_label_pc_10cb8.lr.ph:                         ; preds = %dec_label_pc_10ca4
  store i32 %15, i32* %r0.11.reg2mem
  br label %dec_label_pc_10cb8

dec_label_pc_10cb8:                               ; preds = %dec_label_pc_10cb8.lr.ph, %dec_label_pc_10cd0
  %r0.11.reload = load i32, i32* %r0.11.reg2mem
  %17 = add i32 %r0.11.reload, -1, !insn.addr !111
  %18 = inttoptr i32 %17 to i8*, !insn.addr !111
  %19 = load i8, i8* %18, align 1, !insn.addr !111
  %20 = zext i8 %19 to i32, !insn.addr !111
  %21 = load i16*, i16** %0, align 4
  %22 = ptrtoint i16* %21 to i32
  %23 = mul i32 %20, 2, !insn.addr !112
  %24 = add i32 %23, %22, !insn.addr !113
  %25 = inttoptr i32 %24 to i16*, !insn.addr !113
  %26 = load i16, i16* %25, align 2, !insn.addr !113
  %27 = and i16 %26, 8192
  %28 = icmp eq i16 %27, 0, !insn.addr !114
  br i1 %28, label %dec_label_pc_10cd0, label %29, !insn.addr !115

; <label>:29:                                     ; preds = %dec_label_pc_10cb8
  store i8 0, i8* %18, align 1, !insn.addr !115
  br label %dec_label_pc_10cd0, !insn.addr !115

dec_label_pc_10cd0:                               ; preds = %dec_label_pc_10cb8, %29
  %30 = icmp ult i32 %r0.0.reload, %17, !insn.addr !109
  store i32 %17, i32* %r0.11.reg2mem, !insn.addr !110
  br i1 %30, label %dec_label_pc_10cb8, label %dec_label_pc_10cd8, !insn.addr !110

dec_label_pc_10cd8:                               ; preds = %dec_label_pc_10cd0, %dec_label_pc_10ca4
  ret i32 %r0.0.reload, !insn.addr !116

; uselistorder directives
  uselistorder i32 %r0.0.reload, { 5, 4, 2, 3, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r0.11.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10cd0, { 1, 0 }
  uselistorder label %dec_label_pc_10cb8, { 1, 0 }
}

define i32 @display(i32 %arg1) local_unnamed_addr {
dec_label_pc_10ce0:
  %r6.0.reg2mem = alloca i32, !insn.addr !117
  %r4.7.reg2mem = alloca i32, !insn.addr !117
  %r4.6.reg2mem = alloca i32, !insn.addr !117
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !117
  %r5.2.reg2mem = alloca i32, !insn.addr !117
  %r7.1.reg2mem = alloca i32, !insn.addr !117
  %r0.1.reg2mem = alloca i32, !insn.addr !117
  %r4.2.reg2mem = alloca i32, !insn.addr !117
  %r0.0.reg2mem = alloca i32, !insn.addr !117
  %r4.0.reg2mem = alloca i32, !insn.addr !117
  %0 = icmp eq i32 %arg1, 0, !insn.addr !118
  store i32 %arg1, i32* %r4.0.reg2mem, !insn.addr !119
  store i32 0, i32* %r0.1.reg2mem, !insn.addr !119
  br i1 %0, label %dec_label_pc_10d44, label %dec_label_pc_10d0c, !insn.addr !119

dec_label_pc_10d0c:                               ; preds = %dec_label_pc_10ce0, %dec_label_pc_10d3c
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %1 = inttoptr i32 %r4.0.reload to i8*, !insn.addr !120
  %2 = call i8* @strchr(i8* %1, i32 124), !insn.addr !120
  %3 = ptrtoint i8* %2 to i32, !insn.addr !120
  %4 = icmp eq i8* %2, null, !insn.addr !121
  br i1 %4, label %dec_label_pc_10d4c, label %dec_label_pc_10d20, !insn.addr !122

dec_label_pc_10d20:                               ; preds = %dec_label_pc_10d0c
  %5 = add i32 %3, 1, !insn.addr !123
  store i8 0, i8* %2, align 1, !insn.addr !124
  %6 = load i8, i8* %1, align 1, !insn.addr !125
  %7 = icmp eq i8 %6, 0, !insn.addr !126
  store i32 %3, i32* %r0.0.reg2mem, !insn.addr !127
  store i32 %5, i32* %r4.2.reg2mem, !insn.addr !127
  store i32 %5, i32* %r7.1.reg2mem, !insn.addr !127
  br i1 %7, label %dec_label_pc_10d3c, label %dec_label_pc_10d5c, !insn.addr !127

dec_label_pc_10d3c:                               ; preds = %dec_label_pc_10d20, %dec_label_pc_10e24
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %8 = icmp eq i32 %r4.2.reload, 0, !insn.addr !128
  store i32 %r4.2.reload, i32* %r4.0.reg2mem, !insn.addr !129
  store i32 %r0.0.reload, i32* %r0.1.reg2mem, !insn.addr !129
  br i1 %8, label %dec_label_pc_10d44, label %dec_label_pc_10d0c, !insn.addr !129

dec_label_pc_10d44:                               ; preds = %dec_label_pc_10d3c, %dec_label_pc_10d4c, %dec_label_pc_10ce0
  %r0.1.reload = load i32, i32* %r0.1.reg2mem
  ret i32 %r0.1.reload, !insn.addr !130

dec_label_pc_10d4c:                               ; preds = %dec_label_pc_10d0c
  %9 = load i8, i8* %1, align 1, !insn.addr !131
  %10 = icmp eq i8 %9, 0, !insn.addr !132
  store i32 %3, i32* %r0.1.reg2mem, !insn.addr !133
  store i32 %3, i32* %r7.1.reg2mem, !insn.addr !133
  br i1 %10, label %dec_label_pc_10d44, label %dec_label_pc_10d5c, !insn.addr !133

dec_label_pc_10d5c:                               ; preds = %dec_label_pc_10d4c, %dec_label_pc_10d20
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  store i32 %r4.0.reload, i32* %r4.7.reg2mem, !insn.addr !134
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !134
  br label %dec_label_pc_10e00, !insn.addr !134

dec_label_pc_10d64:                               ; preds = %dec_label_pc_10e00
  %11 = add i32 %39, 1, !insn.addr !135
  store i8 0, i8* %38, align 1, !insn.addr !136
  %12 = load i8, i8* %37, align 1, !insn.addr !137
  %13 = icmp eq i8 %12, 0, !insn.addr !138
  store i32 %11, i32* %r5.2.reg2mem, !insn.addr !139
  store i32 %11, i32* %r4.6.reg2mem, !insn.addr !139
  br i1 %13, label %dec_label_pc_10df4, label %dec_label_pc_10d80, !insn.addr !139

dec_label_pc_10d80:                               ; preds = %dec_label_pc_10e14, %dec_label_pc_10d64
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %14 = call i8* @strchr(i8* nonnull %37, i32 61), !insn.addr !140
  %15 = icmp eq i8* %14, null, !insn.addr !141
  %16 = icmp eq i32 %r6.0.reload, 0
  br i1 %15, label %dec_label_pc_10e58, label %dec_label_pc_10d94, !insn.addr !142

dec_label_pc_10d94:                               ; preds = %dec_label_pc_10d80
  %17 = ptrtoint i8* %14 to i32, !insn.addr !140
  store i8 0, i8* %14, align 1, !insn.addr !143
  %18 = add i32 %17, 1, !insn.addr !144
  %19 = icmp eq i32 %18, 0
  br i1 %16, label %dec_label_pc_10da8, label %dec_label_pc_10e38, !insn.addr !145

dec_label_pc_10da8:                               ; preds = %dec_label_pc_10d94
  br i1 %19, label %dec_label_pc_10e60, label %dec_label_pc_10db0, !insn.addr !146

dec_label_pc_10db0:                               ; preds = %dec_label_pc_10da8
  %20 = call i16** @__ctype_b_loc(), !insn.addr !147
  %21 = inttoptr i32 %18 to i8*
  %22 = load i8, i8* %21, align 1, !insn.addr !148
  %23 = zext i8 %22 to i32, !insn.addr !148
  %24 = load i16*, i16** %20, align 4, !insn.addr !149
  %25 = ptrtoint i16* %24 to i32, !insn.addr !149
  %26 = mul i32 %23, 2, !insn.addr !150
  %27 = add i32 %26, %25, !insn.addr !151
  %28 = inttoptr i32 %27 to i16*, !insn.addr !151
  %29 = load i16, i16* %28, align 2, !insn.addr !151
  %30 = and i16 %29, 2048
  %31 = icmp eq i16 %30, 0, !insn.addr !152
  %32 = select i1 %31, i8* bitcast (i8** @global_var_112b0 to i8*), i8* %21, !insn.addr !153
  %33 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11260, i32 0, i32 0), i8* nonnull %37, i8* %32), !insn.addr !153
  store i8* %21, i8** %.pre-phi.reg2mem, !insn.addr !153
  br label %dec_label_pc_10ddc, !insn.addr !153

dec_label_pc_10ddc:                               ; preds = %dec_label_pc_10e38.dec_label_pc_10ddc_crit_edge, %dec_label_pc_10db0
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11270, i32 0, i32 0), i8* nonnull %37, i8* %.pre-phi.reload), !insn.addr !154
  store i32 %r5.2.reload, i32* %r4.6.reg2mem, !insn.addr !154
  br label %dec_label_pc_10df4, !insn.addr !154

dec_label_pc_10df4:                               ; preds = %dec_label_pc_10e40, %dec_label_pc_10ddc, %dec_label_pc_10d64
  %r4.6.reload = load i32, i32* %r4.6.reg2mem
  %35 = icmp eq i32 %r4.6.reload, 0, !insn.addr !155
  %36 = add i32 %r6.0.reload, 1, !insn.addr !156
  store i32 %r4.6.reload, i32* %r4.7.reg2mem, !insn.addr !157
  store i32 %36, i32* %r6.0.reg2mem, !insn.addr !157
  br i1 %35, label %dec_label_pc_10e24, label %dec_label_pc_10e00, !insn.addr !157

dec_label_pc_10e00:                               ; preds = %dec_label_pc_10df4, %dec_label_pc_10d5c
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %r4.7.reload = load i32, i32* %r4.7.reg2mem
  %37 = inttoptr i32 %r4.7.reload to i8*
  %38 = call i8* @strchr(i8* %37, i32 44), !insn.addr !158
  %39 = ptrtoint i8* %38 to i32, !insn.addr !158
  %40 = icmp eq i8* %38, null, !insn.addr !159
  br i1 %40, label %dec_label_pc_10e14, label %dec_label_pc_10d64, !insn.addr !160

dec_label_pc_10e14:                               ; preds = %dec_label_pc_10e00
  %41 = load i8, i8* %37, align 1, !insn.addr !161
  %42 = icmp eq i8 %41, 0, !insn.addr !162
  store i32 %39, i32* %r5.2.reg2mem, !insn.addr !163
  br i1 %42, label %dec_label_pc_10e24, label %dec_label_pc_10d80, !insn.addr !163

dec_label_pc_10e24:                               ; preds = %dec_label_pc_10e14, %dec_label_pc_10df4
  %43 = call i32 @puts(i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_11290, i32 0, i32 0)), !insn.addr !164
  store i32 %43, i32* %r0.0.reg2mem, !insn.addr !165
  store i32 %r7.1.reload, i32* %r4.2.reg2mem, !insn.addr !165
  br label %dec_label_pc_10d3c, !insn.addr !165

dec_label_pc_10e38:                               ; preds = %dec_label_pc_10d94
  br i1 %19, label %dec_label_pc_10e40, label %dec_label_pc_10e38.dec_label_pc_10ddc_crit_edge, !insn.addr !166

dec_label_pc_10e38.dec_label_pc_10ddc_crit_edge:  ; preds = %dec_label_pc_10e38
  %.pre = inttoptr i32 %18 to i8*, !insn.addr !154
  store i8* %.pre, i8** %.pre-phi.reg2mem
  br label %dec_label_pc_10ddc

dec_label_pc_10e40:                               ; preds = %dec_label_pc_10e58, %dec_label_pc_10e38, %dec_label_pc_10e60
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_11280, i32 0, i32 0), i32 %r6.0.reload, i8* nonnull %37), !insn.addr !167
  store i32 %r5.2.reload, i32* %r4.6.reg2mem, !insn.addr !168
  br label %dec_label_pc_10df4, !insn.addr !168

dec_label_pc_10e58:                               ; preds = %dec_label_pc_10d80
  br i1 %16, label %dec_label_pc_10e60, label %dec_label_pc_10e40, !insn.addr !169

dec_label_pc_10e60:                               ; preds = %dec_label_pc_10e58, %dec_label_pc_10da8
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11260, i32 0, i32 0), i8* nonnull %37, i8* bitcast (i8** @global_var_112b0 to i8*)), !insn.addr !170
  br label %dec_label_pc_10e40, !insn.addr !171

; uselistorder directives
  uselistorder i8* %38, { 1, 2, 0 }
  uselistorder i8* %37, { 1, 2, 6, 7, 5, 0, 3, 4 }
  uselistorder i32 %r6.0.reload, { 1, 0, 2 }
  uselistorder i1 %16, { 1, 0 }
  uselistorder i8* %14, { 0, 2, 1 }
  uselistorder i32 %r5.2.reload, { 1, 0 }
  uselistorder i32 %r4.2.reload, { 1, 0 }
  uselistorder i8* %1, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.2.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.1.reg2mem, { 2, 0, 1, 3 }
  uselistorder i32* %r5.2.reg2mem, { 2, 0, 1 }
  uselistorder i8** %.pre-phi.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r4.6.reg2mem, { 3, 0, 2, 1 }
  uselistorder i8* bitcast (i8** @global_var_112b0 to i8*), { 1, 0 }
  uselistorder i16** ()* @__ctype_b_loc, { 1, 0, 2 }
  uselistorder i8* null, { 1, 0, 2 }
  uselistorder i8* (i8*, i32)* @strchr, { 1, 2, 0, 3 }
  uselistorder label %dec_label_pc_10e40, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10d44, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10d3c, { 1, 0 }
  uselistorder label %dec_label_pc_10d0c, { 1, 0 }
}

define i32 @callapi(i32 %arg1, i32 %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_10e74:
  %sl.0.reg2mem = alloca i32, !insn.addr !172
  %r5.2.reg2mem = alloca i32, !insn.addr !172
  %sb.1.reg2mem = alloca i32, !insn.addr !172
  %r8.0.in.reg2mem = alloca i32*, !insn.addr !172
  %r7.1.reg2mem = alloca i32, !insn.addr !172
  %r6.1.reg2mem = alloca i32, !insn.addr !172
  %r5.1.reg2mem = alloca i32, !insn.addr !172
  %r5.0.reg2mem = alloca i32, !insn.addr !172
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-72 = alloca i32, align 4
  %stack_var_-56 = alloca i32, align 4
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !173
  %1 = call %hostent* @gethostbyname(i8* %0), !insn.addr !173
  %2 = icmp eq %hostent* %1, null, !insn.addr !174
  br i1 %2, label %dec_label_pc_10fd4, label %dec_label_pc_10e98, !insn.addr !175

dec_label_pc_10e98:                               ; preds = %dec_label_pc_10e74
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !176
  %4 = icmp eq i32 %3, -1, !insn.addr !177
  br i1 %4, label %dec_label_pc_10ff4, label %dec_label_pc_10eb4, !insn.addr !178

dec_label_pc_10eb4:                               ; preds = %dec_label_pc_10e98
  %5 = call i32 @__asm_rev16(i32 %arg3), !insn.addr !179
  store i32 2, i32* %stack_var_-56, align 4, !insn.addr !180
  %6 = bitcast i32* %stack_var_-56 to %sockaddr*, !insn.addr !181
  %7 = call i32 @connect(i32 %3, %sockaddr* nonnull %6, i32 16), !insn.addr !181
  %8 = icmp slt i32 %7, 0, !insn.addr !182
  br i1 %8, label %dec_label_pc_11020, label %dec_label_pc_10efc, !insn.addr !183

dec_label_pc_10efc:                               ; preds = %dec_label_pc_10eb4
  store i32 1, i32* %stack_var_-72, align 4, !insn.addr !184
  %9 = call i32 @setsockopt(i32 %3, i32 1, i32 13, i32* nonnull %stack_var_-72, i32 8), !insn.addr !185
  %10 = icmp eq i32 %9, 0, !insn.addr !186
  br i1 %10, label %dec_label_pc_10f34, label %dec_label_pc_1109c, !insn.addr !187

dec_label_pc_10f34:                               ; preds = %dec_label_pc_10efc, %dec_label_pc_1109c
  store i32 10, i32* %stack_var_-64, align 4, !insn.addr !188
  %11 = call i32 @setsockopt(i32 %3, i32 1, i32 21, i32* nonnull %stack_var_-64, i32 8), !insn.addr !189
  %12 = icmp eq i32 %11, 0, !insn.addr !190
  br i1 %12, label %dec_label_pc_10f68, label %dec_label_pc_11074, !insn.addr !191

dec_label_pc_10f68:                               ; preds = %dec_label_pc_10f34, %dec_label_pc_11074
  %13 = call i32 @setsockopt(i32 %3, i32 1, i32 20, i32* nonnull %stack_var_-64, i32 8), !insn.addr !192
  %14 = icmp eq i32 %13, 0, !insn.addr !193
  br i1 %14, label %dec_label_pc_10f8c, label %dec_label_pc_1104c, !insn.addr !194

dec_label_pc_10f8c:                               ; preds = %dec_label_pc_10f68, %dec_label_pc_1104c
  %15 = inttoptr i32 %arg1 to i8*, !insn.addr !195
  %16 = call i32 @strlen(i8* %15), !insn.addr !195
  %17 = inttoptr i32 %arg1 to i32*, !insn.addr !196
  %18 = call i32 @send(i32 %3, i32* %17, i32 %16, i32 0), !insn.addr !196
  %19 = icmp slt i32 %18, 1, !insn.addr !197
  br i1 %19, label %dec_label_pc_110c4, label %dec_label_pc_10fb0, !insn.addr !197

dec_label_pc_10fb0:                               ; preds = %dec_label_pc_10f8c
  %20 = call i32 @strlen(i8* %15), !insn.addr !198
  %21 = icmp eq i32 %20, %18, !insn.addr !199
  store i32 %13, i32* %r5.0.reg2mem, !insn.addr !200
  br i1 %21, label %dec_label_pc_110e8, label %dec_label_pc_10fc0, !insn.addr !200

dec_label_pc_10fc0:                               ; preds = %dec_label_pc_111b8, %dec_label_pc_110c4, %dec_label_pc_10fb0
  %r5.0.reload = load i32, i32* %r5.0.reg2mem
  %22 = call i32 @close(i32 %3), !insn.addr !201
  store i32 %r5.0.reload, i32* %r5.1.reg2mem, !insn.addr !201
  br label %dec_label_pc_10fc8, !insn.addr !201

dec_label_pc_10fc8:                               ; preds = %dec_label_pc_11178, %dec_label_pc_11160, %dec_label_pc_10fc0
  %r5.1.reload = load i32, i32* %r5.1.reg2mem
  ret i32 %r5.1.reload, !insn.addr !202

dec_label_pc_10fd4:                               ; preds = %dec_label_pc_10e74
  %23 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11294, i32 0, i32 0), i8* %0), !insn.addr !203
  ret i32 1, !insn.addr !204

dec_label_pc_10ff4:                               ; preds = %dec_label_pc_10e98
  %24 = call i32* @__errno_location(), !insn.addr !205
  %25 = load i32, i32* %24, align 4, !insn.addr !206
  %26 = call i8* @strerror(i32 %25), !insn.addr !207
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_112b4, i32 0, i32 0), i8* %26), !insn.addr !208
  ret i32 1, !insn.addr !209

dec_label_pc_11020:                               ; preds = %dec_label_pc_10eb4
  %28 = call i32* @__errno_location(), !insn.addr !210
  %29 = load i32, i32* %28, align 4, !insn.addr !211
  %30 = call i8* @strerror(i32 %29), !insn.addr !212
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_112d8, i32 0, i32 0), i8* %30), !insn.addr !213
  ret i32 1, !insn.addr !214

dec_label_pc_1104c:                               ; preds = %dec_label_pc_10f68
  %32 = call i32* @__errno_location(), !insn.addr !215
  %33 = load i32, i32* %32, align 4, !insn.addr !216
  %34 = call i8* @strerror(i32 %33), !insn.addr !217
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_var_11354, i32 0, i32 0), i8* %34), !insn.addr !218
  %36 = call i32 @close(i32 %3), !insn.addr !219
  br label %dec_label_pc_10f8c, !insn.addr !220

dec_label_pc_11074:                               ; preds = %dec_label_pc_10f34
  %37 = call i32* @__errno_location(), !insn.addr !221
  %38 = load i32, i32* %37, align 4, !insn.addr !222
  %39 = call i8* @strerror(i32 %38), !insn.addr !223
  %40 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([48 x i8], [48 x i8]* @global_var_11324, i32 0, i32 0), i8* %39), !insn.addr !224
  %41 = call i32 @close(i32 %3), !insn.addr !225
  br label %dec_label_pc_10f68, !insn.addr !226

dec_label_pc_1109c:                               ; preds = %dec_label_pc_10efc
  %42 = call i32* @__errno_location(), !insn.addr !227
  %43 = load i32, i32* %42, align 4, !insn.addr !228
  %44 = call i8* @strerror(i32 %43), !insn.addr !229
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([46 x i8], [46 x i8]* @global_var_112f4, i32 0, i32 0), i8* %44), !insn.addr !230
  %46 = call i32 @close(i32 %3), !insn.addr !231
  br label %dec_label_pc_10f34, !insn.addr !232

dec_label_pc_110c4:                               ; preds = %dec_label_pc_10f8c
  %47 = call i32* @__errno_location(), !insn.addr !233
  %48 = load i32, i32* %47, align 4, !insn.addr !234
  %49 = call i8* @strerror(i32 %48), !insn.addr !235
  %50 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11384, i32 0, i32 0), i8* %49), !insn.addr !236
  store i32 1, i32* %r5.0.reg2mem, !insn.addr !237
  br label %dec_label_pc_10fc0, !insn.addr !237

dec_label_pc_110e8:                               ; preds = %dec_label_pc_10fb0
  %51 = call i32* @malloc(i32 65536), !insn.addr !238
  %52 = icmp eq i32* %51, null, !insn.addr !239
  store i32 0, i32* %r6.1.reg2mem, !insn.addr !240
  store i32 65535, i32* %r7.1.reg2mem, !insn.addr !240
  store i32* %51, i32** %r8.0.in.reg2mem, !insn.addr !240
  store i32 3, i32* %sb.1.reg2mem, !insn.addr !240
  br i1 %52, label %dec_label_pc_11178, label %dec_label_pc_11104, !insn.addr !240

dec_label_pc_11104:                               ; preds = %dec_label_pc_110e8, %dec_label_pc_11150
  %r8.0.in.reload = load i32*, i32** %r8.0.in.reg2mem
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %r8.0 = ptrtoint i32* %r8.0.in.reload to i32
  %53 = add i32 %r6.1.reload, %r8.0, !insn.addr !241
  %54 = inttoptr i32 %53 to i32*, !insn.addr !242
  %55 = call i32 @recv(i32 %3, i32* %54, i32 65535, i32 0), !insn.addr !242
  %56 = icmp slt i32 %55, 0, !insn.addr !243
  br i1 %56, label %dec_label_pc_111cc, label %dec_label_pc_11134, !insn.addr !244

dec_label_pc_11134:                               ; preds = %dec_label_pc_11104
  %57 = icmp eq i32 %55, 0, !insn.addr !243
  br i1 %57, label %dec_label_pc_111f0, label %dec_label_pc_11138, !insn.addr !245

dec_label_pc_11138:                               ; preds = %dec_label_pc_11134
  %r7.1.reload = load i32, i32* %r7.1.reg2mem
  %58 = add i32 %55, %r6.1.reload, !insn.addr !246
  %59 = icmp eq i32 %r7.1.reload, %58, !insn.addr !247
  br i1 %59, label %dec_label_pc_11148, label %dec_label_pc_11204, !insn.addr !248

dec_label_pc_11148:                               ; preds = %dec_label_pc_11138
  %sb.1.reload = load i32, i32* %sb.1.reg2mem
  %60 = icmp eq i32 %sb.1.reload, 1, !insn.addr !249
  br i1 %60, label %dec_label_pc_11190, label %dec_label_pc_11150, !insn.addr !250

dec_label_pc_11150:                               ; preds = %dec_label_pc_11148
  %61 = add nuw nsw i32 %r7.1.reload, 65536, !insn.addr !251
  %62 = add nuw nsw i32 %r7.1.reload, 65535, !insn.addr !252
  %63 = add nsw i32 %sb.1.reload, -1, !insn.addr !249
  %64 = call i32* @realloc(i32* nonnull %r8.0.in.reload, i32 %61), !insn.addr !253
  %65 = icmp eq i32* %64, null, !insn.addr !254
  store i32 %r7.1.reload, i32* %r6.1.reg2mem, !insn.addr !255
  store i32 %62, i32* %r7.1.reg2mem, !insn.addr !255
  store i32* %64, i32** %r8.0.in.reg2mem, !insn.addr !255
  store i32 %63, i32* %sb.1.reg2mem, !insn.addr !255
  br i1 %65, label %dec_label_pc_11160, label %dec_label_pc_11104, !insn.addr !255

dec_label_pc_11160:                               ; preds = %dec_label_pc_11150
  %66 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_113bc, i32 0, i32 0), i32 %61), !insn.addr !256
  store i32 1, i32* %r5.1.reg2mem, !insn.addr !257
  br label %dec_label_pc_10fc8, !insn.addr !257

dec_label_pc_11178:                               ; preds = %dec_label_pc_110e8
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_113a4, i32 0, i32 0), i32 65536), !insn.addr !258
  store i32 1, i32* %r5.1.reg2mem, !insn.addr !259
  br label %dec_label_pc_10fc8, !insn.addr !259

dec_label_pc_11190:                               ; preds = %dec_label_pc_11148
  %68 = add i32 %r7.1.reload, %r8.0, !insn.addr !260
  store i32 %13, i32* %r5.2.reg2mem, !insn.addr !260
  store i32 %68, i32* %sl.0.reg2mem, !insn.addr !260
  br label %dec_label_pc_11194, !insn.addr !260

dec_label_pc_11194:                               ; preds = %dec_label_pc_11204, %dec_label_pc_111f0, %dec_label_pc_111cc, %dec_label_pc_11190
  %sl.0.reload = load i32, i32* %sl.0.reg2mem
  %r5.2.reload = load i32, i32* %r5.2.reg2mem
  %69 = inttoptr i32 %sl.0.reload to i8*, !insn.addr !261
  store i8 0, i8* %69, align 1, !insn.addr !261
  %70 = load i32, i32* @global_var_22080, align 4, !insn.addr !262
  %71 = icmp eq i32 %70, 0, !insn.addr !263
  br i1 %71, label %dec_label_pc_111c4, label %dec_label_pc_111b4, !insn.addr !264

dec_label_pc_111b4:                               ; preds = %dec_label_pc_11194
  %72 = bitcast i32* %r8.0.in.reload to i8*, !insn.addr !265
  %73 = call i32 @puts(i8* %72), !insn.addr !265
  br label %dec_label_pc_111b8, !insn.addr !265

dec_label_pc_111b8:                               ; preds = %dec_label_pc_111c4, %dec_label_pc_111b4
  call void @free(i32* nonnull %r8.0.in.reload), !insn.addr !266
  store i32 %r5.2.reload, i32* %r5.0.reg2mem, !insn.addr !267
  br label %dec_label_pc_10fc0, !insn.addr !267

dec_label_pc_111c4:                               ; preds = %dec_label_pc_11194
  %74 = call i32 @display(i32 %r8.0), !insn.addr !268
  br label %dec_label_pc_111b8, !insn.addr !269

dec_label_pc_111cc:                               ; preds = %dec_label_pc_11104
  %75 = call i32* @__errno_location(), !insn.addr !270
  %76 = load i32, i32* %75, align 4, !insn.addr !271
  %77 = call i8* @strerror(i32 %76), !insn.addr !272
  %78 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_113d8, i32 0, i32 0), i8* %77), !insn.addr !273
  store i32 1, i32* %r5.2.reg2mem, !insn.addr !274
  store i32 %53, i32* %sl.0.reg2mem, !insn.addr !274
  br label %dec_label_pc_11194, !insn.addr !274

dec_label_pc_111f0:                               ; preds = %dec_label_pc_11134
  %79 = call i32 @puts(i8* getelementptr inbounds ([41 x i8], [41 x i8]* @global_var_113ec, i32 0, i32 0)), !insn.addr !275
  store i32 1, i32* %r5.2.reg2mem, !insn.addr !276
  store i32 %53, i32* %sl.0.reg2mem, !insn.addr !276
  br label %dec_label_pc_11194, !insn.addr !276

dec_label_pc_11204:                               ; preds = %dec_label_pc_11138
  %80 = add i32 %58, %r8.0, !insn.addr !277
  store i32 %13, i32* %r5.2.reg2mem, !insn.addr !278
  store i32 %80, i32* %sl.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_11194, !insn.addr !278

; uselistorder directives
  uselistorder i32 %r7.1.reload, { 3, 4, 1, 0, 2 }
  uselistorder i32 %r8.0, { 2, 0, 1, 3 }
  uselistorder i32* %r8.0.in.reload, { 3, 2, 1, 0 }
  uselistorder i32 %3, { 3, 0, 1, 2, 4, 5, 6, 7, 8, 9, 10 }
  uselistorder i32* %r5.0.reg2mem, { 2, 3, 0, 1 }
  uselistorder i32* %r5.1.reg2mem, { 2, 1, 0, 3 }
  uselistorder i32* %r6.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r7.1.reg2mem, { 2, 0, 1 }
  uselistorder i32** %r8.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i32* %sb.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r5.2.reg2mem, { 1, 3, 4, 0, 2 }
  uselistorder i32* %sl.0.reg2mem, { 1, 3, 4, 0, 2 }
  uselistorder i32 (i8*)* @puts, { 1, 0, 2, 3 }
  uselistorder i32* @global_var_22080, { 1, 0 }
  uselistorder i8 0, { 1, 4, 7, 3, 6, 2, 5, 8, 0, 9, 10, 11, 12, 13, 14 }
  uselistorder i32 65535, { 2, 1, 0 }
  uselistorder i32 65536, { 0, 2, 1 }
  uselistorder i8* (i32)* @strerror, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder i32* ()* @__errno_location, { 6, 0, 1, 2, 3, 4, 5, 7 }
  uselistorder i32 (i8*, ...)* @printf, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13, 12, 11, 10, 14 }
  uselistorder i32 (i32)* @close, { 3, 2, 1, 0, 4 }
  uselistorder i32 (i8*)* @strlen, { 1, 0, 2 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_11104, { 1, 0 }
  uselistorder label %dec_label_pc_10f8c, { 1, 0 }
  uselistorder label %dec_label_pc_10f68, { 1, 0 }
  uselistorder label %dec_label_pc_10f34, { 1, 0 }
}

define i32 @__libc_csu_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1120c:
  %0 = call i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !279
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 139026, i32 ptrtoint (i32* @global_var_21f10 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !280

; uselistorder directives
  uselistorder i32 0, { 13, 32, 33, 30, 31, 46, 28, 29, 34, 35, 58, 59, 47, 0, 26, 27, 20, 21, 22, 23, 24, 25, 18, 19, 16, 17, 14, 15, 48, 60, 61, 62, 63, 49, 38, 39, 4, 5, 55, 36, 37, 10, 11, 12, 54, 1, 56, 2, 57, 7, 8, 51, 9, 52, 53, 3, 6, 66, 40, 41, 64, 65, 42, 43, 44, 45, 50 }
  uselistorder i32 2, { 4, 5, 7, 1, 2, 3, 8, 0, 9, 10, 11, 12, 6 }
}

define i32 @__libc_csu_fini() local_unnamed_addr {
dec_label_pc_11248:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !281

; uselistorder directives
  uselistorder i32 1, { 4, 8, 9, 16, 15, 65, 18, 45, 44, 43, 48, 50, 51, 52, 49, 53, 58, 57, 56, 19, 17, 14, 13, 12, 11, 10, 7, 60, 61, 62, 63, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 64, 31, 30, 3, 32, 2, 47, 42, 34, 33, 6, 5, 1, 0, 59, 46, 54, 40, 39, 66, 67, 38, 41, 37, 36, 35, 55 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1124c:
  ret i32 %arg1, !insn.addr !282
}

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i32 @strtol(i8*, i8**, i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare i32* @realloc(i32*, i32) local_unnamed_addr

declare i32* @__rawmemchr(i32*, i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32* @malloc(i32) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare i16** @__ctype_b_loc() local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i8* @strchr(i8*, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare %hostent* @gethostbyname(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @__asm_sxth(i32) local_unnamed_addr

declare i32 @__asm_rev16(i32) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare fp128 @__asm_vmvn.i32(i32) local_unnamed_addr

!0 = !{i64 67808}
!1 = !{i64 67812}
!2 = !{i64 67844}
!3 = !{i64 67856}
!4 = !{i64 67868}
!5 = !{i64 67880}
!6 = !{i64 67892}
!7 = !{i64 67904}
!8 = !{i64 67916}
!9 = !{i64 67928}
!10 = !{i64 67940}
!11 = !{i64 67952}
!12 = !{i64 67964}
!13 = !{i64 67976}
!14 = !{i64 67988}
!15 = !{i64 68000}
!16 = !{i64 68012}
!17 = !{i64 68024}
!18 = !{i64 68036}
!19 = !{i64 68048}
!20 = !{i64 68060}
!21 = !{i64 68072}
!22 = !{i64 68084}
!23 = !{i64 68096}
!24 = !{i64 68108}
!25 = !{i64 68120}
!26 = !{i64 68124}
!27 = !{i64 68132}
!28 = !{i64 68136}
!29 = !{i64 68148}
!30 = !{i64 68152}
!31 = !{i64 68156}
!32 = !{i64 68172}
!33 = !{i64 68176}
!34 = !{i64 68180}
!35 = !{i64 68188}
!36 = !{i64 68192}
!37 = !{i64 68196}
!38 = !{i64 68200}
!39 = !{i64 68216}
!40 = !{i64 68228}
!41 = !{i64 68236}
!42 = !{i64 68240}
!43 = !{i64 68248}
!44 = !{i64 68252}
!45 = !{i64 68260}
!46 = !{i64 68272}
!47 = !{i64 68276}
!48 = !{i64 68280}
!49 = !{i64 68284}
!50 = !{i64 68288}
!51 = !{i64 68292}
!52 = !{i64 68304}
!53 = !{i64 68316}
!54 = !{i64 68320}
!55 = !{i64 68324}
!56 = !{i64 68340}
!57 = !{i64 68344}
!58 = !{i64 68348}
!59 = !{i64 68352}
!60 = !{i64 68356}
!61 = !{i64 68360}
!62 = !{i64 68364}
!63 = !{i64 68368}
!64 = !{i64 68372}
!65 = !{i64 68388}
!66 = !{i64 68396}
!67 = !{i64 68432}
!68 = !{i64 68444}
!69 = !{i64 68448}
!70 = !{i64 68452}
!71 = !{i64 68472}
!72 = !{i64 68480}
!73 = !{i64 68488}
!74 = !{i64 68500}
!75 = !{i64 68504}
!76 = !{i64 68508}
!77 = !{i64 68556}
!78 = !{i64 68560}
!79 = !{i64 68566}
!80 = !{i64 68588}
!81 = !{i64 68592}
!82 = !{i64 68596}
!83 = !{i64 68600}
!84 = !{i64 68612}
!85 = !{i64 68644}
!86 = !{i64 68664}
!87 = !{i64 68668}
!88 = !{i64 68676}
!89 = !{i64 68688}
!90 = !{i64 68692}
!91 = !{i64 68696}
!92 = !{i64 68700}
!93 = !{i64 68704}
!94 = !{i64 68706}
!95 = !{i64 68712}
!96 = !{i64 68714}
!97 = !{i64 68716}
!98 = !{i64 68720}
!99 = !{i64 68728}
!100 = !{i64 68736}
!101 = !{i64 68740}
!102 = !{i64 68744}
!103 = !{i64 68752}
!104 = !{i64 68756}
!105 = !{i64 68760}
!106 = !{i64 68764}
!107 = !{i64 68768}
!108 = !{i64 68780}
!109 = !{i64 68816}
!110 = !{i64 68820}
!111 = !{i64 68792}
!112 = !{i64 68800}
!113 = !{i64 68804}
!114 = !{i64 68808}
!115 = !{i64 68812}
!116 = !{i64 68828}
!117 = !{i64 68832}
!118 = !{i64 68836}
!119 = !{i64 68844}
!120 = !{i64 68884}
!121 = !{i64 68888}
!122 = !{i64 68892}
!123 = !{i64 68900}
!124 = !{i64 68904}
!125 = !{i64 68908}
!126 = !{i64 68912}
!127 = !{i64 68920}
!128 = !{i64 68924}
!129 = !{i64 68928}
!130 = !{i64 68936}
!131 = !{i64 68940}
!132 = !{i64 68944}
!133 = !{i64 68948}
!134 = !{i64 68960}
!135 = !{i64 68968}
!136 = !{i64 68972}
!137 = !{i64 68976}
!138 = !{i64 68980}
!139 = !{i64 68988}
!140 = !{i64 69000}
!141 = !{i64 69004}
!142 = !{i64 69008}
!143 = !{i64 69020}
!144 = !{i64 69024}
!145 = !{i64 69028}
!146 = !{i64 69036}
!147 = !{i64 69040}
!148 = !{i64 69044}
!149 = !{i64 69052}
!150 = !{i64 69060}
!151 = !{i64 69064}
!152 = !{i64 69068}
!153 = !{i64 69080}
!154 = !{i64 69104}
!155 = !{i64 69108}
!156 = !{i64 69112}
!157 = !{i64 69116}
!158 = !{i64 69128}
!159 = !{i64 69132}
!160 = !{i64 69136}
!161 = !{i64 69140}
!162 = !{i64 69144}
!163 = !{i64 69152}
!164 = !{i64 69168}
!165 = !{i64 69172}
!166 = !{i64 69180}
!167 = !{i64 69200}
!168 = !{i64 69204}
!169 = !{i64 69212}
!170 = !{i64 69228}
!171 = !{i64 69232}
!172 = !{i64 69236}
!173 = !{i64 69260}
!174 = !{i64 69264}
!175 = !{i64 69268}
!176 = !{i64 69284}
!177 = !{i64 69288}
!178 = !{i64 69296}
!179 = !{i64 69312}
!180 = !{i64 69340}
!181 = !{i64 69360}
!182 = !{i64 69364}
!183 = !{i64 69368}
!184 = !{i64 69404}
!185 = !{i64 69416}
!186 = !{i64 69420}
!187 = !{i64 69424}
!188 = !{i64 69444}
!189 = !{i64 69468}
!190 = !{i64 69472}
!191 = !{i64 69476}
!192 = !{i64 69504}
!193 = !{i64 69508}
!194 = !{i64 69512}
!195 = !{i64 69520}
!196 = !{i64 69540}
!197 = !{i64 69548}
!198 = !{i64 69556}
!199 = !{i64 69560}
!200 = !{i64 69564}
!201 = !{i64 69572}
!202 = !{i64 69584}
!203 = !{i64 69604}
!204 = !{i64 69616}
!205 = !{i64 69620}
!206 = !{i64 69624}
!207 = !{i64 69632}
!208 = !{i64 69648}
!209 = !{i64 69660}
!210 = !{i64 69664}
!211 = !{i64 69668}
!212 = !{i64 69676}
!213 = !{i64 69692}
!214 = !{i64 69704}
!215 = !{i64 69708}
!216 = !{i64 69712}
!217 = !{i64 69716}
!218 = !{i64 69732}
!219 = !{i64 69740}
!220 = !{i64 69744}
!221 = !{i64 69748}
!222 = !{i64 69752}
!223 = !{i64 69756}
!224 = !{i64 69772}
!225 = !{i64 69780}
!226 = !{i64 69784}
!227 = !{i64 69788}
!228 = !{i64 69792}
!229 = !{i64 69796}
!230 = !{i64 69812}
!231 = !{i64 69820}
!232 = !{i64 69824}
!233 = !{i64 69828}
!234 = !{i64 69832}
!235 = !{i64 69840}
!236 = !{i64 69856}
!237 = !{i64 69860}
!238 = !{i64 69868}
!239 = !{i64 69872}
!240 = !{i64 69888}
!241 = !{i64 69892}
!242 = !{i64 69916}
!243 = !{i64 69920}
!244 = !{i64 69936}
!245 = !{i64 69940}
!246 = !{i64 69928}
!247 = !{i64 69944}
!248 = !{i64 69956}
!249 = !{i64 69960}
!250 = !{i64 69964}
!251 = !{i64 69912}
!252 = !{i64 69952}
!253 = !{i64 69968}
!254 = !{i64 69972}
!255 = !{i64 69980}
!256 = !{i64 70000}
!257 = !{i64 70004}
!258 = !{i64 70024}
!259 = !{i64 70028}
!260 = !{i64 70032}
!261 = !{i64 70048}
!262 = !{i64 70052}
!263 = !{i64 70060}
!264 = !{i64 70064}
!265 = !{i64 70068}
!266 = !{i64 70076}
!267 = !{i64 70080}
!268 = !{i64 70084}
!269 = !{i64 70088}
!270 = !{i64 70092}
!271 = !{i64 70096}
!272 = !{i64 70104}
!273 = !{i64 70120}
!274 = !{i64 70124}
!275 = !{i64 70140}
!276 = !{i64 70144}
!277 = !{i64 70148}
!278 = !{i64 70152}
!279 = !{i64 70172}
!280 = !{i64 70204}
!281 = !{i64 70216}
!282 = !{i64 70224}
