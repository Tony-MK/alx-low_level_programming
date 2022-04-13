	.file	"2-int_index.c"
	.text
	.globl	int_index
	.type	int_index, @function
int_index:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -40(%rbp)
	cmpq	$0, -32(%rbp)
	jne	.L2
	movl	$-1, %eax
	jmp	.L3
.L2:
	movl	$0, %ebx
.L4:
	leaq	0(,%rbx,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movq	-40(%rbp), %rdx
	movl	%eax, %edi
	call	*%rdx
	testl	%eax, %eax
	je	.L5
	movl	%ebx, %eax
	jmp	.L3
.L5:
	addq	$1, %rbx
	cmpq	-32(%rbp), %rbx
	jb	.L4
	movl	$-1, %eax
.L3:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	int_index, .-int_index
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
