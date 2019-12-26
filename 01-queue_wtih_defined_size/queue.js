'use strict'

const SIZE = 5
let rear = -1,
	values = new Array(SIZE)

function enQueue(name) {
	if (rear === SIZE - 1) {
		console.log('The queue is full')
	} else {
		rear++
		values[rear] = name
		console.log('The value "' + name + '" has been insterted correctly.')
	}
}

function deQueue() {
	if (rear === -1) {
		console.log('The queue is empty')
	} else {
		console.log('The value "' + values[0] + '" has been eliminated correctly')
		for (let i = 1; i < SIZE; i++) {
			values[i - 1] = values[i]
		}
		values[SIZE - 1] = ''
		rear--
	}
}

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

for (let i = 0; i < SIZE; i++) {
	console.log(values[i])
}
