source_filename = "test"
target datalayout = "e-p:32:32:32-f80:32:32"

%_IO_FILE = type { i32 }

@global_var_8965 = local_unnamed_addr constant i32 2101776528
@global_var_860c = local_unnamed_addr constant i32 34348
@global_var_862c = local_unnamed_addr constant i32 68744
@global_var_8610 = local_unnamed_addr constant i32 76
@global_var_10b48 = global i32 1
@global_var_10c30 = local_unnamed_addr global i32* @global_var_10b48
@global_var_10c7c = local_unnamed_addr global i32 0
@global_var_8630 = local_unnamed_addr constant i32 68747
@global_var_10c8b = local_unnamed_addr global i32 0
@global_var_8634 = local_unnamed_addr constant i32 0
@global_var_8658 = local_unnamed_addr constant i32 68744
@global_var_865c = local_unnamed_addr constant i32 68744
@global_var_8660 = local_unnamed_addr constant i32 0
@global_var_8678 = local_unnamed_addr constant i32 68752
@global_var_8694 = local_unnamed_addr constant i32 68420
@global_var_10b44 = global i32 0
@global_var_8698 = local_unnamed_addr constant i32 0
@global_var_89ac = constant [173 x i8] c"\0AUsage:\09%s { address } [ type [ data ] ]\0A\09address : memory address to act upon\0A\09type    : access operation type : [b]yte, [h]alfword, [w]ord\0A\09data    : data to be written\0A\0A\00"
@global_var_8a5c = constant [9 x i8] c"/dev/mem\00"
@global_var_8a68 = constant [37 x i8] c"Error at line %d, file %s (%d) [%s]\0A\00"
@global_var_8a90 = constant [10 x i8] c"devmem2.c\00"
@global_var_8a9c = constant [17 x i8] c"/dev/mem opened.\00"
@global_var_8ab0 = constant [30 x i8] c"Memory mapped at address %p.\0A\00"
@global_var_8ad0 = constant [25 x i8] c"Illegal data type '%c'.\0A\00"
@global_var_8aec = constant [34 x i8] c"Value at address 0x%X (%p): 0x%X\0A\00"
@global_var_8b10 = constant [29 x i8] c"Written 0x%X; readback 0x%X\0A\00"
@global_var_8994 = local_unnamed_addr constant i32 33232
@global_var_81d0 = local_unnamed_addr global [4 x i32] %wide-string
@global_var_899c = local_unnamed_addr constant [3 x i8] c"pG\00"
@global_var_10b3c = global i32 34429
@0 = external global i32
@global_var_85f4 = local_unnamed_addr constant void ()* inttoptr (i32 34461 to void ()*)
@global_var_85f8 = local_unnamed_addr constant void ()* inttoptr (i32 35161 to void ()*)
@global_var_10c88 = global %_IO_FILE* null
@global_var_10c90 = external local_unnamed_addr global i8*
@global_var_10c8c = local_unnamed_addr global %_IO_FILE* null

define i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_84e0:
  %0 = call i32 @call_gmon_start(), !insn.addr !0
  %1 = call i32 @__asm_nop(i32 %0), !insn.addr !1
  ret i32 %1, !insn.addr !2
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @fflush(%_IO_FILE*) local_unnamed_addr

declare i32 @tolower(i32) local_unnamed_addr

declare i32 @puts(i8*) local_unnamed_addr

declare i32 @__libc_start_main(i32, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare i8* @strerror(i32) local_unnamed_addr

define i32 @"$t"() local_unnamed_addr {
dec_label_pc_8548:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1, !insn.addr !3
}

declare i32 @open(i8*, i32, ...) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @strtoul(i8*, i8**, i32) local_unnamed_addr

declare i32* @mmap(i32*, i32, i32, i32, i32, i32) local_unnamed_addr

declare i32 @fprintf(%_IO_FILE*, i8*, ...) local_unnamed_addr

declare i32* @__errno_location() local_unnamed_addr

declare i32 @munmap(i32*, i32) local_unnamed_addr

declare void @abort() local_unnamed_addr

declare i32 @close(i32) local_unnamed_addr

define i32 @_start(i32 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_85c4:
  %stack_var_4 = alloca i32, align 4
  %0 = bitcast i32* %stack_var_4 to i8**, !insn.addr !4
  %1 = inttoptr i32 %arg1 to void ()*, !insn.addr !4
  %2 = call i32 @__libc_start_main(i32 34461, i32 %arg2, i8** nonnull %0, void ()* inttoptr (i32 35161 to void ()*), void ()* inttoptr (i32 34461 to void ()*), void ()* %1), !insn.addr !4
  call void @abort(), !insn.addr !5
  ret i32 ptrtoint (i32* @0 to i32), !insn.addr !6
}

define i32 @call_gmon_start() local_unnamed_addr {
dec_label_pc_85fc:
  %0 = alloca i32
  %1 = load i32, i32* %0
  %2 = load i32, i32* @global_var_10c7c, align 4, !insn.addr !7
  %3 = icmp eq i32 %2, 0, !insn.addr !8
  br i1 %3, label %dec_label_pc_860a, label %dec_label_pc_8606, !insn.addr !8

dec_label_pc_8606:                                ; preds = %dec_label_pc_85fc
  %4 = call i32 @"$t"(), !insn.addr !9
  ret i32 %4, !insn.addr !9

dec_label_pc_860a:                                ; preds = %dec_label_pc_85fc
  ret i32 %1, !insn.addr !10
}

define i32 @deregister_tm_clones(i32 %arg1, i32 %arg2, i32 %arg3, i8 %arg4) local_unnamed_addr {
dec_label_pc_8614:
  ret i32 ptrtoint (%_IO_FILE** @global_var_10c88 to i32), !insn.addr !11
}

define i32 @register_tm_clones(i32* %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8638:
  ret i32 ptrtoint (%_IO_FILE** @global_var_10c88 to i32), !insn.addr !12
}

define i32 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_8664:
  %0 = alloca i32
  %r0.0.reg2mem = alloca i32, !insn.addr !13
  %1 = load i32, i32* %0
  %2 = load i32, i32* %0
  %3 = load i32, i32* %0
  %4 = load i8, i8* bitcast (i8** @global_var_10c90 to i8*), align 4, !insn.addr !14
  %5 = icmp eq i8 %4, 0, !insn.addr !15
  br i1 %5, label %dec_label_pc_866c, label %dec_label_pc_8674, !insn.addr !15

dec_label_pc_866c:                                ; preds = %dec_label_pc_8664
  %6 = call i32 @deregister_tm_clones(i32 %3, i32 %2, i32 %1, i8 0), !insn.addr !16
  store i8 1, i8* bitcast (i8** @global_var_10c90 to i8*), align 4, !insn.addr !17
  store i32 %6, i32* %r0.0.reg2mem, !insn.addr !17
  br label %dec_label_pc_8674, !insn.addr !17

dec_label_pc_8674:                                ; preds = %dec_label_pc_8664, %dec_label_pc_866c
  %r0.0.reload = load i32, i32* %r0.0.reg2mem
  ret i32 %r0.0.reload, !insn.addr !18

; uselistorder directives
  uselistorder i32* %0, { 2, 1, 0 }
  uselistorder label %dec_label_pc_8674, { 1, 0 }
}

define i32 @frame_dummy(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_867c:
  %0 = call i32 @register_tm_clones(i32* nonnull @global_var_10b44, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define i32 @main(i32 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_869c:
  %stack_var_-20.1.reg2mem = alloca i32, !insn.addr !20
  %stack_var_-20.0.reg2mem = alloca i32, !insn.addr !20
  %stack_var_-24.0.reg2mem = alloca i8, !insn.addr !20
  %0 = icmp sgt i32 %argc, 1, !insn.addr !21
  br i1 %0, label %dec_label_pc_86d4, label %dec_label_pc_86b0, !insn.addr !21

dec_label_pc_86b0:                                ; preds = %dec_label_pc_869c
  %1 = load %_IO_FILE*, %_IO_FILE** @global_var_10c88, align 4, !insn.addr !22
  %2 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %1, i8* getelementptr inbounds ([173 x i8], [173 x i8]* @global_var_89ac, i32 0, i32 0), i8** %argv), !insn.addr !23
  call void @exit(i32 1), !insn.addr !24
  br label %dec_label_pc_86d4, !insn.addr !24

dec_label_pc_86d4:                                ; preds = %dec_label_pc_86b0, %dec_label_pc_869c
  %3 = ptrtoint i8** %argv to i32, !insn.addr !25
  %4 = add i32 %3, 4, !insn.addr !26
  %5 = inttoptr i32 %4 to i32*, !insn.addr !27
  %6 = load i32, i32* %5, align 4, !insn.addr !27
  %7 = inttoptr i32 %6 to i8*, !insn.addr !28
  %8 = call i32 @strtoul(i8* %7, i8** null, i32 0), !insn.addr !28
  %9 = icmp slt i32 %argc, 3, !insn.addr !29
  store i8 119, i8* %stack_var_-24.0.reg2mem, !insn.addr !29
  br i1 %9, label %dec_label_pc_86fe, label %dec_label_pc_86ee, !insn.addr !29

dec_label_pc_86ee:                                ; preds = %dec_label_pc_86d4
  %10 = add i32 %3, 8, !insn.addr !30
  %11 = inttoptr i32 %10 to i32*, !insn.addr !31
  %12 = load i32, i32* %11, align 4, !insn.addr !31
  %13 = inttoptr i32 %12 to i8*, !insn.addr !32
  %14 = load i8, i8* %13, align 1, !insn.addr !32
  %15 = zext i8 %14 to i32, !insn.addr !32
  %16 = call i32 @tolower(i32 %15), !insn.addr !33
  %17 = trunc i32 %16 to i8, !insn.addr !34
  store i8 %17, i8* %stack_var_-24.0.reg2mem, !insn.addr !34
  br label %dec_label_pc_86fe, !insn.addr !34

dec_label_pc_86fe:                                ; preds = %dec_label_pc_86ee, %dec_label_pc_86d4
  %stack_var_-24.0.reload = load i8, i8* %stack_var_-24.0.reg2mem
  %18 = call i32 (i8*, i32, ...) @open(i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_8a5c, i32 0, i32 0), i32 1052674), !insn.addr !35
  %19 = icmp eq i32 %18, -1, !insn.addr !36
  br i1 %19, label %dec_label_pc_871c, label %dec_label_pc_8760, !insn.addr !37

dec_label_pc_871c:                                ; preds = %dec_label_pc_86fe
  %20 = load %_IO_FILE*, %_IO_FILE** @global_var_10c88, align 4, !insn.addr !38
  %21 = call i32* @__errno_location(), !insn.addr !39
  %22 = load i32, i32* %21, align 4, !insn.addr !40
  %23 = call i32* @__errno_location(), !insn.addr !41
  %24 = load i32, i32* %23, align 4, !insn.addr !42
  %25 = call i8* @strerror(i32 %24), !insn.addr !43
  %26 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %20, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_8a68, i32 0, i32 0), i32 79, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_8a90, i32 0, i32 0), i32 %22, i8* %25), !insn.addr !44
  call void @exit(i32 1), !insn.addr !45
  br label %dec_label_pc_8760, !insn.addr !45

dec_label_pc_8760:                                ; preds = %dec_label_pc_86fe, %dec_label_pc_871c
  %27 = call i32 @puts(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_8a9c, i32 0, i32 0)), !insn.addr !46
  %28 = load %_IO_FILE*, %_IO_FILE** @global_var_10c8c, align 4, !insn.addr !47
  %29 = call i32 @fflush(%_IO_FILE* %28), !insn.addr !48
  %30 = and i32 %8, -4096, !insn.addr !49
  %31 = call i32* @mmap(i32* null, i32 4096, i32 3, i32 1, i32 %18, i32 %30), !insn.addr !50
  %32 = icmp eq i32* %31, inttoptr (i32 -1 to i32*), !insn.addr !51
  br i1 %32, label %dec_label_pc_87a4, label %dec_label_pc_87e8, !insn.addr !52

dec_label_pc_87a4:                                ; preds = %dec_label_pc_8760
  %33 = load %_IO_FILE*, %_IO_FILE** @global_var_10c88, align 4, !insn.addr !53
  %34 = call i32* @__errno_location(), !insn.addr !54
  %35 = load i32, i32* %34, align 4, !insn.addr !55
  %36 = call i32* @__errno_location(), !insn.addr !56
  %37 = load i32, i32* %36, align 4, !insn.addr !57
  %38 = call i8* @strerror(i32 %37), !insn.addr !58
  %39 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %33, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_8a68, i32 0, i32 0), i32 85, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_8a90, i32 0, i32 0), i32 %35, i8* %38), !insn.addr !59
  call void @exit(i32 1), !insn.addr !60
  br label %dec_label_pc_87e8, !insn.addr !60

dec_label_pc_87e8:                                ; preds = %dec_label_pc_8760, %dec_label_pc_87a4
  %40 = ptrtoint i32* %31 to i32, !insn.addr !50
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_8ab0, i32 0, i32 0), i32* %31), !insn.addr !61
  %42 = load %_IO_FILE*, %_IO_FILE** @global_var_10c8c, align 4, !insn.addr !62
  %43 = call i32 @fflush(%_IO_FILE* %42), !insn.addr !63
  %44 = call i32 @__asm_ubfx(i32 %8, i32 0, i32 12), !insn.addr !64
  %45 = add i32 %44, %40, !insn.addr !65
  switch i8 %stack_var_-24.0.reload, label %dec_label_pc_8838 [
    i8 104, label %dec_label_pc_8828
    i8 119, label %dec_label_pc_8830
    i8 98, label %dec_label_pc_8820
  ]

dec_label_pc_8820:                                ; preds = %dec_label_pc_87e8
  %46 = inttoptr i32 %45 to i8*, !insn.addr !66
  %47 = load i8, i8* %46, align 1, !insn.addr !66
  %48 = zext i8 %47 to i32, !insn.addr !66
  store i32 %48, i32* %stack_var_-20.0.reg2mem, !insn.addr !67
  br label %dec_label_pc_8858, !insn.addr !67

dec_label_pc_8828:                                ; preds = %dec_label_pc_87e8
  %49 = inttoptr i32 %45 to i16*, !insn.addr !68
  %50 = load i16, i16* %49, align 2, !insn.addr !68
  %51 = zext i16 %50 to i32, !insn.addr !68
  store i32 %51, i32* %stack_var_-20.0.reg2mem, !insn.addr !69
  br label %dec_label_pc_8858, !insn.addr !69

dec_label_pc_8830:                                ; preds = %dec_label_pc_87e8
  %52 = inttoptr i32 %45 to i32*, !insn.addr !70
  %53 = load i32, i32* %52, align 4, !insn.addr !70
  store i32 %53, i32* %stack_var_-20.0.reg2mem, !insn.addr !71
  br label %dec_label_pc_8858, !insn.addr !71

dec_label_pc_8838:                                ; preds = %dec_label_pc_87e8
  %54 = load %_IO_FILE*, %_IO_FILE** @global_var_10c88, align 4, !insn.addr !72
  %55 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %54, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_8ad0, i32 0, i32 0), i8 %stack_var_-24.0.reload), !insn.addr !73
  call void @exit(i32 2), !insn.addr !74
  br label %dec_label_pc_8858, !insn.addr !74

dec_label_pc_8858:                                ; preds = %dec_label_pc_8838, %dec_label_pc_8830, %dec_label_pc_8828, %dec_label_pc_8820
  %stack_var_-20.0.reload = load i32, i32* %stack_var_-20.0.reg2mem
  %56 = inttoptr i32 %45 to i32*, !insn.addr !75
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_8aec, i32 0, i32 0), i32 %8, i32* %56, i32 %stack_var_-20.0.reload), !insn.addr !75
  %58 = load %_IO_FILE*, %_IO_FILE** @global_var_10c8c, align 4, !insn.addr !76
  %59 = call i32 @fflush(%_IO_FILE* %58), !insn.addr !77
  %60 = icmp slt i32 %argc, 4, !insn.addr !78
  br i1 %60, label %dec_label_pc_88ee, label %dec_label_pc_8880, !insn.addr !78

dec_label_pc_8880:                                ; preds = %dec_label_pc_8858
  %61 = add i32 %3, 12, !insn.addr !79
  %62 = inttoptr i32 %61 to i32*, !insn.addr !80
  %63 = load i32, i32* %62, align 4, !insn.addr !80
  %64 = inttoptr i32 %63 to i8*, !insn.addr !81
  %65 = call i32 @strtoul(i8* %64, i8** null, i32 0), !insn.addr !81
  store i32 %stack_var_-20.0.reload, i32* %stack_var_-20.1.reg2mem
  switch i8 %stack_var_-24.0.reload, label %dec_label_pc_88ce [
    i8 104, label %dec_label_pc_88b0
    i8 119, label %dec_label_pc_88c0
    i8 98, label %dec_label_pc_88a0
  ]

dec_label_pc_88a0:                                ; preds = %dec_label_pc_8880
  %66 = trunc i32 %65 to i8, !insn.addr !82
  %67 = inttoptr i32 %45 to i8*, !insn.addr !82
  store i8 %66, i8* %67, align 1, !insn.addr !82
  %68 = urem i32 %65, 256, !insn.addr !83
  store i32 %68, i32* %stack_var_-20.1.reg2mem, !insn.addr !84
  br label %dec_label_pc_88ce, !insn.addr !84

dec_label_pc_88b0:                                ; preds = %dec_label_pc_8880
  %69 = trunc i32 %65 to i16, !insn.addr !85
  %70 = inttoptr i32 %45 to i16*, !insn.addr !85
  store i16 %69, i16* %70, align 2, !insn.addr !85
  %71 = urem i32 %65, 65536, !insn.addr !86
  store i32 %71, i32* %stack_var_-20.1.reg2mem, !insn.addr !87
  br label %dec_label_pc_88ce, !insn.addr !87

dec_label_pc_88c0:                                ; preds = %dec_label_pc_8880
  store i32 %65, i32* %56, align 4, !insn.addr !88
  %72 = call i32 @__asm_nop(i32 %65), !insn.addr !89
  store i32 %65, i32* %stack_var_-20.1.reg2mem, !insn.addr !89
  br label %dec_label_pc_88ce, !insn.addr !89

dec_label_pc_88ce:                                ; preds = %dec_label_pc_8880, %dec_label_pc_88c0, %dec_label_pc_88b0, %dec_label_pc_88a0
  %stack_var_-20.1.reload = load i32, i32* %stack_var_-20.1.reg2mem
  %73 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_8b10, i32 0, i32 0), i32 %65, i32 %stack_var_-20.1.reload), !insn.addr !90
  %74 = load %_IO_FILE*, %_IO_FILE** @global_var_10c8c, align 4, !insn.addr !91
  %75 = call i32 @fflush(%_IO_FILE* %74), !insn.addr !92
  br label %dec_label_pc_88ee, !insn.addr !92

dec_label_pc_88ee:                                ; preds = %dec_label_pc_88ce, %dec_label_pc_8858
  %76 = call i32 @munmap(i32* %31, i32 4096), !insn.addr !93
  %77 = icmp eq i32 %76, -1, !insn.addr !94
  br i1 %77, label %dec_label_pc_8900, label %dec_label_pc_8944, !insn.addr !95

dec_label_pc_8900:                                ; preds = %dec_label_pc_88ee
  %78 = load %_IO_FILE*, %_IO_FILE** @global_var_10c88, align 4, !insn.addr !96
  %79 = call i32* @__errno_location(), !insn.addr !97
  %80 = load i32, i32* %79, align 4, !insn.addr !98
  %81 = call i32* @__errno_location(), !insn.addr !99
  %82 = load i32, i32* %81, align 4, !insn.addr !100
  %83 = call i8* @strerror(i32 %82), !insn.addr !101
  %84 = call i32 (%_IO_FILE*, i8*, ...) @fprintf(%_IO_FILE* %78, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_8a68, i32 0, i32 0), i32 127, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_8a90, i32 0, i32 0), i32 %80, i8* %83), !insn.addr !102
  call void @exit(i32 1), !insn.addr !103
  br label %dec_label_pc_8944, !insn.addr !103

dec_label_pc_8944:                                ; preds = %dec_label_pc_88ee, %dec_label_pc_8900
  %85 = call i32 @close(i32 %18), !insn.addr !104
  ret i32 0, !insn.addr !105

; uselistorder directives
  uselistorder i32 %65, { 6, 0, 4, 5, 1, 7, 2, 3 }
  uselistorder i32 %45, { 3, 2, 4, 1, 5, 0 }
  uselistorder i32* %31, { 0, 1, 3, 2 }
  uselistorder i8 %stack_var_-24.0.reload, { 2, 0, 1 }
  uselistorder i32 %3, { 1, 0, 2 }
  uselistorder i32* %stack_var_-20.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i32* %stack_var_-20.1.reg2mem, { 0, 3, 4, 2, 1 }
  uselistorder i32 (i8*, ...)* @printf, { 2, 1, 0 }
  uselistorder i32 (%_IO_FILE*)* @fflush, { 3, 2, 1, 0 }
  uselistorder %_IO_FILE** @global_var_10c8c, { 3, 2, 1, 0 }
  uselistorder i8* (i32)* @strerror, { 2, 1, 0 }
  uselistorder i32* ()* @__errno_location, { 5, 4, 3, 2, 1, 0 }
  uselistorder i32 -1, { 1, 0, 2 }
  uselistorder i8 119, { 1, 2, 0 }
  uselistorder i32 3, { 1, 0 }
  uselistorder i32 (i8*, i8**, i32)* @strtoul, { 1, 0 }
  uselistorder void (i32)* @exit, { 4, 3, 2, 1, 0 }
  uselistorder i32 (%_IO_FILE*, i8*, ...)* @fprintf, { 4, 3, 2, 1, 0 }
  uselistorder %_IO_FILE** @global_var_10c88, { 5, 4, 3, 2, 1, 0 }
  uselistorder i8** %argv, { 1, 0 }
  uselistorder label %dec_label_pc_8944, { 1, 0 }
  uselistorder label %dec_label_pc_88ce, { 1, 2, 3, 0 }
  uselistorder label %dec_label_pc_87e8, { 1, 0 }
  uselistorder label %dec_label_pc_8760, { 1, 0 }
}

define i32 @__libc_csu_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_8958:
  %0 = call i32 @_init(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4), !insn.addr !106
  %spec.select = select i1 icmp eq (i32 ashr (i32 sub (i32 53472, i32 ptrtoint (i32* @global_var_10b3c to i32)), i32 2), i32 0), i32 %0, i32 %arg1
  ret i32 %spec.select, !insn.addr !107

; uselistorder directives
  uselistorder i32 0, { 1, 0, 4, 5, 20, 6, 7, 2, 3, 28, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 21, 18, 19, 29, 22, 23, 24, 25, 26, 27 }
}

define i32 @__libc_csu_fini() local_unnamed_addr {
dec_label_pc_899c:
  %0 = alloca i32
  %1 = load i32, i32* %0
  ret i32 %1

; uselistorder directives
  uselistorder i32 1, { 3, 8, 9, 10, 11, 12, 13, 6, 5, 4, 7, 2, 1, 15, 0, 14 }
}

define i32 @_fini(i32 %arg1, i32 %arg2, i32 %arg3, i32 %arg4) local_unnamed_addr {
dec_label_pc_89a0:
  %0 = call i32 @__asm_nop(i32 %arg1), !insn.addr !108
  ret i32 %0, !insn.addr !109

; uselistorder directives
  uselistorder i32 (i32)* @__asm_nop, { 2, 1, 0 }
}

declare i32 @__asm_nop(i32) local_unnamed_addr

declare i32 @__asm_ubfx(i32, i32, i32) local_unnamed_addr

!0 = !{i64 34018}
!1 = !{i64 34022}
!2 = !{i64 34024}
!3 = !{i64 34132}
!4 = !{i64 34278}
!5 = !{i64 34282}
!6 = !{i64 34290}
!7 = !{i64 34306}
!8 = !{i64 34308}
!9 = !{i64 34310}
!10 = !{i64 34314}
!11 = !{i64 34336}
!12 = !{i64 34378}
!13 = !{i64 34404}
!14 = !{i64 34408}
!15 = !{i64 34410}
!16 = !{i64 34412}
!17 = !{i64 34418}
!18 = !{i64 34420}
!19 = !{i64 34446}
!20 = !{i64 34460}
!21 = !{i64 34478}
!22 = !{i64 34488}
!23 = !{i64 34506}
!24 = !{i64 34512}
!25 = !{i64 34516}
!26 = !{i64 34518}
!27 = !{i64 34520}
!28 = !{i64 34528}
!29 = !{i64 34540}
!30 = !{i64 34544}
!31 = !{i64 34546}
!32 = !{i64 34548}
!33 = !{i64 34552}
!34 = !{i64 34556}
!35 = !{i64 34574}
!36 = !{i64 34582}
!37 = !{i64 34586}
!38 = !{i64 34596}
!39 = !{i64 34598}
!40 = !{i64 34604}
!41 = !{i64 34606}
!42 = !{i64 34612}
!43 = !{i64 34616}
!44 = !{i64 34646}
!45 = !{i64 34652}
!46 = !{i64 34664}
!47 = !{i64 34676}
!48 = !{i64 34680}
!49 = !{i64 34690}
!50 = !{i64 34710}
!51 = !{i64 34718}
!52 = !{i64 34722}
!53 = !{i64 34732}
!54 = !{i64 34734}
!55 = !{i64 34740}
!56 = !{i64 34742}
!57 = !{i64 34748}
!58 = !{i64 34752}
!59 = !{i64 34782}
!60 = !{i64 34788}
!61 = !{i64 34802}
!62 = !{i64 34814}
!63 = !{i64 34818}
!64 = !{i64 34824}
!65 = !{i64 34830}
!66 = !{i64 34850}
!67 = !{i64 34854}
!68 = !{i64 34858}
!69 = !{i64 34862}
!70 = !{i64 34866}
!71 = !{i64 34870}
!72 = !{i64 34880}
!73 = !{i64 34894}
!74 = !{i64 34900}
!75 = !{i64 34918}
!76 = !{i64 34930}
!77 = !{i64 34934}
!78 = !{i64 34942}
!79 = !{i64 34946}
!80 = !{i64 34948}
!81 = !{i64 34956}
!82 = !{i64 34982}
!83 = !{i64 34986}
!84 = !{i64 34990}
!85 = !{i64 34998}
!86 = !{i64 35002}
!87 = !{i64 35006}
!88 = !{i64 35012}
!89 = !{i64 35020}
!90 = !{i64 35034}
!91 = !{i64 35046}
!92 = !{i64 35050}
!93 = !{i64 35060}
!94 = !{i64 35066}
!95 = !{i64 35070}
!96 = !{i64 35080}
!97 = !{i64 35082}
!98 = !{i64 35088}
!99 = !{i64 35090}
!100 = !{i64 35096}
!101 = !{i64 35100}
!102 = !{i64 35130}
!103 = !{i64 35136}
!104 = !{i64 35142}
!105 = !{i64 35156}
!106 = !{i64 35178}
!107 = !{i64 35216}
!108 = !{i64 35234}
!109 = !{i64 35236}
