use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();

    let numbers = input.split_whitespace().map(|s| s.chars().rev().collect::<String>().parse::<i32>().unwrap()).collect::<Vec<i32>>();
    
    println!("{}", numbers.iter().max().unwrap());
}