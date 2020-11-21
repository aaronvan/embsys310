divAsm
    PUSH {R0,LR}        // save the input argument and return address
    LDR R0,=myCstr      // load (global) address of address of string into R0
    LDR R0,[R0]         // load address of string into R0
    BL  PrintString     // call PrintString to print the string
    POP {R0,LR}         // Restore R0 and LR
    MOV R1, R0          // R1 = R0
    MOV R1, R1, LSL 1   // shift left one bit and place in R1 
    BX LR               // return (with function result in R0)

    END

