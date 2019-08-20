# Piramide Alejandro

n=int(input("Ingrese la altura de la piramide : "))
while n!=0:
	if n==1:
		print(1)
	else:
		print(1)	
		for i in range(2,n+1):
			for j in range(1,i+1):
				print(i,end='')
			print()
	n=int(input("Ingrese la altura de la piramide : "))
				
