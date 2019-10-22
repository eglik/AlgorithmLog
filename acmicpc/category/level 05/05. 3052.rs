use std::io;
use std::collections::HashSet;

fn main() {
    let mut input = String::new();
    let mut number = HashSet::new();

    for _ in 0..10 {
        io::stdin().read_line(&mut input).unwrap();
        number.insert(input.trim().parse::<i32>().unwrap() % 42);
        input.clear();
    }

    println!("{}", number.len());
}