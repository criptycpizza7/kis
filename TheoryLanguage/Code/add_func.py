#Функция формирования текста из файла
def read_file(f):
    ff = open(f,'r')
    result=""
    for i in ff:
        result+=i
    return result

#Функция заменяет все символы, кроме символов алфавита, на заданный символ
def replace(text, abc, sep):
    lst=list(text)
    for i in range(len(lst)):
        if not(lst[i] in abc):
            lst[i]=sep
    result=""
    for i in lst:
        result=result+str(i)
    return result


class auto:
    __q=[]
    __abc=[]
    __q0=None
    __delta=[]
    __f=[]
    __current=None
    __const_now
    __current_position
    

    def add_q(self,x):
        if not(x in self.__q):
            self.__q.append(x)
    def add_abc(self,x):
        if not(x in self.__abc):
            self.__abc.append(x)
    def add_delta(self,x):
        if isinstance(x,list):
            if (len(x)==3):
                if (x[0] in self.__q) & (x[1] in self.__abc) & (x[2] in self.__q):
                    self.__delta.append(x)
    def add_f(self,x):
        if x in self.__q:
            self.__f.append(x)
    def set_current_position(self,x):
        self.__current_position=x
    def set_const_now(self,x):
        self.__const_now+=x
            
    def get_abc(self):
        return self.__abc
    def get_q0(self):
        return self.__q0
    def get_q(self):
        return self.__q
    def get_delta(self):
        return self.__delta
    def get_f(self):
        return self.__f
    def get_const_now(self):
        return self.__cons_now
    def get_current_position(self):
        return self.__current_position

    def __init__(self, Q,ABC,D,F):
        for i in Q:
            self.add_q(i)
        for i in ABC:
            self.add_abc(i)
        self.__q0=Q[0]
        for i in D:
            self.add_delta(i)
        for i in F:
            self.add_f(i)

    def work(self, L,x):
        self.__current=self.__q0
        self.__const_now=""
        self.set_current_position(x)
        while not(self.__current in self.__f) and (self.__current_position<len(L)):
            pr=False
            self.set_const_now(L[self.__current_position])
            for j in self.__delta:
                if (self.__current==j[0]) & (L[self.__current_position] == j[1]):
                    pr=True
                    self.__current=j[2]
                    break
            if not(pr):
                print("Аварийное завершение")
                break
            self.__current_position+=1
        return [self.__current, self.__const_now]

class lex:
    __auto=None
    
        




    
