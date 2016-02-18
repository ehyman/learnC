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
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$2096, %esp
	movl	$0, 2088(%esp)
	jmp	.L2
.L3:
	movl	2092(%esp), %eax
	cmpl	2088(%esp), %eax
	jle	.L2
	movl	2092(%esp), %eax
	movl	%eax, 2088(%esp)
	leal	40(%esp), %eax
	movl	%eax, 4(%esp)
	leal	1064(%esp), %eax
	movl	%eax, (%esp)
	call	_copy
.L2:
	leal	1064(%esp), %eax
	movl	%eax, (%esp)
	call	_getline
	movl	%eax, 2092(%esp)
	cmpl	$0, 2092(%esp)
	jg	.L3
	cmpl	$0, 2088(%esp)
	jle	.L4
	movl	$.LC0, %eax
	movl	2088(%esp), %edx
	movl	%edx, 16(%esp)
	movl	$.LC1, 12(%esp)
	leal	40(%esp), %edx
	movl	%edx, 8(%esp)
	movl	$.LC2, 4(%esp)
	movl	%eax, (%esp)
	call	printf
.L4:
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
.globl _getline
	.type	_getline, @function
_getline:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$24, %esp
	movl	$0, -12(%ebp)
	jmp	.L7
.L9:
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movl	-16(%ebp), %edx
	movb	%dl, (%eax)
	addl	$1, -12(%ebp)
.L7:
	call	getchar
	movl	%eax, -16(%ebp)
	cmpl	$-1, -16(%ebp)
	je	.L8
	cmpl	$10, -16(%ebp)
	jne	.L9
.L8:
	cmpl	$10, -16(%ebp)
	jne	.L10
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movl	-16(%ebp), %edx
	movb	%dl, (%eax)
.L10:
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movb	$0, (%eax)
	movl	-12(%ebp), %eax
	leave
	ret
	.size	_getline, .-_getline
.globl _copy
	.type	_copy, @function
_copy:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	$0, -4(%ebp)
	jmp	.L13
.L14:
	movl	-4(%ebp), %eax
	addl	12(%ebp), %eax
	movl	-4(%ebp), %edx
	addl	8(%ebp), %edx
	movzbl	(%edx), %edx
	movb	%dl, (%eax)
	addl	$1, -4(%ebp)
.L13:
	movl	-4(%ebp), %eax
	addl	8(%ebp), %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	.L14
	leave
	ret
	.size	_copy, .-_copy
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-16)"
	.section	.note.GNU-stack,"",@progbits
