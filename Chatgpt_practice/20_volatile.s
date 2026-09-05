	.file	"20_volatile.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	call	___main
	.p2align 4,,10
L2:
	movl	_flag, %eax
	testl	%eax, %eax
	je	L2
	xorl	%eax, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.text
	.p2align 4,,15
	.globl	_wait_flag
	.def	_wait_flag;	.scl	2;	.type	32;	.endef
_wait_flag:
LFB13:
	.cfi_startproc
	.p2align 4,,10
L8:
	movl	_flag, %eax
	testl	%eax, %eax
	je	L8
	rep ret
	.cfi_endproc
LFE13:
	.globl	_flag
	.bss
	.align 4
_flag:
	.space 4
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
