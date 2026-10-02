.global sum_array
.type sum_array, @function

sum_array:

  xorl %eax, %eax
  testq %rsi, %rsi
  jle .Ldone

  xorq %rcx, %rcx

  .Lloop:

    addl (%rdi,%rcx,4), %eax
    incq %rcx
    cmpq %rsi, %rcx
    jl .Lloop

    .Ldone:
      ret
.section .note.GNU-stack,"",@progbits
