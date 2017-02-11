import sys
i = int(5)
if i == 0:sys.exit
name = "Sully_"
if sys.argv[0].find(name) != -1:i = i - 1
f = open("Sully_%d.py" % i, "w")
a = 'import sys%ci = int(%d)%cif i == 0:sys.exit%cname = "Sully_"%cif sys.argv[0].find(name) != -1:i = i - 1%cf = open("Sully_%%d.py" %% i, "w")%ca = %r%cf.write(a%%(10,i,10,10,10,10,10,a,10,10,10))%cf.close()%cif i != 0:execfile("Sully_%%d.py" %% i)'
f.write(a%(10,i,10,10,10,10,10,a,10,10,10))
f.close()
if i != 0:execfile("Sully_%d.py" % i)
