struct Robot {
    name: String,  // Owned String (heap-allocated)
}

impl Robot {
    fn new(name: String) -> Self {
        Robot { name }  // Ownership of `name` moves into `Robot`
    }

    fn greet(&self) {
        println!("Hello, I am {}!", self.name);
    }
}

fn main() {
    let r1 = Robot::new(String::from("R2D2"));  // Ownership moves to `r1`
    r1.greet();  // Borrowing `&self`
}
