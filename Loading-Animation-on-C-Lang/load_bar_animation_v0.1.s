	.file	"load_bar_animation_v0.1.c"
	.text
	.section	.rodata
.LC0:
	.string	"sleep 0.5"
.LC1:
	.string	"clear"
	.align 8
.LC2:
	.string	"#-----------------------------------------------"
	.align 8
.LC3:
	.string	"##----------------------------------------------"
	.align 8
.LC4:
	.string	"###---------------------------------------------"
	.align 8
.LC5:
	.string	"####--------------------------------------------"
	.align 8
.LC6:
	.string	"#####-------------------------------------------"
	.align 8
.LC7:
	.string	"######------------------------------------------"
	.align 8
.LC8:
	.string	"#######-----------------------------------------"
	.align 8
.LC9:
	.string	"########----------------------------------------"
	.align 8
.LC10:
	.string	"#########---------------------------------------"
	.align 8
.LC11:
	.string	"##########--------------------------------------"
	.align 8
.LC12:
	.string	"###########-------------------------------------"
	.align 8
.LC13:
	.string	"############------------------------------------"
	.align 8
.LC14:
	.string	"#############-----------------------------------"
	.align 8
.LC15:
	.string	"##############----------------------------------"
	.align 8
.LC16:
	.string	"###############---------------------------------"
	.align 8
.LC17:
	.string	"################--------------------------------"
	.align 8
.LC18:
	.string	"#################-------------------------------"
	.align 8
.LC19:
	.string	"##################------------------------------"
	.align 8
.LC20:
	.string	"###################-----------------------------"
	.align 8
.LC21:
	.string	"####################----------------------------"
	.align 8
.LC22:
	.string	"#####################---------------------------"
	.align 8
.LC23:
	.string	"######################--------------------------"
	.align 8
.LC24:
	.string	"#######################-------------------------"
	.align 8
.LC25:
	.string	"########################------------------------"
	.align 8
.LC26:
	.string	"#########################-----------------------"
	.align 8
.LC27:
	.string	"##########################----------------------"
	.align 8
.LC28:
	.string	"###########################---------------------"
	.align 8
.LC29:
	.string	"############################--------------------"
	.align 8
.LC30:
	.string	"#############################-------------------"
	.align 8
.LC31:
	.string	"##############################------------------"
	.align 8
.LC32:
	.string	"###############################-----------------"
	.align 8
.LC33:
	.string	"################################----------------"
	.align 8
.LC34:
	.string	"#################################---------------"
	.align 8
.LC35:
	.string	"##################################--------------"
	.align 8
.LC36:
	.string	"###################################-------------"
	.align 8
.LC37:
	.string	"####################################------------"
	.align 8
.LC38:
	.string	"#####################################-----------"
	.align 8
.LC39:
	.string	"######################################----------"
	.align 8
.LC40:
	.string	"#######################################---------"
	.align 8
.LC41:
	.string	"########################################--------"
	.align 8
.LC42:
	.string	"#########################################-------"
	.align 8
.LC43:
	.string	"##########################################------"
	.align 8
.LC44:
	.string	"###########################################-----"
	.align 8
.LC45:
	.string	"############################################----"
	.align 8
.LC46:
	.string	"#############################################---"
	.align 8
.LC47:
	.string	"##############################################--"
	.align 8
.LC48:
	.string	"###############################################-"
	.align 8
.LC49:
	.string	"################################################"
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
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC15(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC16(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC17(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC18(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC19(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC20(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC21(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC22(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC23(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC24(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC25(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC26(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC27(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC28(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC29(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC30(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC31(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC32(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC33(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC34(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC35(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC36(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC37(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC38(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC39(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC40(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC41(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC42(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC43(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC44(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC45(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC46(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC47(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC48(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC49(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	call	system@PLT
	nop
	popq	%rbp
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
