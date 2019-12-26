#-*- coding: utf-8 -*-

SIZE = 5
rear = -1
values = ['']*5

def enQueue(name:str):
    global rear, values, SIZE
    if(rear == SIZE - 1):
        print('The queue is full')
    else:
        rear += 1
        values[rear] = name
        print(f'The value "{values[rear]}" has been added correctly')

def deQueue():
    global rear, values, SIZE
    if(rear == -1):
        print('The queue is empty')
    else:
        for i in range(1, 5):
            values[i - 1] = values[i]
        values[SIZE - 1] = ''
        print(f'The value "{values[0]}" has been eliminated correctly')
        rear -= 1

enQueue('Anthony 1')
enQueue('Anthony 2')
enQueue('Anthony 3')
enQueue('Anthony 4')
enQueue('Anthony 5')
enQueue('Anthony 6')
deQueue()
enQueue('Anthony 6')
deQueue()
enQueue('Anthony 7')
deQueue()
enQueue('Anthony 8')

for value in values:
    print(value)
