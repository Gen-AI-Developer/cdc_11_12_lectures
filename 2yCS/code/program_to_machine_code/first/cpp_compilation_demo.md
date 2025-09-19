# C++ to Machine Code Conversion Process

## Original C++ Source Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 3;
    int sum = a + b;
    cout << "Sum is: " << sum << endl;
    return 0;
}
```

## Step 1: Preprocessing
The **preprocessor** handles directives that start with `#`:

```cpp
// After preprocessing (simplified - actual output is thousands of lines)
// The #include <iostream> gets replaced with the entire iostream library code
// The using namespace std; is processed

// Simplified representation:
namespace std {
    class ostream {
        // ... complex implementation
    };
    extern ostream cout;
    // ... other declarations
}

int main() {
    int a = 5;
    int b = 3;
    int sum = a + b;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
```

## Step 2: Lexical Analysis (Tokenization)
The **lexer** breaks code into tokens:

```
Tokens:
[KEYWORD: int] [IDENTIFIER: main] [SYMBOL: (] [SYMBOL: )] [SYMBOL: {]
[KEYWORD: int] [IDENTIFIER: a] [OPERATOR: =] [NUMBER: 5] [SYMBOL: ;]
[KEYWORD: int] [IDENTIFIER: b] [OPERATOR: =] [NUMBER: 3] [SYMBOL: ;]
[KEYWORD: int] [IDENTIFIER: sum] [OPERATOR: =] [IDENTIFIER: a] [OPERATOR: +] [IDENTIFIER: b] [SYMBOL: ;]
[IDENTIFIER: std] [OPERATOR: ::] [IDENTIFIER: cout] [OPERATOR: <<] [STRING: "Sum is: "] [OPERATOR: <<] [IDENTIFIER: sum] [OPERATOR: <<] [IDENTIFIER: std] [OPERATOR: ::] [IDENTIFIER: endl] [SYMBOL: ;]
[KEYWORD: return] [NUMBER: 0] [SYMBOL: ;]
[SYMBOL: }]
```

## Step 3: Syntax Analysis (Parsing)
The **parser** creates an Abstract Syntax Tree (AST):

```
Program
└── FunctionDefinition: main
    └── CompoundStatement
        ├── VariableDeclaration: int a = 5
        ├── VariableDeclaration: int b = 3
        ├── VariableDeclaration: int sum
        │   └── BinaryExpression: +
        │       ├── Identifier: a
        │       └── Identifier: b
        ├── ExpressionStatement
        │   └── StreamOutput
        │       ├── String: "Sum is: "
        │       └── Identifier: sum
        └── ReturnStatement: 0
```

## Step 4: Semantic Analysis
The compiler checks types and builds symbol table:

```
Symbol Table:
┌──────────┬──────┬─────────┬─────────────┐
│ Variable │ Type │ Scope   │ Memory Loc  │
├──────────┼──────┼─────────┼─────────────┤
│ a        │ int  │ main    │ [rbp-4]     │
│ b        │ int  │ main    │ [rbp-8]     │
│ sum      │ int  │ main    │ [rbp-12]    │
└──────────┴──────┴─────────┴─────────────┘

Type checking: ✓ a + b (int + int = int)
Type checking: ✓ Assignment int sum = int result
```

## Step 5: Intermediate Code Generation
Creates platform-independent intermediate representation:

```
// Three-Address Code (TAC) - Simplified
main:
    t1 = 5
    a = t1
    t2 = 3
    b = t2
    t3 = a + b
    sum = t3
    param "Sum is: "
    call print_string
    param sum
    call print_int
    call print_newline
    return 0
```

## Step 6: Optimization
The optimizer improves the intermediate code:

```
// Optimized TAC
main:
    a = 5
    b = 3
    sum = 8          // Constant folding: 5 + 3 = 8
    param "Sum is: "
    call print_string
    param 8          // Constant propagation
    call print_int
    call print_newline
    return 0
```

## Step 7: Assembly Code Generation
The code generator produces assembly language:

```assembly
# x86-64 Assembly (AT&T syntax)
.text
.globl main

main:
    # Function prologue
    pushq   %rbp
    movq    %rsp, %rbp
    subq    $16, %rsp        # Allocate space for local variables
    
    # int a = 5;
    movl    $5, -4(%rbp)     # Store 5 at [rbp-4]
    
    # int b = 3;
    movl    $3, -8(%rbp)     # Store 3 at [rbp-8]
    
    # int sum = a + b;
    movl    -4(%rbp), %eax   # Load a into eax
    addl    -8(%rbp), %eax   # Add b to eax
    movl    %eax, -12(%rbp)  # Store result in sum
    
    # cout << "Sum is: " << sum << endl;
    leaq    -12(%rbp), %rax  # Load address of sum
    movq    %rax, %rsi       # Second parameter
    leaq    .LC0(%rip), %rdi # First parameter (string)
    call    _print_function  # Call print function
    
    # return 0;
    movl    $0, %eax         # Return value
    leave                    # Function epilogue
    ret

.section .rodata
.LC0:
    .string "Sum is: "
```

## Step 8: Machine Code Generation
The assembler converts assembly to binary machine code:

```
Address    Machine Code (Hex)    Assembly Instruction
0x1000:    55                   pushq %rbp
0x1001:    48 89 e5             movq %rsp, %rbp
0x1004:    48 83 ec 10          subq $16, %rsp
0x1008:    c7 45 fc 05 00 00 00 movl $5, -4(%rbp)
0x100f:    c7 45 f8 03 00 00 00 movl $3, -8(%rbp)
0x1016:    8b 45 fc             movl -4(%rbp), %eax
0x1019:    03 45 f8             addl -8(%rbp), %eax
0x101c:    89 45 f4             movl %eax, -12(%rbp)
0x101f:    48 8d 45 f4          leaq -12(%rbp), %rax
0x1023:    48 89 c6             movq %rax, %rsi
0x1026:    48 8d 3d 00 00 00 00 leaq .LC0(%rip), %rdi
0x102d:    e8 00 00 00 00       call _print_function
0x1032:    b8 00 00 00 00       movl $0, %eax
0x1037:    c9                   leave
0x1038:    c3                   ret
```

## Step 9: Linking
The **linker** combines object files and libraries:

```
Final Executable Memory Layout:
┌─────────────────────────────────────┐
│ Text Segment (executable code)      │
│ 0x1000: main function machine code │
│ 0x2000: iostream library functions │
├─────────────────────────────────────┤
│ Data Segment (initialized data)     │
│ 0x3000: "Sum is: " string literal  │
├─────────────────────────────────────┤
│ BSS Segment (uninitialized data)    │
├─────────────────────────────────────┤
│ Stack (local variables, call stack) │
│ Runtime: a=5, b=3, sum=8           │
├─────────────────────────────────────┤
│ Heap (dynamic allocation)           │
└─────────────────────────────────────┘
```

## The Key Players

**Who does what:**
- **Preprocessor (cpp)**: Handles #include, #define, conditional compilation
- **Compiler front-end (cc1plus)**: Lexical, syntax, semantic analysis
- **Compiler back-end**: Optimization and code generation
- **Assembler (as)**: Assembly → Object code
- **Linker (ld)**: Combines object files → Executable

**The complete toolchain command:**
```bash
g++ -o program program.cpp
# This internally runs: cpp → cc1plus → as → ld
```

## What Actually Happens When You Run It

1. OS loader reads executable into memory
2. CPU starts executing at main function address (0x1000)
3. Each machine instruction executes:
   - `movl $5, -4(%rbp)` → CPU stores value 5 at memory location
   - `addl -8(%rbp), %eax` → CPU adds two numbers using ALU
4. Output: "Sum is: 8"