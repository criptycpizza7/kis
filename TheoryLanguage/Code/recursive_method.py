class rec_down:
    __term=[]
    __nterm=[]
    __rules=[]
    __S=None
    __stack=[]

    def get_term(self):
        return self.__term
    def get_nterm(self):
        return self.__nterm
    def get_rules(self):
        return self.__rules
    def get_S(self):
        return self.__S
    def get_stack(self):
        return self.__stack

    def pop(self):
        if (self.__stack !=[]):
            return self.__stack.pop()
        else:
            return -1
        
    def push(self, x):
        self.__stack.append(x)

    def get_rules_fix(self,x):
        result = []
        for i in self.__rules:
            if i[0] == x:
                result.append(i[1]);
        return result;

    def __init__(self, term, nterm,rules, first):
        self.__term=term
        self.__nterm=nterm
        self.__rules=rules
        self.__S=first
        self.__stack=[]

    def work(self, input_str):
        self.__stack=[]
        self.push(self.__S)
        i=0
        while (i<len(input_str) and self.__stack!=[]):
            current_rules=self.get_rules_fix(self.__stack[-1])
            for j in current_rules:
                if (j[0] in self.__term):
                    if (j[0]==input_str[i]):
                        self.pop()
                        for k in j[::-1]:
                            self.push(k)
                        break
                else:
                    self.pop()
                    for k in j[::-1]:
                        self.push(k)
                    break
            print(self.__stack)
            if (self.__stack[-1] in self.__term):
                if (self.__stack[-1] ==input_str[i]):
                    i+=1
                    self.pop()
                else:
                    break
        print(self.__stack,i,len(input_str))
        if (self.__stack==[] and i==len(input_str)):
            return 0
        else:
            return -1

a=rec_down(["a","b","c"],["S","A","B","C"],[["S","aA"],["S","bB"],["A","a"],["A","bA"],["A","cC"],["B","b"],["B","aB"],["B","cC"],["C","AaBb"]],"S")

        
        
