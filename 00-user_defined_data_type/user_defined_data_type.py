# -*- coding: utf-8 -*-

class Client:
    def __init__(self, name:str, id:str, adress:str, credit:float):
        self.name = name
        self.id = id
        self.adress = credit
        self.credit = credit

client_1 = Client('Anthony Luzquiños',
                    '0000000001',
                    'Calle 1, Distrito 1, Ciudad 1, País 1',
                    1000000)

print(f'The client\'s name is: {client_1.name}.\n'+
        f'The client\'s id is: {client_1.id}.\n'+
        f'The client\'s adress is: {client_1.adress}.\n'+
        f'The client\'s credit is: {client_1.credit}.')