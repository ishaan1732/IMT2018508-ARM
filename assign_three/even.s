				AREA  arr, CODE, READONLY
				export __main
				import printMsg
				ENTRY
__main FUNCTION 
				MOV R10, #10
				MOV R1, #0x20000000
				LDR R4,=values
store
				LDR R5, [R4]
				STR R5, [R1,#0x00]
				ADD R1, R1, #1
				ADD R4,R4,#4
				SUB R10,R10,#1
				CMP R10,#00
				BNE store
				
				MOV R10, #10
				MOV R1, #0x20000000
				;LDRSB R2, [R1, #0x01]
				MOV R3, #00
loop
				LDRSB R2, [R1, #0x00]
				AND R2, #0x01
				CMP R2,#00
				BNE decrement
				ADD R3,R3,#01
				B decrement
decrement
				ADD R1,R1, #0x01
				SUB R10,R10, #01
				CMP R10, #00
				BNE loop
				
				MOV R0, R3
				BL printMsg
stop b stop
values DCD &10,&1,&5,&4,&3,&11,&7,&2,&8,&6
				ENDFUNC
				END