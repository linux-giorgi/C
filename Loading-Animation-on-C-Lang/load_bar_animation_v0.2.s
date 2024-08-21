	.file	"load_bar_animation_v0.2.c"
	.text
	.globl	string
	.data
	.align 32
	.type	string, @object
	.size	string, 49
string:
	.string	"------------------------------------------------"
	.globl	size
	.align 2
	.type	size, @object
	.size	size, 2
size:
	.value	49
	.section	.rodata
.LC0:
	.string	"sleep 0.5"
.LC1:
	.string	"clear"
	.text
	.globl	animation
	.type	animation, @function
animation:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	jmp	.L2
.L3:
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	movswl	-2(%rbp), %eax
	cltq
	leaq	string(%rip), %rdx
	movb	$35, (%rax,%rdx)
	leaq	string(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movzwl	-2(%rbp), %eax
	addl	$1, %eax
	movw	%ax, -2(%rbp)
.L2:
	movzwl	size(%rip), %eax
	cmpw	%ax, -2(%rbp)
	jl	.L3
	nop
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	animation, .-animation
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	call	animation
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
