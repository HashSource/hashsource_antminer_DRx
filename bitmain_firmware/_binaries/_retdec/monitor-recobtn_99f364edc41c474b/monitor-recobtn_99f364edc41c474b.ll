source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_87f0 = local_unnamed_addr constant i32 35932
@global_var_8c5c = local_unnamed_addr constant [32 x i8] c"monitor-recobtn compile %s--%s\0A\00"
@global_var_87f4 = local_unnamed_addr constant i32 35964
@global_var_8c7c = local_unnamed_addr constant [12 x i8] c"Dec 11 2017\00"
@global_var_87f8 = local_unnamed_addr constant i32 35976
@global_var_8c88 = constant [9 x i8] c"11:08:51\00"
@global_var_87fc = local_unnamed_addr constant i32 35988
@global_var_8c94 = local_unnamed_addr constant [32 x i8] c"Detect recovery button push off\00"
@global_var_8800 = local_unnamed_addr constant i32 36020
@global_var_8cb4 = local_unnamed_addr constant [42 x i8] c"recovery button off over 3S, wait push on\00"
@global_var_8804 = local_unnamed_addr constant i32 36064
@global_var_8ce0 = local_unnamed_addr constant [19 x i8] c"recovery button on\00"
@global_var_8808 = local_unnamed_addr constant i32 36100
@global_var_8d04 = local_unnamed_addr constant [15 x i8] c"child complete\00"
@global_var_880c = local_unnamed_addr constant i32 36116
@global_var_8d14 = local_unnamed_addr constant [26 x i8] c"recovery factory complete\00"
@global_var_8810 = local_unnamed_addr constant i32 36084
@global_var_8cf4 = local_unnamed_addr constant [15 x i8] c"error occured.\00"
@global_var_8844 = local_unnamed_addr constant i32 35560
@global_var_8ae8 = local_unnamed_addr constant i32 -516948194
@global_var_8848 = local_unnamed_addr constant i32 34388
@global_var_884c = local_unnamed_addr constant i32 35460
@global_var_8a84 = local_unnamed_addr constant i32 -382908936
@global_var_886c = local_unnamed_addr constant i32 34256
@global_var_8870 = local_unnamed_addr constant i32 88
@global_var_10d48 = global i32 1
@global_var_10e30 = local_unnamed_addr global i32* @global_var_10d48
@global_var_10e88 = local_unnamed_addr global i32 0
@global_var_88a0 = local_unnamed_addr constant i32 69268
@global_var_88a4 = local_unnamed_addr constant i32 69271
@global_var_88a8 = local_unnamed_addr constant i32 0
@global_var_88e0 = local_unnamed_addr constant i32 69268
@global_var_88e4 = local_unnamed_addr constant i32 69268
@global_var_88e8 = local_unnamed_addr constant i32 0
@global_var_8910 = local_unnamed_addr constant i32 69268
@global_var_8940 = local_unnamed_addr constant i32 68932
@global_var_10d44 = global i32 0
@global_var_8944 = local_unnamed_addr constant i32 0
@global_var_8af8 = local_unnamed_addr constant [44 x i8] c"echo low >/sys/class/gpio/gpio941/direction\00"
@global_var_8b24 = local_unnamed_addr constant [44 x i8] c"echo low >/sys/class/gpio/gpio942/direction\00"
@global_var_8b50 = local_unnamed_addr constant [45 x i8] c"echo high >/sys/class/gpio/gpio941/direction\00"
@global_var_8b80 = local_unnamed_addr constant [45 x i8] c"echo high >/sys/class/gpio/gpio942/direction\00"
@global_var_8a5c = local_unnamed_addr constant i32 35760
@global_var_8bb0 = constant [24 x i8] c"/sys/class/gpio/gpio921\00"
@global_var_8a60 = local_unnamed_addr constant i32 35784
@global_var_8bc8 = local_unnamed_addr constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_8a64 = local_unnamed_addr constant i32 35808
@global_var_8be0 = local_unnamed_addr constant i32 119
@global_var_8a68 = local_unnamed_addr constant i32 35780
@global_var_8bc4 = local_unnamed_addr constant [4 x i8] c"921\00"
@global_var_8a6c = local_unnamed_addr constant i32 35836
@global_var_8bfc = local_unnamed_addr constant [18 x i8] c"File Write Error!\00"
@global_var_8a70 = local_unnamed_addr constant i32 35856
@global_var_8c10 = local_unnamed_addr constant [30 x i8] c"/sys/class/gpio/gpio921/value\00"
@global_var_8a74 = local_unnamed_addr constant i32 35888
@global_var_8c30 = local_unnamed_addr constant i32 114
@global_var_8a78 = local_unnamed_addr constant i32 35928
@global_var_8c58 = local_unnamed_addr constant [3 x i8] c"%d\00"
@global_var_8a7c = local_unnamed_addr constant i32 35892
@global_var_8c34 = local_unnamed_addr constant [34 x i8] c"Open read recovery button failure\00"
@global_var_8a80 = local_unnamed_addr constant i32 35812
@global_var_8be4 = local_unnamed_addr constant [22 x i8] c"Open read gpio/export\00"
@global_var_8ae0 = local_unnamed_addr constant i32 33436
@global_var_829c = global i32 34160
@global_var_8ae4 = local_unnamed_addr constant i32 33424
@global_var_8290 = global i32 0
@global_var_8aac = constant i32 -508534458
@global_var_10e94 = external global i8*

define i32 @function_8550(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8550:
  %0 = call i32 @function_8850(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @printf.3() local_unnamed_addr {
dec_label_pc_8570:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !2
}

define i32 @fscanf.12() local_unnamed_addr {
dec_label_pc_857c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

define i32 @fopen.17() local_unnamed_addr {
dec_label_pc_8588:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !4
}

define i32 @execvp.2() local_unnamed_addr {
dec_label_pc_8594:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !5
}

define i32 @sleep.10() local_unnamed_addr {
dec_label_pc_85a0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !6
}

define i32 @wait.6() local_unnamed_addr {
dec_label_pc_85ac:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !7
}

define i32 @fwrite.7() local_unnamed_addr {
dec_label_pc_85b8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !8
}

define i32 @usleep.4() local_unnamed_addr {
dec_label_pc_85c4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !9
}

define i32 @gettimeofday.15() local_unnamed_addr {
dec_label_pc_85d0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !10
}

define i32 @puts.9() local_unnamed_addr {
dec_label_pc_85dc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !11
}

define i32 @__libc_start_main.8() local_unnamed_addr {
dec_label_pc_85e8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !12
}

define i32 @system.19() local_unnamed_addr {
dec_label_pc_85f4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !13
}

define i32 @function_8600() local_unnamed_addr {
dec_label_pc_8600:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @exit.16() local_unnamed_addr {
dec_label_pc_860c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @access.5() local_unnamed_addr {
dec_label_pc_8618:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !16
}

define i32 @fclose.18() local_unnamed_addr {
dec_label_pc_8624:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !17
}

define i32 @fork.13() local_unnamed_addr {
dec_label_pc_8630:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !18
}

define i32 @abort.14() local_unnamed_addr {
dec_label_pc_863c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @close.11() local_unnamed_addr {
dec_label_pc_8648:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !20
}

define i32 @function_8654(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8654:
  %0 = alloca i32
  %r3.4.reg2mem = alloca i32, !insn.addr !21
  %r2.4.reg2mem = alloca i32, !insn.addr !21
  %r3.3.reg2mem = alloca i32, !insn.addr !21
  %r2.3.reg2mem = alloca i32, !insn.addr !21
  %r1.2.reg2mem = alloca i32, !insn.addr !21
  %r4.0.reg2mem = alloca i32, !insn.addr !21
  %r0.0.reg2mem = alloca i32, !insn.addr !21
  %r3.1.reg2mem = alloca i32, !insn.addr !21
  %r2.1.reg2mem = alloca i32, !insn.addr !21
  %r3.0.reg2mem = alloca i32, !insn.addr !21
  %r2.0.reg2mem = alloca i32, !insn.addr !21
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @printf.3(), !insn.addr !22
  %6 = sub i32 %3, %4
  %7 = mul i32 %6, 1000000
  %8 = sub i32 %2, %1
  %9 = add i32 %7, %8
  %10 = icmp slt i32 %9, 3000001
  store i32 ptrtoint ([9 x i8]* @global_var_8c88 to i32), i32* %r2.0.reg2mem, !insn.addr !22
  br label %dec_label_pc_8674, !insn.addr !22

dec_label_pc_8674:                                ; preds = %dec_label_pc_879c, %dec_label_pc_8654
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %11 = call i32 @function_89a0(), !insn.addr !23
  %12 = icmp eq i32 %11, 0, !insn.addr !24
  store i32 %r2.0.reload, i32* %r2.1.reg2mem, !insn.addr !25
  store i32 %r3.0.reload, i32* %r3.1.reg2mem, !insn.addr !25
  store i32 %r2.0.reload, i32* %r2.4.reg2mem, !insn.addr !25
  store i32 %r3.0.reload, i32* %r3.4.reg2mem, !insn.addr !25
  br i1 %12, label %dec_label_pc_8684, label %dec_label_pc_879c, !insn.addr !25

dec_label_pc_8684:                                ; preds = %dec_label_pc_8674, %dec_label_pc_8788
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %r2.1.reload = load i32, i32* %r2.1.reg2mem
  %13 = call i32 @gettimeofday.15(), !insn.addr !26
  %14 = call i32 @function_8948(i32 %13, i32 0, i32 %r2.1.reload, i32 %r3.1.reload), !insn.addr !27
  %15 = call i32 @puts.9(), !insn.addr !28
  %16 = call i32 @function_89a0(), !insn.addr !29
  %17 = icmp eq i32 %16, 1, !insn.addr !30
  store i32 0, i32* %r1.2.reg2mem, !insn.addr !31
  store i32 %r2.1.reload, i32* %r2.3.reg2mem, !insn.addr !31
  store i32 %r3.1.reload, i32* %r3.3.reg2mem, !insn.addr !31
  br i1 %17, label %dec_label_pc_8788, label %dec_label_pc_86b0.preheader, !insn.addr !31

dec_label_pc_86b0.preheader:                      ; preds = %dec_label_pc_8684, %dec_label_pc_86a0.backedge
  br label %dec_label_pc_86b0

dec_label_pc_86b0:                                ; preds = %dec_label_pc_86b0.preheader, %dec_label_pc_8770
  %18 = call i32 @gettimeofday.15(), !insn.addr !32
  br i1 %10, label %dec_label_pc_87a8, label %dec_label_pc_86e8, !insn.addr !33

dec_label_pc_86e8:                                ; preds = %dec_label_pc_86b0
  %19 = call i32 @puts.9(), !insn.addr !34
  %20 = call i32 @function_89a0(), !insn.addr !35
  %21 = icmp eq i32 %20, 0, !insn.addr !36
  br i1 %21, label %dec_label_pc_86f4, label %dec_label_pc_871c, !insn.addr !37

dec_label_pc_86f4:                                ; preds = %dec_label_pc_86e8, %dec_label_pc_86f4
  %22 = call i32 @function_8948(i32 0, i32 %2, i32 %9, i32 3000000), !insn.addr !38
  %23 = call i32 @sleep.10(), !insn.addr !39
  %24 = call i32 @function_8968(i32 %23, i32 %2, i32 %9, i32 3000000), !insn.addr !40
  %25 = call i32 @sleep.10(), !insn.addr !41
  %26 = call i32 @function_89a0(), !insn.addr !35
  %27 = icmp eq i32 %26, 0, !insn.addr !36
  br i1 %27, label %dec_label_pc_86f4, label %dec_label_pc_871c, !insn.addr !37

dec_label_pc_871c:                                ; preds = %dec_label_pc_86f4, %dec_label_pc_86e8
  %28 = call i32 @puts.9(), !insn.addr !42
  %29 = call i32 @fork.13(), !insn.addr !43
  %30 = icmp slt i32 %29, 0, !insn.addr !44
  br i1 %30, label %dec_label_pc_87b8, label %dec_label_pc_8730, !insn.addr !45

dec_label_pc_8730:                                ; preds = %dec_label_pc_871c
  %31 = icmp eq i32 %29, 0, !insn.addr !44
  br i1 %31, label %dec_label_pc_87c4, label %dec_label_pc_8734, !insn.addr !46

dec_label_pc_8734:                                ; preds = %dec_label_pc_8730
  %32 = call i32 @wait.6(), !insn.addr !47
  %33 = call i32 @puts.9(), !insn.addr !48
  store i32 %33, i32* %r0.0.reg2mem, !insn.addr !48
  store i32 100, i32* %r4.0.reg2mem, !insn.addr !48
  br label %dec_label_pc_8748, !insn.addr !48

dec_label_pc_8748:                                ; preds = %dec_label_pc_8748, %dec_label_pc_8734
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %34 = call i32 @function_8948(i32 %r0.0.reload, i32 %2, i32 %9, i32 3000000), !insn.addr !49
  %35 = call i32 @usleep.4(), !insn.addr !50
  %36 = call i32 @function_8968(i32 %35, i32 %2, i32 %9, i32 3000000), !insn.addr !51
  %37 = call i32 @usleep.4(), !insn.addr !52
  %38 = add nsw i32 %r4.0.reload, -1, !insn.addr !53
  %39 = icmp eq i32 %r4.0.reload, 1, !insn.addr !53
  store i32 %37, i32* %r0.0.reg2mem, !insn.addr !54
  store i32 %38, i32* %r4.0.reg2mem, !insn.addr !54
  br i1 %39, label %dec_label_pc_8770, label %dec_label_pc_8748, !insn.addr !54

dec_label_pc_8770:                                ; preds = %dec_label_pc_8748
  %40 = call i32 @puts.9(), !insn.addr !55
  %41 = call i32 @function_89a0(), !insn.addr !56
  %42 = icmp eq i32 %41, 1, !insn.addr !57
  store i32 %9, i32* %r2.3.reg2mem, !insn.addr !58
  store i32 3000000, i32* %r3.3.reg2mem, !insn.addr !58
  br i1 %42, label %dec_label_pc_8788, label %dec_label_pc_86b0, !insn.addr !58

dec_label_pc_8788:                                ; preds = %dec_label_pc_86a0.backedge, %dec_label_pc_8770, %dec_label_pc_8684
  %r3.3.reload = load i32, i32* %r3.3.reg2mem
  %r2.3.reload = load i32, i32* %r2.3.reg2mem
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %43 = call i32 @function_8968(i32 1, i32 %r1.2.reload, i32 %r2.3.reload, i32 %r3.3.reload), !insn.addr !59
  %44 = call i32 @function_89a0(), !insn.addr !60
  %45 = icmp eq i32 %44, 0, !insn.addr !61
  store i32 %r2.3.reload, i32* %r2.1.reg2mem, !insn.addr !62
  store i32 %r3.3.reload, i32* %r3.1.reg2mem, !insn.addr !62
  store i32 %r2.3.reload, i32* %r2.4.reg2mem, !insn.addr !62
  store i32 %r3.3.reload, i32* %r3.4.reg2mem, !insn.addr !62
  br i1 %45, label %dec_label_pc_8684, label %dec_label_pc_879c, !insn.addr !62

dec_label_pc_879c:                                ; preds = %dec_label_pc_8788, %dec_label_pc_8674
  %r3.4.reload = load i32, i32* %r3.4.reg2mem
  %r2.4.reload = load i32, i32* %r2.4.reg2mem
  %46 = call i32 @sleep.10(), !insn.addr !63
  store i32 %r2.4.reload, i32* %r2.0.reg2mem, !insn.addr !64
  store i32 %r3.4.reload, i32* %r3.0.reg2mem, !insn.addr !64
  br label %dec_label_pc_8674, !insn.addr !64

dec_label_pc_87a8:                                ; preds = %dec_label_pc_86b0
  %47 = call i32 @usleep.4(), !insn.addr !65
  br label %dec_label_pc_86a0.backedge, !insn.addr !66

dec_label_pc_86a0.backedge:                       ; preds = %dec_label_pc_87a8, %dec_label_pc_87b8
  %48 = call i32 @function_89a0(), !insn.addr !29
  %49 = icmp eq i32 %48, 1, !insn.addr !30
  store i32 %9, i32* %r2.3.reg2mem, !insn.addr !31
  store i32 3000000, i32* %r3.3.reg2mem, !insn.addr !31
  br i1 %49, label %dec_label_pc_8788, label %dec_label_pc_86b0.preheader, !insn.addr !31

dec_label_pc_87b8:                                ; preds = %dec_label_pc_871c
  %50 = call i32 @puts.9(), !insn.addr !67
  br label %dec_label_pc_86a0.backedge, !insn.addr !68

dec_label_pc_87c4:                                ; preds = %dec_label_pc_8730
  %51 = call i32 @function_8968(i32 0, i32 %2, i32 %9, i32 3000000), !insn.addr !69
  %52 = icmp slt i32 %arg1, 2, !insn.addr !70
  br i1 %52, label %dec_label_pc_87e4, label %dec_label_pc_87d0, !insn.addr !70

dec_label_pc_87d0:                                ; preds = %dec_label_pc_87c4
  %53 = call i32 @execvp.2(), !insn.addr !71
  br label %dec_label_pc_87dc, !insn.addr !71

dec_label_pc_87dc:                                ; preds = %dec_label_pc_87e4, %dec_label_pc_87d0
  %54 = call i32 @exit.16(), !insn.addr !72
  br label %dec_label_pc_87e4, !insn.addr !72

dec_label_pc_87e4:                                ; preds = %dec_label_pc_87dc, %dec_label_pc_87c4
  %55 = call i32 @sleep.10(), !insn.addr !73
  br label %dec_label_pc_87dc, !insn.addr !74

; uselistorder directives
  uselistorder i32 %r2.3.reload, { 0, 2, 1 }
  uselistorder i32 %r3.3.reload, { 0, 2, 1 }
  uselistorder i32 %r4.0.reload, { 1, 0 }
  uselistorder i32 %9, { 2, 0, 1, 6, 7, 4, 5, 3 }
  uselistorder i32 %2, { 2, 3, 4, 0, 1, 5 }
  uselistorder i32* %r2.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r3.0.reg2mem, { 1, 0 }
  uselistorder i32* %r2.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r3.1.reg2mem, { 2, 0, 1 }
  uselistorder i32* %r0.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r4.0.reg2mem, { 1, 0, 2 }
  uselistorder i32* %r2.3.reg2mem, { 1, 0, 2, 3 }
  uselistorder i32* %r3.3.reg2mem, { 1, 0, 2, 3 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder i32 ()* @usleep.4, { 2, 1, 0 }
  uselistorder i32 (i32, i32, i32, i32)* @function_8968, { 3, 1, 0, 2 }
  uselistorder i32 ()* @sleep.10, { 3, 0, 2, 1 }
  uselistorder i32 3000000, { 4, 0, 1, 3, 2, 6, 5 }
  uselistorder i32 (i32, i32, i32, i32)* @function_8948, { 1, 2, 0 }
  uselistorder i32 ()* @gettimeofday.15, { 1, 0 }
  uselistorder i32 ()* @function_89a0, { 3, 6, 5, 4, 1, 0, 2 }
  uselistorder label %dec_label_pc_86a0.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_86f4, { 1, 0 }
  uselistorder label %dec_label_pc_86b0, { 1, 0 }
  uselistorder label %dec_label_pc_86b0.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_8684, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8814:
  %0 = call i32 @__libc_start_main.8(), !insn.addr !75
  %1 = call i32 @abort.14(), !insn.addr !76
  ret i32 %1, !insn.addr !76
}

define i32 @function_8850() local_unnamed_addr {
dec_label_pc_8850:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_10e88, align 4, !insn.addr !77
  %3 = icmp eq i32 %2, 0, !insn.addr !78
  br i1 %3, label %4, label %dec_label_pc_8868, !insn.addr !79

; <label>:4:                                      ; preds = %dec_label_pc_8850
  ret i32 %1, !insn.addr !79

dec_label_pc_8868:                                ; preds = %dec_label_pc_8850
  %5 = call i32 @function_8600(), !insn.addr !80
  ret i32 %5, !insn.addr !80
}

define i32 @function_8874(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_8874:
  ret i32 ptrtoint (i8** @global_var_10e94 to i32), !insn.addr !81
}

define i32 @function_88ac(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_88ac:
  ret i32 ptrtoint (i8** @global_var_10e94 to i32), !insn.addr !82
}

define i32 @function_88ec() local_unnamed_addr {
dec_label_pc_88ec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_10e94 to i8*), align 4, !insn.addr !83
  %5 = icmp eq i8 %4, 0, !insn.addr !84
  br i1 %5, label %dec_label_pc_8900, label %6, !insn.addr !85

; <label>:6:                                      ; preds = %dec_label_pc_88ec
  ret i32 %3, !insn.addr !85

dec_label_pc_8900:                                ; preds = %dec_label_pc_88ec
  %7 = call i32 @function_8874(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !86
  store i8 1, i8* bitcast (i8** @global_var_10e94 to i8*), align 4, !insn.addr !87
  ret i32 %7, !insn.addr !88

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i8** @global_var_10e94, { 1, 0 }
}

define i32 @function_8914(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8914:
  %0 = call i32 @function_88ac(i32* nonnull @global_var_10d44, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !89
  ret i32 %0, !insn.addr !89
}

define i32 @function_8948(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8948:
  %0 = call i32 @system.19(), !insn.addr !90
  %1 = call i32 @system.19(), !insn.addr !91
  ret i32 %1, !insn.addr !91
}

define i32 @function_8968(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8968:
  %0 = call i32 @system.19(), !insn.addr !92
  %1 = call i32 @system.19(), !insn.addr !93
  ret i32 %1, !insn.addr !93

; uselistorder directives
  uselistorder i32 ()* @system.19, { 3, 2, 1, 0 }
}

define i32 @function_8988(i8* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8988:
  %0 = call i32 @access.5(), !insn.addr !94
  %1 = icmp ugt i32 %0, 1
  %2 = select i1 %1, i32 %0, i32 1
  %3 = sub i32 %2, %0
  ret i32 %3, !insn.addr !95

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i32 @function_89a0() local_unnamed_addr {
dec_label_pc_89a0:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !96
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @function_8988(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_8bb0, i32 0, i32 0), i32 %3, i32 %2, i32 %1), !insn.addr !97
  %6 = icmp eq i32 %5, 0, !insn.addr !98
  %7 = call i32 @fopen.17()
  %8 = icmp eq i32 %7, 0
  br i1 %6, label %dec_label_pc_89b8, label %dec_label_pc_8a04, !insn.addr !99

dec_label_pc_89b8:                                ; preds = %dec_label_pc_89a0
  br i1 %8, label %dec_label_pc_8a4c, label %dec_label_pc_89cc, !insn.addr !100

dec_label_pc_89cc:                                ; preds = %dec_label_pc_89b8
  %9 = call i32 @fwrite.7(), !insn.addr !101
  %10 = icmp eq i32 %9, 1, !insn.addr !102
  br i1 %10, label %dec_label_pc_89f0, label %dec_label_pc_89e8, !insn.addr !103

dec_label_pc_89e8:                                ; preds = %dec_label_pc_89cc
  %11 = call i32 @puts.9(), !insn.addr !104
  br label %dec_label_pc_89f0, !insn.addr !104

dec_label_pc_89f0:                                ; preds = %dec_label_pc_89e8, %dec_label_pc_89cc
  %12 = call i32 @fclose.18(), !insn.addr !105
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !106
  br label %dec_label_pc_89fc, !insn.addr !106

dec_label_pc_89fc:                                ; preds = %dec_label_pc_8a4c, %dec_label_pc_8a3c, %dec_label_pc_8a18, %dec_label_pc_89f0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !107

dec_label_pc_8a04:                                ; preds = %dec_label_pc_89a0
  br i1 %8, label %dec_label_pc_8a3c, label %dec_label_pc_8a18, !insn.addr !108

dec_label_pc_8a18:                                ; preds = %dec_label_pc_8a04
  %13 = call i32 @fscanf.12(), !insn.addr !109
  %14 = call i32 @close.11(), !insn.addr !110
  %15 = icmp ne i32 %4, 0, !insn.addr !111
  %spec.select = zext i1 %15 to i32
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !112
  br label %dec_label_pc_89fc, !insn.addr !112

dec_label_pc_8a3c:                                ; preds = %dec_label_pc_8a04
  %16 = call i32 @puts.9(), !insn.addr !113
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !114
  br label %dec_label_pc_89fc, !insn.addr !114

dec_label_pc_8a4c:                                ; preds = %dec_label_pc_89b8
  %17 = call i32 @puts.9(), !insn.addr !115
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !116
  br label %dec_label_pc_89fc, !insn.addr !116

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 4, 2, 1, 0, 3 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder i32 -1, { 2, 0, 1, 3 }
  uselistorder i32 ()* @puts.9, { 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @function_8a84(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8a84:
  %0 = call i32 @function_8550(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !117
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_829c to i32), i32 35492), i32 add (i32 ptrtoint (i32* @global_var_8aac to i32), i32 ptrtoint (i32* @global_var_8290 to i32))), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !118

; uselistorder directives
  uselistorder i32 0, { 5, 14, 15, 16, 6, 7, 22, 2, 17, 18, 19, 20, 1, 3, 0, 4, 21, 8, 9, 10, 11, 12, 13 }
}

define i32 @function_8ae8() local_unnamed_addr {
dec_label_pc_8ae8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !119

; uselistorder directives
  uselistorder i32 1, { 23, 41, 24, 22, 39, 38, 21, 20, 44, 37, 42, 43, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 40 }
}

define i32 @function_8aec(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8aec:
  ret i32 %arg1, !insn.addr !120
}

!0 = !{i64 34132}
!1 = !{i64 34136}
!2 = !{i64 34168}
!3 = !{i64 34180}
!4 = !{i64 34192}
!5 = !{i64 34204}
!6 = !{i64 34216}
!7 = !{i64 34228}
!8 = !{i64 34240}
!9 = !{i64 34252}
!10 = !{i64 34264}
!11 = !{i64 34276}
!12 = !{i64 34288}
!13 = !{i64 34300}
!14 = !{i64 34312}
!15 = !{i64 34324}
!16 = !{i64 34336}
!17 = !{i64 34348}
!18 = !{i64 34360}
!19 = !{i64 34372}
!20 = !{i64 34384}
!21 = !{i64 34388}
!22 = !{i64 34416}
!23 = !{i64 34424}
!24 = !{i64 34428}
!25 = !{i64 34432}
!26 = !{i64 34444}
!27 = !{i64 34452}
!28 = !{i64 34460}
!29 = !{i64 34468}
!30 = !{i64 34472}
!31 = !{i64 34476}
!32 = !{i64 34488}
!33 = !{i64 34532}
!34 = !{i64 34540}
!35 = !{i64 34576}
!36 = !{i64 34580}
!37 = !{i64 34584}
!38 = !{i64 34548}
!39 = !{i64 34556}
!40 = !{i64 34560}
!41 = !{i64 34568}
!42 = !{i64 34592}
!43 = !{i64 34596}
!44 = !{i64 34600}
!45 = !{i64 34604}
!46 = !{i64 34608}
!47 = !{i64 34620}
!48 = !{i64 34628}
!49 = !{i64 34632}
!50 = !{i64 34644}
!51 = !{i64 34648}
!52 = !{i64 34660}
!53 = !{i64 34664}
!54 = !{i64 34668}
!55 = !{i64 34676}
!56 = !{i64 34684}
!57 = !{i64 34688}
!58 = !{i64 34692}
!59 = !{i64 34696}
!60 = !{i64 34704}
!61 = !{i64 34708}
!62 = !{i64 34712}
!63 = !{i64 34720}
!64 = !{i64 34724}
!65 = !{i64 34736}
!66 = !{i64 34740}
!67 = !{i64 34748}
!68 = !{i64 34752}
!69 = !{i64 34756}
!70 = !{i64 34764}
!71 = !{i64 34776}
!72 = !{i64 34784}
!73 = !{i64 34792}
!74 = !{i64 34796}
!75 = !{i64 34876}
!76 = !{i64 34880}
!77 = !{i64 34908}
!78 = !{i64 34912}
!79 = !{i64 34916}
!80 = !{i64 34920}
!81 = !{i64 34952}
!82 = !{i64 35016}
!83 = !{i64 35060}
!84 = !{i64 35064}
!85 = !{i64 35068}
!86 = !{i64 35072}
!87 = !{i64 35080}
!88 = !{i64 35084}
!89 = !{i64 35132}
!90 = !{i64 35156}
!91 = !{i64 35172}
!92 = !{i64 35188}
!93 = !{i64 35204}
!94 = !{i64 35216}
!95 = !{i64 35228}
!96 = !{i64 35232}
!97 = !{i64 35244}
!98 = !{i64 35248}
!99 = !{i64 35252}
!100 = !{i64 35272}
!101 = !{i64 35292}
!102 = !{i64 35296}
!103 = !{i64 35300}
!104 = !{i64 35308}
!105 = !{i64 35316}
!106 = !{i64 35320}
!107 = !{i64 35328}
!108 = !{i64 35348}
!109 = !{i64 35360}
!110 = !{i64 35368}
!111 = !{i64 35376}
!112 = !{i64 35384}
!113 = !{i64 35392}
!114 = !{i64 35400}
!115 = !{i64 35408}
!116 = !{i64 35416}
!117 = !{i64 35488}
!118 = !{i64 35504}
!119 = !{i64 35560}
!120 = !{i64 35568}
