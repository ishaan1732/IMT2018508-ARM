				AREA  arr, CODE, READONLY
				export __main
				ENTRY
__main FUNCTION 
				MOV R10, #10
				MOV R1, #0x20000000
				ADD R2, R1, #01
				LDR R6, =values
				LDR R7,[R6]
				STR R7, [R1,#0x00]
				;MOV R0,R7
				;BL printMsg
				ADD R6,R6,#04
				LDR R7,[R6]
				STR R7, [R2,#0x00]
				SUB R10, R10, #2
				;MOV R0,R7
				;BL printMsg
loop				
				LDRSB R3, [R1, #0x00]
				LDRSB R4, [R2, #0x00]
				ADD R5, R3,R4
				
				ADD R1,R1, #0x01
				ADD R2,R2, #0x01
				STR R5, [R2, #0x00]
				;MOV R0,R5
				;BL printMsg
				SUB R10,R10, #01
				CMP R10, #00
				BNE loop
				
				MOV R10, #00
				MOV R1, #0x20000000
print
				LDRSB R3, [R1,#0x00]
				MOV R0, R3
				BL printMsg
				MOV R1, #0x20000000
				ADD R10,R10,#1
				ADD R1,R1,R10
				CMP R10,#10
				BNE print
				
stop b stop
values DCD &00,&01
				ENDFUNC
				END
