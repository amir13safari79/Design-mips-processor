
addi $t1,$zero,0x0005
slt $t3,$t1,$t2
sltu $t4, $t1,$t2
sw   $t3,4($0)
sw   $t4,8($0)