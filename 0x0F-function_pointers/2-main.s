	.file	"2-main.c"
	.text
	.globl	is_98
	.type	is_98, @function
is_98:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$98, -4(%rbp)
	sete	%al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	is_98, .-is_98
	.globl	is_strictly_positive
	.type	is_strictly_positive, @function
is_strictly_positive:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	setg	%al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	is_strictly_positive, .-is_strictly_positive
	.globl	abs_is_98
	.type	abs_is_98, @function
abs_is_98:
.LFB2:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$98, -4(%rbp)
	je	.L6
	cmpl	$-98, -4(%rbp)
	jne	.L7
.L6:
	movl	$1, %eax
	jmp	.L9
.L7:
	movl	$0, %eax
.L9:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	abs_is_98, .-abs_is_98
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$112, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -96(%rbp)
	movq	$0, -88(%rbp)
	movq	$0, -80(%rbp)
	movq	$0, -72(%rbp)
	movq	$0, -64(%rbp)
	movq	$0, -56(%rbp)
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movl	$-89, -92(%rbp)
	movl	$89, -88(%rbp)
	movl	$402, -84(%rbp)
	movl	$1024, -80(%rbp)
	movl	$4096, -76(%rbp)
	movl	$-1024, -72(%rbp)
	movl	$1, -68(%rbp)
	movl	$2, -64(%rbp)
	movl	$3, -60(%rbp)
	movl	$4, -56(%rbp)
	movl	$5, -52(%rbp)
	movl	$6, -48(%rbp)
	movl	$7, -44(%rbp)
	movl	$8, -40(%rbp)
	movl	$9, -36(%rbp)
	movl	$10, -32(%rbp)
	movl	$11, -28(%rbp)
	movl	$89, -24(%rbp)
	leaq	-96(%rbp), %rax
	leaq	is_98(%rip), %rdx
	movl	$20, %esi
	movq	%rax, %rdi
	call	int_index@PLT
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	abs_is_98(%rip), %rdx
	movl	$20, %esi
	movq	%rax, %rdi
	call	int_index@PLT
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-96(%rbp), %rax
	leaq	is_strictly_positive(%rip), %rdx
	movl	$20, %esi
	movq	%rax, %rdi
	call	int_index@PLT
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L12
	call	__stack_chk_fail@PLT
.L12:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
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
