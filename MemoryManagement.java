import java.lang.ref.Cleaner;

class Robot {
    private static final Cleaner cleaner = Cleaner.create();
    private final String name;
    private final Cleaner.Cleanable cleanable;

    public String getName() {
        return name;
    }

    public Cleaner.Cleanable getCleanable() {
        return cleanable;
    }

    Robot(String name) {
        this.name = name;
        this.cleanable = cleaner.register(this, new State(name));
        System.out.println("Robot " + name + " is created.");
    }

    private static class State implements Runnable {
        private final String name;

        State(String name) {
            this.name = name;
        }

        @Override
        public void run() {
            System.out.println("Robot " + name + " is being cleaned up.");
        }
    }
}

public class MemoryManagement {
    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {
            new Robot("Bot" + i);
        }

        System.gc();  // Suggesting GC to run
        // Adding a delay to give the GC time to run
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}