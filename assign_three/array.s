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
				CMP R2,R3
				BHI update
				B decrement
update
				MOV R3, R2
decrement
				ADD R1,R1, #0x01
				SUB R10,R10, #01
				CMP R10, #00
				BNE loop
				
				MOV R0,R3
				BL printMsg
stop b stop
values DCD &10,&7,&5,&4,&11,&9,&1,&8,&2,&3
				ENDFUNC
				END