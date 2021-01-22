all:
	gcc -fno-stack-protector -no-pie vuln1.c -o vuln1 -z execstack -D_FORTIFY_SOURCE=0
	gcc -fno-stack-protector -no-pie vuln2.c -o vuln2 -z execstack -D_FORTIFY_SOURCE=0
	gcc -fno-stack-protector -no-pie vuln3.c -o vuln3 -z execstack -D_FORTIFY_SOURCE=0
	gcc -fno-stack-protector -no-pie vuln4.c -o vuln4 -z execstack -D_FORTIFY_SOURCE=0
	gcc -fno-stack-protector -no-pie vuln5.c -o vuln5 -z execstack -D_FORTIFY_SOURCE=0

clean:
	rm vuln1
	rm vuln2
	rm vuln3
	rm vuln4
	rm vuln5

