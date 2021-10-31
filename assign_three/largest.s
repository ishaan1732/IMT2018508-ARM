				AREA  arr, CODE, READONLY
				export __main
				IMPORT printMsg
				ENTRY
__main FUNCTION 
				MOV R0, #04
				MOV R1, #05
				MOV R2, #03
				CMP R0, R1
				BLS A1
				CMP R0,R2
				BLS A0
				MOV R3, R0
				MOV R0, R3
				BL printMsg
				B end
				;R0 is largest
A1
				CMP R1, R2
				BLS A12
				MOV R3, R1
				MOV R0, R3
				BL printMsg
				B end
				; R1 is largest
A12
				MOV R3, R2
				MOV R0, R3
				BL printMsg
				B end
				;R2 is largest
A0 
				MOV R3, R2
				MOV R0, R3
				BL printMsg
				B end
				; R2 is largest
end				
				
stop B stop
				ENDFUNC
				END