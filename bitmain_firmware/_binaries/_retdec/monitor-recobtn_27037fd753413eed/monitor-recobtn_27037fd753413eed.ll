source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_87c4 = local_unnamed_addr constant i32 35888
@global_var_8c30 = local_unnamed_addr constant [32 x i8] c"monitor-recobtn compile %s--%s\0A\00"
@global_var_87c8 = local_unnamed_addr constant i32 35920
@global_var_8c50 = local_unnamed_addr constant [12 x i8] c"Dec 13 2018\00"
@global_var_87cc = local_unnamed_addr constant i32 35932
@global_var_8c5c = constant [9 x i8] c"20:07:04\00"
@global_var_87d0 = local_unnamed_addr constant i32 35944
@global_var_8c68 = local_unnamed_addr constant [32 x i8] c"Detect recovery button push off\00"
@global_var_87d4 = local_unnamed_addr constant i32 35976
@global_var_8c88 = local_unnamed_addr constant [42 x i8] c"recovery button off over 3S, wait push on\00"
@global_var_87d8 = local_unnamed_addr constant i32 36020
@global_var_8cb4 = local_unnamed_addr constant [19 x i8] c"recovery button on\00"
@global_var_87dc = local_unnamed_addr constant i32 36056
@global_var_8cd8 = local_unnamed_addr constant [15 x i8] c"child complete\00"
@global_var_87e0 = local_unnamed_addr constant i32 36072
@global_var_8ce8 = local_unnamed_addr constant [26 x i8] c"recovery factory complete\00"
@global_var_87e4 = local_unnamed_addr constant i32 36040
@global_var_8cc8 = local_unnamed_addr constant [15 x i8] c"error occured.\00"
@global_var_8818 = local_unnamed_addr constant i32 35516
@global_var_8abc = local_unnamed_addr constant i32 -516948194
@global_var_881c = local_unnamed_addr constant i32 34344
@global_var_8820 = local_unnamed_addr constant i32 35416
@global_var_8a58 = local_unnamed_addr constant i32 -382908936
@global_var_8840 = local_unnamed_addr constant i32 34256
@global_var_8844 = local_unnamed_addr constant i32 84
@global_var_10d1c = global i32 1
@global_var_10e04 = local_unnamed_addr global i32* @global_var_10d1c
@global_var_10e58 = local_unnamed_addr global i32 0
@global_var_8874 = local_unnamed_addr constant i32 69220
@global_var_8878 = local_unnamed_addr constant i32 69223
@global_var_887c = local_unnamed_addr constant i32 0
@global_var_88b4 = local_unnamed_addr constant i32 69220
@global_var_88b8 = local_unnamed_addr constant i32 69220
@global_var_88bc = local_unnamed_addr constant i32 0
@global_var_88e4 = local_unnamed_addr constant i32 69220
@global_var_8914 = local_unnamed_addr constant i32 68888
@global_var_10d18 = global i32 0
@global_var_8918 = local_unnamed_addr constant i32 0
@global_var_8acc = local_unnamed_addr constant [44 x i8] c"echo low >/sys/class/gpio/gpio941/direction\00"
@global_var_8af8 = local_unnamed_addr constant [44 x i8] c"echo low >/sys/class/gpio/gpio942/direction\00"
@global_var_8b24 = local_unnamed_addr constant [45 x i8] c"echo high >/sys/class/gpio/gpio941/direction\00"
@global_var_8b54 = local_unnamed_addr constant [45 x i8] c"echo high >/sys/class/gpio/gpio942/direction\00"
@global_var_8a30 = local_unnamed_addr constant i32 35716
@global_var_8b84 = constant [24 x i8] c"/sys/class/gpio/gpio921\00"
@global_var_8a34 = local_unnamed_addr constant i32 35740
@global_var_8b9c = local_unnamed_addr constant [23 x i8] c"/sys/class/gpio/export\00"
@global_var_8a38 = local_unnamed_addr constant i32 35764
@global_var_8bb4 = local_unnamed_addr constant i32 119
@global_var_8a3c = local_unnamed_addr constant i32 35736
@global_var_8b98 = local_unnamed_addr constant [4 x i8] c"921\00"
@global_var_8a40 = local_unnamed_addr constant i32 35792
@global_var_8bd0 = local_unnamed_addr constant [18 x i8] c"File Write Error!\00"
@global_var_8a44 = local_unnamed_addr constant i32 35812
@global_var_8be4 = local_unnamed_addr constant [30 x i8] c"/sys/class/gpio/gpio921/value\00"
@global_var_8a48 = local_unnamed_addr constant i32 35844
@global_var_8c04 = local_unnamed_addr constant i32 114
@global_var_8a4c = local_unnamed_addr constant i32 35884
@global_var_8c2c = local_unnamed_addr constant [3 x i8] c"%d\00"
@global_var_8a50 = local_unnamed_addr constant i32 35848
@global_var_8c08 = local_unnamed_addr constant [34 x i8] c"Open read recovery button failure\00"
@global_var_8a54 = local_unnamed_addr constant i32 35768
@global_var_8bb8 = local_unnamed_addr constant [22 x i8] c"Open read gpio/export\00"
@global_var_8ab4 = local_unnamed_addr constant i32 33436
@global_var_829c = global i32 0
@global_var_8ab8 = local_unnamed_addr constant i32 33424
@global_var_8290 = global i32 18
@global_var_8a80 = constant i32 -508534458
@global_var_10e64 = external global i8*

define i32 @function_8530(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8530:
  %0 = call i32 @function_8824(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @printf.3() local_unnamed_addr {
dec_label_pc_8550:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !2
}

define i32 @fscanf.11() local_unnamed_addr {
dec_label_pc_855c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

define i32 @fopen.16() local_unnamed_addr {
dec_label_pc_8568:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !4
}

define i32 @execvp.2() local_unnamed_addr {
dec_label_pc_8574:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !5
}

define i32 @sleep.10() local_unnamed_addr {
dec_label_pc_8580:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !6
}

define i32 @wait.6() local_unnamed_addr {
dec_label_pc_858c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !7
}

define i32 @fwrite.7() local_unnamed_addr {
dec_label_pc_8598:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !8
}

define i32 @usleep.4() local_unnamed_addr {
dec_label_pc_85a4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !9
}

define i32 @gettimeofday.14() local_unnamed_addr {
dec_label_pc_85b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !10
}

define i32 @puts.9() local_unnamed_addr {
dec_label_pc_85bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !11
}

define i32 @__libc_start_main.8() local_unnamed_addr {
dec_label_pc_85c8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !12
}

define i32 @system.18() local_unnamed_addr {
dec_label_pc_85d4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !13
}

define i32 @function_85e0() local_unnamed_addr {
dec_label_pc_85e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @exit.15() local_unnamed_addr {
dec_label_pc_85ec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @access.5() local_unnamed_addr {
dec_label_pc_85f8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !16
}

define i32 @fclose.17() local_unnamed_addr {
dec_label_pc_8604:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !17
}

define i32 @fork.12() local_unnamed_addr {
dec_label_pc_8610:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !18
}

define i32 @abort.13() local_unnamed_addr {
dec_label_pc_861c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !19
}

define i32 @function_8628(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8628:
  %0 = alloca i32
  %r3.4.reg2mem = alloca i32, !insn.addr !20
  %r2.4.reg2mem = alloca i32, !insn.addr !20
  %r3.3.reg2mem = alloca i32, !insn.addr !20
  %r2.3.reg2mem = alloca i32, !insn.addr !20
  %r1.2.reg2mem = alloca i32, !insn.addr !20
  %r4.0.reg2mem = alloca i32, !insn.addr !20
  %r0.0.reg2mem = alloca i32, !insn.addr !20
  %r3.1.reg2mem = alloca i32, !insn.addr !20
  %r2.1.reg2mem = alloca i32, !insn.addr !20
  %r3.0.reg2mem = alloca i32, !insn.addr !20
  %r2.0.reg2mem = alloca i32, !insn.addr !20
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @printf.3(), !insn.addr !21
  %6 = sub i32 %3, %4
  %7 = mul i32 %6, 1000000
  %8 = sub i32 %2, %1
  %9 = add i32 %7, %8
  %10 = icmp slt i32 %9, 3000001
  store i32 ptrtoint ([9 x i8]* @global_var_8c5c to i32), i32* %r2.0.reg2mem, !insn.addr !21
  br label %dec_label_pc_8648, !insn.addr !21

dec_label_pc_8648:                                ; preds = %dec_label_pc_8770, %dec_label_pc_8628
  %r3.0.reload = load i32, i32* %r3.0.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %11 = call i32 @function_8974(), !insn.addr !22
  %12 = icmp eq i32 %11, 0, !insn.addr !23
  store i32 %r2.0.reload, i32* %r2.1.reg2mem, !insn.addr !24
  store i32 %r3.0.reload, i32* %r3.1.reg2mem, !insn.addr !24
  store i32 %r2.0.reload, i32* %r2.4.reg2mem, !insn.addr !24
  store i32 %r3.0.reload, i32* %r3.4.reg2mem, !insn.addr !24
  br i1 %12, label %dec_label_pc_8658, label %dec_label_pc_8770, !insn.addr !24

dec_label_pc_8658:                                ; preds = %dec_label_pc_8648, %dec_label_pc_875c
  %r3.1.reload = load i32, i32* %r3.1.reg2mem
  %r2.1.reload = load i32, i32* %r2.1.reg2mem
  %13 = call i32 @gettimeofday.14(), !insn.addr !25
  %14 = call i32 @function_891c(i32 %13, i32 0, i32 %r2.1.reload, i32 %r3.1.reload), !insn.addr !26
  %15 = call i32 @puts.9(), !insn.addr !27
  %16 = call i32 @function_8974(), !insn.addr !28
  %17 = icmp eq i32 %16, 1, !insn.addr !29
  store i32 0, i32* %r1.2.reg2mem, !insn.addr !30
  store i32 %r2.1.reload, i32* %r2.3.reg2mem, !insn.addr !30
  store i32 %r3.1.reload, i32* %r3.3.reg2mem, !insn.addr !30
  br i1 %17, label %dec_label_pc_875c, label %dec_label_pc_8684.preheader, !insn.addr !30

dec_label_pc_8684.preheader:                      ; preds = %dec_label_pc_8658, %dec_label_pc_8674.backedge
  br label %dec_label_pc_8684

dec_label_pc_8684:                                ; preds = %dec_label_pc_8684.preheader, %dec_label_pc_8744
  %18 = call i32 @gettimeofday.14(), !insn.addr !31
  br i1 %10, label %dec_label_pc_877c, label %dec_label_pc_86bc, !insn.addr !32

dec_label_pc_86bc:                                ; preds = %dec_label_pc_8684
  %19 = call i32 @puts.9(), !insn.addr !33
  %20 = call i32 @function_8974(), !insn.addr !34
  %21 = icmp eq i32 %20, 0, !insn.addr !35
  br i1 %21, label %dec_label_pc_86c8, label %dec_label_pc_86f0, !insn.addr !36

dec_label_pc_86c8:                                ; preds = %dec_label_pc_86bc, %dec_label_pc_86c8
  %22 = call i32 @function_891c(i32 0, i32 %2, i32 %9, i32 3000000), !insn.addr !37
  %23 = call i32 @sleep.10(), !insn.addr !38
  %24 = call i32 @function_893c(i32 %23, i32 %2, i32 %9, i32 3000000), !insn.addr !39
  %25 = call i32 @sleep.10(), !insn.addr !40
  %26 = call i32 @function_8974(), !insn.addr !34
  %27 = icmp eq i32 %26, 0, !insn.addr !35
  br i1 %27, label %dec_label_pc_86c8, label %dec_label_pc_86f0, !insn.addr !36

dec_label_pc_86f0:                                ; preds = %dec_label_pc_86c8, %dec_label_pc_86bc
  %28 = call i32 @puts.9(), !insn.addr !41
  %29 = call i32 @fork.12(), !insn.addr !42
  %30 = icmp slt i32 %29, 0, !insn.addr !43
  br i1 %30, label %dec_label_pc_878c, label %dec_label_pc_8704, !insn.addr !44

dec_label_pc_8704:                                ; preds = %dec_label_pc_86f0
  %31 = icmp eq i32 %29, 0, !insn.addr !43
  br i1 %31, label %dec_label_pc_8798, label %dec_label_pc_8708, !insn.addr !45

dec_label_pc_8708:                                ; preds = %dec_label_pc_8704
  %32 = call i32 @wait.6(), !insn.addr !46
  %33 = call i32 @puts.9(), !insn.addr !47
  store i32 %33, i32* %r0.0.reg2mem, !insn.addr !47
  store i32 100, i32* %r4.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_871c, !insn.addr !47

dec_label_pc_871c:                                ; preds = %dec_label_pc_871c, %dec_label_pc_8708
  %r4.0.reload = load i32, i32* %r4.0.reg2mem
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %34 = call i32 @function_891c(i32 %r0.0.reload, i32 %2, i32 %9, i32 3000000), !insn.addr !48
  %35 = call i32 @usleep.4(), !insn.addr !49
  %36 = call i32 @function_893c(i32 %35, i32 %2, i32 %9, i32 3000000), !insn.addr !50
  %37 = call i32 @usleep.4(), !insn.addr !51
  %38 = add nsw i32 %r4.0.reload, -1, !insn.addr !52
  %39 = icmp eq i32 %r4.0.reload, 1, !insn.addr !52
  store i32 %37, i32* %r0.0.reg2mem, !insn.addr !53
  store i32 %38, i32* %r4.0.reg2mem, !insn.addr !53
  br i1 %39, label %dec_label_pc_8744, label %dec_label_pc_871c, !insn.addr !53

dec_label_pc_8744:                                ; preds = %dec_label_pc_871c
  %40 = call i32 @puts.9(), !insn.addr !54
  %41 = call i32 @function_8974(), !insn.addr !55
  %42 = icmp eq i32 %41, 1, !insn.addr !56
  store i32 %9, i32* %r2.3.reg2mem, !insn.addr !57
  store i32 3000000, i32* %r3.3.reg2mem, !insn.addr !57
  br i1 %42, label %dec_label_pc_875c, label %dec_label_pc_8684, !insn.addr !57

dec_label_pc_875c:                                ; preds = %dec_label_pc_8674.backedge, %dec_label_pc_8744, %dec_label_pc_8658
  %r3.3.reload = load i32, i32* %r3.3.reg2mem
  %r2.3.reload = load i32, i32* %r2.3.reg2mem
  %r1.2.reload = load i32, i32* %r1.2.reg2mem
  %43 = call i32 @function_893c(i32 1, i32 %r1.2.reload, i32 %r2.3.reload, i32 %r3.3.reload), !insn.addr !58
  %44 = call i32 @function_8974(), !insn.addr !59
  %45 = icmp eq i32 %44, 0, !insn.addr !60
  store i32 %r2.3.reload, i32* %r2.1.reg2mem, !insn.addr !61
  store i32 %r3.3.reload, i32* %r3.1.reg2mem, !insn.addr !61
  store i32 %r2.3.reload, i32* %r2.4.reg2mem, !insn.addr !61
  store i32 %r3.3.reload, i32* %r3.4.reg2mem, !insn.addr !61
  br i1 %45, label %dec_label_pc_8658, label %dec_label_pc_8770, !insn.addr !61

dec_label_pc_8770:                                ; preds = %dec_label_pc_875c, %dec_label_pc_8648
  %r3.4.reload = load i32, i32* %r3.4.reg2mem
  %r2.4.reload = load i32, i32* %r2.4.reg2mem
  %46 = call i32 @sleep.10(), !insn.addr !62
  store i32 %r2.4.reload, i32* %r2.0.reg2mem, !insn.addr !63
  store i32 %r3.4.reload, i32* %r3.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_8648, !insn.addr !63

dec_label_pc_877c:                                ; preds = %dec_label_pc_8684
  %47 = call i32 @usleep.4(), !insn.addr !64
  br label %dec_label_pc_8674.backedge, !insn.addr !65

dec_label_pc_8674.backedge:                       ; preds = %dec_label_pc_877c, %dec_label_pc_878c
  %48 = call i32 @function_8974(), !insn.addr !28
  %49 = icmp eq i32 %48, 1, !insn.addr !29
  store i32 %9, i32* %r2.3.reg2mem, !insn.addr !30
  store i32 3000000, i32* %r3.3.reg2mem, !insn.addr !30
  br i1 %49, label %dec_label_pc_875c, label %dec_label_pc_8684.preheader, !insn.addr !30

dec_label_pc_878c:                                ; preds = %dec_label_pc_86f0
  %50 = call i32 @puts.9(), !insn.addr !66
  br label %dec_label_pc_8674.backedge, !insn.addr !67

dec_label_pc_8798:                                ; preds = %dec_label_pc_8704
  %51 = call i32 @function_893c(i32 0, i32 %2, i32 %9, i32 3000000), !insn.addr !68
  %52 = icmp slt i32 %arg1, 2, !insn.addr !69
  br i1 %52, label %dec_label_pc_87b8, label %dec_label_pc_87a4, !insn.addr !69

dec_label_pc_87a4:                                ; preds = %dec_label_pc_8798
  %53 = call i32 @execvp.2(), !insn.addr !70
  br label %dec_label_pc_87b0, !insn.addr !70

dec_label_pc_87b0:                                ; preds = %dec_label_pc_87b8, %dec_label_pc_87a4
  %54 = call i32 @exit.15(), !insn.addr !71
  br label %dec_label_pc_87b8, !insn.addr !71

dec_label_pc_87b8:                                ; preds = %dec_label_pc_87b0, %dec_label_pc_8798
  %55 = call i32 @sleep.10(), !insn.addr !72
  br label %dec_label_pc_87b0, !insn.addr !73

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
  uselistorder i32 (i32, i32, i32, i32)* @function_893c, { 3, 1, 0, 2 }
  uselistorder i32 ()* @sleep.10, { 3, 0, 2, 1 }
  uselistorder i32 3000000, { 4, 0, 1, 3, 2, 6, 5 }
  uselistorder i32 (i32, i32, i32, i32)* @function_891c, { 1, 2, 0 }
  uselistorder i32 ()* @gettimeofday.14, { 1, 0 }
  uselistorder i32 ()* @function_8974, { 3, 6, 5, 4, 1, 0, 2 }
  uselistorder label %dec_label_pc_8674.backedge, { 1, 0 }
  uselistorder label %dec_label_pc_86c8, { 1, 0 }
  uselistorder label %dec_label_pc_8684, { 1, 0 }
  uselistorder label %dec_label_pc_8684.preheader, { 1, 0 }
  uselistorder label %dec_label_pc_8658, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_87e8:
  %0 = call i32 @__libc_start_main.8(), !insn.addr !74
  %1 = call i32 @abort.13(), !insn.addr !75
  ret i32 %1, !insn.addr !75
}

define i32 @function_8824() local_unnamed_addr {
dec_label_pc_8824:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_10e58, align 4, !insn.addr !76
  %3 = icmp eq i32 %2, 0, !insn.addr !77
  br i1 %3, label %4, label %dec_label_pc_883c, !insn.addr !78

; <label>:4:                                      ; preds = %dec_label_pc_8824
  ret i32 %1, !insn.addr !78

dec_label_pc_883c:                                ; preds = %dec_label_pc_8824
  %5 = call i32 @function_85e0(), !insn.addr !79
  ret i32 %5, !insn.addr !79
}

define i32 @function_8848(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_8848:
  ret i32 ptrtoint (i8** @global_var_10e64 to i32), !insn.addr !80
}

define i32 @function_8880(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8880:
  ret i32 ptrtoint (i8** @global_var_10e64 to i32), !insn.addr !81
}

define i32 @function_88c0() local_unnamed_addr {
dec_label_pc_88c0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_10e64 to i8*), align 4, !insn.addr !82
  %5 = icmp eq i8 %4, 0, !insn.addr !83
  br i1 %5, label %dec_label_pc_88d4, label %6, !insn.addr !84

; <label>:6:                                      ; preds = %dec_label_pc_88c0
  ret i32 %3, !insn.addr !84

dec_label_pc_88d4:                                ; preds = %dec_label_pc_88c0
  %7 = call i32 @function_8848(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !85
  store i8 1, i8* bitcast (i8** @global_var_10e64 to i8*), align 4, !insn.addr !86
  ret i32 %7, !insn.addr !87

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i8** @global_var_10e64, { 1, 0 }
}

define i32 @function_88e8(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_88e8:
  %0 = call i32 @function_8880(i32* nonnull @global_var_10d18, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !88
  ret i32 %0, !insn.addr !88
}

define i32 @function_891c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_891c:
  %0 = call i32 @system.18(), !insn.addr !89
  %1 = call i32 @system.18(), !insn.addr !90
  ret i32 %1, !insn.addr !90
}

define i32 @function_893c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_893c:
  %0 = call i32 @system.18(), !insn.addr !91
  %1 = call i32 @system.18(), !insn.addr !92
  ret i32 %1, !insn.addr !92

; uselistorder directives
  uselistorder i32 ()* @system.18, { 3, 2, 1, 0 }
}

define i32 @function_895c(i8* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_895c:
  %0 = call i32 @access.5(), !insn.addr !93
  %1 = icmp ugt i32 %0, 1
  %2 = select i1 %1, i32 %0, i32 1
  %3 = sub i32 %2, %0
  ret i32 %3, !insn.addr !94

; uselistorder directives
  uselistorder i32 %0, { 2, 1, 0 }
}

define i32 @function_8974() local_unnamed_addr {
dec_label_pc_8974:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !95
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i32, i32* %0
  %5 = call i32 @function_895c(i8* getelementptr inbounds ([24 x i8], [24 x i8]* @global_var_8b84, i32 0, i32 0), i32 %3, i32 %2, i32 %1), !insn.addr !96
  %6 = icmp eq i32 %5, 0, !insn.addr !97
  %7 = call i32 @fopen.16()
  %8 = icmp eq i32 %7, 0
  br i1 %6, label %dec_label_pc_898c, label %dec_label_pc_89d8, !insn.addr !98

dec_label_pc_898c:                                ; preds = %dec_label_pc_8974
  br i1 %8, label %dec_label_pc_8a20, label %dec_label_pc_89a0, !insn.addr !99

dec_label_pc_89a0:                                ; preds = %dec_label_pc_898c
  %9 = call i32 @fwrite.7(), !insn.addr !100
  %10 = icmp eq i32 %9, 1, !insn.addr !101
  br i1 %10, label %dec_label_pc_89c4, label %dec_label_pc_89bc, !insn.addr !102

dec_label_pc_89bc:                                ; preds = %dec_label_pc_89a0
  %11 = call i32 @puts.9(), !insn.addr !103
  br label %dec_label_pc_89c4, !insn.addr !103

dec_label_pc_89c4:                                ; preds = %dec_label_pc_89bc, %dec_label_pc_89a0
  %12 = call i32 @fclose.17(), !insn.addr !104
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !105
  br label %dec_label_pc_89d0, !insn.addr !105

dec_label_pc_89d0:                                ; preds = %dec_label_pc_8a20, %dec_label_pc_8a10, %dec_label_pc_89ec, %dec_label_pc_89c4
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !106

dec_label_pc_89d8:                                ; preds = %dec_label_pc_8974
  br i1 %8, label %dec_label_pc_8a10, label %dec_label_pc_89ec, !insn.addr !107

dec_label_pc_89ec:                                ; preds = %dec_label_pc_89d8
  %13 = call i32 @fscanf.11(), !insn.addr !108
  %14 = call i32 @fclose.17(), !insn.addr !109
  %15 = icmp ne i32 %4, 0, !insn.addr !110
  %spec.select = zext i1 %15 to i32
  store i32 %spec.select, i32* %r0.0.reg2mem, !insn.addr !111
  br label %dec_label_pc_89d0, !insn.addr !111

dec_label_pc_8a10:                                ; preds = %dec_label_pc_89d8
  %16 = call i32 @puts.9(), !insn.addr !112
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !113
  br label %dec_label_pc_89d0, !insn.addr !113

dec_label_pc_8a20:                                ; preds = %dec_label_pc_898c
  %17 = call i32 @puts.9(), !insn.addr !114
  store i32 -1, i32* %r0.0.reg2mem, !insn.addr !115
  br label %dec_label_pc_89d0, !insn.addr !115

; uselistorder directives
  uselistorder i32* %r0.0.reg2mem, { 4, 2, 1, 0, 3 }
  uselistorder i32* %0, { 3, 2, 1, 0 }
  uselistorder i32 -1, { 2, 0, 1, 3 }
  uselistorder i32 ()* @fclose.17, { 1, 0 }
  uselistorder i32 ()* @puts.9, { 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @function_8a58(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8a58:
  %0 = call i32 @function_8530(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !116
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 add (i32 ptrtoint (i32* @global_var_829c to i32), i32 35448), i32 add (i32 ptrtoint (i32* @global_var_8a80 to i32), i32 ptrtoint (i32* @global_var_8290 to i32))), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !117

; uselistorder directives
  uselistorder i32 0, { 5, 14, 15, 16, 6, 7, 22, 2, 17, 18, 19, 20, 1, 3, 0, 4, 21, 8, 9, 10, 11, 12, 13 }
}

define i32 @function_8abc() local_unnamed_addr {
dec_label_pc_8abc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !118

; uselistorder directives
  uselistorder i32 1, { 22, 40, 23, 21, 38, 37, 20, 19, 43, 36, 41, 42, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 39 }
}

define i32 @function_8ac0(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8ac0:
  ret i32 %arg1, !insn.addr !119
}

!0 = !{i64 34100}
!1 = !{i64 34104}
!2 = !{i64 34136}
!3 = !{i64 34148}
!4 = !{i64 34160}
!5 = !{i64 34172}
!6 = !{i64 34184}
!7 = !{i64 34196}
!8 = !{i64 34208}
!9 = !{i64 34220}
!10 = !{i64 34232}
!11 = !{i64 34244}
!12 = !{i64 34256}
!13 = !{i64 34268}
!14 = !{i64 34280}
!15 = !{i64 34292}
!16 = !{i64 34304}
!17 = !{i64 34316}
!18 = !{i64 34328}
!19 = !{i64 34340}
!20 = !{i64 34344}
!21 = !{i64 34372}
!22 = !{i64 34380}
!23 = !{i64 34384}
!24 = !{i64 34388}
!25 = !{i64 34400}
!26 = !{i64 34408}
!27 = !{i64 34416}
!28 = !{i64 34424}
!29 = !{i64 34428}
!30 = !{i64 34432}
!31 = !{i64 34444}
!32 = !{i64 34488}
!33 = !{i64 34496}
!34 = !{i64 34532}
!35 = !{i64 34536}
!36 = !{i64 34540}
!37 = !{i64 34504}
!38 = !{i64 34512}
!39 = !{i64 34516}
!40 = !{i64 34524}
!41 = !{i64 34548}
!42 = !{i64 34552}
!43 = !{i64 34556}
!44 = !{i64 34560}
!45 = !{i64 34564}
!46 = !{i64 34576}
!47 = !{i64 34584}
!48 = !{i64 34588}
!49 = !{i64 34600}
!50 = !{i64 34604}
!51 = !{i64 34616}
!52 = !{i64 34620}
!53 = !{i64 34624}
!54 = !{i64 34632}
!55 = !{i64 34640}
!56 = !{i64 34644}
!57 = !{i64 34648}
!58 = !{i64 34652}
!59 = !{i64 34660}
!60 = !{i64 34664}
!61 = !{i64 34668}
!62 = !{i64 34676}
!63 = !{i64 34680}
!64 = !{i64 34692}
!65 = !{i64 34696}
!66 = !{i64 34704}
!67 = !{i64 34708}
!68 = !{i64 34712}
!69 = !{i64 34720}
!70 = !{i64 34732}
!71 = !{i64 34740}
!72 = !{i64 34748}
!73 = !{i64 34752}
!74 = !{i64 34832}
!75 = !{i64 34836}
!76 = !{i64 34864}
!77 = !{i64 34868}
!78 = !{i64 34872}
!79 = !{i64 34876}
!80 = !{i64 34908}
!81 = !{i64 34972}
!82 = !{i64 35016}
!83 = !{i64 35020}
!84 = !{i64 35024}
!85 = !{i64 35028}
!86 = !{i64 35036}
!87 = !{i64 35040}
!88 = !{i64 35088}
!89 = !{i64 35112}
!90 = !{i64 35128}
!91 = !{i64 35144}
!92 = !{i64 35160}
!93 = !{i64 35172}
!94 = !{i64 35184}
!95 = !{i64 35188}
!96 = !{i64 35200}
!97 = !{i64 35204}
!98 = !{i64 35208}
!99 = !{i64 35228}
!100 = !{i64 35248}
!101 = !{i64 35252}
!102 = !{i64 35256}
!103 = !{i64 35264}
!104 = !{i64 35272}
!105 = !{i64 35276}
!106 = !{i64 35284}
!107 = !{i64 35304}
!108 = !{i64 35316}
!109 = !{i64 35324}
!110 = !{i64 35332}
!111 = !{i64 35340}
!112 = !{i64 35348}
!113 = !{i64 35356}
!114 = !{i64 35364}
!115 = !{i64 35372}
!116 = !{i64 35444}
!117 = !{i64 35460}
!118 = !{i64 35516}
!119 = !{i64 35524}
