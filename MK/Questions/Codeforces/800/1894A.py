t = int(input())
for i in range(t):
        n = int(input())
        minim = 9 if n>9 else n
        s = input()
        x = 1
        flag = True
        while x <=minim:
                seta=0
                setb=0
                a = 0
                b = 0
                for i in s:
                        if (i == 'A'):
                                a+=1
                        else:
                                b+=1
                        if (a == x):
                               seta+=1
                               a=0
                               b=0
                        elif (b == x):
                               setb+=1
                               b=0
                               a=0
                if(a==0 and b==0):
                    if (seta<setb and s[n-1]=='B'):
                        print('B')
                        flag = False
                        break
                    elif (seta > setb  and  s[n-1]=='A'):
                        print('A')
                        flag = False
                        break
                x+=1
        if (flag):
               print("?")