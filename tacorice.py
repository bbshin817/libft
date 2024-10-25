import glob, os

ignores = [
]

files = glob.glob("./*.c")
txt = ""
for file in files:
	c = file.split("./")[1]
	if((c in ignores) == False):
		txt += c + " "
with open("./list.txt", "w", encoding="utf-8") as f:
	f.write(txt)
	f.close()

# files = glob.glob("./*.o")
# txt = ""
# for file in files:
# 	os.remove(file)