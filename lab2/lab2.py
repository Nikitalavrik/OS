
class Command:
    def __init__(self, func, num_of_args):
        self.func = func
        self.num_of_args = num_of_args

class Image:
    def __init__(self):
        self.files = {}
        self.dirs = {}

class FileSystem:

    def __init__(self):
        self.is_mount = False
        self.mount_image = None 
        self.commands = {
        "ls"        :    Command(self.ls, 0),
        "mount"     :    Command(self.mount, 0),
        "unmount"   :    Command(self.unmount, 0),
        "filestat"  :    Command(self.filestat_id, 1),
        "create"    :    Command(self.create_name, 1),
        "open"      :    Command(self.open_name, 1),
        "read"      :    Command(self.read_name, 1),
        "close"     :    Command(self.close_fd, 1),
        "write"     :    Command(self.write_fd, 1),
        "link"      :    Command(self.link_name1_name2, 2),
        "unlink"    :    Command(self.unlink_name, 1),
        "truncate"  :    Command(self.truncate_name, 1)
        }

    def ls(self):
        pass
    
    def mount(self):
        pass

    def unmount(self):
        pass
    
    def filestat_id(self, id):
        pass

    def create_name(self, name):
        pass

    def open_name(self, name):
        pass

    def read_name(self, name):
        pass

    def close_fd(self, fd):
        pass

    def write_fd(self, fd):
        pass

    def link_name1_name2(self, name1, name2):
        pass
    
    def unlink_name(self, name):
        pass

    def truncate_name(self, name, size):
        pass

def parse_stdin(file_sys):

    args = input('>').split(' ')
 
    if (not args[0]):
        return
    try:
        func = file_sys.commands[args[0]].func
        num_of_args = file_sys.commands[args[0]].num_of_args
        if (len(args) - 1 == num_of_args):
            if (num_of_args == 0):
                func()
            elif (num_of_args == 1):
                func(args[1])
            elif (num_of_args == 2):
                func(args[1], args[2])
        else:
            print("Bad number of args: ", len(args) - 1)
    except KeyError:
        print("Unknow command: ", args[0])
        return 


file_sys = FileSystem()
while (True):
    parse_stdin(file_sys)
