	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15, 4
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$768, %rsp              ## imm = 0x300
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movl	$0, -636(%rbp)
	movl	$0, -640(%rbp)
	movl	$1, -644(%rbp)
	movl	L___const.main.ps(%rip), %ecx
	movl	%ecx, -651(%rbp)
	movb	L___const.main.ps+4(%rip), %dl
	movb	%dl, -647(%rbp)
	callq	_my_id
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-656(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -664(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -668(%rbp)        ## 4-byte Spill
	callq	_fflush
	leaq	-656(%rbp), %rsi
	leaq	-651(%rbp), %rdi
	movl	%eax, -672(%rbp)        ## 4-byte Spill
	callq	_strcmp
	cmpl	$0, %eax
	jne	LBB0_3
## %bb.2:
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -676(%rbp)        ## 4-byte Spill
	callq	_system
	jmp	LBB0_9
LBB0_3:                                 ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$3, -644(%rbp)
	jne	LBB0_5
## %bb.4:
	movl	-644(%rbp), %esi
	leaq	L_.str.4(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -636(%rbp)
	jmp	LBB0_44
LBB0_5:                                 ##   in Loop: Header=BB0_1 Depth=1
	movl	-644(%rbp), %esi
	leaq	L_.str.5(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	-644(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -644(%rbp)
## %bb.6:                               ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_7
LBB0_7:                                 ##   in Loop: Header=BB0_1 Depth=1
	jmp	LBB0_8
LBB0_8:                                 ##   in Loop: Header=BB0_1 Depth=1
	cmpl	$3, -644(%rbp)
	jle	LBB0_1
LBB0_9:
	leaq	L_.str.6(%rip), %rdi
	callq	_system
LBB0_10:                                ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_29 Depth 2
                                        ##     Child Loop BB0_12 Depth 2
                                        ##     Child Loop BB0_21 Depth 2
	callq	_menu
	leaq	L_.str.7(%rip), %rdi
	xorl	%eax, %eax
                                        ## kill: def $al killed $al killed $eax
	leaq	-645(%rbp), %rsi
	callq	_scanf
	leaq	L_.str.6(%rip), %rdi
	movl	%eax, -680(%rbp)        ## 4-byte Spill
	callq	_system
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -684(%rbp)        ## 4-byte Spill
	callq	_fflush
	movsbl	-645(%rbp), %edx
	addl	$-65, %edx
	movl	%edx, %ecx
	subl	$36, %edx
	movq	%rcx, -696(%rbp)        ## 8-byte Spill
	ja	LBB0_42
## %bb.47:                              ##   in Loop: Header=BB0_10 Depth=1
	leaq	LJTI0_0(%rip), %rax
	movq	-696(%rbp), %rcx        ## 8-byte Reload
	movslq	(%rax,%rcx,4), %rdx
	addq	%rax, %rdx
	jmpq	*%rdx
LBB0_11:                                ##   in Loop: Header=BB0_10 Depth=1
	leaq	L_.str.8(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_12:                                ##   Parent Loop BB0_10 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	leaq	L_.str.9(%rip), %rdi
	leaq	-640(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	cmpl	$1, %eax
	movb	$1, %cl
	movb	%cl, -697(%rbp)         ## 1-byte Spill
	jne	LBB0_15
## %bb.13:                              ##   in Loop: Header=BB0_12 Depth=2
	cmpl	$5, -640(%rbp)
	movb	$1, %al
	movb	%al, -697(%rbp)         ## 1-byte Spill
	jl	LBB0_15
## %bb.14:                              ##   in Loop: Header=BB0_12 Depth=2
	cmpl	$10, -640(%rbp)
	setg	%al
	movb	%al, -697(%rbp)         ## 1-byte Spill
LBB0_15:                                ##   in Loop: Header=BB0_12 Depth=2
	movb	-697(%rbp), %al         ## 1-byte Reload
	testb	$1, %al
	jne	LBB0_16
	jmp	LBB0_20
LBB0_16:                                ##   in Loop: Header=BB0_12 Depth=2
	cmpl	$5, -640(%rbp)
	jl	LBB0_18
## %bb.17:                              ##   in Loop: Header=BB0_12 Depth=2
	cmpl	$10, -640(%rbp)
	jle	LBB0_19
LBB0_18:                                ##   in Loop: Header=BB0_12 Depth=2
	leaq	L_.str.10(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -704(%rbp)        ## 4-byte Spill
	callq	_fflush
LBB0_19:                                ##   in Loop: Header=BB0_12 Depth=2
	jmp	LBB0_12
LBB0_20:                                ##   in Loop: Header=BB0_10 Depth=1
	movl	$0, -660(%rbp)
LBB0_21:                                ##   Parent Loop BB0_10 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-660(%rbp), %eax
	cmpl	-640(%rbp), %eax
	jge	LBB0_24
## %bb.22:                              ##   in Loop: Header=BB0_21 Depth=2
	movslq	-660(%rbp), %rax
	imulq	$56, %rax, %rax
	leaq	-576(%rbp), %rcx
	addq	%rax, %rcx
	leaq	-632(%rbp), %rdi
	movq	%rcx, -712(%rbp)        ## 8-byte Spill
	callq	_qt_a
	movq	-712(%rbp), %rax        ## 8-byte Reload
	leaq	-632(%rbp), %rcx
	movq	%rax, %rdi
	movq	%rcx, %rsi
	movl	$56, %edx
	callq	_memcpy
## %bb.23:                              ##   in Loop: Header=BB0_21 Depth=2
	movl	-660(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -660(%rbp)
	jmp	LBB0_21
LBB0_24:                                ##   in Loop: Header=BB0_10 Depth=1
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	L_.str.3(%rip), %rdi
	movl	%eax, -716(%rbp)        ## 4-byte Spill
	callq	_system
	leaq	L_.str.6(%rip), %rdi
	movl	%eax, -720(%rbp)        ## 4-byte Spill
	callq	_system
	jmp	LBB0_43
LBB0_25:                                ##   in Loop: Header=BB0_10 Depth=1
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	-576(%rbp), %rdi
	movl	-640(%rbp), %esi
	movl	%eax, -724(%rbp)        ## 4-byte Spill
	callq	_qt_b
	leaq	L_.str.3(%rip), %rdi
	callq	_system
	leaq	L_.str.6(%rip), %rdi
	movl	%eax, -728(%rbp)        ## 4-byte Spill
	callq	_system
	jmp	LBB0_43
LBB0_26:                                ##   in Loop: Header=BB0_10 Depth=1
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	-576(%rbp), %rdi
	movl	-640(%rbp), %esi
	movl	%eax, -732(%rbp)        ## 4-byte Spill
	callq	_qt_c
	leaq	L_.str.3(%rip), %rdi
	callq	_system
	leaq	L_.str.6(%rip), %rdi
	movl	%eax, -736(%rbp)        ## 4-byte Spill
	callq	_system
	jmp	LBB0_43
LBB0_27:                                ##   in Loop: Header=BB0_10 Depth=1
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	-576(%rbp), %rdi
	movl	-640(%rbp), %esi
	movl	%eax, -740(%rbp)        ## 4-byte Spill
	callq	_qt_d
	leaq	L_.str.3(%rip), %rdi
	callq	_system
	leaq	L_.str.6(%rip), %rdi
	movl	%eax, -744(%rbp)        ## 4-byte Spill
	callq	_system
	jmp	LBB0_43
LBB0_28:                                ##   in Loop: Header=BB0_10 Depth=1
	leaq	L_.str.11(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_29:                                ##   Parent Loop BB0_10 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	-646(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -748(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -752(%rbp)        ## 4-byte Spill
	callq	_fflush
	leaq	-646(%rbp), %rdi
	movl	%eax, -756(%rbp)        ## 4-byte Spill
	callq	_strlen
	cmpq	$1, %rax
	jne	LBB0_39
## %bb.30:                              ##   in Loop: Header=BB0_29 Depth=2
	movsbl	-646(%rbp), %eax
	cmpl	$110, %eax
	je	LBB0_32
## %bb.31:                              ##   in Loop: Header=BB0_29 Depth=2
	movsbl	-646(%rbp), %eax
	cmpl	$78, %eax
	jne	LBB0_33
LBB0_32:                                ##   in Loop: Header=BB0_10 Depth=1
	leaq	L_.str.3(%rip), %rdi
	callq	_system
	leaq	L_.str.6(%rip), %rdi
	movl	%eax, -760(%rbp)        ## 4-byte Spill
	callq	_system
	jmp	LBB0_41
LBB0_33:                                ##   in Loop: Header=BB0_29 Depth=2
	movsbl	-646(%rbp), %eax
	cmpl	$121, %eax
	je	LBB0_35
## %bb.34:                              ##   in Loop: Header=BB0_29 Depth=2
	movsbl	-646(%rbp), %eax
	cmpl	$89, %eax
	jne	LBB0_36
LBB0_35:
	movl	$0, -636(%rbp)
	jmp	LBB0_44
LBB0_36:                                ##   in Loop: Header=BB0_29 Depth=2
	leaq	L_.str.12(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.13(%rip), %rdi
	movl	%eax, -764(%rbp)        ## 4-byte Spill
	movb	$0, %al
	callq	_printf
## %bb.37:                              ##   in Loop: Header=BB0_29 Depth=2
	jmp	LBB0_38
LBB0_38:                                ##   in Loop: Header=BB0_29 Depth=2
	jmp	LBB0_40
LBB0_39:                                ##   in Loop: Header=BB0_29 Depth=2
	leaq	L_.str.14(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_40:                                ##   in Loop: Header=BB0_29 Depth=2
	jmp	LBB0_29
LBB0_41:                                ##   in Loop: Header=BB0_10 Depth=1
	jmp	LBB0_43
LBB0_42:                                ##   in Loop: Header=BB0_10 Depth=1
	leaq	L_.str.15(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB0_43:                                ##   in Loop: Header=BB0_10 Depth=1
	jmp	LBB0_10
LBB0_44:
	movl	-636(%rbp), %eax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	-8(%rbp), %rdx
	cmpq	%rdx, %rcx
	movl	%eax, -768(%rbp)        ## 4-byte Spill
	jne	LBB0_46
## %bb.45:
	movl	-768(%rbp), %eax        ## 4-byte Reload
	addq	$768, %rsp              ## imm = 0x300
	popq	%rbp
	retq
LBB0_46:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
	.p2align	2, 0x90
	.data_region jt32
.set L0_0_set_11, LBB0_11-LJTI0_0
.set L0_0_set_25, LBB0_25-LJTI0_0
.set L0_0_set_26, LBB0_26-LJTI0_0
.set L0_0_set_27, LBB0_27-LJTI0_0
.set L0_0_set_28, LBB0_28-LJTI0_0
.set L0_0_set_42, LBB0_42-LJTI0_0
LJTI0_0:
	.long	L0_0_set_11
	.long	L0_0_set_25
	.long	L0_0_set_26
	.long	L0_0_set_27
	.long	L0_0_set_28
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_42
	.long	L0_0_set_11
	.long	L0_0_set_25
	.long	L0_0_set_26
	.long	L0_0_set_27
	.long	L0_0_set_28
	.end_data_region
                                        ## -- End function
	.globl	_qt_b                   ## -- Begin function qt_b
	.p2align	4, 0x90
_qt_b:                                  ## @qt_b
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	cmpl	$0, -12(%rbp)
	jne	LBB1_2
## %bb.1:
	leaq	L_.str.24(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB1_9
LBB1_2:
	leaq	L_.str.25(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movl	$0, -16(%rbp)
LBB1_3:                                 ## =>This Inner Loop Header: Depth=1
	movl	-16(%rbp), %eax
	cmpl	-12(%rbp), %eax
	jge	LBB1_8
## %bb.4:                               ##   in Loop: Header=BB1_3 Depth=1
	movq	-8(%rbp), %rax
	movslq	-16(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movq	-8(%rbp), %rcx
	movslq	-16(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	addq	$20, %rcx
	leaq	L_.str.26(%rip), %rdi
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movb	$0, %al
	callq	_printf
	movq	-8(%rbp), %rcx
	movslq	-16(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	movl	40(%rcx), %esi
	movq	-8(%rbp), %rcx
	movslq	-16(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	movl	44(%rcx), %edx
	movq	-8(%rbp), %rcx
	movslq	-16(%rbp), %rdi
	imulq	$56, %rdi, %rdi
	addq	%rdi, %rcx
	movl	48(%rcx), %ecx
	movq	-8(%rbp), %rdi
	movslq	-16(%rbp), %r8
	imulq	$56, %r8, %r8
	addq	%r8, %rdi
	movss	52(%rdi), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	leaq	L_.str.27(%rip), %rdi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	-16(%rbp), %ecx
	movl	-12(%rbp), %edx
	subl	$1, %edx
	cmpl	%edx, %ecx
	jge	LBB1_6
## %bb.5:                               ##   in Loop: Header=BB1_3 Depth=1
	leaq	L_.str.28(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB1_6:                                 ##   in Loop: Header=BB1_3 Depth=1
	jmp	LBB1_7
LBB1_7:                                 ##   in Loop: Header=BB1_3 Depth=1
	movl	-16(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -16(%rbp)
	jmp	LBB1_3
LBB1_8:
	leaq	L_.str.29(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB1_9:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_qt_c                   ## -- Begin function qt_c
	.p2align	4, 0x90
_qt_c:                                  ## @qt_c
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$64, %rsp
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	$0, -48(%rbp)
	cmpl	$0, -44(%rbp)
	jne	LBB2_2
## %bb.1:
	leaq	L_.str.24(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB2_11
LBB2_2:
	leaq	L_.str.30(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	-32(%rbp), %rsi
	leaq	L_.str.1(%rip), %rdi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	callq	_fflush
	movl	$0, -52(%rbp)
LBB2_3:                                 ## =>This Inner Loop Header: Depth=1
	movl	-52(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jge	LBB2_8
## %bb.4:                               ##   in Loop: Header=BB2_3 Depth=1
	leaq	-32(%rbp), %rsi
	movq	-40(%rbp), %rax
	movslq	-52(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movq	%rax, %rdi
	callq	_strcmp
	cmpl	$0, %eax
	jne	LBB2_6
## %bb.5:                               ##   in Loop: Header=BB2_3 Depth=1
	movq	-40(%rbp), %rax
	movslq	-52(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movq	-40(%rbp), %rcx
	movslq	-52(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	addq	$20, %rcx
	leaq	L_.str.31(%rip), %rdi
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movb	$0, %al
	callq	_printf
	movq	-40(%rbp), %rcx
	movslq	-52(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	movl	40(%rcx), %esi
	movq	-40(%rbp), %rcx
	movslq	-52(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	movl	44(%rcx), %edx
	movq	-40(%rbp), %rcx
	movslq	-52(%rbp), %rdi
	imulq	$56, %rdi, %rdi
	addq	%rdi, %rcx
	movl	48(%rcx), %ecx
	movq	-40(%rbp), %rdi
	movslq	-52(%rbp), %r8
	imulq	$56, %r8, %r8
	addq	%r8, %rdi
	movss	52(%rdi), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	leaq	L_.str.27(%rip), %rdi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	movb	$1, %al
	callq	_printf
	movl	-48(%rbp), %ecx
	addl	$1, %ecx
	movl	%ecx, -48(%rbp)
LBB2_6:                                 ##   in Loop: Header=BB2_3 Depth=1
	jmp	LBB2_7
LBB2_7:                                 ##   in Loop: Header=BB2_3 Depth=1
	movl	-52(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -52(%rbp)
	jmp	LBB2_3
LBB2_8:
	cmpl	$0, -48(%rbp)
	jne	LBB2_10
## %bb.9:
	leaq	L_.str.32(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB2_10:
	jmp	LBB2_11
LBB2_11:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB2_13
## %bb.12:
	addq	$64, %rsp
	popq	%rbp
	retq
LBB2_13:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.globl	_qt_d                   ## -- Begin function qt_d
	.p2align	4, 0x90
_qt_d:                                  ## @qt_d
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$688, %rsp              ## imm = 0x2B0
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	%rdi, -640(%rbp)
	movl	%esi, -644(%rbp)
	cmpl	$0, -644(%rbp)
	jne	LBB3_2
## %bb.1:
	leaq	L_.str.24(%rip), %rdi
	movb	$0, %al
	callq	_printf
	jmp	LBB3_24
LBB3_2:
	movl	$0, -648(%rbp)
LBB3_3:                                 ## =>This Inner Loop Header: Depth=1
	movl	-648(%rbp), %eax
	cmpl	-644(%rbp), %eax
	jge	LBB3_6
## %bb.4:                               ##   in Loop: Header=BB3_3 Depth=1
	movslq	-648(%rbp), %rax
	imulq	$56, %rax, %rax
	leaq	-576(%rbp), %rcx
	addq	%rax, %rcx
	movq	-640(%rbp), %rax
	movslq	-648(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rax
	movq	%rcx, %rdi
	movq	%rax, %rsi
	movl	$56, %edx
	callq	_memcpy
## %bb.5:                               ##   in Loop: Header=BB3_3 Depth=1
	movl	-648(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -648(%rbp)
	jmp	LBB3_3
LBB3_6:
	leaq	L_.str.33(%rip), %rdi
	callq	_puts
	movl	$0, -652(%rbp)
LBB3_7:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB3_9 Depth 2
	movl	-652(%rbp), %eax
	cmpl	-644(%rbp), %eax
	jge	LBB3_16
## %bb.8:                               ##   in Loop: Header=BB3_7 Depth=1
	movl	$0, -656(%rbp)
LBB3_9:                                 ##   Parent Loop BB3_7 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	movl	-656(%rbp), %eax
	cmpl	-652(%rbp), %eax
	jge	LBB3_14
## %bb.10:                              ##   in Loop: Header=BB3_9 Depth=2
	movq	-640(%rbp), %rax
	movslq	-656(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movss	52(%rax), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	movq	-640(%rbp), %rax
	movslq	-652(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movss	52(%rax), %xmm1         ## xmm1 = mem[0],zero,zero,zero
	ucomiss	%xmm0, %xmm1
	jbe	LBB3_12
## %bb.11:                              ##   in Loop: Header=BB3_9 Depth=2
	movq	-640(%rbp), %rax
	movslq	-656(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	leaq	-632(%rbp), %rcx
	movq	%rcx, %rdx
	movq	%rdx, %rdi
	movq	%rax, %rsi
	movl	$56, %eax
	movq	%rax, %rdx
	movq	%rcx, -672(%rbp)        ## 8-byte Spill
	movq	%rax, -680(%rbp)        ## 8-byte Spill
	callq	_memcpy
	movq	-640(%rbp), %rax
	movslq	-656(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movq	-640(%rbp), %rcx
	movslq	-652(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	movq	%rax, %rdi
	movq	%rcx, %rsi
	movq	-680(%rbp), %rdx        ## 8-byte Reload
	callq	_memcpy
	movq	-640(%rbp), %rax
	movslq	-652(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movq	-672(%rbp), %rcx        ## 8-byte Reload
	movq	%rax, %rdi
	movq	%rcx, %rsi
	movq	-680(%rbp), %rdx        ## 8-byte Reload
	callq	_memcpy
LBB3_12:                                ##   in Loop: Header=BB3_9 Depth=2
	jmp	LBB3_13
LBB3_13:                                ##   in Loop: Header=BB3_9 Depth=2
	movl	-656(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -656(%rbp)
	jmp	LBB3_9
LBB3_14:                                ##   in Loop: Header=BB3_7 Depth=1
	jmp	LBB3_15
LBB3_15:                                ##   in Loop: Header=BB3_7 Depth=1
	movl	-652(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -652(%rbp)
	jmp	LBB3_7
LBB3_16:
	movl	$0, -660(%rbp)
LBB3_17:                                ## =>This Inner Loop Header: Depth=1
	movl	-660(%rbp), %eax
	cmpl	-644(%rbp), %eax
	jge	LBB3_20
## %bb.18:                              ##   in Loop: Header=BB3_17 Depth=1
	movq	-640(%rbp), %rax
	movslq	-660(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movq	-640(%rbp), %rcx
	movslq	-660(%rbp), %rdx
	imulq	$56, %rdx, %rdx
	addq	%rdx, %rcx
	addq	$20, %rcx
	movq	-640(%rbp), %rdx
	movslq	-660(%rbp), %rsi
	imulq	$56, %rsi, %rsi
	addq	%rsi, %rdx
	movss	52(%rdx), %xmm0         ## xmm0 = mem[0],zero,zero,zero
	cvtss2sd	%xmm0, %xmm0
	leaq	L_.str.34(%rip), %rdi
	movq	%rax, %rsi
	movq	%rcx, %rdx
	movb	$1, %al
	callq	_printf
## %bb.19:                              ##   in Loop: Header=BB3_17 Depth=1
	movl	-660(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -660(%rbp)
	jmp	LBB3_17
LBB3_20:
	leaq	L_.str.33(%rip), %rdi
	callq	_puts
	movl	$0, -664(%rbp)
LBB3_21:                                ## =>This Inner Loop Header: Depth=1
	movl	-664(%rbp), %eax
	cmpl	-644(%rbp), %eax
	jge	LBB3_24
## %bb.22:                              ##   in Loop: Header=BB3_21 Depth=1
	movq	-640(%rbp), %rax
	movslq	-664(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	addq	%rcx, %rax
	movslq	-664(%rbp), %rcx
	imulq	$56, %rcx, %rcx
	leaq	-576(%rbp), %rdx
	addq	%rcx, %rdx
	movq	%rax, %rdi
	movq	%rdx, %rsi
	movl	$56, %edx
	callq	_memcpy
## %bb.23:                              ##   in Loop: Header=BB3_21 Depth=1
	movl	-664(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -664(%rbp)
	jmp	LBB3_21
LBB3_24:
	movq	___stack_chk_guard@GOTPCREL(%rip), %rax
	movq	(%rax), %rax
	movq	-8(%rbp), %rcx
	cmpq	%rcx, %rax
	jne	LBB3_26
## %bb.25:
	addq	$688, %rsp              ## imm = 0x2B0
	popq	%rbp
	retq
LBB3_26:
	callq	___stack_chk_fail
	ud2
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__literal4,4byte_literals
	.p2align	2               ## -- Begin function qt_a
LCPI4_0:
	.long	1077936128              ## float 3
	.section	__TEXT,__text,regular,pure_instructions
	.globl	_qt_a
	.p2align	4, 0x90
_qt_a:                                  ## @qt_a
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$96, %rsp
	movq	%rdi, %rax
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	leaq	L_.str.16(%rip), %rcx
	movq	%rdi, -16(%rbp)         ## 8-byte Spill
	movq	%rcx, %rdi
	movq	%rax, -24(%rbp)         ## 8-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	movq	-16(%rbp), %rsi         ## 8-byte Reload
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.17(%rip), %rdi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rcx         ## 8-byte Reload
	addq	$20, %rcx
	leaq	L_.str.1(%rip), %rdi
	movq	%rcx, %rsi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	-16(%rbp), %rcx         ## 8-byte Reload
	addq	$20, %rcx
	movq	%rcx, %rdi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	callq	_atoi
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movl	%eax, -8(%rbp)
	movq	(%rcx), %rdi
	callq	_fflush
LBB4_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	addq	$20, %rax
	movq	%rax, %rdi
	callq	_strlen
	cmpq	$6, %rax
	jne	LBB4_4
## %bb.2:                               ##   in Loop: Header=BB4_1 Depth=1
	cmpl	$0, -8(%rbp)
	je	LBB4_4
## %bb.3:
	jmp	LBB4_9
LBB4_4:                                 ##   in Loop: Header=BB4_1 Depth=1
	leaq	L_.str.18(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	-16(%rbp), %rcx         ## 8-byte Reload
	addq	$20, %rcx
	leaq	L_.str.1(%rip), %rdi
	movq	%rcx, %rsi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	movq	-16(%rbp), %rcx         ## 8-byte Reload
	addq	$20, %rcx
	movq	%rcx, %rdi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	callq	_atoi
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movl	%eax, -8(%rbp)
	movq	(%rcx), %rdi
	callq	_fflush
## %bb.5:                               ##   in Loop: Header=BB4_1 Depth=1
	jmp	LBB4_6
LBB4_6:                                 ##   in Loop: Header=BB4_1 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	addq	$20, %rax
	movq	%rax, %rdi
	callq	_strlen
	cmpq	$6, %rax
	movb	$1, %cl
	movb	%cl, -49(%rbp)          ## 1-byte Spill
	jne	LBB4_8
## %bb.7:                               ##   in Loop: Header=BB4_1 Depth=1
	cmpl	$0, -8(%rbp)
	sete	%al
	movb	%al, -49(%rbp)          ## 1-byte Spill
LBB4_8:                                 ##   in Loop: Header=BB4_1 Depth=1
	movb	-49(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_1
LBB4_9:
	leaq	L_.str.19(%rip), %rdi
	movb	$0, %al
	callq	_printf
LBB4_10:                                ## =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	addq	$40, %rax
	leaq	L_.str.9(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_scanf
	cmpl	$1, %eax
	movb	$1, %cl
	movb	%cl, -50(%rbp)          ## 1-byte Spill
	jne	LBB4_13
## %bb.11:                              ##   in Loop: Header=BB4_10 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	cmpl	$0, 40(%rax)
	movb	$1, %cl
	movb	%cl, -50(%rbp)          ## 1-byte Spill
	jl	LBB4_13
## %bb.12:                              ##   in Loop: Header=BB4_10 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	cmpl	$100, 40(%rax)
	setg	%cl
	movb	%cl, -50(%rbp)          ## 1-byte Spill
LBB4_13:                                ##   in Loop: Header=BB4_10 Depth=1
	movb	-50(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_14
	jmp	LBB4_15
LBB4_14:                                ##   in Loop: Header=BB4_10 Depth=1
	leaq	L_.str.20(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	callq	_fflush
	jmp	LBB4_10
LBB4_15:
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	L_.str.21(%rip), %rdi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
LBB4_16:                                ## =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	addq	$44, %rax
	leaq	L_.str.9(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_scanf
	cmpl	$1, %eax
	movb	$1, %cl
	movb	%cl, -61(%rbp)          ## 1-byte Spill
	jne	LBB4_19
## %bb.17:                              ##   in Loop: Header=BB4_16 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	cmpl	$0, 44(%rax)
	movb	$1, %cl
	movb	%cl, -61(%rbp)          ## 1-byte Spill
	jl	LBB4_19
## %bb.18:                              ##   in Loop: Header=BB4_16 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	cmpl	$100, 44(%rax)
	setg	%cl
	movb	%cl, -61(%rbp)          ## 1-byte Spill
LBB4_19:                                ##   in Loop: Header=BB4_16 Depth=1
	movb	-61(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_20
	jmp	LBB4_21
LBB4_20:                                ##   in Loop: Header=BB4_16 Depth=1
	leaq	L_.str.20(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	callq	_fflush
	jmp	LBB4_16
LBB4_21:
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	leaq	L_.str.22(%rip), %rdi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
LBB4_22:                                ## =>This Inner Loop Header: Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	addq	$48, %rax
	leaq	L_.str.9(%rip), %rdi
	movq	%rax, %rsi
	movb	$0, %al
	callq	_scanf
	cmpl	$1, %eax
	movb	$1, %cl
	movb	%cl, -73(%rbp)          ## 1-byte Spill
	jne	LBB4_25
## %bb.23:                              ##   in Loop: Header=BB4_22 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	cmpl	$0, 48(%rax)
	movb	$1, %cl
	movb	%cl, -73(%rbp)          ## 1-byte Spill
	jl	LBB4_25
## %bb.24:                              ##   in Loop: Header=BB4_22 Depth=1
	movq	-16(%rbp), %rax         ## 8-byte Reload
	cmpl	$100, 48(%rax)
	setg	%cl
	movb	%cl, -73(%rbp)          ## 1-byte Spill
LBB4_25:                                ##   in Loop: Header=BB4_22 Depth=1
	movb	-73(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_26
	jmp	LBB4_27
LBB4_26:                                ##   in Loop: Header=BB4_22 Depth=1
	leaq	L_.str.20(%rip), %rdi
	movb	$0, %al
	callq	_printf
	movq	___stdinp@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rdi
	movl	%eax, -80(%rbp)         ## 4-byte Spill
	callq	_fflush
	jmp	LBB4_22
LBB4_27:
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdi
	callq	_fflush
	movss	LCPI4_0(%rip), %xmm0    ## xmm0 = mem[0],zero,zero,zero
	movq	-16(%rbp), %rcx         ## 8-byte Reload
	movl	40(%rcx), %edx
	addl	44(%rcx), %edx
	addl	48(%rcx), %edx
	movl	%edx, -4(%rbp)
	cvtsi2ssl	-4(%rbp), %xmm1
	divss	%xmm0, %xmm1
	movss	%xmm1, 52(%rcx)
	leaq	L_.str.23(%rip), %rdi
	movl	%eax, -84(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movq	-24(%rbp), %rcx         ## 8-byte Reload
	movl	%eax, -88(%rbp)         ## 4-byte Spill
	movq	%rcx, %rax
	addq	$96, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_menu                   ## -- Begin function menu
	.p2align	4, 0x90
_menu:                                  ## @menu
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	leaq	L_.str.35(%rip), %rdi
	callq	_puts
	leaq	L_.str.36(%rip), %rdi
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	callq	_puts
	leaq	L_.str.37(%rip), %rdi
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	callq	_puts
	leaq	L_.str.38(%rip), %rdi
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.39(%rip), %rdi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.40(%rip), %rdi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.41(%rip), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	_puts
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_my_id                  ## -- Begin function my_id
	.p2align	4, 0x90
_my_id:                                 ## @my_id
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$80, %rsp
	leaq	L_.str.42(%rip), %rdi
	callq	_puts
	leaq	L_.str.43(%rip), %rdi
	movl	%eax, -4(%rbp)          ## 4-byte Spill
	callq	_puts
	leaq	L_.str.44(%rip), %rdi
	movl	%eax, -8(%rbp)          ## 4-byte Spill
	callq	_puts
	leaq	L_.str.45(%rip), %rdi
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.46(%rip), %rdi
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.47(%rip), %rdi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.48(%rip), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.49(%rip), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.50(%rip), %rdi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.51(%rip), %rdi
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.52(%rip), %rdi
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.53(%rip), %rdi
	movl	%eax, -44(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.48(%rip), %rdi
	movl	%eax, -48(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.54(%rip), %rdi
	movl	%eax, -52(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.55(%rip), %rdi
	movl	%eax, -56(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.56(%rip), %rdi
	movl	%eax, -60(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.57(%rip), %rdi
	movl	%eax, -64(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.58(%rip), %rdi
	movl	%eax, -68(%rbp)         ## 4-byte Spill
	callq	_puts
	leaq	L_.str.59(%rip), %rdi
	movl	%eax, -72(%rbp)         ## 4-byte Spill
	callq	_puts
	addq	$80, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L___const.main.ps:                      ## @__const.main.ps
	.asciz	"2022"

L_.str:                                 ## @.str
	.asciz	"Enter Password:"

L_.str.1:                               ## @.str.1
	.asciz	"%s"

L_.str.2:                               ## @.str.2
	.asciz	"WILLCOME TAIN_ZHI_DAO\n"

L_.str.3:                               ## @.str.3
	.asciz	"pause"

L_.str.4:                               ## @.str.4
	.asciz	"Wrong %d Times!BYE~~~\n"

L_.str.5:                               ## @.str.5
	.asciz	"Wrong %d Time\n"

L_.str.6:                               ## @.str.6
	.asciz	"cls"

L_.str.7:                               ## @.str.7
	.asciz	"%c"

L_.str.8:                               ## @.str.8
	.asciz	"Enter student number(5~10):"

L_.str.9:                               ## @.str.9
	.asciz	"%d"

L_.str.10:                              ## @.str.10
	.asciz	"Please enter 5~10!!!\nEnter again:"

L_.str.11:                              ## @.str.11
	.asciz	"Are you sure you want to leave?(y/n)"

L_.str.12:                              ## @.str.12
	.asciz	"SORRY! I DON'T KNOW WHAT ARE YOU SAY!!!\n"

L_.str.13:                              ## @.str.13
	.asciz	"Please enter again:"

L_.str.14:                              ## @.str.14
	.asciz	"Please enter single character!\nPlease enter again:"

L_.str.15:                              ## @.str.15
	.asciz	"WTF???\nWhat do you want to do?\nEnter again:"

L_.str.16:                              ## @.str.16
	.asciz	"Enter Name:"

L_.str.17:                              ## @.str.17
	.asciz	"Enter ID:"

L_.str.18:                              ## @.str.18
	.asciz	"Wrong ID!\nPlease enter ID again:"

L_.str.19:                              ## @.str.19
	.asciz	"Enter math score:"

L_.str.20:                              ## @.str.20
	.asciz	"Wrong Score!\nPlease enter again:"

L_.str.21:                              ## @.str.21
	.asciz	"Enter physic score:"

L_.str.22:                              ## @.str.22
	.asciz	"Enter English score:"

L_.str.23:                              ## @.str.23
	.asciz	"================================\n"

L_.str.24:                              ## @.str.24
	.asciz	"Please enter student grades first(Pause A)\n"

L_.str.25:                              ## @.str.25
	.asciz	"===========================================\n"

L_.str.26:                              ## @.str.26
	.asciz	"Student:%-5s/ID:%s\n"

L_.str.27:                              ## @.str.27
	.asciz	"Math score:%-3d\nPhysic score:%-3d\nEnglish score:%-3d\nAverage is %-3.1f\n"

L_.str.28:                              ## @.str.28
	.asciz	"____________________________________________\n"

L_.str.29:                              ## @.str.29
	.asciz	"============================================\n"

L_.str.30:                              ## @.str.30
	.asciz	"Please enter the name of the student you want to search:"

L_.str.31:                              ## @.str.31
	.asciz	"Student:%-5s/ID:%s\t"

L_.str.32:                              ## @.str.32
	.asciz	"Cheak no such person\n"

L_.str.33:                              ## @.str.33
	.asciz	"================================================="

L_.str.34:                              ## @.str.34
	.asciz	"Student:%-5s(%s)  avg is %-3.1f\n"

L_.str.35:                              ## @.str.35
	.asciz	"-------[\346\210\220\347\270\276\347\263\273\347\265\261]------"

L_.str.36:                              ## @.str.36
	.asciz	"|   a. \350\274\270\345\205\245\345\255\270\347\224\237\346\210\220\347\270\276   |"

L_.str.37:                              ## @.str.37
	.asciz	"|   b. \351\241\257\347\244\272\345\255\270\347\224\237\346\210\220\347\270\276   |"

L_.str.38:                              ## @.str.38
	.asciz	"|   c. \346\220\234\345\260\213\345\255\270\347\224\237\346\210\220\347\270\276   |"

L_.str.39:                              ## @.str.39
	.asciz	"|   d. \346\210\220\347\270\276\346\216\222\345\220\215       |"

L_.str.40:                              ## @.str.40
	.asciz	"|   e. \347\263\273\347\265\261\347\265\220\346\235\237       |"

L_.str.41:                              ## @.str.41
	.asciz	"-----------------------"

L_.str.42:                              ## @.str.42
	.asciz	"TTTTTT  AA  III N   N     ZZZZZ H  H III     DDD   AA   OOO   "

L_.str.43:                              ## @.str.43
	.asciz	"  TT   A  A  I  NN  N        Z  H  H  I      D  D A  A O   O"

L_.str.44:                              ## @.str.44
	.asciz	"  TT   AAAA  I  N N N       Z   HHHH  I      D  D AAAA O   O"

L_.str.45:                              ## @.str.45
	.asciz	"  TT   A  A  I  N  NN      Z    H  H  I      D  D A  A O   O"

L_.str.46:                              ## @.str.46
	.asciz	"  TT   A  A III N   N ____ZZZZZ H  H III ____DDD  A  A  OOO"

L_.str.47:                              ## @.str.47
	.asciz	"                     ____               ____"

L_.str.48:                              ## @.str.48
	.space	1

L_.str.49:                              ## @.str.49
	.asciz	"      H  H  OOO  M   M EEEE W     W  OOO  RRRR                      "

L_.str.50:                              ## @.str.50
	.asciz	"      H  H O   O MM MM E    W     W O   O R   R                     "

L_.str.51:                              ## @.str.51
	.asciz	"      HHHH O   O M M M EEE  W  W  W O   O RRRR                      "

L_.str.52:                              ## @.str.52
	.asciz	"      H  H O   O M   M E     W W W  O   O R R                       "

L_.str.53:                              ## @.str.53
	.asciz	"      H  H  OOO  M   M EEEE   W W    OOO  R  RR                     "

L_.str.54:                              ## @.str.54
	.asciz	"           000      6           000        22                                    "

L_.str.55:                              ## @.str.55
	.asciz	"          0  00    6           0  00      2  2                                  "

L_.str.56:                              ## @.str.56
	.asciz	"          0 0 0    6666        0 0 0        2                                   "

L_.str.57:                              ## @.str.57
	.asciz	"          00  0    6   6       00  0      2                                    "

L_.str.58:                              ## @.str.58
	.asciz	"           000      666    ____ 000       2222                               "

L_.str.59:                              ## @.str.59
	.asciz	"                          ____                                             "


.subsections_via_symbols
