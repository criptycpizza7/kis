class auto:
    __q=[]
    __abc=[]
    __q0=None
    __delta=[]
    __f=[]
    __current=None

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

    def work(self, L):
        self.__current=self.__q0
        for i in L:
            pr=False
            for j in self.__delta:
                if (self.__current==j[0]) & (i == j[1]):
                    pr=True
                    self.__current=j[2]
                    break
            if not(pr):
                print("Аварийное завершение")
                break
        if self.__current in self.__f:
            return True
        else:
            return False
        
        


#Автомат по продаже газировки
A=auto(["A","B","C","D","F"],["1","2","3"],[["A","1","B"], ["A","2","C"], ["A","3","F"],["B","1","C"],["B","2","F"],["B","3","D"],["C","1","F"],["C","2","D"],["C","3","D"], ["D","1","B"],["D","2","C"],["D","3","F"],["F","1","B"],["F","2","C"],["F","3","F"]], ["F"])
    
