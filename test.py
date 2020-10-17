def drawPattern(a):
	for x in range(a):
		if x % 2 == 0:
			for y in range(0, int(a-x)):
				print('   ', end='')
			for y in range(0, 2*x+1):
				print(' * ', end='')
		print('')
		
drawPattern(4)