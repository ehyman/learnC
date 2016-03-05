	.file	"get_max_input_line.c"
	.section	.rodata
.LC0:
	.string	"%s%s\n%s%d"
.LC1:
	.string	"The max input line length is:"
.LC2:
	.string	"The max input line is:"
	.text
.globl main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$2064, %rsp
	movl	$0, -8(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jle	.L2
	movl	-4(%rbp), %eax
	movl	%eax, -8(%rbp)
	leaq	-2064(%rbp), %rdx
	leaq	-1040(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_copy
.L2:
	leaq	-1040(%rbp), %rax
	movq	%rax, %rdi
	call	_getline
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jg	.L3
	cmpl	$0, -8(%rbp)
	jle	.L4
	movl	$.LC0, %eax
	movl	-8(%rbp), %ecx
	leaq	-2064(%rbp), %rdx
	movl	%ecx, %r8d
	movl	$.LC1, %ecx
	movl	$.LC2, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
.L4:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
.globl _getline
	.type	_getline, @function
_getline:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L7
.L9:
	movl	-4(%rbp), %eax
	cltq
	addq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movb	%dl, (%rax)
	addl	$1, -4(%rbp)
.L7:
	call	getchar
	movl	%eax, -8(%rbp)
	cmpl	$-1, -8(%rbp)
	je	.L8
	cmpl	$10, -8(%rbp)
	jne	.L9
.L8:
	cmpl	$10, -8(%rbp)
	jne	.L10
	movl	-4(%rbp), %eax
	cltq
	addq	-24(%rbp), %rax
	movl	-8(%rbp), %edx
	movb	%dl, (%rax)
.L10:
	movl	-4(%rbp), %eax
	cltq
	addq	-24(%rbp), %rax
	movb	$0, (%rax)
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_getline, .-_getline
.globl _copy
	.type	_copy, @function
_copy:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L13
.L14:
	movl	-4(%rbp), %eax
	cltq
	addq	-32(%rbp), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	-24(%rbp), %rdx
	movzbl	(%rdx), %edx
	movb	%dl, (%rax)
	addl	$1, -4(%rbp)
.L13:
	movl	-4(%rbp), %eax
	cltq
	addq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L14
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	_copy, .-_copy
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-4)"
	.section	.note.GNU-stack,"",@progbits
