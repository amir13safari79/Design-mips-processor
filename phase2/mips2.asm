add $t0,$0,$0

#addi
addi $t1,$0,0x7c49
#addiu
addiu $t2,$0,0x7d12

#add
add $s0,$t1,$t2

#sw
sw $s0,0($t0)

#addu
addu $s1,$t1,$t2
sw $s1,4($t0)

#sub
sub $s2,$t1,$t2
sw $s2,8($t0)

#subu
subu $s3,$t1,$t2
sw $s3,12($t0)

#and
and $s4,$t1,$t2
sw $s4,16($t0)

#or
or $s5,$t1,$t2
sw $s5,20($t0)

#xor
xor $s6,$t1,$t2
sw $s6,24($t0)


#nor
nor $s7,$t1,$t2
sw $s7,28($t0)

#slt
slt $t3,$t1,$t2
sw $t3,32($t0)

#sltu
sltu $t4,$t1,$t2
sw $t4,36($t0)

#andi
andi $t5,$t1,0xfcd8
sw $t5,40($t0)

#ori
ori $t6,$t1,0xfcd8
sw $t6,44($t0)

#xori
xori $t7,$t1,0xfcd8
sw $t7,48($t0)

#slti
slti $t8,$t1,0x7cd8
sw $t8,52($t0)

#sltiu
sltiu $t9,$t1,0x7cd8
sw $t9,56($t0)











