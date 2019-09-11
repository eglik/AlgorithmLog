use std::io;
use std::collections;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let a = input.trim().parse::<i32>().unwrap();

    input.clear();

    io::stdin().read_line(&mut input).unwrap();
    
    for i in input.trim().chars().rev() {
        println!("{}", i.to_digit(10).unwrap() as i32 * a);
    }

    println!("{}", a * input.trim().parse::<i32>().unwrap());
}