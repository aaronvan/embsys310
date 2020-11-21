swapPointers
	LDR	R2, [R0] ; load the first parameter into R2
	LDR R3, [R1] ; load the second parameter into R3
	STR R3, [R0] ; store R0 into R3
	STR	R2,	[R1] ; store R1 into R2. Swap is complete
	BX	LR		 ; return to main()
		
	END