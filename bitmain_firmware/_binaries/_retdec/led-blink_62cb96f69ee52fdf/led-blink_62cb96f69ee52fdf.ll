source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_8654 = local_unnamed_addr constant i32 34944
@global_var_8880 = local_unnamed_addr constant [23 x i8] c"/var/run/led-blink.run\00"
@global_var_8658 = local_unnamed_addr constant i32 34976
@global_var_88a0 = local_unnamed_addr constant [3 x i8] c"%d\00"
@global_var_865c = local_unnamed_addr constant i32 34708
@global_var_8690 = local_unnamed_addr constant i32 34928
@global_var_8694 = local_unnamed_addr constant i32 34124
@global_var_8698 = local_unnamed_addr constant i32 34828
@global_var_880c = local_unnamed_addr constant i32 -382908936
@global_var_86b8 = local_unnamed_addr constant i32 33528
@global_var_82f8 = global i32 34112
@global_var_86bc = local_unnamed_addr constant i32 68
@global_var_86ac = constant i32 -481165312
@global_var_86ec = local_unnamed_addr constant i32 68084
@global_var_86f0 = local_unnamed_addr constant i32 68087
@global_var_86f4 = local_unnamed_addr constant i32 0
@global_var_872c = local_unnamed_addr constant i32 68084
@global_var_8730 = local_unnamed_addr constant i32 68084
@global_var_8734 = local_unnamed_addr constant i32 0
@global_var_875c = local_unnamed_addr constant i32 68084
@global_var_878c = local_unnamed_addr constant i32 67768
@global_var_108b8 = global i32 0
@global_var_8790 = local_unnamed_addr constant i32 0
@global_var_8800 = local_unnamed_addr constant i32 34968
@global_var_8898 = local_unnamed_addr constant i32 119
@global_var_8804 = local_unnamed_addr constant i32 34944
@global_var_8808 = local_unnamed_addr constant i32 34972
@global_var_889c = local_unnamed_addr constant [4 x i8] c"%d\0A\00"
@global_var_8868 = local_unnamed_addr constant i32 32904
@global_var_886c = local_unnamed_addr constant i32 32892
@global_var_108b4 = global i32 34616
@global_var_108b0 = global i32 34656
@global_var_109f4 = external global i8*

define i32 @function_8484(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8484:
  %0 = call i32 @function_869c(), !insn.addr !0
  ret i32 %0, !insn.addr !1
}

define i32 @fopen.4() local_unnamed_addr {
dec_label_pc_84a4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !2
}

define i32 @signal.14() local_unnamed_addr {
dec_label_pc_84b0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

define i32 @time.13() local_unnamed_addr {
dec_label_pc_84bc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !4
}

define i32 @sleep.5() local_unnamed_addr {
dec_label_pc_84c8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !5
}

define i32 @unlink.9() local_unnamed_addr {
dec_label_pc_84d4:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !6
}

define i32 @daemon.8() local_unnamed_addr {
dec_label_pc_84e0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !7
}

define i32 @__libc_start_main.2() local_unnamed_addr {
dec_label_pc_84ec:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !8
}

define i32 @function_84f8() local_unnamed_addr {
dec_label_pc_84f8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !9
}

define i32 @exit.3() local_unnamed_addr {
dec_label_pc_8504:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !10
}

define i32 @fprintf.11() local_unnamed_addr {
dec_label_pc_8510:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !11
}

define i32 @sscanf.6() local_unnamed_addr {
dec_label_pc_851c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !12
}

define i32 @access.10() local_unnamed_addr {
dec_label_pc_8528:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !13
}

define i32 @fclose.7() local_unnamed_addr {
dec_label_pc_8534:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !14
}

define i32 @abort.12() local_unnamed_addr {
dec_label_pc_8540:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !15
}

define i32 @function_854c(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_854c:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !16
  %r4.2.reg2mem = alloca i32, !insn.addr !16
  %r2.0.reg2mem = alloca i32, !insn.addr !16
  %stack_var_-20 = alloca i32, align 4
  %1 = load i32, i32* %0
  store i32 -1, i32* %stack_var_-20, align 4, !insn.addr !17
  %2 = call i32 @access.10(), !insn.addr !18
  %3 = icmp eq i32 %2, 0, !insn.addr !19
  br i1 %3, label %dec_label_pc_864c, label %dec_label_pc_8578, !insn.addr !20

dec_label_pc_8578:                                ; preds = %dec_label_pc_854c
  %4 = icmp slt i32 %arg1, 2, !insn.addr !21
  %spec.select = select i1 %4, i32 600, i32 -1
  %5 = icmp sgt i32 %arg1, 1, !insn.addr !22
  store i32 %spec.select, i32* %r4.2.reg2mem, !insn.addr !22
  br i1 %5, label %dec_label_pc_8584, label %dec_label_pc_85a4, !insn.addr !22

dec_label_pc_8584:                                ; preds = %dec_label_pc_8578
  %6 = ptrtoint i32* %stack_var_-20 to i32, !insn.addr !23
  %7 = call i32 @sscanf.6(), !insn.addr !24
  %8 = load i32, i32* %stack_var_-20, align 4, !insn.addr !25
  %9 = icmp sgt i32 %8, 2
  %spec.select1 = select i1 %9, i32 %8, i32 2
  %10 = icmp sgt i32 %8, 1, !insn.addr !26
  %11 = icmp sgt i32 %spec.select1, 1799, !insn.addr !27
  %or.cond = icmp eq i1 %10, %11
  %spec.select2 = select i1 %or.cond, i32 1800, i32 %spec.select1
  store i32 %6, i32* %r2.0.reg2mem
  store i32 %spec.select2, i32* %r4.2.reg2mem
  br label %dec_label_pc_85a4

dec_label_pc_85a4:                                ; preds = %dec_label_pc_8584, %dec_label_pc_8578
  %r4.2.reload = load i32, i32* %r4.2.reg2mem
  %r2.0.reload = load i32, i32* %r2.0.reg2mem
  %12 = call i32 @signal.14(), !insn.addr !28
  %13 = call i32 @signal.14(), !insn.addr !29
  %14 = call i32 @signal.14(), !insn.addr !30
  %15 = call i32 @signal.14(), !insn.addr !31
  %16 = call i32 @time.13(), !insn.addr !32
  %17 = add i32 %r4.2.reload, %1, !insn.addr !33
  %18 = call i32 @function_87c4(i32 %r4.2.reload, i32 34708, i32 %r2.0.reload, i32 %1), !insn.addr !34
  %19 = call i32 @daemon.8(), !insn.addr !35
  %20 = icmp slt i32 %17, %1, !insn.addr !36
  store i32 %19, i32* %r0.0.reg2mem, !insn.addr !36
  br i1 %20, label %dec_label_pc_8628, label %dec_label_pc_8604, !insn.addr !36

dec_label_pc_8604:                                ; preds = %dec_label_pc_85a4, %dec_label_pc_8604
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  %21 = call i32 @function_87ac(i32 %r0.0.reload, i32 0, i32 %r2.0.reload, i32 %1), !insn.addr !37
  %22 = call i32 @time.13(), !insn.addr !38
  %23 = call i32 @function_87c4(i32 %r4.2.reload, i32 0, i32 %r2.0.reload, i32 %1), !insn.addr !39
  store i32 %23, i32* %r0.0.reg2mem
  br label %dec_label_pc_8604

dec_label_pc_8628:                                ; preds = %dec_label_pc_85a4
  %24 = call i32 @unlink.9(), !insn.addr !40
  ret i32 0, !insn.addr !41

dec_label_pc_864c:                                ; preds = %dec_label_pc_854c
  %25 = call i32 @exit.3(), !insn.addr !42
  ret i32 %25, !insn.addr !42

; uselistorder directives
  uselistorder i32 %r2.0.reload, { 2, 1, 0 }
  uselistorder i32 %r4.2.reload, { 1, 0, 2 }
  uselistorder i32 %8, { 2, 0, 1 }
  uselistorder i32 %1, { 2, 3, 0, 1, 4 }
  uselistorder i32* %r0.0.reg2mem, { 2, 0, 1 }
  uselistorder i32 (i32, i32, i32, i32)* @function_87c4, { 1, 0 }
  uselistorder i32 ()* @time.13, { 1, 0 }
  uselistorder i32 ()* @signal.14, { 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_8604, { 1, 0 }
}

define i32 @entry_point(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8660:
  %0 = call i32 @__libc_start_main.2(), !insn.addr !43
  %1 = call i32 @abort.12(), !insn.addr !44
  ret i32 %1, !insn.addr !44
}

define i32 @function_869c() local_unnamed_addr {
dec_label_pc_869c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* inttoptr (i32 add (i32 add (i32 ptrtoint (i32* @global_var_86ac to i32), i32 ptrtoint (i32* @global_var_82f8 to i32)), i32 68) to i32*), align 4, !insn.addr !45
  %3 = icmp eq i32 %2, 0, !insn.addr !46
  br i1 %3, label %4, label %dec_label_pc_86b4, !insn.addr !47

; <label>:4:                                      ; preds = %dec_label_pc_869c
  ret i32 %1, !insn.addr !47

dec_label_pc_86b4:                                ; preds = %dec_label_pc_869c
  %5 = call i32 @function_84f8(), !insn.addr !48
  ret i32 %5, !insn.addr !48
}

define i32 @function_86c0(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_86c0:
  ret i32 ptrtoint (i8** @global_var_109f4 to i32), !insn.addr !49
}

define i32 @function_86f8(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_86f8:
  ret i32 ptrtoint (i8** @global_var_109f4 to i32), !insn.addr !50
}

define i32 @function_8738() local_unnamed_addr {
dec_label_pc_8738:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_109f4 to i8*), align 4, !insn.addr !51
  %5 = icmp eq i8 %4, 0, !insn.addr !52
  br i1 %5, label %dec_label_pc_874c, label %6, !insn.addr !53

; <label>:6:                                      ; preds = %dec_label_pc_8738
  ret i32 %3, !insn.addr !53

dec_label_pc_874c:                                ; preds = %dec_label_pc_8738
  %7 = call i32 @function_86c0(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !54
  store i8 1, i8* bitcast (i8** @global_var_109f4 to i8*), align 4, !insn.addr !55
  ret i32 %7, !insn.addr !56

; uselistorder directives
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i8** @global_var_109f4, { 1, 0 }
}

define i32 @function_8760(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8760:
  %0 = call i32 @function_86f8(i32* nonnull @global_var_108b8, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !57
  ret i32 %0, !insn.addr !57
}

define i32 @function_8794(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8794:
  %0 = call i32 @unlink.9(), !insn.addr !58
  %1 = call i32 @exit.3(), !insn.addr !59
  ret i32 %1, !insn.addr !59

; uselistorder directives
  uselistorder i32 ()* @unlink.9, { 1, 0 }
}

define i32 @function_87ac(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_87ac:
  %0 = call i32 @sleep.5(), !insn.addr !60
  %1 = call i32 @sleep.5(), !insn.addr !61
  ret i32 %1, !insn.addr !61

; uselistorder directives
  uselistorder i32 ()* @sleep.5, { 1, 0 }
}

define i32 @function_87c4(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_87c4:
  %0 = call i32 @fopen.4(), !insn.addr !62
  %1 = icmp eq i32 %0, 0, !insn.addr !63
  br i1 %1, label %dec_label_pc_87f8, label %dec_label_pc_87e0, !insn.addr !64

dec_label_pc_87e0:                                ; preds = %dec_label_pc_87c4
  %2 = call i32 @fprintf.11(), !insn.addr !65
  %3 = call i32 @fclose.7(), !insn.addr !66
  ret i32 %3, !insn.addr !66

dec_label_pc_87f8:                                ; preds = %dec_label_pc_87c4
  %4 = call i32 @exit.3(), !insn.addr !67
  ret i32 %4, !insn.addr !67

; uselistorder directives
  uselistorder i32 ()* @exit.3, { 1, 2, 0 }
}

define i32 @function_880c(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_880c:
  %0 = call i32 @function_8484(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !68
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 ptrtoint (i32* @global_var_108b4 to i32), i32 ptrtoint (i32* @global_var_108b0 to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !69

; uselistorder directives
  uselistorder i32 0, { 3, 8, 10, 0, 1, 2, 9, 4, 5, 6, 7 }
  uselistorder i32 2, { 2, 0, 1, 3 }
}

define i32 @function_8870() local_unnamed_addr {
dec_label_pc_8870:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !70

; uselistorder directives
  uselistorder i32 1, { 17, 16, 15, 21, 22, 23, 20, 19, 18, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i32 @function_8874(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8874:
  ret i32 %arg1, !insn.addr !71
}

!0 = !{i64 33928}
!1 = !{i64 33932}
!2 = !{i64 33964}
!3 = !{i64 33976}
!4 = !{i64 33988}
!5 = !{i64 34000}
!6 = !{i64 34012}
!7 = !{i64 34024}
!8 = !{i64 34036}
!9 = !{i64 34048}
!10 = !{i64 34060}
!11 = !{i64 34072}
!12 = !{i64 34084}
!13 = !{i64 34096}
!14 = !{i64 34108}
!15 = !{i64 34120}
!16 = !{i64 34124}
!17 = !{i64 34152}
!18 = !{i64 34156}
!19 = !{i64 34160}
!20 = !{i64 34164}
!21 = !{i64 34172}
!22 = !{i64 34176}
!23 = !{i64 34184}
!24 = !{i64 34192}
!25 = !{i64 34196}
!26 = !{i64 34208}
!27 = !{i64 34372}
!28 = !{i64 34220}
!29 = !{i64 34232}
!30 = !{i64 34244}
!31 = !{i64 34256}
!32 = !{i64 34264}
!33 = !{i64 34276}
!34 = !{i64 34280}
!35 = !{i64 34292}
!36 = !{i64 34304}
!37 = !{i64 34308}
!38 = !{i64 34316}
!39 = !{i64 34328}
!40 = !{i64 34348}
!41 = !{i64 34360}
!42 = !{i64 34384}
!43 = !{i64 34440}
!44 = !{i64 34444}
!45 = !{i64 34472}
!46 = !{i64 34476}
!47 = !{i64 34480}
!48 = !{i64 34484}
!49 = !{i64 34516}
!50 = !{i64 34580}
!51 = !{i64 34624}
!52 = !{i64 34628}
!53 = !{i64 34632}
!54 = !{i64 34636}
!55 = !{i64 34644}
!56 = !{i64 34648}
!57 = !{i64 34696}
!58 = !{i64 34720}
!59 = !{i64 34728}
!60 = !{i64 34740}
!61 = !{i64 34752}
!62 = !{i64 34772}
!63 = !{i64 34776}
!64 = !{i64 34780}
!65 = !{i64 34792}
!66 = !{i64 34804}
!67 = !{i64 34812}
!68 = !{i64 34856}
!69 = !{i64 34872}
!70 = !{i64 34928}
!71 = !{i64 34936}
