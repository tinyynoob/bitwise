	.file	"fls.c"
	.text
	.globl	fls
	.type	fls, @function
fls:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	$0, -4(%rbp)
	cmpl	$65535, -20(%rbp)
	setbe	%al
	movb	%al, -5(%rbp)
	cmpb	$0, -5(%rbp)
	je	.L2
	cmpl	$0, -20(%rbp)
	je	.L2
	movl	$1, %eax
	jmp	.L3
.L2:
	movl	$0, %eax
.L3:
	sall	$4, %eax
	addl	%eax, -4(%rbp)
	movzbl	-5(%rbp), %eax
	xorl	$1, %eax
	movzbl	%al, %eax
	sall	$4, %eax
	movl	%eax, %ecx
	shrl	%cl, -20(%rbp)
	cmpl	$255, -20(%rbp)
	setbe	%al
	movb	%al, -5(%rbp)
	cmpb	$0, -5(%rbp)
	je	.L4
	cmpl	$0, -20(%rbp)
	je	.L4
	movl	$1, %eax
	jmp	.L5
.L4:
	movl	$0, %eax
.L5:
	sall	$3, %eax
	addl	%eax, -4(%rbp)
	movzbl	-5(%rbp), %eax
	xorl	$1, %eax
	movzbl	%al, %eax
	sall	$3, %eax
	movl	%eax, %ecx
	shrl	%cl, -20(%rbp)
	cmpl	$15, -20(%rbp)
	setbe	%al
	movb	%al, -5(%rbp)
	cmpb	$0, -5(%rbp)
	je	.L6
	cmpl	$0, -20(%rbp)
	je	.L6
	movl	$1, %eax
	jmp	.L7
.L6:
	movl	$0, %eax
.L7:
	sall	$2, %eax
	addl	%eax, -4(%rbp)
	movzbl	-5(%rbp), %eax
	xorl	$1, %eax
	movzbl	%al, %eax
	sall	$2, %eax
	movl	%eax, %ecx
	shrl	%cl, -20(%rbp)
	cmpl	$3, -20(%rbp)
	setbe	%al
	movb	%al, -5(%rbp)
	cmpb	$0, -5(%rbp)
	je	.L8
	cmpl	$0, -20(%rbp)
	je	.L8
	movl	$1, %eax
	jmp	.L9
.L8:
	movl	$0, %eax
.L9:
	addl	%eax, %eax
	addl	%eax, -4(%rbp)
	movzbl	-5(%rbp), %eax
	xorl	$1, %eax
	movzbl	%al, %eax
	addl	%eax, %eax
	movl	%eax, %ecx
	shrl	%cl, -20(%rbp)
	cmpl	$1, -20(%rbp)
	setbe	%al
	movb	%al, -5(%rbp)
	cmpb	$0, -5(%rbp)
	je	.L10
	cmpl	$0, -20(%rbp)
	je	.L10
	movl	$1, %eax
	jmp	.L11
.L10:
	movl	$0, %eax
.L11:
	addl	%eax, -4(%rbp)
	movzbl	-5(%rbp), %eax
	xorl	$1, %eax
	movzbl	%al, %eax
	movl	%eax, %ecx
	shrl	%cl, -20(%rbp)
	movl	-4(%rbp), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	fls, .-fls
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
