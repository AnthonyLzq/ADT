
public class queue {

	private static final int SIZE = 5;
	private static int rear = -1;
	private static String[] values = new String[SIZE];
	
	public static void main(String[] args) {
		enQueue("Anthony 1");
	    enQueue("Anthony 2");
	    enQueue("Anthony 3");
	    enQueue("Anthony 4");
	    enQueue("Anthony 5");
	    enQueue("Anthony 6");
	    deQueue();
	    enQueue("Anthony 6");
	    deQueue();
	    enQueue("Anthony 7");
	    deQueue();
	    enQueue("Anthony 8");
	    for(int i = 0; i < SIZE; i++){
	        System.out.println(values[i]);
	    }
	}
	
	private static void enQueue(String name) {
		if(rear == SIZE - 1) {
			System.out.println("The queue is full");
		}else {
			rear++;
			values[rear] = name;
			System.out.println("The value \""+ values[rear]+
								"\" has been added correctly.");
		}
	}
	
	private static void deQueue() {
		if(rear == -1) {
			System.out.println("The queue is empty");
		}else {
			rear--;
			for(int i = 1; i < SIZE; i++) {
				values[i - 1] = values[i];
			}
			values[SIZE - 1] = "";
			System.out.println("The value \""+ values[0] +
								"\" has been eliminated correctly.");
		}
	}
}
