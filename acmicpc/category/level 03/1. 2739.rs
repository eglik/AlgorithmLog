use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();
    
    for i in 1..10 {
        let number = input.trim().parse::<i32>().unwrap();
        println!("{} * {} = {}", number, i, number * i);
    }
}