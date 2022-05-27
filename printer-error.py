#CodeWars 7kyu

from re import sub
def printer_error(s):
    return "{}/{}".format(len(sub("[a-m]",'',s)),len(s))

print(printer_error("aaaaaxbbbbbbbbyyyccccccchhhhxyzn"))


#learn about the re.sub() method
