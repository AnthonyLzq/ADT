'use strict'

class Client{
    constructor(name, id, adress, credit){
        this.name = name
        this.id = id
        this.adress = adress
        this.credit = credit
    }
}

let client_1 = new Client(
                    'Anthony Luzquiños',
                    '0000000001',
                    'Calle 1, Distrito 1, Ciudad 1, País 1',
                    1000000)

console.log('The client\'s name is: '+client_1.name+'.\n'
            +'The client\'s id is: '+client_1.id+'.\n'
            +'The client\'s adress is: '+client_1.adress+'.\n'
            +'The client\'s credit is: '+client_1.credit+'.')
