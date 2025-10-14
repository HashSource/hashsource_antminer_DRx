source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

@global_var_8460 = local_unnamed_addr constant i32 33576
@global_var_8328 = local_unnamed_addr global i32 1557
@global_var_8464 = local_unnamed_addr constant i32 52
@global_var_10698 = global i32 1
@global_var_10780 = local_unnamed_addr global i32* @global_var_10698
@global_var_107b4 = local_unnamed_addr global i32 0
@global_var_8480 = local_unnamed_addr constant i32 67520
@global_var_8484 = local_unnamed_addr constant i32 67523
@global_var_8488 = local_unnamed_addr constant i32 0
@global_var_84ac = local_unnamed_addr constant i32 67520
@global_var_84b0 = local_unnamed_addr constant i32 67520
@global_var_84b4 = local_unnamed_addr constant i32 0
@global_var_84cc = local_unnamed_addr constant i32 67520
@global_var_84e8 = local_unnamed_addr constant i32 67220
@global_var_10694 = global i32 0
@global_var_84ec = local_unnamed_addr constant i32 0
@global_var_8600 = constant [17 x i8] c"/dev/bitmain-lcd\00"
@global_var_8614 = constant [39 x i8] c"/dev/bitmain-lcd open failed. fd = %d\0A\00"
@global_var_863c = constant [5 x i8] c"open\00"
@global_var_8644 = constant [34 x i8] c"/dev/bitmain-lcd opened. fd = %d\0A\00"
@global_var_8668 = constant [11 x i8] c"\0Aclear lcd\00"
@global_var_8674 = constant [11 x i8] c"\0Awrite lcd\00"
@global_var_85e8 = local_unnamed_addr constant i32 32972
@global_var_85f0 = local_unnamed_addr constant [3 x i8] c"pG\00"
@global_var_1068c = global i32 34001
@0 = external global i32
@global_var_8448 = local_unnamed_addr constant void ()* inttoptr (i32 34033 to void ()*)
@global_var_844c = local_unnamed_addr constant void ()* inttoptr (i32 34221 to void ()*)
@global_var_107c0 = external global i8*

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_837c:
  %0 = call i32 @call_gmon_start(), !insn.addr !0
  %1 = call i32 @__asm_nop(i32 %0), !insn.addr !1
  ret i32 %1, !insn.addr !2
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @sleep(i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

define i32 @"$t"() local_unnamed_addr {
dec_label_pc_83d8:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare i32* @memset(i32*, i32, i32) local_unnamed_addr

declare i32 @write(i32, i32*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_8418:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %stack_var_4 = alloca i32, align 4
  %2 = bitcast i32* %stack_var_4 to i8**, !insn.addr !4
  %3 = inttoptr i32 %arg1 to void ()*, !insn.addr !4
  %4 = call i32 @__libc_start_main(i32 34033, i32 %arg2, i8** nonnull %2, void ()* inttoptr (i32 34221 to void ()*), void ()* inttoptr (i32 34033 to void ()*), void ()* %3), !insn.addr !4
  call void @abort(), !insn.addr !5
  %5 = trunc i32 %arg2 to i16, !insn.addr !6
  %6 = add i32 %1, 46, !insn.addr !6
  %7 = inttoptr i32 %6 to i16*, !insn.addr !6
  store i16 %5, i16* %7, align 2, !insn.addr !6
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !7
}

define i32 @call_gmon_start() local_unnamed_addr {
dec_label_pc_8450:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_107b4, align 4, !insn.addr !8
  %3 = icmp eq i32 %2, 0, !insn.addr !9
  br i1 %3, label %dec_label_pc_845e, label %dec_label_pc_845a, !insn.addr !9

dec_label_pc_845a:                                ; preds = %dec_label_pc_8450
  %4 = call i32 @"$t"(), !insn.addr !10
  ret i32 %4, !insn.addr !10

dec_label_pc_845e:                                ; preds = %dec_label_pc_8450
  ret i32 %1, !insn.addr !11
}

define i32 @deregister_tm_clones(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_8468:
  ret i32 ptrtoint (i8** @global_var_107c0 to i32), !insn.addr !12
}

define i32 @register_tm_clones(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_848c:
  ret i32 ptrtoint (i8** @global_var_107c0 to i32), !insn.addr !13
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_84b8:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !14
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_107c0 to i8*), align 4, !insn.addr !15
  %5 = icmp eq i8 %4, 0, !insn.addr !16
  br i1 %5, label %dec_label_pc_84c0, label %dec_label_pc_84c8, !insn.addr !16

dec_label_pc_84c0:                                ; preds = %dec_label_pc_84b8
  %6 = call i32 @deregister_tm_clones(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !17
  store i8 1, i8* bitcast (i8** @global_var_107c0 to i8*), align 4, !insn.addr !18
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !18
  br label %dec_label_pc_84c8, !insn.addr !18

dec_label_pc_84c8:                                ; preds = %dec_label_pc_84b8, %dec_label_pc_84c0
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !19

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder i8** @global_var_107c0, { 1, 0 }
  uselistorder label %dec_label_pc_84c8, { 1, 0 }
}

define i32 @frame_dummy(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_84d0:
  %0 = call i32 @register_tm_clones(i32* nonnull @global_var_10694, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !20
  ret i32 %0, !insn.addr !20
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_84f0:
  %stack_var_-76 = alloca i32, align 4
  %0 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_8600, i32 0, i32 0), i32 1052674), !insn.addr !21
  %1 = icmp slt i32 %0, 0, !insn.addr !22
  br i1 %1, label %dec_label_pc_8516, label %dec_label_pc_8536, !insn.addr !23

dec_label_pc_8516:                                ; preds = %dec_label_pc_84f0
  %2 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([39 x i8], [39 x i8]* @global_var_8614, i32 0, i32 0), i32 %0), !insn.addr !24
  call void @perror(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_863c, i32 0, i32 0)), !insn.addr !25
  ret i32 -1, !insn.addr !26

dec_label_pc_8536:                                ; preds = %dec_label_pc_84f0
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_8644, i32 0, i32 0), i32 %0), !insn.addr !27
  br label %dec_label_pc_8544, !insn.addr !27

dec_label_pc_8544:                                ; preds = %dec_label_pc_8544, %dec_label_pc_8536
  %4 = call i32 @puts(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_8668, i32 0, i32 0)), !insn.addr !28
  %5 = call i32* @memset(i32* nonnull %stack_var_-76, i32 32, i32 64), !insn.addr !29
  %6 = call i32 @write(i32 %0, i32* nonnull %stack_var_-76, i32 64), !insn.addr !30
  %7 = call i32 @sleep(i32 3), !insn.addr !31
  %8 = call i32 @puts(i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_8674, i32 0, i32 0)), !insn.addr !32
  %9 = call i32* @memset(i32* nonnull %stack_var_-76, i32 97, i32 64), !insn.addr !33
  %10 = call i32 @write(i32 %0, i32* nonnull %stack_var_-76, i32 64), !insn.addr !34
  %11 = call i32 @sleep(i32 3), !insn.addr !35
  br label %dec_label_pc_8544, !insn.addr !36

; uselistorder directives
  uselistorder i32 %0, { 1, 0, 3, 2, 4 }
  uselistorder i32 (i32)* @sleep, { 1, 0 }
  uselistorder i32 (i32, i32*, i32)* @write, { 1, 0 }
  uselistorder i32* (i32*, i32, i32)* @memset, { 1, 0 }
  uselistorder i32 (i8*)* @puts, { 1, 0 }
  uselistorder i32 (i8*, ...)* @printf, { 1, 0 }
}

define i32 @__libc_csu_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_85ac:
  %0 = call i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !37
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 52532, i32 ptrtoint (i32* @global_var_1068c to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !38

; uselistorder directives
  uselistorder i32 0, { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 18, 11, 12, 19, 13, 14, 15, 16, 17 }
}

define i32 @__libc_csu_fini() local_unnamed_addr {
dec_label_pc_85f0:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 4, 7, 5, 3, 2, 8, 1, 0, 6 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_85f4:
  %0 = call i32 @__asm_nop(i32 %arg1), !insn.addr !39
  ret i32 %0, !insn.addr !40

; uselistorder directives
  uselistorder i32 (i32)* @__asm_nop, { 1, 0 }
}

declare i32 @__asm_nop(i32) local_unnamed_addr

!0 = !{i64 33662}
!1 = !{i64 33666}
!2 = !{i64 33668}
!3 = !{i64 33764}
!4 = !{i64 33850}
!5 = !{i64 33854}
!6 = !{i64 33860}
!7 = !{i64 33862}
!8 = !{i64 33878}
!9 = !{i64 33880}
!10 = !{i64 33882}
!11 = !{i64 33886}
!12 = !{i64 33908}
!13 = !{i64 33950}
!14 = !{i64 33976}
!15 = !{i64 33980}
!16 = !{i64 33982}
!17 = !{i64 33984}
!18 = !{i64 33990}
!19 = !{i64 33992}
!20 = !{i64 34018}
!21 = !{i64 34058}
!22 = !{i64 34066}
!23 = !{i64 34068}
!24 = !{i64 34080}
!25 = !{i64 34092}
!26 = !{i64 34218}
!27 = !{i64 34112}
!28 = !{i64 34124}
!29 = !{i64 34138}
!30 = !{i64 34152}
!31 = !{i64 34158}
!32 = !{i64 34170}
!33 = !{i64 34184}
!34 = !{i64 34198}
!35 = !{i64 34204}
!36 = !{i64 34208}
!37 = !{i64 34238}
!38 = !{i64 34276}
!39 = !{i64 34294}
!40 = !{i64 34296}
