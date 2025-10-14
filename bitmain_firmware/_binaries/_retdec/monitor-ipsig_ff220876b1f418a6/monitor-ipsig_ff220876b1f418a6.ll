source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%sockaddr = type { i32, [14 x i8] }
%timeval = type { i32, i32 }
%_IO_FILE = type { i32 }
%in_addr = type { i32 }
%_TYPEDEF_fd_set = type { [1 x i32] }
%timezone = type { i32, i32 }

@global_var_11d70 = local_unnamed_addr global i32 34752
@global_var_11d74 = local_unnamed_addr global i32 34752
@global_var_11d78 = local_unnamed_addr global i32 34752
@global_var_11d7c = local_unnamed_addr global i32 34752
@global_var_11d80 = local_unnamed_addr global i32 34752
@global_var_11d84 = local_unnamed_addr global i32 34752
@global_var_11d88 = local_unnamed_addr global i32 34752
@global_var_11d8c = local_unnamed_addr global i32 34752
@global_var_11d90 = local_unnamed_addr global i32 34752
@global_var_11d94 = local_unnamed_addr global i32 34752
@global_var_11d98 = local_unnamed_addr global i32 34752
@global_var_11d9c = local_unnamed_addr global i32 34752
@global_var_11da0 = local_unnamed_addr global i32 34752
@global_var_11da4 = local_unnamed_addr global i32 34752
@global_var_11da8 = local_unnamed_addr global i32 34752
@global_var_11dac = local_unnamed_addr global i32 34752
@global_var_11db0 = local_unnamed_addr global i32 34752
@global_var_11db4 = local_unnamed_addr global i32 34752
@global_var_11db8 = local_unnamed_addr global i32 34752
@global_var_11dbc = local_unnamed_addr global i32 34752
@global_var_11dc0 = local_unnamed_addr global i32 34752
@global_var_11dc4 = local_unnamed_addr global i32 34752
@global_var_11dc8 = local_unnamed_addr global i32 34752
@global_var_11dcc = local_unnamed_addr global i32 34752
@global_var_11dd0 = local_unnamed_addr global i32 34752
@global_var_11dd4 = local_unnamed_addr global i32 34752
@global_var_11dd8 = local_unnamed_addr global i32 34752
@global_var_11ddc = local_unnamed_addr global i32 34752
@global_var_11de0 = local_unnamed_addr global i32 34752
@global_var_11de4 = local_unnamed_addr global i32 34752
@global_var_11de8 = local_unnamed_addr global i32 34752
@global_var_11dec = local_unnamed_addr global i32 34752
@global_var_11df0 = local_unnamed_addr global i32 34752
@global_var_11df4 = local_unnamed_addr global i32 34752
@global_var_11df8 = local_unnamed_addr global i32 34752
@global_var_11dfc = local_unnamed_addr global i32 34752
@global_var_89b4 = local_unnamed_addr constant i32 39312
@global_var_89b8 = local_unnamed_addr constant i32 39064
@global_var_89dc = local_unnamed_addr constant i32 37780
@global_var_89e0 = local_unnamed_addr constant i32 156
@global_var_11c7c = global i32 1
@global_var_11d64 = local_unnamed_addr global i32* @global_var_11c7c
@global_var_11e00 = local_unnamed_addr global i32 0
@global_var_8a10 = local_unnamed_addr constant i32 73232
@global_var_8a14 = local_unnamed_addr constant i32 73235
@global_var_11e13 = local_unnamed_addr global i32 0
@global_var_8a18 = local_unnamed_addr constant i32 0
@global_var_8a50 = local_unnamed_addr constant i32 73232
@global_var_8a54 = local_unnamed_addr constant i32 73232
@global_var_8a58 = local_unnamed_addr constant i32 0
@global_var_8a80 = local_unnamed_addr constant i32 73232
@global_var_8ab0 = local_unnamed_addr constant i32 72824
@global_var_11c78 = global i32 0
@global_var_8ab4 = local_unnamed_addr constant i32 0
@global_var_99a0 = constant [4 x i8] c"%ld\00"
@global_var_99a4 = constant [7 x i8] c"socket\00"
@global_var_99ac = constant [21 x i8] c":No Such Device %s/n\00"
@global_var_99c4 = constant [6 x i8] c"ioctl\00"
@global_var_99cc = constant [30 x i8] c"%02X:%02X:%02X:%02X:%02X:%02X\00"
@global_var_99ec = constant [5 x i8] c"MAC=\00"
@global_var_99f8 = constant [38 x i8] c"echo 0 >/sys/class/gpio/gpio941/value\00"
@global_var_9a20 = constant [38 x i8] c"echo 0 >/sys/class/gpio/gpio942/value\00"
@global_var_9a48 = constant [38 x i8] c"echo 1 >/sys/class/gpio/gpio941/value\00"
@global_var_9a70 = constant [38 x i8] c"echo 1 >/sys/class/gpio/gpio942/value\00"
@global_var_9a98 = constant [24 x i8] c"/sys/class/gpio/gpio943\00"
@global_var_9ab0 = constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_9acc = constant [22 x i8] c"Open read gpio/export\00"
@global_var_9ae4 = constant [4 x i8] c"943\00"
@global_var_9ae8 = constant [18 x i8] c"File Write Error!\00"
@global_var_9afc = constant [30 x i8] c"/sys/class/gpio/gpio943/value\00"
@global_var_9b20 = constant [34 x i8] c"Open read recovery button failure\00"
@global_var_9b44 = constant [3 x i8] c"%d\00"
@global_var_11e0c = local_unnamed_addr global i32 -1
@global_var_9b48 = constant [13 x i8] c"socket error\00"
@global_var_9b58 = constant [20 x i8] c"set socket error...\00"
@global_var_11e50 = local_unnamed_addr global i32 0
@global_var_11e4e = local_unnamed_addr global i32 0
@global_var_11e40 = local_unnamed_addr global i32 0
@global_var_11e3e = local_unnamed_addr global i32 0
@global_var_9b6c = constant [14 x i8] c"bind error...\00"
@global_var_9b7c = constant [5 x i8] c"eth0\00"
@global_var_9b84 = constant [13 x i8] c"get IP error\00"
@global_var_9b98 = constant [15 x i8] c"send error....\00"
@global_var_9ba8 = constant [16 x i8] c"send ipmac:\0A%s\0A\00"
@global_var_9bb8 = constant [15 x i8] c"send ack OK!\0A \00"
@global_var_11e38 = local_unnamed_addr global i32 0
@global_var_9bc8 = constant [15 x i8] c"read error....\00"
@global_var_9bd8 = constant [9 x i8] c"rev:\0A%s\09\00"
@global_var_9be4 = constant [15 x i8] c"send_ack(\221\22);\00"
@global_var_9bf4 = constant [3 x i8] c"OK\00"
@global_var_9bf8 = constant [15 x i8] c"send_ack(\220\22);\00"
@global_var_9c08 = constant [6 x i8] c"FAILD\00"
@global_var_9c10 = constant [9 x i8] c"Time Out\00"
@global_var_9c1c = constant [30 x i8] c"monitor-ipsig compile %s--%s\0A\00"
@global_var_9c3c = local_unnamed_addr constant [12 x i8] c"Dec 13 2018\00"
@global_var_9c48 = local_unnamed_addr constant [9 x i8] c"20:07:08\00"
@global_var_9c54 = constant [14 x i8] c"Key Down!!!!!\00"
@global_var_9988 = local_unnamed_addr constant i32 33576
@global_var_8328 = global i32 34832
@global_var_998c = local_unnamed_addr constant i32 33564
@global_var_831c = global i32 0
@global_var_9954 = constant i32 -508534458
@0 = external global i32
@global_var_9990 = constant void ()* inttoptr (i32 -516948194 to void ()*)
@global_var_89bc = local_unnamed_addr constant void ()* inttoptr (i32 39212 to void ()*)
@global_var_11e10 = external global i8*
@global_var_99f4 = constant i16* inttoptr (i32 44 to i16*)
@1 = internal constant [2 x i8] c"w\00"
@global_var_9ac8 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i32 0, i32 0)
@2 = internal constant [2 x i8] c"r\00"
@global_var_9b1c = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @2, i32 0, i32 0)
@global_var_11e4c = global %sockaddr* null
@global_var_11e3c = global %timeval* null
@global_var_11e18 = external global i8*
@global_var_9b94 = constant i16* inttoptr (i32 44 to i16*)

define i32 @function_87b4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_87b4:
  %0 = call i32 @function_89c0(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32* @calloc.18(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_87d4:
  %0 = call i32* @calloc(i32 %nmemb, i32 %size), !insn.addr !2
  ret i32* %0, !insn.addr !2
}

define i32 @setsockopt.22(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen) local_unnamed_addr {
dec_label_pc_87e0:
  %0 = call i32 @setsockopt(i32 %fd, i32 %level, i32 %optname, i32* %optval, i32 %optlen), !insn.addr !3
  ret i32 %0, !insn.addr !3
}

define i32 @printf.33(i8* %format, ...) local_unnamed_addr {
dec_label_pc_87ec:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !4
  ret i32 %0, !insn.addr !4
}

define i32 @fscanf.19(%_IO_FILE* %stream, i8* %format, ...) local_unnamed_addr {
dec_label_pc_87f8:
  %0 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* %stream, i8* %format), !insn.addr !5
  ret i32 %0, !insn.addr !5
}

define %_IO_FILE* @fopen.8(i8* %filename, i8* %modes) local_unnamed_addr {
dec_label_pc_8804:
  %0 = call %_IO_FILE* @fopen(i8* %filename, i8* %modes), !insn.addr !6
  ret %_IO_FILE* %0, !insn.addr !6
}

define void @free.9(i32* %ptr) local_unnamed_addr {
dec_label_pc_8810:
  call void @free(i32* %ptr), !insn.addr !7
  ret void, !insn.addr !7
}

define void @bzero.35(i32* %s, i32 %n) local_unnamed_addr {
dec_label_pc_881c:
  call void @bzero(i32* %s, i32 %n), !insn.addr !8
  ret void, !insn.addr !8
}

define i8* @inet_ntoa.4(%in_addr %arg1) local_unnamed_addr {
dec_label_pc_8828:
  %0 = call i8* @inet_ntoa(%in_addr %arg1), !insn.addr !9
  ret i8* %0, !insn.addr !9
}

define i32 @select.5(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout) local_unnamed_addr {
dec_label_pc_8834:
  %0 = call i32 @select(i32 %nfds, %_TYPEDEF_fd_set* %readfds, %_TYPEDEF_fd_set* %writefds, %_TYPEDEF_fd_set* %exceptfds, %timeval* %timeout), !insn.addr !10
  ret i32 %0, !insn.addr !10
}

define i32 @recvfrom.2(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len) local_unnamed_addr {
dec_label_pc_8840:
  %0 = call i32 @recvfrom(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32* %addr_len), !insn.addr !11
  ret i32 %0, !insn.addr !11
}

define i16 @htons.27(i16 %hostshort) local_unnamed_addr {
dec_label_pc_884c:
  %0 = call i16 @htons(i16 %hostshort), !insn.addr !12
  ret i16 %0, !insn.addr !12
}

define void @perror.32(i8* %s) local_unnamed_addr {
dec_label_pc_8858:
  call void @perror(i8* %s), !insn.addr !13
  ret void, !insn.addr !13
}

define i32 @fwrite.36(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s) local_unnamed_addr {
dec_label_pc_8864:
  %0 = call i32 @fwrite(i32* %ptr, i32 %size, i32 %n, %_IO_FILE* %s), !insn.addr !14
  ret i32 %0, !insn.addr !14
}

define i8* @strcat.23(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_8870:
  %0 = call i8* @strcat(i8* %dest, i8* %src), !insn.addr !15
  ret i8* %0, !insn.addr !15
}

define i32 @ioctl.24(i32 %fd, i32 %request, ...) local_unnamed_addr {
dec_label_pc_887c:
  %0 = call i32 (i32, i32, ...) @ioctl(i32 %fd, i32 %request), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define i32 @usleep.16(i32 %useconds) local_unnamed_addr {
dec_label_pc_8888:
  %0 = call i32 @usleep(i32 %useconds), !insn.addr !17
  ret i32 %0, !insn.addr !17
}

define i8* @strcpy.3(i8* %dest, i8* %src) local_unnamed_addr {
dec_label_pc_8894:
  %0 = call i8* @strcpy(i8* %dest, i8* %src), !insn.addr !18
  ret i8* %0, !insn.addr !18
}

define i32 @gettimeofday.28(%timeval* %tv, %timezone* %tz) local_unnamed_addr {
dec_label_pc_88a0:
  %0 = call i32 @gettimeofday(%timeval* %tv, %timezone* %tz), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @puts.29(i8* %s) local_unnamed_addr {
dec_label_pc_88ac:
  %0 = call i32 @puts(i8* %s), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @__libc_start_main.15(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini) local_unnamed_addr {
dec_label_pc_88b8:
  %0 = call i32 @__libc_start_main(i32 %main, i32 %argc, i8** %ubp_av, void ()* %init, void ()* %fini, void ()* %rtld_fini), !insn.addr !21
  ret i32 %0, !insn.addr !21
}

define i32 @system.10(i8* %command) local_unnamed_addr {
dec_label_pc_88c4:
  %0 = call i32 @system(i8* %command), !insn.addr !22
  ret i32 %0, !insn.addr !22
}

define void @function_88d0() local_unnamed_addr {
dec_label_pc_88d0:
  call void @__gmon_start__(), !insn.addr !23
  ret void, !insn.addr !23
}

define void @exit.12(i32 %status) local_unnamed_addr {
dec_label_pc_88dc:
  call void @exit(i32 %status), !insn.addr !24
  ret void, !insn.addr !24
}

define i32 @strlen.20(i8* %s) local_unnamed_addr {
dec_label_pc_88e8:
  %0 = call i32 @strlen(i8* %s), !insn.addr !25
  ret i32 %0, !insn.addr !25
}

define i32 @bind.13(i32 %fd, %sockaddr* %addr, i32 %len) local_unnamed_addr {
dec_label_pc_88f4:
  %0 = call i32 @bind(i32 %fd, %sockaddr* %addr, i32 %len), !insn.addr !26
  ret i32 %0, !insn.addr !26
}

define i32* @memset.6(i32* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_8900:
  %0 = call i32* @memset(i32* %s, i32 %c, i32 %n), !insn.addr !27
  ret i32* %0, !insn.addr !27
}

define i8* @strncpy.7(i8* %dest, i8* %src, i32 %n) local_unnamed_addr {
dec_label_pc_890c:
  %0 = call i8* @strncpy(i8* %dest, i8* %src, i32 %n), !insn.addr !28
  ret i8* %0, !insn.addr !28
}

define i32 @access.25(i8* %name, i32 %type) local_unnamed_addr {
dec_label_pc_8918:
  %0 = call i32 @access(i8* %name, i32 %type), !insn.addr !29
  ret i32 %0, !insn.addr !29
}

define i32 @fclose.21(%_IO_FILE* %stream) local_unnamed_addr {
dec_label_pc_8924:
  %0 = call i32 @fclose(%_IO_FILE* %stream), !insn.addr !30
  ret i32 %0, !insn.addr !30
}

define i32 @sendto.26(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len) local_unnamed_addr {
dec_label_pc_8930:
  %0 = call i32 @sendto(i32 %fd, i32* %buf, i32 %n, i32 %flags, %sockaddr* %addr, i32 %addr_len), !insn.addr !31
  ret i32 %0, !insn.addr !31
}

define i32 @htonl.14(i32 %hostlong) local_unnamed_addr {
dec_label_pc_893c:
  %0 = call i32 @htonl(i32 %hostlong), !insn.addr !32
  ret i32 %0, !insn.addr !32
}

define i32 @sprintf.34(i8* %s, i8* %format, ...) local_unnamed_addr {
dec_label_pc_8948:
  %0 = call i32 (i8*, i8*, ...) @sprintf(i8* %s, i8* %format), !insn.addr !33
  ret i32 %0, !insn.addr !33
}

define i32 @socket.17(i32 %domain, i32 %type, i32 %protocol) local_unnamed_addr {
dec_label_pc_8954:
  %0 = call i32 @socket(i32 %domain, i32 %type, i32 %protocol), !insn.addr !34
  ret i32 %0, !insn.addr !34
}

define i32 @strncmp.30(i8* %s1, i8* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_8960:
  %0 = call i32 @strncmp(i8* %s1, i8* %s2, i32 %n), !insn.addr !35
  ret i32 %0, !insn.addr !35
}

define void @abort.11() local_unnamed_addr {
dec_label_pc_896c:
  call void @abort(), !insn.addr !36
  ret void, !insn.addr !36
}

define i32 @close.31(i32 %fd) local_unnamed_addr {
dec_label_pc_8978:
  %0 = call i32 @close(i32 %fd), !insn.addr !37
  ret i32 %0, !insn.addr !37
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8984:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !38
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !38
  %2 = call i32 @__libc_start_main(i32 39064, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 39212 to void ()*), void ()* bitcast (void ()** @global_var_9990 to void ()*), void ()* %1), !insn.addr !38
  call void @abort(), !insn.addr !39
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !39
}

define i32 @function_89c0() local_unnamed_addr {
dec_label_pc_89c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_11e00, align 4, !insn.addr !40
  %3 = icmp eq i32 %2, 0, !insn.addr !41
  br i1 %3, label %4, label %dec_label_pc_89d8, !insn.addr !42

; <label>:4:                                      ; preds = %dec_label_pc_89c0
  ret i32 %1, !insn.addr !42

dec_label_pc_89d8:                                ; preds = %dec_label_pc_89c0
  call void @__gmon_start__(), !insn.addr !43
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !43
}

define i32 @function_89e4(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_89e4:
  ret i32 ptrtoint (i8** @global_var_11e10 to i32), !insn.addr !44
}

define i32 @function_8a1c(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8a1c:
  ret i32 ptrtoint (i8** @global_var_11e10 to i32), !insn.addr !45
}

define i32 @function_8a5c() local_unnamed_addr {
dec_label_pc_8a5c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_11e10 to i8*), align 4, !insn.addr !46
  %5 = icmp eq i8 %4, 0, !insn.addr !47
  br i1 %5, label %dec_label_pc_8a70, label %6, !insn.addr !48

; <label>:6:                                      ; preds = %dec_label_pc_8a5c
  ret i32 %3, !insn.addr !48

dec_label_pc_8a70:                                ; preds = %dec_label_pc_8a5c
  %7 = call i32 @function_89e4(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !49
  store i8 1, i8* bitcast (i8** @global_var_11e10 to i8*), align 4, !insn.addr !50
  ret i32 %7, !insn.addr !51

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i8** @global_var_11e10, { 1, 0 }
}

define i32 @function_8a84(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8a84:
  %0 = call i32 @function_8a1c(i32* nonnull @global_var_11c78, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !52
  ret i32 %0, !insn.addr !52
}

define i32 @function_8ab8(i32 %arg1) local_unnamed_addr {
dec_label_pc_8ab8:
  %stack_var_-20 = alloca i32, align 4
  %stack_var_-28 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_-28 to %timeval*, !insn.addr !53
  %1 = call i32 @gettimeofday(%timeval* nonnull %0, %timezone* null), !insn.addr !53
  %2 = bitcast i32* %stack_var_-20 to i8*, !insn.addr !54
  %3 = call i32 (i8*, i8*, ...) @sprintf(i8* nonnull %2, i8* inttoptr (i32 and (i32 ptrtoint ([4 x i8]* @global_var_99a0 to i32), i32 65535) to i8*)), !insn.addr !54
  %4 = inttoptr i32 %arg1 to i32*, !insn.addr !55
  %5 = call i32* @memset(i32* %4, i32 0, i32 10), !insn.addr !55
  %6 = call i32 @strlen(i8* nonnull %2), !insn.addr !56
  %7 = sub i32 6, %6, !insn.addr !57
  %8 = urem i32 %7, 256, !insn.addr !58
  %9 = icmp eq i32 %8, 0, !insn.addr !59
  br i1 %9, label %dec_label_pc_8b48, label %dec_label_pc_8b34, !insn.addr !60

dec_label_pc_8b34:                                ; preds = %dec_label_pc_8ab8
  %10 = call i32* @memset(i32* %4, i32 48, i32 %8), !insn.addr !61
  br label %dec_label_pc_8b48, !insn.addr !61

dec_label_pc_8b48:                                ; preds = %dec_label_pc_8b34, %dec_label_pc_8ab8
  %11 = inttoptr i32 %arg1 to i8*, !insn.addr !62
  %12 = call i8* @strcat(i8* %11, i8* nonnull %2), !insn.addr !62
  ret i32 %arg1, !insn.addr !63

; uselistorder directives
  uselistorder i32 %8, { 1, 0 }
  uselistorder i32 %arg1, { 1, 0, 2 }
}

define i32 @function_8b68(i32 %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_8b68:
  %0 = alloca i32
  %r3.0.reg2mem = alloca i32, !insn.addr !64
  %1 = load i32, i32* %0
  %stack_var_-60 = alloca i32, align 4
  %2 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !65
  %3 = icmp eq i32 %2, -1, !insn.addr !66
  br i1 %3, label %dec_label_pc_8b9c, label %dec_label_pc_8bb0, !insn.addr !67

dec_label_pc_8b9c:                                ; preds = %dec_label_pc_8b68
  call void @perror(i8* inttoptr (i32 and (i32 ptrtoint ([7 x i8]* @global_var_99a4 to i32), i32 65535) to i8*)), !insn.addr !68
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_8c38, !insn.addr !69

dec_label_pc_8bb0:                                ; preds = %dec_label_pc_8b68
  %4 = bitcast i32* %stack_var_-60 to i8*, !insn.addr !70
  %5 = inttoptr i32 %arg1 to i8*, !insn.addr !70
  %6 = call i8* @strncpy(i8* nonnull %4, i8* %5, i32 20), !insn.addr !70
  %7 = call i32 (i32, i32, ...) @ioctl(i32 %2, i32 35093), !insn.addr !71
  %8 = icmp slt i32 %7, 0, !insn.addr !72
  br i1 %8, label %dec_label_pc_8bec, label %dec_label_pc_8c04, !insn.addr !73

dec_label_pc_8bec:                                ; preds = %dec_label_pc_8bb0
  %9 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([21 x i8]* @global_var_99ac to i32), i32 65535) to i8*)), !insn.addr !74
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !75
  br label %dec_label_pc_8c38, !insn.addr !75

dec_label_pc_8c04:                                ; preds = %dec_label_pc_8bb0
  %10 = insertvalue %in_addr undef, i32 %1, 0, !insn.addr !76
  %11 = call i8* @inet_ntoa(%in_addr %10), !insn.addr !76
  %12 = bitcast i32* %arg2 to i8*, !insn.addr !77
  %13 = call i8* @strcpy(i8* %12, i8* %11), !insn.addr !77
  %14 = call i32 @close(i32 %2), !insn.addr !78
  store i32 1, i32* %r3.0.reg2mem, !insn.addr !79
  br label %dec_label_pc_8c38, !insn.addr !79

dec_label_pc_8c38:                                ; preds = %dec_label_pc_8c04, %dec_label_pc_8bec, %dec_label_pc_8b9c
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !80
}

define i32 @function_8c44(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8c44:
  %stack_var_-48 = alloca i32, align 4
  %0 = call i32* @calloc(i32 40, i32 1), !insn.addr !81
  %1 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !82
  %2 = icmp slt i32 %1, 0, !insn.addr !83
  br i1 %2, label %dec_label_pc_8c8c, label %dec_label_pc_8ca0, !insn.addr !84

dec_label_pc_8c8c:                                ; preds = %dec_label_pc_8c44
  call void @perror(i8* inttoptr (i32 and (i32 ptrtoint ([7 x i8]* @global_var_99a4 to i32), i32 65535) to i8*)), !insn.addr !85
  call void @exit(i32 0), !insn.addr !86
  unreachable, !insn.addr !86

dec_label_pc_8ca0:                                ; preds = %dec_label_pc_8c44
  %3 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !87
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !87
  %5 = call i8* @strcpy(i8* nonnull %3, i8* %4), !insn.addr !87
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %1, i32 35111), !insn.addr !88
  %7 = icmp slt i32 %6, 0, !insn.addr !89
  br i1 %7, label %dec_label_pc_8cd0, label %dec_label_pc_8ce4, !insn.addr !90

dec_label_pc_8cd0:                                ; preds = %dec_label_pc_8ca0
  call void @perror(i8* inttoptr (i32 and (i32 ptrtoint ([6 x i8]* @global_var_99c4 to i32), i32 65535) to i8*)), !insn.addr !91
  call void @exit(i32 0), !insn.addr !92
  unreachable, !insn.addr !92

dec_label_pc_8ce4:                                ; preds = %dec_label_pc_8ca0
  %8 = bitcast i32* %0 to i8*
  %9 = call i32 @close(i32 %1), !insn.addr !93
  %10 = call i32 (i8*, i8*, ...) @sprintf(i8* %8, i8* inttoptr (i32 and (i32 ptrtoint ([30 x i8]* @global_var_99cc to i32), i32 65535) to i8*)), !insn.addr !94
  %11 = load i32, i32* inttoptr (i32 and (i32 ptrtoint ([5 x i8]* @global_var_99ec to i32), i32 65535) to i32*), align 4, !insn.addr !95
  %12 = inttoptr i32 %arg1 to i32*, !insn.addr !96
  store i32 %11, i32* %12, align 4, !insn.addr !96
  %13 = load i8, i8* inttoptr (i32 add (i32 and (i32 ptrtoint ([5 x i8]* @global_var_99ec to i32), i32 65535), i32 4) to i8*), align 1, !insn.addr !97
  %14 = add i32 %arg1, 4, !insn.addr !98
  %15 = inttoptr i32 %14 to i8*, !insn.addr !98
  store i8 %13, i8* %15, align 1, !insn.addr !98
  %16 = inttoptr i32 %arg1 to i8*, !insn.addr !99
  %17 = call i8* @strcat(i8* %16, i8* %8), !insn.addr !99
  %18 = call i32 @strlen(i8* %16), !insn.addr !100
  %19 = add i32 %18, %arg1, !insn.addr !101
  %20 = load i16, i16* inttoptr (i32 and (i32 ptrtoint (i16** @global_var_99f4 to i32), i32 65535) to i16*), align 4, !insn.addr !102
  %21 = inttoptr i32 %19 to i16*, !insn.addr !103
  store i16 %20, i16* %21, align 2, !insn.addr !103
  call void @free(i32* %0), !insn.addr !104
  ret i32 %arg1, !insn.addr !105

; uselistorder directives
  uselistorder i32 %arg1, { 1, 0, 2, 3, 4 }
}

define i32 @function_8d98(i32* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8d98:
  %stack_var_-48 = alloca i32, align 4
  %0 = call i32* @calloc(i32 40, i32 1), !insn.addr !106
  %1 = call i32 @socket(i32 2, i32 1, i32 0), !insn.addr !107
  %2 = icmp slt i32 %1, 0, !insn.addr !108
  br i1 %2, label %dec_label_pc_8de0, label %dec_label_pc_8df4, !insn.addr !109

dec_label_pc_8de0:                                ; preds = %dec_label_pc_8d98
  call void @perror(i8* inttoptr (i32 and (i32 ptrtoint ([7 x i8]* @global_var_99a4 to i32), i32 65535) to i8*)), !insn.addr !110
  call void @exit(i32 0), !insn.addr !111
  unreachable, !insn.addr !111

dec_label_pc_8df4:                                ; preds = %dec_label_pc_8d98
  %3 = bitcast i32* %stack_var_-48 to i8*, !insn.addr !112
  %4 = inttoptr i32 %arg2 to i8*, !insn.addr !112
  %5 = call i8* @strcpy(i8* nonnull %3, i8* %4), !insn.addr !112
  %6 = call i32 (i32, i32, ...) @ioctl(i32 %1, i32 35111), !insn.addr !113
  %7 = icmp slt i32 %6, 0, !insn.addr !114
  br i1 %7, label %dec_label_pc_8e24, label %dec_label_pc_8e38, !insn.addr !115

dec_label_pc_8e24:                                ; preds = %dec_label_pc_8df4
  call void @perror(i8* inttoptr (i32 and (i32 ptrtoint ([6 x i8]* @global_var_99c4 to i32), i32 65535) to i8*)), !insn.addr !116
  call void @exit(i32 0), !insn.addr !117
  unreachable, !insn.addr !117

dec_label_pc_8e38:                                ; preds = %dec_label_pc_8df4
  %8 = ptrtoint i32* %arg1 to i32
  %9 = bitcast i32* %0 to i8*
  %10 = call i32 @close(i32 %1), !insn.addr !118
  %11 = call i32 (i8*, i8*, ...) @sprintf(i8* %9, i8* inttoptr (i32 and (i32 ptrtoint ([30 x i8]* @global_var_99cc to i32), i32 65535) to i8*)), !insn.addr !119
  %12 = bitcast i32* %arg1 to i8*, !insn.addr !120
  %13 = call i8* @strcpy(i8* %12, i8* %9), !insn.addr !120
  call void @free(i32* %0), !insn.addr !121
  ret i32 %8, !insn.addr !122

; uselistorder directives
  uselistorder i8* %9, { 1, 0 }
  uselistorder i32 (i8*, i8*, ...)* @sprintf, { 0, 2, 1, 3 }
  uselistorder i32 (i32)* @close, { 2, 1, 0, 3 }
  uselistorder i32 (i32, i32, ...)* @ioctl, { 2, 1, 0, 3 }
  uselistorder void (i8*)* @perror, { 4, 3, 2, 1, 0, 5 }
}

define i32 @function_8eac() local_unnamed_addr {
dec_label_pc_8eac:
  %0 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_99f8 to i32), i32 65535) to i8*)), !insn.addr !123
  %1 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_9a20 to i32), i32 65535) to i8*)), !insn.addr !124
  ret i32 %1, !insn.addr !125
}

define i32 @function_8ed0() local_unnamed_addr {
dec_label_pc_8ed0:
  %0 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_9a48 to i32), i32 65535) to i8*)), !insn.addr !126
  %1 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_9a70 to i32), i32 65535) to i8*)), !insn.addr !127
  ret i32 %1, !insn.addr !128
}

define i32 @function_8ef4() local_unnamed_addr {
dec_label_pc_8ef4:
  %0 = alloca i32
  %r3.0.reg2mem = alloca i32, !insn.addr !129
  %1 = load i32, i32* %0
  %2 = call i32 @function_9014(i32 and (i32 ptrtoint ([24 x i8]* @global_var_9a98 to i32), i32 65535)), !insn.addr !130
  %3 = icmp eq i32 %2, 0, !insn.addr !131
  br i1 %3, label %dec_label_pc_8f20, label %dec_label_pc_8f98, !insn.addr !132

dec_label_pc_8f20:                                ; preds = %dec_label_pc_8ef4
  %4 = call %_IO_FILE* @fopen(i8* inttoptr (i32 and (i32 ptrtoint ([23 x i8]* @global_var_9ab0 to i32), i32 65535) to i8*), i8* inttoptr (i32 and (i32 ptrtoint (i8** @global_var_9ac8 to i32), i32 65535) to i8*)), !insn.addr !133
  %5 = icmp eq %_IO_FILE* %4, null, !insn.addr !134
  br i1 %5, label %dec_label_pc_8f4c, label %dec_label_pc_8f60, !insn.addr !135

dec_label_pc_8f4c:                                ; preds = %dec_label_pc_8f20
  %6 = call i32 @puts(i8* inttoptr (i32 and (i32 ptrtoint ([22 x i8]* @global_var_9acc to i32), i32 65535) to i8*)), !insn.addr !136
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !137
  br label %dec_label_pc_9008, !insn.addr !137

dec_label_pc_8f60:                                ; preds = %dec_label_pc_8f20
  %7 = call i32 @fwrite(i32* inttoptr (i32 and (i32 ptrtoint ([4 x i8]* @global_var_9ae4 to i32), i32 65535) to i32*), i32 3, i32 1, %_IO_FILE* nonnull %4), !insn.addr !138
  %8 = icmp eq i32 %7, 1, !insn.addr !139
  br i1 %8, label %dec_label_pc_8f90, label %dec_label_pc_8f84, !insn.addr !140

dec_label_pc_8f84:                                ; preds = %dec_label_pc_8f60
  %9 = call i32 @puts(i8* inttoptr (i32 and (i32 ptrtoint ([18 x i8]* @global_var_9ae8 to i32), i32 65535) to i8*)), !insn.addr !141
  br label %dec_label_pc_8f90, !insn.addr !141

dec_label_pc_8f90:                                ; preds = %dec_label_pc_8f84, %dec_label_pc_8f60
  %10 = call i32 @fclose(%_IO_FILE* nonnull %4), !insn.addr !142
  br label %dec_label_pc_8f98, !insn.addr !142

dec_label_pc_8f98:                                ; preds = %dec_label_pc_8ef4, %dec_label_pc_8f90
  %11 = call %_IO_FILE* @fopen(i8* inttoptr (i32 and (i32 ptrtoint ([30 x i8]* @global_var_9afc to i32), i32 65535) to i8*), i8* inttoptr (i32 and (i32 ptrtoint (i8** @global_var_9b1c to i32), i32 65535) to i8*)), !insn.addr !143
  %12 = icmp eq %_IO_FILE* %11, null, !insn.addr !144
  br i1 %12, label %dec_label_pc_8fbc, label %dec_label_pc_8fd0, !insn.addr !145

dec_label_pc_8fbc:                                ; preds = %dec_label_pc_8f98
  %13 = call i32 @puts(i8* inttoptr (i32 and (i32 ptrtoint ([34 x i8]* @global_var_9b20 to i32), i32 65535) to i8*)), !insn.addr !146
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !147
  br label %dec_label_pc_9008, !insn.addr !147

dec_label_pc_8fd0:                                ; preds = %dec_label_pc_8f98
  %14 = call i32 (%_IO_FILE*, i8*, ...) @fscanf(%_IO_FILE* nonnull %11, i8* inttoptr (i32 and (i32 ptrtoint ([3 x i8]* @global_var_9b44 to i32), i32 65535) to i8*)), !insn.addr !148
  %15 = call i32 @fclose(%_IO_FILE* nonnull %11), !insn.addr !149
  %16 = icmp ne i32 %1, 0, !insn.addr !150
  %. = zext i1 %16 to i32
  store i32 %., i32* %r3.0.reg2mem, !insn.addr !151
  br label %dec_label_pc_9008, !insn.addr !151

dec_label_pc_9008:                                ; preds = %dec_label_pc_8fd0, %dec_label_pc_8fbc, %dec_label_pc_8f4c
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !152

; uselistorder directives
  uselistorder %_IO_FILE* %11, { 1, 0, 2 }
  uselistorder i32 (%_IO_FILE*)* @fclose, { 1, 0, 2 }
  uselistorder %_IO_FILE* (i8*, i8*)* @fopen, { 1, 0, 2 }
  uselistorder label %dec_label_pc_8f98, { 1, 0 }
}

define i32 @function_9014(i32 %arg1) local_unnamed_addr {
dec_label_pc_9014:
  %0 = inttoptr i32 %arg1 to i8*, !insn.addr !153
  %1 = call i32 @access(i8* %0, i32 0), !insn.addr !153
  %2 = icmp eq i32 %1, 0, !insn.addr !154
  %r3.1 = zext i1 %2 to i32
  ret i32 %r3.1, !insn.addr !155
}

define i32 @function_9050() local_unnamed_addr {
dec_label_pc_9050:
  %storemerge1.reg2mem = alloca i32, !insn.addr !156
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_9070

dec_label_pc_9070:                                ; preds = %dec_label_pc_9050, %dec_label_pc_9070
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %0 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_9a70 to i32), i32 65535) to i8*)), !insn.addr !157
  %1 = call i32 @usleep(i32 50000), !insn.addr !158
  %2 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_9a20 to i32), i32 65535) to i8*)), !insn.addr !159
  %3 = call i32 @usleep(i32 50000), !insn.addr !160
  %4 = add i32 %storemerge1.reload, 1, !insn.addr !161
  %5 = icmp ult i32 %4, 2, !insn.addr !162
  %6 = icmp ne i1 %5, true, !insn.addr !162
  %7 = icmp eq i32 %4, 2, !insn.addr !162
  %8 = icmp ne i1 %6, true, !insn.addr !163
  %9 = or i1 %7, %8, !insn.addr !163
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !163
  br i1 %9, label %dec_label_pc_9070, label %dec_label_pc_90b0, !insn.addr !163

dec_label_pc_90b0:                                ; preds = %dec_label_pc_9070
  ret i32 %4, !insn.addr !164

; uselistorder directives
  uselistorder i32 %4, { 1, 0, 3, 2 }
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_9070, { 1, 0 }
}

define i32 @function_90bc() local_unnamed_addr {
dec_label_pc_90bc:
  %storemerge1.reg2mem = alloca i32, !insn.addr !165
  store i32 0, i32* %storemerge1.reg2mem
  br label %dec_label_pc_90d4

dec_label_pc_90d4:                                ; preds = %dec_label_pc_90bc, %dec_label_pc_90d4
  %storemerge1.reload = load i32, i32* %storemerge1.reg2mem
  %0 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_9a48 to i32), i32 65535) to i8*)), !insn.addr !166
  %1 = call i32 @usleep(i32 50000), !insn.addr !167
  %2 = call i32 @system(i8* inttoptr (i32 and (i32 ptrtoint ([38 x i8]* @global_var_99f8 to i32), i32 65535) to i8*)), !insn.addr !168
  %3 = call i32 @usleep(i32 50000), !insn.addr !169
  %4 = add nuw nsw i32 %storemerge1.reload, 1, !insn.addr !170
  %5 = icmp ult i32 %4, 3, !insn.addr !171
  store i32 %4, i32* %storemerge1.reg2mem, !insn.addr !171
  br i1 %5, label %dec_label_pc_90d4, label %dec_label_pc_9114, !insn.addr !171

dec_label_pc_9114:                                ; preds = %dec_label_pc_90d4
  ret i32 3, !insn.addr !172

; uselistorder directives
  uselistorder i32* %storemerge1.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*)* @system, { 7, 6, 5, 4, 3, 2, 1, 0, 8 }
  uselistorder label %dec_label_pc_90d4, { 1, 0 }
}

define i32 @function_9120() local_unnamed_addr {
dec_label_pc_9120:
  %r3.0.reg2mem = alloca i32, !insn.addr !173
  %stack_var_-16 = alloca i32, align 4
  %0 = call i32 @socket(i32 2, i32 2, i32 0), !insn.addr !174
  store i32 %0, i32* @global_var_11e0c, align 4, !insn.addr !175
  %1 = icmp eq i32 %0, -1, !insn.addr !176
  br i1 %1, label %dec_label_pc_9160, label %dec_label_pc_9174, !insn.addr !177

dec_label_pc_9160:                                ; preds = %dec_label_pc_9120
  %2 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([13 x i8]* @global_var_9b48 to i32), i32 65535) to i8*)), !insn.addr !178
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !179
  br label %dec_label_pc_92bc, !insn.addr !179

dec_label_pc_9174:                                ; preds = %dec_label_pc_9120
  store i32 1, i32* %stack_var_-16, align 4, !insn.addr !180
  %3 = call i32 @setsockopt(i32 %0, i32 1, i32 6, i32* nonnull %stack_var_-16, i32 4), !insn.addr !181
  %4 = icmp eq i32 %3, -1, !insn.addr !182
  br i1 %4, label %dec_label_pc_91bc, label %dec_label_pc_91d0, !insn.addr !183

dec_label_pc_91bc:                                ; preds = %dec_label_pc_9174
  %5 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([20 x i8]* @global_var_9b58 to i32), i32 65535) to i8*)), !insn.addr !184
  store i32 -1, i32* %r3.0.reg2mem, !insn.addr !185
  br label %dec_label_pc_92bc, !insn.addr !185

dec_label_pc_91d0:                                ; preds = %dec_label_pc_9174
  call void @bzero(i32* bitcast (%sockaddr** @global_var_11e4c to i32*), i32 16), !insn.addr !186
  store i16 2, i16* bitcast (%sockaddr** @global_var_11e4c to i16*), align 4, !insn.addr !187
  %6 = call i32 @htonl(i32 -1), !insn.addr !188
  store i32 %6, i32* @global_var_11e50, align 4, !insn.addr !189
  %7 = call i16 @htons(i16 14235), !insn.addr !190
  store i16 %7, i16* bitcast (i32* @global_var_11e4e to i16*), align 4, !insn.addr !191
  call void @bzero(i32* bitcast (%timeval** @global_var_11e3c to i32*), i32 16), !insn.addr !192
  store i16 2, i16* bitcast (%timeval** @global_var_11e3c to i16*), align 4, !insn.addr !193
  %8 = call i32 @htonl(i32 0), !insn.addr !194
  store i32 %8, i32* @global_var_11e40, align 4, !insn.addr !195
  %9 = call i16 @htons(i16 14236), !insn.addr !196
  store i16 %9, i16* bitcast (i32* @global_var_11e3e to i16*), align 4, !insn.addr !197
  %10 = load i32, i32* @global_var_11e0c, align 4, !insn.addr !198
  %11 = call i32 @bind(i32 %10, %sockaddr* bitcast (%timeval** @global_var_11e3c to %sockaddr*), i32 16), !insn.addr !199
  %12 = icmp eq i32 %11, -1, !insn.addr !200
  store i32 %11, i32* %r3.0.reg2mem, !insn.addr !201
  br i1 %12, label %dec_label_pc_92a4, label %dec_label_pc_92bc, !insn.addr !201

dec_label_pc_92a4:                                ; preds = %dec_label_pc_91d0
  %13 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([14 x i8]* @global_var_9b6c to i32), i32 65535) to i8*)), !insn.addr !202
  store i32 0, i32* %r3.0.reg2mem, !insn.addr !203
  br label %dec_label_pc_92bc, !insn.addr !203

dec_label_pc_92bc:                                ; preds = %dec_label_pc_91d0, %dec_label_pc_92a4, %dec_label_pc_91bc, %dec_label_pc_9160
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  ret i32 %r3.0.reload, !insn.addr !204

; uselistorder directives
  uselistorder i32* %r3.0.reg2mem, { 0, 2, 1, 3, 4 }
  uselistorder i16 (i16)* @htons, { 1, 0, 2 }
  uselistorder i32 (i32)* @htonl, { 1, 0, 2 }
  uselistorder void (i32*, i32)* @bzero, { 1, 0, 2 }
  uselistorder i32 (i32, i32, i32)* @socket, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_92bc, { 1, 0, 2, 3 }
}

define i32 @function_92c8() local_unnamed_addr {
dec_label_pc_92c8:
  %stack_var_-120 = alloca i32, align 4
  %stack_var_-192 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %0 = call i32* @memset(i32* nonnull %stack_var_-152, i32 0, i32 30), !insn.addr !205
  %1 = call i32* @memset(i32* nonnull %stack_var_-192, i32 0, i32 40), !insn.addr !206
  %2 = call i32* @memset(i32* nonnull %stack_var_-120, i32 0, i32 100), !insn.addr !207
  %3 = call i32 @function_8b68(i32 and (i32 ptrtoint ([5 x i8]* @global_var_9b7c to i32), i32 65535), i32* nonnull %stack_var_-192), !insn.addr !208
  %4 = icmp eq i32 %3, 0, !insn.addr !209
  br i1 %4, label %dec_label_pc_9330, label %dec_label_pc_933c, !insn.addr !210

dec_label_pc_9330:                                ; preds = %dec_label_pc_92c8
  %5 = call i32 @puts(i8* inttoptr (i32 and (i32 ptrtoint ([13 x i8]* @global_var_9b84 to i32), i32 65535) to i8*)), !insn.addr !211
  br label %dec_label_pc_933c, !insn.addr !211

dec_label_pc_933c:                                ; preds = %dec_label_pc_92c8, %dec_label_pc_9330
  %6 = call i32 @function_8d98(i32* nonnull %stack_var_-152, i32 and (i32 ptrtoint ([5 x i8]* @global_var_9b7c to i32), i32 65535)), !insn.addr !212
  %7 = bitcast i32* %stack_var_-152 to i8*, !insn.addr !213
  %8 = call i32 @strlen(i8* nonnull %7), !insn.addr !213
  %9 = call i8* @strncpy(i8* bitcast (i8** @global_var_11e18 to i8*), i8* nonnull %7, i32 %8), !insn.addr !214
  %10 = bitcast i32* %stack_var_-120 to i8*, !insn.addr !215
  %11 = bitcast i32* %stack_var_-192 to i8*, !insn.addr !215
  %12 = call i8* @strcpy(i8* nonnull %10, i8* nonnull %11), !insn.addr !215
  %13 = call i32 @strlen(i8* nonnull %10), !insn.addr !216
  %14 = ptrtoint i32* %stack_var_-120 to i32, !insn.addr !217
  %15 = add i32 %13, %14, !insn.addr !218
  %16 = load i16, i16* inttoptr (i32 and (i32 ptrtoint (i16** @global_var_9b94 to i32), i32 65535) to i16*), align 4, !insn.addr !219
  %17 = inttoptr i32 %15 to i16*, !insn.addr !220
  store i16 %16, i16* %17, align 2, !insn.addr !220
  %18 = call i8* @strcat(i8* nonnull %10, i8* nonnull %7), !insn.addr !221
  %19 = load i32, i32* @global_var_11e0c, align 4, !insn.addr !222
  %20 = call i32 @strlen(i8* nonnull %10), !insn.addr !223
  %21 = call i32 @sendto(i32 %19, i32* nonnull %stack_var_-120, i32 %20, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_11e4c to %sockaddr*), i32 16), !insn.addr !224
  %22 = icmp slt i32 %21, 0, !insn.addr !225
  br i1 %22, label %dec_label_pc_9418, label %dec_label_pc_9428, !insn.addr !226

dec_label_pc_9418:                                ; preds = %dec_label_pc_933c
  %23 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([15 x i8]* @global_var_9b98 to i32), i32 65535) to i8*)), !insn.addr !227
  br label %dec_label_pc_943c, !insn.addr !228

dec_label_pc_9428:                                ; preds = %dec_label_pc_933c
  %24 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([16 x i8]* @global_var_9ba8 to i32), i32 65535) to i8*)), !insn.addr !229
  br label %dec_label_pc_943c, !insn.addr !229

dec_label_pc_943c:                                ; preds = %dec_label_pc_9428, %dec_label_pc_9418
  ret i32 1, !insn.addr !230

; uselistorder directives
  uselistorder i32* %stack_var_-120, { 0, 3, 1, 2 }
  uselistorder i8* (i8*, i8*)* @strcat, { 2, 1, 0, 3 }
  uselistorder i8* (i8*, i8*)* @strcpy, { 1, 2, 0, 4, 3, 5 }
  uselistorder i8* (i8*, i8*, i32)* @strncpy, { 1, 0, 2 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 4, 3, 2, 1, 0, 5 }
  uselistorder label %dec_label_pc_933c, { 1, 0 }
}

define i32 @function_944c(i32 %arg1) local_unnamed_addr {
dec_label_pc_944c:
  %0 = load i32, i32* @global_var_11e0c, align 4, !insn.addr !231
  %1 = inttoptr i32 %arg1 to i32*, !insn.addr !232
  %2 = call i32 @sendto(i32 %0, i32* %1, i32 10, i32 0, %sockaddr* bitcast (%sockaddr** @global_var_11e4c to %sockaddr*), i32 16), !insn.addr !232
  %3 = icmp slt i32 %2, 0, !insn.addr !233
  br i1 %3, label %dec_label_pc_94a0, label %dec_label_pc_94b0, !insn.addr !234

dec_label_pc_94a0:                                ; preds = %dec_label_pc_944c
  %4 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([15 x i8]* @global_var_9b98 to i32), i32 65535) to i8*)), !insn.addr !235
  br label %dec_label_pc_94bc, !insn.addr !236

dec_label_pc_94b0:                                ; preds = %dec_label_pc_944c
  %5 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([15 x i8]* @global_var_9bb8 to i32), i32 65535) to i8*)), !insn.addr !237
  br label %dec_label_pc_94bc, !insn.addr !237

dec_label_pc_94bc:                                ; preds = %dec_label_pc_94b0, %dec_label_pc_94a0
  ret i32 %2, !insn.addr !238

; uselistorder directives
  uselistorder i32 (i32, i32*, i32, i32, %sockaddr*, i32)* @sendto, { 1, 0, 2 }
}

define i32 @function_94c8() local_unnamed_addr {
dec_label_pc_94c8:
  %r3.2.reg2mem = alloca i32, !insn.addr !239
  %.reg2mem = alloca i32, !insn.addr !239
  %storemerge4.reg2mem = alloca i32, !insn.addr !239
  %stack_var_-164 = alloca i32, align 4
  %stack_var_-152 = alloca i32, align 4
  %stack_var_-160 = alloca i32, align 4
  %stack_var_-8 = alloca i32, align 4
  store i32 2, i32* %stack_var_-160, align 4, !insn.addr !240
  %0 = ptrtoint i32* %stack_var_-152 to i32, !insn.addr !241
  store i32 0, i32* %storemerge4.reg2mem
  br label %dec_label_pc_94f8

dec_label_pc_94f8:                                ; preds = %dec_label_pc_94c8, %dec_label_pc_94f8
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = mul i32 %storemerge4.reload, 4, !insn.addr !242
  %2 = add i32 %1, %0, !insn.addr !242
  %3 = inttoptr i32 %2 to i32*, !insn.addr !242
  store i32 0, i32* %3, align 4, !insn.addr !242
  %4 = add i32 %storemerge4.reload, 1, !insn.addr !243
  %5 = icmp ult i32 %4, 31, !insn.addr !244
  %6 = icmp ne i1 %5, true, !insn.addr !244
  %7 = icmp eq i32 %4, 31, !insn.addr !244
  %8 = icmp ne i1 %6, true, !insn.addr !245
  %9 = or i1 %7, %8, !insn.addr !245
  store i32 %4, i32* %storemerge4.reg2mem, !insn.addr !245
  br i1 %9, label %dec_label_pc_94f8, label %dec_label_pc_9520, !insn.addr !245

dec_label_pc_9520:                                ; preds = %dec_label_pc_94f8
  %10 = load i32, i32* @global_var_11e0c, align 4, !insn.addr !246
  %11 = icmp slt i32 %10, 0, !insn.addr !247
  %12 = add i32 %10, 31
  %spec.select = select i1 %11, i32 %12, i32 %10
  %13 = ashr i32 %spec.select, 5, !insn.addr !248
  %14 = mul i32 %13, 4, !insn.addr !249
  %15 = ptrtoint i32* %stack_var_-8 to i32, !insn.addr !250
  %16 = add i32 %15, -144
  %17 = add i32 %14, %16, !insn.addr !251
  %18 = inttoptr i32 %17 to i32*, !insn.addr !252
  %19 = load i32, i32* %18, align 4, !insn.addr !252
  %20 = urem i32 %10, 32
  %21 = shl i32 1, %20, !insn.addr !253
  %22 = or i32 %21, %19, !insn.addr !254
  store i32 %22, i32* %18, align 4, !insn.addr !255
  %23 = call i32* @calloc(i32 30, i32 1), !insn.addr !256
  %24 = load i32, i32* @global_var_11e0c, align 4, !insn.addr !257
  %25 = add i32 %24, 1, !insn.addr !258
  %26 = bitcast i32* %stack_var_-160 to %timeval*
  %27 = bitcast i32* %stack_var_-152 to %_TYPEDEF_fd_set*, !insn.addr !259
  %28 = call i32 @select(i32 %25, %_TYPEDEF_fd_set* nonnull %27, %_TYPEDEF_fd_set* null, %_TYPEDEF_fd_set* null, %timeval* nonnull %26), !insn.addr !259
  switch i32 %28, label %dec_label_pc_9628 [
    i32 -1, label %dec_label_pc_9600
    i32 0, label %dec_label_pc_9608
  ]

dec_label_pc_9600:                                ; preds = %dec_label_pc_9520
  call void @exit(i32 -1), !insn.addr !260
  unreachable, !insn.addr !260

dec_label_pc_9608:                                ; preds = %dec_label_pc_9520
  %29 = load i32, i32* @global_var_11e38, align 4, !insn.addr !261
  %30 = add i32 %29, 1, !insn.addr !262
  store i32 %30, i32* @global_var_11e38, align 4, !insn.addr !263
  store i32 %30, i32* %.reg2mem, !insn.addr !264
  br label %dec_label_pc_97b4, !insn.addr !264

dec_label_pc_9628:                                ; preds = %dec_label_pc_9520
  %31 = load i32, i32* @global_var_11e0c, align 4, !insn.addr !265
  %32 = icmp slt i32 %31, 0, !insn.addr !266
  %33 = add i32 %31, 31
  %spec.select3 = select i1 %32, i32 %33, i32 %31
  %34 = ashr i32 %spec.select3, 5, !insn.addr !267
  %35 = mul i32 %34, 4, !insn.addr !268
  %36 = add i32 %35, %16, !insn.addr !269
  %37 = inttoptr i32 %36 to i32*, !insn.addr !270
  %38 = load i32, i32* %37, align 4, !insn.addr !270
  %39 = urem i32 %31, 32
  %40 = shl i32 1, %39
  %41 = and i32 %40, %38
  %42 = icmp eq i32 %41, 0, !insn.addr !271
  br i1 %42, label %dec_label_pc_97b4thread-pre-split, label %dec_label_pc_9690, !insn.addr !272

dec_label_pc_9690:                                ; preds = %dec_label_pc_9628
  store i32 16, i32* %stack_var_-164, align 4, !insn.addr !273
  %43 = call i32 @recvfrom(i32 %31, i32* %23, i32 30, i32 0, %sockaddr* bitcast (%timeval** @global_var_11e3c to %sockaddr*), i32* nonnull %stack_var_-164), !insn.addr !274
  %44 = icmp sgt i32 %43, 0, !insn.addr !275
  br i1 %44, label %dec_label_pc_9708, label %dec_label_pc_96dc, !insn.addr !275

dec_label_pc_96dc:                                ; preds = %dec_label_pc_9690
  %45 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([15 x i8]* @global_var_9bc8 to i32), i32 65535) to i8*)), !insn.addr !276
  %46 = load i32, i32* @global_var_11e38, align 4, !insn.addr !277
  %47 = add i32 %46, 1, !insn.addr !278
  store i32 %47, i32* @global_var_11e38, align 4, !insn.addr !279
  store i32 %47, i32* %.reg2mem, !insn.addr !280
  br label %dec_label_pc_97b4, !insn.addr !280

dec_label_pc_9708:                                ; preds = %dec_label_pc_9690
  %48 = bitcast i32* %23 to i8*
  %49 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([9 x i8]* @global_var_9bd8 to i32), i32 65535) to i8*)), !insn.addr !281
  store i32 0, i32* @global_var_11e38, align 4, !insn.addr !282
  %50 = call i32 @strlen(i8* bitcast (i8** @global_var_11e18 to i8*)), !insn.addr !283
  %51 = call i32 @strncmp(i8* %48, i8* bitcast (i8** @global_var_11e18 to i8*), i32 %50), !insn.addr !284
  %52 = icmp eq i32 %51, 0, !insn.addr !285
  br i1 %52, label %dec_label_pc_9758, label %dec_label_pc_9784, !insn.addr !286

dec_label_pc_9758:                                ; preds = %dec_label_pc_9708
  %53 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([15 x i8]* @global_var_9be4 to i32), i32 65535) to i8*)), !insn.addr !287
  %54 = call i32 @function_9050(), !insn.addr !288
  %55 = call i32 @function_944c(i32 and (i32 ptrtoint ([3 x i8]* @global_var_9bf4 to i32), i32 65535)), !insn.addr !289
  call void @free(i32* %23), !insn.addr !290
  store i32 1, i32* %r3.2.reg2mem, !insn.addr !291
  br label %dec_label_pc_9800, !insn.addr !291

dec_label_pc_9784:                                ; preds = %dec_label_pc_9708
  %56 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([15 x i8]* @global_var_9bf8 to i32), i32 65535) to i8*)), !insn.addr !292
  %57 = call i32 @function_90bc(), !insn.addr !293
  %58 = call i32 @function_944c(i32 and (i32 ptrtoint ([6 x i8]* @global_var_9c08 to i32), i32 65535)), !insn.addr !294
  call void @free(i32* %23), !insn.addr !295
  store i32 0, i32* %r3.2.reg2mem, !insn.addr !296
  br label %dec_label_pc_9800, !insn.addr !296

dec_label_pc_97b4thread-pre-split:                ; preds = %dec_label_pc_9628
  %.pr = load i32, i32* @global_var_11e38, align 4
  store i32 %.pr, i32* %.reg2mem
  br label %dec_label_pc_97b4

dec_label_pc_97b4:                                ; preds = %dec_label_pc_97b4thread-pre-split, %dec_label_pc_96dc, %dec_label_pc_9608
  %.reload = load i32, i32* %.reg2mem, !insn.addr !297
  %59 = icmp eq i32 %.reload, 5, !insn.addr !298
  br i1 %59, label %dec_label_pc_97c8, label %dec_label_pc_97f4, !insn.addr !299

dec_label_pc_97c8:                                ; preds = %dec_label_pc_97b4
  store i32 0, i32* @global_var_11e38, align 4, !insn.addr !300
  %60 = call i32 @puts(i8* inttoptr (i32 and (i32 ptrtoint ([9 x i8]* @global_var_9c10 to i32), i32 65535) to i8*)), !insn.addr !301
  call void @free(i32* %23), !insn.addr !302
  store i32 1, i32* %r3.2.reg2mem, !insn.addr !303
  br label %dec_label_pc_9800, !insn.addr !303

dec_label_pc_97f4:                                ; preds = %dec_label_pc_97b4
  call void @free(i32* %23), !insn.addr !304
  store i32 0, i32* %r3.2.reg2mem, !insn.addr !305
  br label %dec_label_pc_9800, !insn.addr !305

dec_label_pc_9800:                                ; preds = %dec_label_pc_97f4, %dec_label_pc_97c8, %dec_label_pc_9784, %dec_label_pc_9758
  %r3.2.reload = load i32, i32* %r3.2.reg2mem
  ret i32 %r3.2.reload, !insn.addr !306

; uselistorder directives
  uselistorder i32 %31, { 1, 0, 2, 3, 4 }
  uselistorder i32* %23, { 3, 2, 1, 0, 5, 4 }
  uselistorder i32 %4, { 0, 2, 1 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %r3.2.reg2mem, { 0, 3, 4, 1, 2 }
  uselistorder void (i32*)* @free, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i32)* @function_944c, { 1, 0 }
  uselistorder i32 (i8*)* @strlen, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32* @global_var_11e38, { 3, 0, 2, 4, 5, 1, 6 }
  uselistorder void (i32)* @exit, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32* (i32, i32)* @calloc, { 2, 1, 0, 3 }
  uselistorder i32 -1, { 11, 6, 7, 12, 0, 8, 1, 9, 2, 3, 4, 5, 10, 13 }
  uselistorder i32* @global_var_11e0c, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i32 4, { 0, 1, 2, 3, 5, 4 }
  uselistorder label %dec_label_pc_94f8, { 1, 0 }
}

define i32 @function_980c() local_unnamed_addr {
dec_label_pc_980c:
  %storemerge.reg2mem = alloca i32, !insn.addr !307
  %stack_var_-16.0.reg2mem = alloca i32, !insn.addr !307
  %stack_var_-16.12.reg2mem = alloca i32, !insn.addr !307
  %storemerge13.reg2mem = alloca i32, !insn.addr !307
  store i32 0, i32* %storemerge13.reg2mem
  store i32 0, i32* %stack_var_-16.12.reg2mem
  br label %dec_label_pc_9834

dec_label_pc_9834:                                ; preds = %dec_label_pc_980c, %dec_label_pc_9858
  %stack_var_-16.12.reload = load i32, i32* %stack_var_-16.12.reg2mem
  %storemerge13.reload = load i32, i32* %storemerge13.reg2mem
  %0 = call i32 @function_8ef4(), !insn.addr !308
  %1 = icmp eq i32 %0, 0, !insn.addr !309
  store i32 %stack_var_-16.12.reload, i32* %stack_var_-16.0.reg2mem, !insn.addr !310
  br i1 %1, label %dec_label_pc_9844, label %dec_label_pc_9858, !insn.addr !310

dec_label_pc_9844:                                ; preds = %dec_label_pc_9834
  %2 = call i32 @usleep(i32 20000), !insn.addr !311
  %3 = add i32 %stack_var_-16.12.reload, 1, !insn.addr !312
  store i32 %3, i32* %stack_var_-16.0.reg2mem, !insn.addr !313
  br label %dec_label_pc_9858, !insn.addr !313

dec_label_pc_9858:                                ; preds = %dec_label_pc_9834, %dec_label_pc_9844
  %stack_var_-16.0.reload = load i32, i32* %stack_var_-16.0.reg2mem
  %4 = add nuw nsw i32 %storemerge13.reload, 1, !insn.addr !314
  %5 = icmp ult i32 %4, 5, !insn.addr !315
  store i32 %4, i32* %storemerge13.reg2mem, !insn.addr !315
  store i32 %stack_var_-16.0.reload, i32* %stack_var_-16.12.reg2mem, !insn.addr !315
  br i1 %5, label %dec_label_pc_9834, label %dec_label_pc_9870, !insn.addr !315

dec_label_pc_9870:                                ; preds = %dec_label_pc_9858
  %6 = icmp eq i32 %stack_var_-16.0.reload, 5, !insn.addr !316
  store i32 0, i32* %storemerge.reg2mem, !insn.addr !317
  br i1 %6, label %dec_label_pc_987c, label %dec_label_pc_988c, !insn.addr !317

dec_label_pc_987c:                                ; preds = %dec_label_pc_9870
  %7 = call i32 @function_8ed0(), !insn.addr !318
  store i32 1, i32* %storemerge.reg2mem, !insn.addr !319
  br label %dec_label_pc_988c, !insn.addr !319

dec_label_pc_988c:                                ; preds = %dec_label_pc_9870, %dec_label_pc_987c
  %storemerge.reload = load i32, i32* %storemerge.reg2mem
  ret i32 %storemerge.reload, !insn.addr !320

; uselistorder directives
  uselistorder i32 %stack_var_-16.12.reload, { 1, 0 }
  uselistorder i32* %storemerge13.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.12.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-16.0.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_988c, { 1, 0 }
  uselistorder label %dec_label_pc_9858, { 1, 0 }
  uselistorder label %dec_label_pc_9834, { 1, 0 }
}

define i32 @function_9898(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_9898:
  %0 = call i32 (i8*, ...) @printf(i8* inttoptr (i32 and (i32 ptrtoint ([30 x i8]* @global_var_9c1c to i32), i32 65535) to i8*)), !insn.addr !321
  %1 = call i32 @function_9120(), !insn.addr !322
  br label %dec_label_pc_98dc, !insn.addr !322

dec_label_pc_98dc:                                ; preds = %dec_label_pc_98dc.backedge, %dec_label_pc_9898
  %2 = call i32 @function_980c(), !insn.addr !323
  %3 = icmp eq i32 %2, 1, !insn.addr !324
  br i1 %3, label %dec_label_pc_98f4, label %dec_label_pc_991c, !insn.addr !325

dec_label_pc_98f4:                                ; preds = %dec_label_pc_98dc, %dec_label_pc_98f4
  %4 = call i32 @puts(i8* inttoptr (i32 and (i32 ptrtoint ([14 x i8]* @global_var_9c54 to i32), i32 65535) to i8*)), !insn.addr !326
  %5 = call i32 @function_92c8(), !insn.addr !327
  %6 = call i32 @function_94c8(), !insn.addr !328
  %7 = icmp eq i32 %6, 1, !insn.addr !329
  br i1 %7, label %dec_label_pc_98dc.backedge, label %dec_label_pc_98f4, !insn.addr !330

dec_label_pc_991c:                                ; preds = %dec_label_pc_98dc
  %8 = call i32 @usleep(i32 400000), !insn.addr !331
  br label %dec_label_pc_98dc.backedge, !insn.addr !332

dec_label_pc_98dc.backedge:                       ; preds = %dec_label_pc_98f4, %dec_label_pc_991c
  br label %dec_label_pc_98dc

; uselistorder directives
  uselistorder i32 (i32)* @usleep, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*)* @puts, { 5, 4, 3, 2, 1, 0, 6 }
  uselistorder i32 (i8*, ...)* @printf, { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 13 }
  uselistorder i32 65535, { 0, 1, 7, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38 }
  uselistorder label %dec_label_pc_98dc.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_98f4, { 1, 0 }
}

define i32 @function_992c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_992c:
  %0 = call i32 @function_87b4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !333
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_8328 to i32), i32 39244), i32 add (i32 ptrtoint (i32* @global_var_9954 to i32), i32 ptrtoint (i32* @global_var_831c to i32))), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !334

; uselistorder directives
  uselistorder i32 2, { 0, 1, 2, 3, 8, 9, 4, 5, 6, 7 }
  uselistorder i32 0, { 10, 0, 48, 1, 2, 4, 15, 3, 49, 16, 17, 18, 50, 51, 9, 52, 19, 5, 53, 20, 54, 21, 55, 22, 23, 24, 6, 25, 26, 7, 8, 56, 27, 57, 58, 28, 59, 29, 60, 30, 31, 61, 32, 62, 33, 63, 34, 64, 35, 65, 11, 12, 13, 14, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47 }
}

define i32 @function_9990() local_unnamed_addr {
dec_label_pc_9990:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !335

; uselistorder directives
  uselistorder i32 1, { 4, 47, 48, 5, 49, 50, 9, 8, 7, 6, 11, 10, 51, 22, 52, 54, 23, 24, 53, 36, 35, 34, 33, 14, 13, 12, 21, 39, 38, 37, 25, 26, 40, 15, 55, 16, 56, 17, 57, 27, 18, 3, 28, 29, 41, 30, 31, 42, 19, 43, 20, 2, 45, 44, 1, 0, 46, 32 }
}

define i32 @function_9994(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_9994:
  ret i32 %arg1, !insn.addr !336
}

declare i32* @calloc(i32, i32) local_unnamed_addr

declare i32 @setsockopt(i32, i32, i32, i32*, i32) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fscanf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare %_IO_FILE* @fopen(i8*, i8*) local_unnamed_addr

declare void @free(i32*) local_unnamed_addr

declare void @bzero(i32*, i32) local_unnamed_addr

declare i8* @inet_ntoa(%in_addr) local_unnamed_addr

declare i32 @select(i32, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %_TYPEDEF_fd_set*, %timeval*) local_unnamed_addr

declare i32 @recvfrom(i32, i32*, i32, i32, %sockaddr*, i32*) local_unnamed_addr

declare i16 @htons(i16) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @fwrite(i32*, i32, i32, %_IO_FILE*) local_unnamed_addr

declare i8* @strcat(i8*, i8*) local_unnamed_addr

declare i32 @ioctl(i32, i32, ...) local_unnamed_addr

declare i32 @usleep(i32) local_unnamed_addr

declare i8* @strcpy(i8*, i8*) local_unnamed_addr

declare i32 @gettimeofday(%timeval*, %timezone*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i32 @system(i8*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strlen(i8*) local_unnamed_addr

declare i32 @bind(i32, %sockaddr*, i32) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i8* @strncpy(i8*, i8*, i32) local_unnamed_addr

declare i32 @access(i8*, i32) local_unnamed_addr

declare i32 @fclose(%_IO_FILE*) local_unnamed_addr

declare i32 @sendto(i32, i32*, i32, i32, %sockaddr*, i32) local_unnamed_addr

declare i32 @htonl(i32) local_unnamed_addr

declare i32 @sprintf(i8*, i8*, ...) local_unnamed_addr

declare i32 @socket(i32, i32, i32) local_unnamed_addr

declare i32 @strncmp(i8*, i8*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

!0 = !{i64 34744}
!1 = !{i64 34748}
!2 = !{i64 34780}
!3 = !{i64 34792}
!4 = !{i64 34804}
!5 = !{i64 34816}
!6 = !{i64 34828}
!7 = !{i64 34840}
!8 = !{i64 34852}
!9 = !{i64 34864}
!10 = !{i64 34876}
!11 = !{i64 34888}
!12 = !{i64 34900}
!13 = !{i64 34912}
!14 = !{i64 34924}
!15 = !{i64 34936}
!16 = !{i64 34948}
!17 = !{i64 34960}
!18 = !{i64 34972}
!19 = !{i64 34984}
!20 = !{i64 34996}
!21 = !{i64 35008}
!22 = !{i64 35020}
!23 = !{i64 35032}
!24 = !{i64 35044}
!25 = !{i64 35056}
!26 = !{i64 35068}
!27 = !{i64 35080}
!28 = !{i64 35092}
!29 = !{i64 35104}
!30 = !{i64 35116}
!31 = !{i64 35128}
!32 = !{i64 35140}
!33 = !{i64 35152}
!34 = !{i64 35164}
!35 = !{i64 35176}
!36 = !{i64 35188}
!37 = !{i64 35200}
!38 = !{i64 35244}
!39 = !{i64 35248}
!40 = !{i64 35276}
!41 = !{i64 35280}
!42 = !{i64 35284}
!43 = !{i64 35288}
!44 = !{i64 35320}
!45 = !{i64 35384}
!46 = !{i64 35428}
!47 = !{i64 35432}
!48 = !{i64 35436}
!49 = !{i64 35440}
!50 = !{i64 35448}
!51 = !{i64 35452}
!52 = !{i64 35500}
!53 = !{i64 35540}
!54 = !{i64 35568}
!55 = !{i64 35584}
!56 = !{i64 35596}
!57 = !{i64 35616}
!58 = !{i64 35624}
!59 = !{i64 35628}
!60 = !{i64 35632}
!61 = !{i64 35652}
!62 = !{i64 35668}
!63 = !{i64 35684}
!64 = !{i64 35688}
!65 = !{i64 35720}
!66 = !{i64 35732}
!67 = !{i64 35736}
!68 = !{i64 35748}
!69 = !{i64 35756}
!70 = !{i64 35776}
!71 = !{i64 35804}
!72 = !{i64 35812}
!73 = !{i64 35816}
!74 = !{i64 35832}
!75 = !{i64 35840}
!76 = !{i64 35864}
!77 = !{i64 35880}
!78 = !{i64 35888}
!79 = !{i64 35892}
!80 = !{i64 35904}
!81 = !{i64 35936}
!82 = !{i64 35960}
!83 = !{i64 35972}
!84 = !{i64 35976}
!85 = !{i64 35988}
!86 = !{i64 35996}
!87 = !{i64 36012}
!88 = !{i64 36032}
!89 = !{i64 36040}
!90 = !{i64 36044}
!91 = !{i64 36056}
!92 = !{i64 36064}
!93 = !{i64 36072}
!94 = !{i64 36144}
!95 = !{i64 36160}
!96 = !{i64 36164}
!97 = !{i64 36168}
!98 = !{i64 36172}
!99 = !{i64 36184}
!100 = !{i64 36192}
!101 = !{i64 36204}
!102 = !{i64 36216}
!103 = !{i64 36220}
!104 = !{i64 36228}
!105 = !{i64 36244}
!106 = !{i64 36276}
!107 = !{i64 36300}
!108 = !{i64 36312}
!109 = !{i64 36316}
!110 = !{i64 36328}
!111 = !{i64 36336}
!112 = !{i64 36352}
!113 = !{i64 36372}
!114 = !{i64 36380}
!115 = !{i64 36384}
!116 = !{i64 36396}
!117 = !{i64 36404}
!118 = !{i64 36412}
!119 = !{i64 36484}
!120 = !{i64 36496}
!121 = !{i64 36504}
!122 = !{i64 36520}
!123 = !{i64 36540}
!124 = !{i64 36552}
!125 = !{i64 36556}
!126 = !{i64 36576}
!127 = !{i64 36588}
!128 = !{i64 36592}
!129 = !{i64 36596}
!130 = !{i64 36624}
!131 = !{i64 36632}
!132 = !{i64 36636}
!133 = !{i64 36664}
!134 = !{i64 36676}
!135 = !{i64 36680}
!136 = !{i64 36692}
!137 = !{i64 36700}
!138 = !{i64 36724}
!139 = !{i64 36732}
!140 = !{i64 36736}
!141 = !{i64 36748}
!142 = !{i64 36756}
!143 = !{i64 36776}
!144 = !{i64 36788}
!145 = !{i64 36792}
!146 = !{i64 36804}
!147 = !{i64 36812}
!148 = !{i64 36836}
!149 = !{i64 36844}
!150 = !{i64 36852}
!151 = !{i64 36868}
!152 = !{i64 36880}
!153 = !{i64 36908}
!154 = !{i64 36916}
!155 = !{i64 36940}
!156 = !{i64 36944}
!157 = !{i64 36984}
!158 = !{i64 36992}
!159 = !{i64 37004}
!160 = !{i64 37012}
!161 = !{i64 37020}
!162 = !{i64 37032}
!163 = !{i64 37036}
!164 = !{i64 37048}
!165 = !{i64 37052}
!166 = !{i64 37084}
!167 = !{i64 37092}
!168 = !{i64 37104}
!169 = !{i64 37112}
!170 = !{i64 37120}
!171 = !{i64 37136}
!172 = !{i64 37148}
!173 = !{i64 37152}
!174 = !{i64 37176}
!175 = !{i64 37192}
!176 = !{i64 37208}
!177 = !{i64 37212}
!178 = !{i64 37224}
!179 = !{i64 37232}
!180 = !{i64 37240}
!181 = !{i64 37288}
!182 = !{i64 37300}
!183 = !{i64 37304}
!184 = !{i64 37316}
!185 = !{i64 37324}
!186 = !{i64 37340}
!187 = !{i64 37356}
!188 = !{i64 37364}
!189 = !{i64 37380}
!190 = !{i64 37388}
!191 = !{i64 37408}
!192 = !{i64 37424}
!193 = !{i64 37440}
!194 = !{i64 37448}
!195 = !{i64 37464}
!196 = !{i64 37472}
!197 = !{i64 37492}
!198 = !{i64 37504}
!199 = !{i64 37524}
!200 = !{i64 37532}
!201 = !{i64 37536}
!202 = !{i64 37548}
!203 = !{i64 37556}
!204 = !{i64 37572}
!205 = !{i64 37604}
!206 = !{i64 37624}
!207 = !{i64 37644}
!208 = !{i64 37664}
!209 = !{i64 37672}
!210 = !{i64 37676}
!211 = !{i64 37688}
!212 = !{i64 37708}
!213 = !{i64 37720}
!214 = !{i64 37748}
!215 = !{i64 37768}
!216 = !{i64 37780}
!217 = !{i64 37788}
!218 = !{i64 37792}
!219 = !{i64 37804}
!220 = !{i64 37808}
!221 = !{i64 37828}
!222 = !{i64 37840}
!223 = !{i64 37852}
!224 = !{i64 37892}
!225 = !{i64 37904}
!226 = !{i64 37908}
!227 = !{i64 37920}
!228 = !{i64 37924}
!229 = !{i64 37944}
!230 = !{i64 37960}
!231 = !{i64 37988}
!232 = !{i64 38028}
!233 = !{i64 38040}
!234 = !{i64 38044}
!235 = !{i64 38056}
!236 = !{i64 38060}
!237 = !{i64 38072}
!238 = !{i64 38084}
!239 = !{i64 38088}
!240 = !{i64 38104}
!241 = !{i64 38120}
!242 = !{i64 38148}
!243 = !{i64 38156}
!244 = !{i64 38168}
!245 = !{i64 38172}
!246 = !{i64 38184}
!247 = !{i64 38192}
!248 = !{i64 38200}
!249 = !{i64 38212}
!250 = !{i64 38216}
!251 = !{i64 38224}
!252 = !{i64 38228}
!253 = !{i64 38268}
!254 = !{i64 38272}
!255 = !{i64 38296}
!256 = !{i64 38316}
!257 = !{i64 38336}
!258 = !{i64 38340}
!259 = !{i64 38372}
!260 = !{i64 38404}
!261 = !{i64 38416}
!262 = !{i64 38420}
!263 = !{i64 38432}
!264 = !{i64 38436}
!265 = !{i64 38448}
!266 = !{i64 38456}
!267 = !{i64 38464}
!268 = !{i64 38476}
!269 = !{i64 38488}
!270 = !{i64 38492}
!271 = !{i64 38536}
!272 = !{i64 38540}
!273 = !{i64 38548}
!274 = !{i64 38600}
!275 = !{i64 38616}
!276 = !{i64 38628}
!277 = !{i64 38640}
!278 = !{i64 38644}
!279 = !{i64 38656}
!280 = !{i64 38660}
!281 = !{i64 38676}
!282 = !{i64 38692}
!283 = !{i64 38704}
!284 = !{i64 38728}
!285 = !{i64 38736}
!286 = !{i64 38740}
!287 = !{i64 38752}
!288 = !{i64 38756}
!289 = !{i64 38768}
!290 = !{i64 38776}
!291 = !{i64 38784}
!292 = !{i64 38796}
!293 = !{i64 38800}
!294 = !{i64 38812}
!295 = !{i64 38820}
!296 = !{i64 38828}
!297 = !{i64 38844}
!298 = !{i64 38848}
!299 = !{i64 38852}
!300 = !{i64 38868}
!301 = !{i64 38880}
!302 = !{i64 38888}
!303 = !{i64 38896}
!304 = !{i64 38904}
!305 = !{i64 38908}
!306 = !{i64 38920}
!307 = !{i64 38924}
!308 = !{i64 38964}
!309 = !{i64 38972}
!310 = !{i64 38976}
!311 = !{i64 38984}
!312 = !{i64 38992}
!313 = !{i64 38996}
!314 = !{i64 39004}
!315 = !{i64 39020}
!316 = !{i64 39028}
!317 = !{i64 39032}
!318 = !{i64 39036}
!319 = !{i64 39044}
!320 = !{i64 39060}
!321 = !{i64 39124}
!322 = !{i64 39128}
!323 = !{i64 39132}
!324 = !{i64 39140}
!325 = !{i64 39144}
!326 = !{i64 39164}
!327 = !{i64 39168}
!328 = !{i64 39172}
!329 = !{i64 39180}
!330 = !{i64 39184}
!331 = !{i64 39204}
!332 = !{i64 39208}
!333 = !{i64 39240}
!334 = !{i64 39256}
!335 = !{i64 39312}
!336 = !{i64 39320}
