import sys
i = int(5)
if i == 0:sys.exit()
name = "Sully.py"
i = i - 1
if sys.argv[0].find(name) == 0:i = 5
f = open("Sully_%d.py" % i, "w")
a = 'import sys%ci = int(%d)%cif i == 0:sys.exit()%cname = "Sully.py"%ci = i - 1%cif sys.argv[0].find(name) == 0:i = 5%cf = open("Sully_%%d.py" %% i, "w")%ca = %r%cf.write(a%%(10,i,10,10,10,10,10,10,a,10,10,10,10,10))%cf.close()%csys.argv[0] = ("Sully_%%d.py" %% i)%cif i != 0:exec(open("Sully_%%d.py" %% i, "r").read())%c'
f.write(a%(10,i,10,10,10,10,10,10,a,10,10,10,10,10))
f.close()
sys.argv[0] = ("Sully_%d.py" % i)
if i != 0:exec(open("Sully_%d.py" % i, "r").read())
