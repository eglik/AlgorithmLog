use std::io;
use std::collections;

fn main() {
    let mut score = String::new();

    io::stdin().read_line(&mut score).unwrap();

    match score.trim().parse::<i32>().unwrap() {
        90...100 => println!("A"),
        80...90 => println!("B"),
        70...80 => println!("C"),
        60...70 => println!("D"),
        _ => println!("F"),
    }
}