class student:
    __first_name = None
    __last_name = None
    __number_book = None
    __birthday = None

    def get_first_name(self):
        return self.__first_name
    def get_last_name(self):
        return self.__last_name
    def get_number_book(self):
        return self.__number_book
    def get_birthday(self):
        return self.__birthday

    def set__first_name(self,x):
        if isinstance(x,str):
            self.__first_name=x
    def set__last_name(self,x):
        if isinstance(x,str):
            self.__last_name=x
    def set__number_book(self,x):
        if isinstance(x,int):
            self.__number_book=x
    def set__birthday(self,x):
        if isinstance(x,str):
            self.__birthday=x

    def __init__(self, a,b,c,d):
        self.set__first_name(a)
        self.set__last_name(b)
        self.set__number_book(c)
        self.set__birthday(d)

    
