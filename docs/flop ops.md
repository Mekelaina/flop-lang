| Index | Operation | Argument | Opcode | Description |
|:---:|:---:|:---:|:---:|:---:|
| 0 | No Op | Implied | 00 | No Operation |
| 1 | Push to stack | Constant | 01 | Push Constant value to stack |
| 2 | Push to stack | Register | 02 | Push register value to stack |
| 3 | Push to stack | IOBuffer | 03 | Push conent in IOBuffer to stack |
| 4 | Pop from stack | Register | 04 | Pops value from stack and stores it in register |
| 5 | Pop from stack | IOBuffer | 05 | Pops value from stack and stores it into IOBuffer |
| 6 | Duplicate top of stack | Implied | 06 | Duplicates Top value on stack |
| 7 | Drop top of stack | Implied | 07 | Discards top value on stack |
| 8 | Compare | Implied | 08 | Peaks at top two values on stack. compares the two and sets flags. if T > T-1 then Z, C = 0 if T < T-1 then Z = 0, C = 1 if T = T-1 Z = 1, C = 0 |
| 9 | Peak top of stack | Register | 09 | stores top of stack in register without modifying stack pointer |
| 10 | Peak top of stack | IOBuffer | 0A | stores top of stack in IOBuffer without modifying stack pointer |
| 11 | Add top two of stack, push result | Implied | 0B | pops top two of stack, adds them, pushes the result. (T + T-1) |
| 12 | Add top of stack to register | Register | 0C | pops top of stack, adds it to register |
| 13 | Add constant to register | Constant | 0D | adds constant to register |
| 14 | Sub top two of stack, push result | Implied | 0E | pops top two of stack, subtracts them, pushes the result. (T - T-1) |
| 15 | Sub top of stack from register | Register | 0F | pops top of stack, subtracts it from register |
| 16 | Sub constant from register | Constant | 10 | subtracts constant from register |
| 17 | AND top two of stack, push result | Implied | 11 | pops top two of stack, bitwise ANDs them, pushes the result (T & T-1) |
| 18 | AND top of stack and register | Register | 12 | pops top of stack, bitwise ANDs it and register, stores result in register |
| 19 | AND register with constant | Constant | 13 | bitwise ANDs constant and register, stores result in register |
| 20 | OR top two of stack, push result | Implied | 14 | pops top two of stack, bitwise ORs them, pushes the result (T \| T-1) |
| 21 | OR top of stack and register | Register | 15 | pops top of stack, bitwise ORs it and register, stores result in register |
| 22 | OR register with constant | Constant | 16 | bitwise ORs constant and register, stores result in register |
| 23 | XOR top two of stack, push result | Implied | 17 | pops top two of stack, bitwise XORs them, pushes the result (T ^ T-1) |
| 24 | XOR top of stack and register | Register | 18 | pops top of stack, bitwise XORs it and register, stores result in register |
| 25 | XOR register with constant | Constant | 19 | bitwise XORs constant and register, stores result in register |
| 26 | NOT top of stack | Implied | 1A | pops top of stack, bitwise Negates/Inverts it, pushes result |
| 27 | Not register | Register | 1B | bitwise Negates/Inverts value in register |
| 28 | Set flip stack | Implied | 1C | sets the FlippedStack flag |
| 29 | Clear flip stack | Implied | 1D | clears the FlippedStack flag |
| 30 | Clear IOBuffer | Implied | 1E | Clears the IOBuffer |
| 31 | Jump if zero | Address | 1F | Jumps to address if Zero flag set |
| 32 | Jump if not zero | Address | 20 | Jumps to address if Zero flag clear |
| 33 | Jump if carry | Address | 21 | Jumps to address if Carry flag set |
| 34 | Jump if not carry | Address | 22 | Jumps to address if Carry flag clear |
| 35 | Jump if stack flipped | Address | 23 | Jumps to address if FlippedStack flag set |
| 36 | Jump if stack not flipped | Address | 24 | Jumps to address if FlippedStack flag clear |
| 37 | Jump Unconditional | Address | 25 | Jumps to address |
| 38 | Input | Implied | 26 | Gets input from user, stores it in IOBuffer |
| 39 | Output as ascii | Implied | 27 | Outputs the content of IOBuffer as ASCII |
| 40 | Output as number | Implied | 28 | Outputs the content of IOBuffer as Number |
| 41 | Jump Subroutine | Address | 29 | Jumps to address, stores return address |
| 42 | Return Subroutine | Implied | 2A | Jumps to return address stored |
| 43 | Halt | Implied | 2B | Halts program |